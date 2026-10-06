/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10201bef8; end: 10201bf4f; -[SCStoryShareScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201bef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50928;
  func_0x000107c61428(param_1 + _DAT_112e50928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10201bf50; end: 10201bf97; -[SCStoryShareScopeGraphBridgeSaberEntryPoint sCLegacySendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201bf50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50930;
  func_0x000107c61428(param_1 + _DAT_112e50930,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10201bf98; end: 10201bfa3; -[SCStoryShareScopeGraphBridgeSaberEntryPoint setSCLegacySendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201bf98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50930;
  func_0x000107c61428(param_1 + _DAT_112e50930,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10201bfa4; end: 10201bfeb; -[SCStoryShareScopeGraphBridgeSaberEntryPoint storyShareScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201bfa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50938;
  func_0x000107c61428(param_1 + _DAT_112e50938,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10201bfec; end: 10201bff7; -[SCStoryShareScopeGraphBridgeSaberEntryPoint setStoryShareScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201bfec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50938;
  func_0x000107c61428(param_1 + _DAT_112e50938,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10201bff8; end: 10201c057;  */

void FUN_10201bff8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10201c058; end: 10201c213;  */

/* WARNING: Possible PIC construction at 0x00010201c170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201c194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201c1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201c1e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201c1a8) */
/* WARNING: Removing unreachable block (ram,0x00010201c198) */
/* WARNING: Removing unreachable block (ram,0x00010201c174) */
/* WARNING: Removing unreachable block (ram,0x00010201c1ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c058(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50e4c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5c050();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10201b674();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10201b8ec();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10201c214);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e50850) = lVar5;
      *(long *)(lVar3 + _DAT_112e50858) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10201c214; end: 10201c23b; -[SCStoryShareScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10201c214(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10201c058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10201c23c; end: 10201c27f; -[SCStoryShareScopeGraphBridgeSaberEntryPoint end] */

void FUN_10201c23c(undefined8 param_1)

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



/* Entry: 10201c280; end: 10201c483;  */

void FUN_10201c280(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0fa79d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010f058630,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0fa79b0)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f058650,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "StoryShareScopeGraphBridge/SCStoryShareScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x4c,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10201c484);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c599a0();
        goto LAB_10201c30c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c583f4();
  }
LAB_10201c30c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10201c484; end: 10201c52f; -[SCStoryShareScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10201c484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10201c280(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10201c530; end: 10201c5a7; -[SCStoryShareScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c530(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50928,0);
  *(undefined8 *)(param_1 + _DAT_112e50930) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50938) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50940) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201c5a8; end: 10201c5db;  */

void FUN_10201c5a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10201c5dc; end: 10201c633; -[SCStoryShareScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010201c608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201c60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c5dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50928);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50930));
  return;
}



/* Entry: 10201c634; end: 10201c653;  */

void FUN_10201c634(void)

{
  func_0x000107c61168(&PTR_PTR_112818178);
  return;
}



/* Entry: 10201c654; end: 10201c69b; -[SCSCStoryShareScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c654(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50970;
  func_0x000107c61428(param_1 + _DAT_112e50970,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10201c69c; end: 10201c6f3; -[SCSCStoryShareScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50970;
  func_0x000107c61428(param_1 + _DAT_112e50970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10201c6f4; end: 10201c7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c6f4(undefined8 param_1,long param_2)

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
    FUN_10201b8cc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e50888) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10201c7cc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e50890);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e50978);
    *(long **)(unaff_x20 + _DAT_112e50978) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10201c7cc; end: 10201c7f3; -[SCSCStoryShareScopedServicesSaberEntryPoint begin] */

void FUN_10201c7cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10201c6f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10201c7f4; end: 10201c96b;  */

/* WARNING: Possible PIC construction at 0x00010201c85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201c8f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201c860) */
/* WARNING: Removing unreachable block (ram,0x00010201c8f8) */
/* WARNING: Removing unreachable block (ram,0x00010201c910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201c7f4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e50978);
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



/* Entry: 10201c96c; end: 10201c973;  */

void FUN_10201c96c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10201c974; end: 10201c9a7; -[SCSCStoryShareScopedServicesSaberEntryPoint end] */

void FUN_10201c974(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10201c7f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10201c9a8; end: 10201cac7;  */

void FUN_10201c9a8(long param_1,long param_2,long param_3)

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
                        "StoryShareScopeGraphBridge/SCSCStoryShareScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10201cac8);
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



/* Entry: 10201cac8; end: 10201cb73; -[SCSCStoryShareScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10201cac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10201c9a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10201cb74; end: 10201cbd3; -[SCSCStoryShareScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201cb74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50970,0);
  *(undefined8 *)(param_1 + _DAT_112e50978) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201cbd4; end: 10201cc07;  */

void FUN_10201cbd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10201cc08; end: 10201cc3f; -[SCSCStoryShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201cc08(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50978));
  return;
}



/* Entry: 10201cc40; end: 10201cc5f;  */

void FUN_10201cc40(void)

{
  func_0x000107c61168(&PTR_PTR_112818248);
  return;
}



/* Entry: 10201cc60; end: 10201cccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201cc60(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10201d054();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e509b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10201cccc; end: 10201cd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201cccc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e509b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201cd38; end: 10201cd97; -[_TtC43TopicViewerLensScopedFactoryServiceProvider31SCTopicViewerLensScopedServices init] */

void FUN_10201cd38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerLensScopedFactoryServiceProvider.SCTopicViewerLensScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201cd64);
  (*pcVar1)();
}



/* Entry: 10201cd98; end: 10201cda7; -[_TtC43TopicViewerLensScopedFactoryServiceProvider31SCTopicViewerLensScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201cd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e509b0));
  return;
}



/* Entry: 10201cda8; end: 10201ce13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201cda8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bde58;
  func_0x000107c613fc(&UNK_1104bde58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10201d0ec,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10201ce14; end: 10201ceaf;  */

void FUN_10201ce14(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bdd68;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bdd68;
  return;
}



/* Entry: 10201ceb0; end: 10201cee7;  */

void FUN_10201ceb0(long *param_1)

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



/* Entry: 10201cee8; end: 10201ceef;  */

undefined8 FUN_10201cee8(void)

{
  return 0x1b;
}



/* Entry: 10201cef0; end: 10201d023;  */

void FUN_10201cef0(undefined8 *param_1)

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
  puVar1 = &UNK_1104bde80;
  func_0x000107c613fc(&UNK_1104bde80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10201d0c4;
  func_0x00010058fa64(FUN_10201d0c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10201d024; end: 10201d053;  */

undefined ** FUN_10201d024(void)

{
  return &PTR_DAT_113074690;
}



/* Entry: 10201d054; end: 10201d073;  */

void FUN_10201d054(void)

{
  func_0x000107c61168(&PTR_PTR_112818308);
  return;
}



/* Entry: 10201d074; end: 10201d0c3;  */

undefined1  [16] FUN_10201d074(void)

{
  return ZEXT816(0x1104bddb8);
}



/* Entry: 10201d0c4; end: 10201d0eb;  */

void FUN_10201d0c4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10201d0ec; end: 10201d0ef;  */

void FUN_10201d0ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10201d0f0; end: 10201d15b;  */

void FUN_10201d0f0(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e50a20,&UNK_10da4f570);
  func_0x000107c613fc();
  pcVar1 = FUN_10201d16c;
  func_0x0001000841fc(FUN_10201d16c,0);
  func_0x000100084214(&UNK_10da4f540,0x2d,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10201d15c; end: 10201d16b;  */

undefined1  [16] FUN_10201d15c(void)

{
  return ZEXT816(0x1104bdec0);
}



/* Entry: 10201d16c; end: 10201d3e3;  */

void FUN_10201d16c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112e50a28,&UNK_10da4f578);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_10201ceb0;
  func_0x0001000823a8(FUN_10201ceb0,0);
  pcVar3 = "SCTopicViewerLensScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCTopicViewerLensScopedServicesCleanupRelayServiceProvider",0x3a,2);
  FUN_10201dbb0();
  func_0x000100082720("TopicViewerLensScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e50a30,&UNK_10da4f588);
  puVar4 = &UNK_1104bdee0;
  func_0x000107c613fc(&UNK_1104bdee0,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(code **)(puVar4 + 0x18) = pcVar2;
  *(char **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_10201d3e4;
  func_0x0001000823a8(FUN_10201d3e4,puVar4);
  func_0x000100082720("SCTopicViewerLensScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e509b8,&UNK_10da4f330);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x10201d3f0;
  func_0x0001000823a8(0x10201d3f0,pcVar5);
  func_0x000100082720("SCTopicViewerLensScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e509a8,&UNK_10da4f320);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x10201d3f8;
  func_0x0001000823a8(0x10201d3f8,uVar7);
  func_0x000100082720("SCTopicViewerLensScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1104bdf08;
  func_0x000107c613fc(&UNK_1104bdf08,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x10201d400;
  func_0x0001000823a8(0x10201d400,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCTopicViewerLensScopeEntryPointProvider",0x28,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 10201d3e4; end: 10201d407;  */

void FUN_10201d3e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10201d444(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCTopicViewerLensScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201d408; end: 10201d443;  */

void FUN_10201d408(undefined8 *param_1,undefined8 param_2)

{
  FUN_10201d444();
  func_0x0001000a7f38("SCTopicViewerLensScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10201d444; end: 10201d683;  */

void FUN_10201d444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110764148;
  ppuVar4 = &PTR_DAT_113074690;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bdf30;
  func_0x000107c613fc(&UNK_1104bdf30,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e50a38;
  func_0x0001000285a8(0x112e50a38,&UNK_10da4f590);
  func_0x0001000a6ee8(&UNK_1104bddf8,"SCTopicViewerLensScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_10201d684,puVar2,uVar3,&UNK_1104bddf8,&PTR_DAT_112e509c0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1104bdf58;
  func_0x000107c613fc(&UNK_1104bdf58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104be0f0,"TopicViewerLensScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_10201d68c,puVar2,uVar3,&UNK_1104be0f0,&PTR_DAT_112e50ac8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e50a40;
  func_0x0001000285a8(0x112e50a40,&UNK_10da4f598);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10201d684; end: 10201d68b;  */

void FUN_10201d684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bdf80;
  func_0x000107c613fc(&UNK_1104bdf80,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10201d6f8;
  func_0x0001000823a8(FUN_10201d6f8,puVar3);
  func_0x000100082720("SCTopicViewerLensScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10201d68c; end: 10201d6cb;  */

void FUN_10201d68c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10201dc94(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("TopicViewerLensScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10201d6cc; end: 10201d6f7;  */

void FUN_10201d6cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10201d6f8; end: 10201d6ff;  */

void FUN_10201d6f8(undefined8 *param_1)

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
  puVar1 = &UNK_1104bde80;
  func_0x000107c613fc(&UNK_1104bde80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10201d0c4;
  func_0x00010058fa64(FUN_10201d0c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10201d700; end: 10201d787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10201d700(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10201dac0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e50a48) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e50a50) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201d788);
  (*pcVar1)();
}



/* Entry: 10201d788; end: 10201d7e7; -[_TtC31TopicViewerLensScopeGraphBridge46TopicViewerLensScopeGraphBridgeSaberEntryPoint init] */

void FUN_10201d788(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerLensScopeGraphBridge.TopicViewerLensScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201d7b4);
  (*pcVar1)();
}



/* Entry: 10201d7e8; end: 10201d81f; -[_TtC31TopicViewerLensScopeGraphBridge46TopicViewerLensScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010201d804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201d808) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201d7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50a48));
  return;
}



/* Entry: 10201d820; end: 10201d847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201d820(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e50a50),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e50a48));
  return;
}



/* Entry: 10201d848; end: 10201d867;  */

void FUN_10201d848(void)

{
  func_0x000107c61168(&PTR_PTR_1128183c8);
  return;
}



/* Entry: 10201d868; end: 10201d8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10201d868(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e50a80) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e50a88);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10201d8f0);
  (*pcVar2)();
}



/* Entry: 10201d8f0; end: 10201d9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10201d8f0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50a80);
  *(undefined **)(unaff_x20 + _DAT_112e50a80) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e50a88);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e50a88))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104be050;
  func_0x000107c613fc(&UNK_1104be050,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10201d9dc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10201d9d8; end: 10201d9e3;  */

void FUN_10201d9d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10201d9e4; end: 10201da43; -[_TtC31TopicViewerLensScopeGraphBridge46SCTopicViewerLensScopedServicesSaberEntryPoint init] */

void FUN_10201d9e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TopicViewerLensScopeGraphBridge.SCTopicViewerLensScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10201da10);
  (*pcVar1)();
}



/* Entry: 10201da44; end: 10201da7b; -[_TtC31TopicViewerLensScopeGraphBridge46SCTopicViewerLensScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201da44(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e50a88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50a80));
  return;
}



/* Entry: 10201da7c; end: 10201da7f;  */

void FUN_10201da7c(void)

{
  return;
}



/* Entry: 10201da80; end: 10201da9f;  */

void FUN_10201da80(void)

{
  FUN_10201d8f0();
  return;
}



/* Entry: 10201daa0; end: 10201dabf;  */

void FUN_10201daa0(void)

{
  func_0x000107c61168(&PTR_PTR_112818490);
  return;
}



/* Entry: 10201dac0; end: 10201db8f;  */

undefined8 FUN_10201dac0(void)

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
  
  func_0x000107c61428(0x112e50ab8,&uStack_40,0x20,0);
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
    FUN_10201db90();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10201db90; end: 10201dbaf;  */

void FUN_10201db90(void)

{
  func_0x000107c61168(&PTR_PTR_112818558);
  return;
}



/* Entry: 10201dbb0; end: 10201dc1b;  */

void FUN_10201dbb0(void)

{
  func_0x0001000285a8(0x112e50ac0,&UNK_10da4f648);
  func_0x0001000823a8(0x10201dbf0,0);
  return;
}



/* Entry: 10201dc1c; end: 10201dc57; -[_TtC31TopicViewerLensScopeGraphBridge39TopicViewerLensScopeGraphBridgeServices init] */

void FUN_10201dc1c(undefined8 param_1)

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



/* Entry: 10201dc58; end: 10201dc8b;  */

void FUN_10201dc58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10201dc8c; end: 10201dc93;  */

undefined8 FUN_10201dc8c(void)

{
  return 0x1b;
}



/* Entry: 10201dc94; end: 10201de0b;  */

void FUN_10201dc94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104be098;
  func_0x000107c613fc(&UNK_1104be098,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10201de0c,puVar1);
  return;
}



/* Entry: 10201de0c; end: 10201de13;  */

void FUN_10201de0c(undefined8 *param_1)

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
  func_0x000107c61428(0x112e50ab8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e50ab8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104be130;
  func_0x000107c613fc(&UNK_1104be130,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10201dec0;
  func_0x00010058fa64(0x10201dec0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10201de14; end: 10201de6f;  */

void FUN_10201de14(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e50ab8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e50ab8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10201de70; end: 10201dec7;  */

undefined ** FUN_10201de70(void)

{
  return &PTR_DAT_113074690;
}



/* Entry: 10201dec8; end: 10201df0f; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201dec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50b18;
  func_0x000107c61428(param_1 + _DAT_112e50b18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10201df10; end: 10201df67; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201df10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50b18;
  func_0x000107c61428(param_1 + _DAT_112e50b18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10201df68; end: 10201dfaf; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint topicViewerLensScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201df68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50b20;
  func_0x000107c61428(param_1 + _DAT_112e50b20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10201dfb0; end: 10201e013; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint setTopicViewerLensScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201dfb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50b20;
  func_0x000107c61428(param_1 + _DAT_112e50b20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10201e014; end: 10201e147;  */

/* WARNING: Possible PIC construction at 0x00010201e0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201e0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201e104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201e0d0) */
/* WARNING: Removing unreachable block (ram,0x00010201e0ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e014(void)

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
  func_0x000107c5cc4c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10201d848();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10201dac0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10201e148);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e50a48) = lVar5;
    *(long *)(lVar4 + _DAT_112e50a50) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10201e148; end: 10201e16f; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10201e148(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10201e014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10201e170; end: 10201e1b3; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint end] */

void FUN_10201e170(undefined8 param_1)

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



/* Entry: 10201e1b4; end: 10201e34b;  */

void FUN_10201e1b4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fa7560)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f058aa0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "TopicViewerLensScopeGraphBridge/SCTopicViewerLensScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10201e34c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59f10();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10201e34c; end: 10201e3f7; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10201e34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10201e1b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10201e3f8; end: 10201e463; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e3f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50b18,0);
  *(undefined8 *)(param_1 + _DAT_112e50b20) = 0;
  *(undefined8 *)(param_1 + _DAT_112e50b28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201e464; end: 10201e497;  */

void FUN_10201e464(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10201e498; end: 10201e4df; -[SCTopicViewerLensScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010201e4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201e4c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e498(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50b20));
  return;
}



/* Entry: 10201e4e0; end: 10201e4ff;  */

void FUN_10201e4e0(void)

{
  func_0x000107c61168(&PTR_PTR_112818608);
  return;
}



/* Entry: 10201e500; end: 10201e547; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e500(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e50b58;
  func_0x000107c61428(param_1 + _DAT_112e50b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10201e548; end: 10201e59f; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e50b58;
  func_0x000107c61428(param_1 + _DAT_112e50b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10201e5a0; end: 10201e677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e5a0(undefined8 param_1,long param_2)

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
    FUN_10201daa0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e50a80) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10201e678);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e50a88);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e50b60);
    *(long **)(unaff_x20 + _DAT_112e50b60) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10201e678; end: 10201e69f; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint begin] */

void FUN_10201e678(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10201e5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10201e6a0; end: 10201e817;  */

/* WARNING: Possible PIC construction at 0x00010201e708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010201e7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010201e70c) */
/* WARNING: Removing unreachable block (ram,0x00010201e7a4) */
/* WARNING: Removing unreachable block (ram,0x00010201e7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201e6a0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e50b60);
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



/* Entry: 10201e818; end: 10201e81f;  */

void FUN_10201e818(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10201e820; end: 10201e853; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint end] */

void FUN_10201e820(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10201e6a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10201e854; end: 10201e973;  */

void FUN_10201e854(long param_1,long param_2,long param_3)

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
                        "TopicViewerLensScopeGraphBridge/SCSCTopicViewerLensScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10201e974);
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



/* Entry: 10201e974; end: 10201ea1f; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10201e974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10201e854(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10201ea20; end: 10201ea7f; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201ea20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e50b58,0);
  *(undefined8 *)(param_1 + _DAT_112e50b60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10201ea80; end: 10201eab3;  */

void FUN_10201ea80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10201eab4; end: 10201eaeb; -[SCSCTopicViewerLensScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10201eab4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e50b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e50b60));
  return;
}


