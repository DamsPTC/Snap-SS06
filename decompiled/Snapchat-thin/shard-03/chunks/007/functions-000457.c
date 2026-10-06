/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b7ba84; end: 102b7bac7; -[SCSCSpotlightRecommendTrayScopeServicesSaberServiceProvider end] */

void FUN_102b7ba84(undefined8 param_1)

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



/* Entry: 102b7bac8; end: 102b7bc5f;  */

void FUN_102b7bac8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0f08d10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f0f72f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActionPerformerScopeGraphBridge/SCSCSpotlightRecommendTrayScopeServicesSaberServiceProvider.swift"
                            ,0x68,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7bc60);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b7bc60; end: 102b7bd0b; -[SCSCSpotlightRecommendTrayScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b7bc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b7bac8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b7bd0c; end: 102b7bd7f; -[SCSCSpotlightRecommendTrayScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7bd0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef9fb8,0);
  func_0x000107c61614(param_1 + _DAT_112ef9fc0,0);
  *(undefined8 *)(param_1 + _DAT_112ef9fc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b7bd80; end: 102b7bdb3;  */

void FUN_102b7bd80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b7bdb4; end: 102b7bdfb; -[SCSCSpotlightRecommendTrayScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7bdb4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef9fb8);
  func_0x000107c61610(param_1 + _DAT_112ef9fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef9fc8));
  return;
}



/* Entry: 102b7bdfc; end: 102b7be1b;  */

void FUN_102b7bdfc(void)

{
  func_0x000107c61168(&PTR_PTR_112efa010);
  return;
}



/* Entry: 102b7be1c; end: 102b7be27; -[SCSCTopLevelReactionsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7be1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa078;
  func_0x000107c61428(param_1 + _DAT_112efa078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b7be28; end: 102b7be33; -[SCSCTopLevelReactionsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7be28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa078;
  func_0x000107c61428(param_1 + _DAT_112efa078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b7be34; end: 102b7be3f; -[SCSCTopLevelReactionsServicesSaberServiceProvider contextActionPerformerScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7be34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa080;
  func_0x000107c61428(param_1 + _DAT_112efa080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b7be40; end: 102b7be83;  */

void FUN_102b7be40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b7be84; end: 102b7be8f; -[SCSCTopLevelReactionsServicesSaberServiceProvider setContextActionPerformerScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7be84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa080;
  func_0x000107c61428(param_1 + _DAT_112efa080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b7be90; end: 102b7bee3;  */

void FUN_102b7be90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b7bee4; end: 102b7c0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b7bee4(void)

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
    func_0x000107c40540();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b78018();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef9bf8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efa088);
      *(long *)(unaff_x20 + _DAT_112efa088) = lVar4;
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
                      "ContextActionPerformerScopeGraphBridge/SCSCTopLevelReactionsServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7c010);
  (*pcVar1)();
}



/* Entry: 102b7c0f8; end: 102b7c12b; -[SCSCTopLevelReactionsServicesSaberServiceProvider provide] */

void FUN_102b7c0f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b7bee4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b7c12c; end: 102b7c15f; -[SCSCTopLevelReactionsServicesSaberServiceProvider __safeProvide] */

void FUN_102b7c12c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b7c010();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b7c160; end: 102b7c1a3; -[SCSCTopLevelReactionsServicesSaberServiceProvider end] */

void FUN_102b7c160(undefined8 param_1)

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



/* Entry: 102b7c1a4; end: 102b7c33b;  */

void FUN_102b7c1a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0f08d10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f0f72f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActionPerformerScopeGraphBridge/SCSCTopLevelReactionsServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x3c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7c33c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b7c33c; end: 102b7c3e7; -[SCSCTopLevelReactionsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b7c33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b7c1a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b7c3e8; end: 102b7c45b; -[SCSCTopLevelReactionsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7c3e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efa078,0);
  func_0x000107c61614(param_1 + _DAT_112efa080,0);
  *(undefined8 *)(param_1 + _DAT_112efa088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b7c45c; end: 102b7c48f;  */

void FUN_102b7c45c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b7c490; end: 102b7c4d7; -[SCSCTopLevelReactionsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7c490(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efa078);
  func_0x000107c61610(param_1 + _DAT_112efa080);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efa088));
  return;
}



/* Entry: 102b7c4d8; end: 102b7c4f7;  */

void FUN_102b7c4d8(void)

{
  func_0x000107c61168(&PTR_PTR_112efa0d0);
  return;
}



/* Entry: 102b7c4f8; end: 102b7c53f; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7c4f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa138;
  func_0x000107c61428(param_1 + _DAT_112efa138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b7c540; end: 102b7c597; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7c540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa138;
  func_0x000107c61428(param_1 + _DAT_112efa138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b7c598; end: 102b7c66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7c598(undefined8 param_1,long param_2)

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
    FUN_102b782ec();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ef9b60) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b7c670);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ef9b68);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efa140);
    *(long **)(unaff_x20 + _DAT_112efa140) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b7c670; end: 102b7c697; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint begin] */

void FUN_102b7c670(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b7c598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b7c698; end: 102b7c80f;  */

/* WARNING: Possible PIC construction at 0x000102b7c700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7c798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7c704) */
/* WARNING: Removing unreachable block (ram,0x000102b7c79c) */
/* WARNING: Removing unreachable block (ram,0x000102b7c7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7c698(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efa140);
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



/* Entry: 102b7c810; end: 102b7c817;  */

void FUN_102b7c810(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b7c818; end: 102b7c84b; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint end] */

void FUN_102b7c818(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b7c698();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b7c84c; end: 102b7c96b;  */

void FUN_102b7c84c(long param_1,long param_2,long param_3)

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
                        "ContextActionPerformerScopeGraphBridge/SCSCContextActionPerformerScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x32,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7c96c);
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



/* Entry: 102b7c96c; end: 102b7ca17; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b7c96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b7c84c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b7ca18; end: 102b7ca77; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7ca18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efa138,0);
  *(undefined8 *)(param_1 + _DAT_112efa140) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b7ca78; end: 102b7caab;  */

void FUN_102b7ca78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b7caac; end: 102b7cae3; -[SCSCContextActionPerformerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7caac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efa138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa140));
  return;
}



/* Entry: 102b7cae4; end: 102b7cb03;  */

void FUN_102b7cae4(void)

{
  func_0x000107c61168(&PTR_PTR_112890498);
  return;
}



/* Entry: 102b7cb04; end: 102b7cb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7cb04(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b7cef8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efa178) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b7cb70; end: 102b7cbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7cb70(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efa178) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b7cbdc; end: 102b7cc3b; -[_TtC49SpotlightQuickCommentScopedFactoryServiceProvider37SCSpotlightQuickCommentScopedServices init] */

void FUN_102b7cbdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickCommentScopedFactoryServiceProvider.SCSpotlightQuickCommentScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7cc08);
  (*pcVar1)();
}



/* Entry: 102b7cc3c; end: 102b7cc4b; -[_TtC49SpotlightQuickCommentScopedFactoryServiceProvider37SCSpotlightQuickCommentScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7cc3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efa178));
  return;
}



/* Entry: 102b7cc4c; end: 102b7ccb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7cc4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a5368;
  func_0x000107c613fc(&UNK_1105a5368,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b7cf90,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b7ccb8; end: 102b7cd53;  */

void FUN_102b7ccb8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a5278;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a5278;
  return;
}



/* Entry: 102b7cd54; end: 102b7cd8b;  */

void FUN_102b7cd54(long *param_1)

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



/* Entry: 102b7cd8c; end: 102b7cd93;  */

undefined8 FUN_102b7cd8c(void)

{
  return 0x1b;
}



/* Entry: 102b7cd94; end: 102b7cec7;  */

void FUN_102b7cd94(undefined8 *param_1)

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
  puVar1 = &UNK_1105a5390;
  func_0x000107c613fc(&UNK_1105a5390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b7cf68;
  func_0x00010058fa64(FUN_102b7cf68,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b7cec8; end: 102b7cef7;  */

undefined ** FUN_102b7cec8(void)

{
  return &PTR_DAT_113066fb8;
}



/* Entry: 102b7cef8; end: 102b7cf17;  */

void FUN_102b7cef8(void)

{
  func_0x000107c61168(&PTR_PTR_112890558);
  return;
}



/* Entry: 102b7cf18; end: 102b7cf67;  */

undefined1  [16] FUN_102b7cf18(void)

{
  return ZEXT816(0x1105a52c8);
}



/* Entry: 102b7cf68; end: 102b7cf8f;  */

void FUN_102b7cf68(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b7cf90; end: 102b7cf93;  */

void FUN_102b7cf90(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b7cf94; end: 102b7d133;  */

void FUN_102b7cf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112efa1e0,&UNK_10db29920);
  puVar1 = &UNK_1105a53d0;
  func_0x000107c613fc(&UNK_1105a53d0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b7d134,puVar1);
  return;
}



/* Entry: 102b7d134; end: 102b7d153;  */

/* WARNING: Possible PIC construction at 0x000102b7d0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7d10c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7d100) */
/* WARNING: Removing unreachable block (ram,0x000102b7d110) */

void FUN_102b7d134(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_1105a5418;
  func_0x000107c613fc(&UNK_1105a5418,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112efa1e8;
  func_0x0001000285a8(0x112efa1e8,&UNK_10db29968);
  func_0x000107c613fc();
  pcVar6 = FUN_102b7d4cc;
  func_0x0001000841fc(FUN_102b7d4cc,puVar4,uVar5);
  func_0x000100084214(&UNK_10db29930,0x33,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102b7d154; end: 102b7d487;  */

void FUN_102b7d154(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112efa1f0,&UNK_10db29970);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_102b7cd54;
  func_0x0001000823a8(FUN_102b7cd54,0);
  func_0x000100082720("SCSpotlightQuickCommentScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112efa1f8,&UNK_10db29980);
  puVar3 = &UNK_1105a5440;
  func_0x000107c613fc(&UNK_1105a5440,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar8 = 0x102b7d4dc;
  func_0x0001000823a8(0x102b7d4dc,puVar3);
  pcVar4 = "SpotlightQuickCommentEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightQuickCommentEntryPointWrapperServiceProvider",0x35,2);
  FUN_102b7e280();
  func_0x000100082720("SpotlightQuickCommentScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112efa200,&UNK_10db29988);
  puVar3 = &UNK_1105a5468;
  func_0x000107c613fc(&UNK_1105a5468,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(code **)(puVar3 + 0x18) = pcVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(char **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x102b7d4ec;
  func_0x0001000823a8(0x102b7d4ec,puVar3);
  func_0x000100082720("SCSpotlightQuickCommentScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112efa180,&UNK_10db296c0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x102b7d4f8;
  func_0x0001000823a8(0x102b7d4f8,uVar5);
  func_0x000100082720("SCSpotlightQuickCommentScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112efa170,&UNK_10db296b0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102b7d500;
  func_0x0001000823a8(0x102b7d500,uVar6);
  func_0x000100082720("SCSpotlightQuickCommentScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a5490;
  func_0x000107c613fc(&UNK_1105a5490,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x102b7d508;
  func_0x0001000823a8(0x102b7d508,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpotlightQuickCommentScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102b7d488; end: 102b7d4cb;  */

void FUN_102b7d488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b7d4cc; end: 102b7d50f;  */

void FUN_102b7d4cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112efa1f0,&UNK_10db29970);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_102b7cd54;
  func_0x0001000823a8(FUN_102b7cd54,0);
  func_0x000100082720("SCSpotlightQuickCommentScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112efa1f8,&UNK_10db29980);
  puVar3 = &UNK_1105a5440;
  func_0x000107c613fc(&UNK_1105a5440,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = uVar8;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  uVar4 = 0x102b7d4dc;
  func_0x0001000823a8(0x102b7d4dc,puVar3);
  pcVar5 = "SpotlightQuickCommentEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightQuickCommentEntryPointWrapperServiceProvider",0x35,2);
  FUN_102b7e280();
  func_0x000100082720("SpotlightQuickCommentScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112efa200,&UNK_10db29988);
  puVar3 = &UNK_1105a5468;
  func_0x000107c613fc(&UNK_1105a5468,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(code **)(puVar3 + 0x18) = pcVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(char **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102b7d4ec;
  func_0x0001000823a8(0x102b7d4ec,puVar3);
  func_0x000100082720("SCSpotlightQuickCommentScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112efa180,&UNK_10db296c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102b7d4f8;
  func_0x0001000823a8(0x102b7d4f8,uVar6);
  func_0x000100082720("SCSpotlightQuickCommentScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112efa170,&UNK_10db296b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102b7d500;
  func_0x0001000823a8(0x102b7d500,uVar7);
  func_0x000100082720("SCSpotlightQuickCommentScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a5490;
  func_0x000107c613fc(&UNK_1105a5490,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar8 = 0x102b7d508;
  func_0x0001000823a8(0x102b7d508,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCSpotlightQuickCommentScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102b7d510; end: 102b7d6ef;  */

void FUN_102b7d510(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_102b7d968();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_102b81a94(0);
  func_0x000107c613fc();
  uVar1 = uStack_68;
  func_0x000102b80b94(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar1);
  FUN_102b80d4c();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 102b7d6f0; end: 102b7d85f;  */

long FUN_102b7d6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  FUN_102b81a94(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000102b80b94(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_102b80d4c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102b7d860; end: 102b7d8ab;  */

void FUN_102b7d860(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b7d8ac; end: 102b7d8b3;  */

undefined8 FUN_102b7d8ac(void)

{
  return 0x1b;
}



/* Entry: 102b7d8b4; end: 102b7d937;  */

void FUN_102b7d8b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b7d9a8,param_2,FUN_102b7d9ac,param_2,0x102b7d9d4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b7d938; end: 102b7d967;  */

undefined ** FUN_102b7d938(void)

{
  return &PTR_DAT_113066fb8;
}



/* Entry: 102b7d968; end: 102b7d987;  */

void FUN_102b7d968(void)

{
  func_0x000107c61168(&PTR_PTR_112efa270);
  return;
}



/* Entry: 102b7d988; end: 102b7d9ab;  */

undefined1  [16] FUN_102b7d988(void)

{
  return ZEXT816(0x1105a54e8);
}



/* Entry: 102b7d9ac; end: 102b7d9ff;  */

void FUN_102b7d9ac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b7da00; end: 102b7da3b;  */

void FUN_102b7da00(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b7da3c();
  func_0x0001000a7f38("SCSpotlightQuickCommentScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102b7da3c; end: 102b7dccf;  */

void FUN_102b7da3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dca8;
  ppuVar4 = &PTR_DAT_113066fb8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a5538;
  func_0x000107c613fc(&UNK_1105a5538,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112efa2f8;
  func_0x0001000285a8(0x112efa2f8,&UNK_10db29ae8);
  func_0x0001000a6ee8(&UNK_1105a5308,
                      "SCSpotlightQuickCommentScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_102b7dcd0,puVar2,uVar3,&UNK_1105a5308,&PTR_DAT_112efa188);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a54e8,
                      "SpotlightQuickCommentEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_102b7dd4c,param_3,uVar3,&UNK_1105a54e8,&PTR_DAT_112efa208);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105a5560;
  func_0x000107c613fc(&UNK_1105a5560,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a5748,
                      "SpotlightQuickCommentScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_102b7dd54,puVar2,uVar3,&UNK_1105a5748,&PTR_DAT_112efa388);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112efa300;
  func_0x0001000285a8(0x112efa300,&UNK_10db29af0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102b7dcd0; end: 102b7dcd7;  */

void FUN_102b7dcd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a5588;
  func_0x000107c613fc(&UNK_1105a5588,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b7ddc8;
  func_0x0001000823a8(FUN_102b7ddc8,puVar3);
  func_0x000100082720("SCSpotlightQuickCommentScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b7dcd8; end: 102b7dd4b;  */

void FUN_102b7dcd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_102b7dd94;
  func_0x0001000823a8(FUN_102b7dd94,param_3);
  func_0x000100082720("SpotlightQuickCommentEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102b7dd4c; end: 102b7dd53;  */

void FUN_102b7dd4c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_102b7dd94;
  func_0x0001000823a8();
  func_0x000100082720("SpotlightQuickCommentEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102b7dd54; end: 102b7dd93;  */

void FUN_102b7dd54(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b7e364(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpotlightQuickCommentScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b7dd94; end: 102b7dd9b;  */

void FUN_102b7dd94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b7d9a8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b7dd9c; end: 102b7ddc7;  */

void FUN_102b7dd9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b7ddc8; end: 102b7ddcf;  */

void FUN_102b7ddc8(undefined8 *param_1)

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
  puVar1 = &UNK_1105a5390;
  func_0x000107c613fc(&UNK_1105a5390,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b7cf68;
  func_0x00010058fa64(FUN_102b7cf68,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b7ddd0; end: 102b7de57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b7ddd0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102b7e190();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112efa308) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efa310) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7de58);
  (*pcVar1)();
}



/* Entry: 102b7de58; end: 102b7deb7; -[_TtC37SpotlightQuickCommentScopeGraphBridge52SpotlightQuickCommentScopeGraphBridgeSaberEntryPoint init] */

void FUN_102b7de58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickCommentScopeGraphBridge.SpotlightQuickCommentScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7de84);
  (*pcVar1)();
}



/* Entry: 102b7deb8; end: 102b7deef; -[_TtC37SpotlightQuickCommentScopeGraphBridge52SpotlightQuickCommentScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b7ded4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7ded8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7deb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa308));
  return;
}



/* Entry: 102b7def0; end: 102b7df17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7def0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efa310),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efa308));
  return;
}



/* Entry: 102b7df18; end: 102b7df37;  */

void FUN_102b7df18(void)

{
  func_0x000107c61168(&PTR_PTR_112890618);
  return;
}



/* Entry: 102b7df38; end: 102b7dfbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b7df38(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efa340) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efa348);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b7dfc0);
  (*pcVar2)();
}



/* Entry: 102b7dfc0; end: 102b7e0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b7dfc0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efa340);
  *(undefined **)(unaff_x20 + _DAT_112efa340) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efa348);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efa348))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a56a8;
  func_0x000107c613fc(&UNK_1105a56a8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102b7e0ac,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102b7e0a8; end: 102b7e0b3;  */

void FUN_102b7e0a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b7e0b4; end: 102b7e113; -[_TtC37SpotlightQuickCommentScopeGraphBridge52SCSpotlightQuickCommentScopedServicesSaberEntryPoint init] */

void FUN_102b7e0b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickCommentScopeGraphBridge.SCSpotlightQuickCommentScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7e0e0);
  (*pcVar1)();
}



/* Entry: 102b7e114; end: 102b7e14b; -[_TtC37SpotlightQuickCommentScopeGraphBridge52SCSpotlightQuickCommentScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7e114(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efa348));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa340));
  return;
}



/* Entry: 102b7e14c; end: 102b7e14f;  */

void FUN_102b7e14c(void)

{
  return;
}



/* Entry: 102b7e150; end: 102b7e16f;  */

void FUN_102b7e150(void)

{
  FUN_102b7dfc0();
  return;
}



/* Entry: 102b7e170; end: 102b7e18f;  */

void FUN_102b7e170(void)

{
  func_0x000107c61168(&PTR_PTR_1128906e0);
  return;
}



/* Entry: 102b7e190; end: 102b7e25f;  */

undefined8 FUN_102b7e190(void)

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
  
  func_0x000107c61428(0x112efa378,&uStack_40,0x20,0);
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
    FUN_102b7e260();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102b7e260; end: 102b7e27f;  */

void FUN_102b7e260(void)

{
  func_0x000107c61168(&PTR_PTR_1128907a8);
  return;
}



/* Entry: 102b7e280; end: 102b7e2eb;  */

void FUN_102b7e280(void)

{
  func_0x0001000285a8(0x112efa380,&UNK_10db29bc8);
  func_0x0001000823a8(0x102b7e2c0,0);
  return;
}



/* Entry: 102b7e2ec; end: 102b7e327; -[_TtC37SpotlightQuickCommentScopeGraphBridge45SpotlightQuickCommentScopeGraphBridgeServices init] */

void FUN_102b7e2ec(undefined8 param_1)

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



/* Entry: 102b7e328; end: 102b7e35b;  */

void FUN_102b7e328(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b7e35c; end: 102b7e363;  */

undefined8 FUN_102b7e35c(void)

{
  return 0x1b;
}



/* Entry: 102b7e364; end: 102b7e4db;  */

void FUN_102b7e364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a56f0;
  func_0x000107c613fc(&UNK_1105a56f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102b7e4dc,puVar1);
  return;
}



/* Entry: 102b7e4dc; end: 102b7e4e3;  */

void FUN_102b7e4dc(undefined8 *param_1)

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
  func_0x000107c61428(0x112efa378,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efa378,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a5788;
  func_0x000107c613fc(&UNK_1105a5788,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102b7e590;
  func_0x00010058fa64(0x102b7e590,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b7e4e4; end: 102b7e53f;  */

void FUN_102b7e4e4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efa378,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efa378,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102b7e540; end: 102b7e597;  */

undefined ** FUN_102b7e540(void)

{
  return &PTR_DAT_113066fb8;
}



/* Entry: 102b7e598; end: 102b7e5df; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7e598(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa3d8;
  func_0x000107c61428(param_1 + _DAT_112efa3d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b7e5e0; end: 102b7e637; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7e5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa3d8;
  func_0x000107c61428(param_1 + _DAT_112efa3d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b7e638; end: 102b7e67f; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint spotlightQuickCommentScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7e638(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa3e0;
  func_0x000107c61428(param_1 + _DAT_112efa3e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102b7e680; end: 102b7e6e3; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint setSpotlightQuickCommentScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7e680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa3e0;
  func_0x000107c61428(param_1 + _DAT_112efa3e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


