/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f8d744; end: 101f8d74b;  */

undefined8 FUN_101f8d744(void)

{
  return 0x1b;
}



/* Entry: 101f8d74c; end: 101f8d8c3;  */

void FUN_101f8d74c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ad390;
  func_0x000107c613fc(&UNK_1104ad390,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f8d8c4,puVar1);
  return;
}



/* Entry: 101f8d8c4; end: 101f8d8cb;  */

void FUN_101f8d8c4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e47c68,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e47c68,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ad428;
  func_0x000107c613fc(&UNK_1104ad428,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f8d978;
  func_0x00010058fa64(0x101f8d978,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8d8cc; end: 101f8d927;  */

void FUN_101f8d8cc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e47c68,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e47c68,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f8d928; end: 101f8d97f;  */

undefined ** FUN_101f8d928(void)

{
  return &PTR_DAT_112fe93e8;
}



/* Entry: 101f8d980; end: 101f8d9c7; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8d980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47cc8;
  func_0x000107c61428(param_1 + _DAT_112e47cc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f8d9c8; end: 101f8da1f; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8d9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47cc8;
  func_0x000107c61428(param_1 + _DAT_112e47cc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f8da20; end: 101f8da67; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint spectaclesKnobsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8da20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47cd0;
  func_0x000107c61428(param_1 + _DAT_112e47cd0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f8da68; end: 101f8dacb; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint setSpectaclesKnobsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8da68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47cd0;
  func_0x000107c61428(param_1 + _DAT_112e47cd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f8dacc; end: 101f8dbff;  */

/* WARNING: Possible PIC construction at 0x000101f8db84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8dba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8dbbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8db88) */
/* WARNING: Removing unreachable block (ram,0x000101f8dba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8dacc(void)

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
  func_0x000107c5b730();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f8d300();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f8d578();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8dc00);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e47bf8) = lVar5;
    *(long *)(lVar4 + _DAT_112e47c00) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f8dc00; end: 101f8dc27; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f8dc00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f8dacc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f8dc28; end: 101f8dc6b; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f8dc28(undefined8 param_1)

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



/* Entry: 101f8dc6c; end: 101f8de03;  */

void FUN_101f8dc6c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fdb210)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f024df0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesKnobsScopeGraphBridge/SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8de04);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59600();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f8de04; end: 101f8deaf; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f8de04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f8dc6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f8deb0; end: 101f8df1b; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8deb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47cc8,0);
  *(undefined8 *)(param_1 + _DAT_112e47cd0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47cd8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8df1c; end: 101f8df4f;  */

void FUN_101f8df1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f8df50; end: 101f8df97; -[SCSpectaclesKnobsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f8df7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8df80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8df50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47cd0));
  return;
}



/* Entry: 101f8df98; end: 101f8dfb7;  */

void FUN_101f8df98(void)

{
  func_0x000107c61168(&PTR_PTR_11280f958);
  return;
}



/* Entry: 101f8dfb8; end: 101f8dfff; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8dfb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47d08;
  func_0x000107c61428(param_1 + _DAT_112e47d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f8e000; end: 101f8e057; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47d08;
  func_0x000107c61428(param_1 + _DAT_112e47d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f8e058; end: 101f8e12f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e058(undefined8 param_1,long param_2)

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
    FUN_101f8d558();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e47c30) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f8e130);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e47c38);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e47d10);
    *(long **)(unaff_x20 + _DAT_112e47d10) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f8e130; end: 101f8e157; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint begin] */

void FUN_101f8e130(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f8e058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f8e158; end: 101f8e2cf;  */

/* WARNING: Possible PIC construction at 0x000101f8e1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8e258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8e1c4) */
/* WARNING: Removing unreachable block (ram,0x000101f8e25c) */
/* WARNING: Removing unreachable block (ram,0x000101f8e274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e158(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e47d10);
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



/* Entry: 101f8e2d0; end: 101f8e2d7;  */

void FUN_101f8e2d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f8e2d8; end: 101f8e30b; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint end] */

void FUN_101f8e2d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f8e158();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f8e30c; end: 101f8e42b;  */

void FUN_101f8e30c(long param_1,long param_2,long param_3)

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
                        "SpectaclesKnobsScopeGraphBridge/SCSCSpectaclesKnobsScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8e42c);
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



/* Entry: 101f8e42c; end: 101f8e4d7; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f8e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f8e30c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f8e4d8; end: 101f8e537; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e4d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47d08,0);
  *(undefined8 *)(param_1 + _DAT_112e47d10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8e538; end: 101f8e56b;  */

void FUN_101f8e538(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f8e56c; end: 101f8e5a3; -[SCSCSpectaclesKnobsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e56c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47d08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47d10));
  return;
}



/* Entry: 101f8e5a4; end: 101f8e5c3;  */

void FUN_101f8e5a4(void)

{
  func_0x000107c61168(&PTR_PTR_11280fa20);
  return;
}



/* Entry: 101f8e5c4; end: 101f8e62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e5c4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f8e9b8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e47d48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f8e630; end: 101f8e69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e630(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47d48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8e69c; end: 101f8e6fb; -[_TtC52SpectaclesLensManagementScopedFactoryServiceProvider40SCSpectaclesLensManagementScopedServices init] */

void FUN_101f8e69c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesLensManagementScopedFactoryServiceProvider.SCSpectaclesLensManagementScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8e6c8);
  (*pcVar1)();
}



/* Entry: 101f8e6fc; end: 101f8e70b; -[_TtC52SpectaclesLensManagementScopedFactoryServiceProvider40SCSpectaclesLensManagementScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e6fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e47d48));
  return;
}



/* Entry: 101f8e70c; end: 101f8e777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8e70c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ad640;
  func_0x000107c613fc(&UNK_1104ad640,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f8ea94,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f8e778; end: 101f8e813;  */

void FUN_101f8e778(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104ad550;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104ad550;
  return;
}



/* Entry: 101f8e814; end: 101f8e84b;  */

void FUN_101f8e814(long *param_1)

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



/* Entry: 101f8e84c; end: 101f8e853;  */

undefined8 FUN_101f8e84c(void)

{
  return 0x1b;
}



/* Entry: 101f8e854; end: 101f8e987;  */

void FUN_101f8e854(undefined8 *param_1)

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
  puVar1 = &UNK_1104ad668;
  func_0x000107c613fc(&UNK_1104ad668,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f8ea6c;
  func_0x00010058fa64(FUN_101f8ea6c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8e988; end: 101f8e9b7;  */

undefined ** FUN_101f8e988(void)

{
  return &PTR_DAT_112fe9438;
}



/* Entry: 101f8e9b8; end: 101f8e9d7;  */

void FUN_101f8e9b8(void)

{
  func_0x000107c61168(&PTR_PTR_11280fae0);
  return;
}



/* Entry: 101f8e9d8; end: 101f8ea27;  */

undefined1  [16] FUN_101f8e9d8(void)

{
  return ZEXT816(0x1104ad5a0);
}



/* Entry: 101f8ea28; end: 101f8ea6b;  */

void FUN_101f8ea28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e47db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9bd8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e47db0 = puVar1;
  return;
}



/* Entry: 101f8ea6c; end: 101f8ea93;  */

void FUN_101f8ea6c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f8ea94; end: 101f8ea97;  */

void FUN_101f8ea94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f8ea98; end: 101f8eb63;  */

/* WARNING: Possible PIC construction at 0x000101f8eb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8eb48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8eb3c) */
/* WARNING: Removing unreachable block (ram,0x000101f8eb4c) */

void FUN_101f8ea98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104ad6f0;
  func_0x000107c613fc(&UNK_1104ad6f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112e47dc0;
  func_0x0001000285a8(0x112e47dc0,&UNK_10da3d988);
  func_0x000107c613fc();
  pcVar3 = FUN_101f8ef10;
  func_0x0001000841fc(FUN_101f8ef10,puVar1,uVar2);
  func_0x000100084214(&UNK_10da3d950,0x36,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f8eb64; end: 101f8eb7f;  */

/* WARNING: Possible PIC construction at 0x000101f8eb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8eb48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8eb3c) */
/* WARNING: Removing unreachable block (ram,0x000101f8eb4c) */

void FUN_101f8eb64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_1104ad6f0;
  func_0x000107c613fc(&UNK_1104ad6f0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e47dc0;
  func_0x0001000285a8(0x112e47dc0,&UNK_10da3d988);
  func_0x000107c613fc();
  pcVar6 = FUN_101f8ef10;
  func_0x0001000841fc(FUN_101f8ef10,puVar4,uVar5);
  func_0x000100084214(&UNK_10da3d950,0x36,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101f8eb80; end: 101f8ef0f;  */

void FUN_101f8eb80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e47dc8,&UNK_10da3d990);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101f902cc();
  func_0x000100082720("SCLensCreatorProfileScopeExposerSubjectServiceProvider",0x36,2);
  puVar3 = puVar2;
  FUN_101f90358();
  func_0x000100082720("SCLensCreatorProfileScopeExposerObservableServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101f8e814;
  func_0x0001000823a8(FUN_101f8e814,0);
  func_0x000100082720("SCSpectaclesLensManagementScopedServicesCleanupRelayServiceProvider",0x43,2);
  puVar5 = puVar2;
  FUN_101f90180();
  func_0x000100082720("SpectaclesLensManagementScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e47dd0,&UNK_10da3d9a0);
  puVar6 = &UNK_1104ad718;
  func_0x000107c613fc(&UNK_1104ad718,0x40,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 **)(puVar6 + 0x38) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x101f8ef1c;
  func_0x0001000823a8(0x101f8ef1c,puVar6);
  func_0x000100082720("SCSpectaclesLensManagementEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e47dd8,&UNK_10da3d9a8);
  puVar6 = &UNK_1104ad740;
  func_0x000107c613fc(&UNK_1104ad740,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  pcVar7 = FUN_101f8ef68;
  func_0x0001000823a8(FUN_101f8ef68,puVar6);
  func_0x000100082720("SCSpectaclesLensManagementScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112e47d50,&UNK_10da3d6d0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101f8ef74;
  func_0x0001000823a8(0x101f8ef74,pcVar7);
  func_0x000100082720("SCSpectaclesLensManagementScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e47d40,&UNK_10da3d6c0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101f8ef7c;
  func_0x0001000823a8(0x101f8ef7c,uVar8);
  func_0x000100082720("SCSpectaclesLensManagementScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104ad768;
  func_0x000107c613fc(&UNK_1104ad768,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x101f8ef84;
  func_0x0001000823a8(0x101f8ef84,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSpectaclesLensManagementScopeEntryPointProvider",0x31,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101f8ef10; end: 101f8ef2b;  */

void FUN_101f8ef10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e47dc8,&UNK_10da3d990);
  puVar2 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar3 = puVar2;
  FUN_101f902cc();
  func_0x000100082720("SCLensCreatorProfileScopeExposerSubjectServiceProvider",0x36,2);
  puVar4 = puVar3;
  FUN_101f90358();
  func_0x000100082720("SCLensCreatorProfileScopeExposerObservableServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101f8e814;
  func_0x0001000823a8(FUN_101f8e814,0);
  func_0x000100082720("SCSpectaclesLensManagementScopedServicesCleanupRelayServiceProvider",0x43,2);
  puVar6 = puVar3;
  FUN_101f90180();
  func_0x000100082720("SpectaclesLensManagementScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e47dd0,&UNK_10da3d9a0);
  puVar7 = &UNK_1104ad718;
  func_0x000107c613fc(&UNK_1104ad718,0x40,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 **)(puVar7 + 0x38) = puVar4;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar4);
  uVar8 = 0x101f8ef1c;
  func_0x0001000823a8(0x101f8ef1c,puVar7);
  func_0x000100082720("SCSpectaclesLensManagementEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e47dd8,&UNK_10da3d9a8);
  puVar7 = &UNK_1104ad740;
  func_0x000107c613fc(&UNK_1104ad740,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar2;
  *(code **)(puVar7 + 0x20) = pcVar5;
  *(undefined8 **)(puVar7 + 0x28) = puVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar6);
  pcVar9 = FUN_101f8ef68;
  func_0x0001000823a8(FUN_101f8ef68,puVar7);
  func_0x000100082720("SCSpectaclesLensManagementScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112e47d50,&UNK_10da3d6d0);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x101f8ef74;
  func_0x0001000823a8(0x101f8ef74,pcVar9);
  func_0x000100082720("SCSpectaclesLensManagementScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e47d40,&UNK_10da3d6c0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x101f8ef7c;
  func_0x0001000823a8(0x101f8ef7c,uVar10);
  func_0x000100082720("SCSpectaclesLensManagementScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_1104ad768;
  func_0x000107c613fc(&UNK_1104ad768,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar11 = 0x101f8ef84;
  func_0x0001000823a8(0x101f8ef84,puVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCSpectaclesLensManagementScopeEntryPointProvider",0x31,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 101f8ef2c; end: 101f8ef67;  */

void FUN_101f8ef2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8ef68; end: 101f8ef8b;  */

void FUN_101f8ef68(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f8f8e8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpectaclesLensManagementScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8ef8c; end: 101f8f6df;  */

void FUN_101f8ef8c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_101f8f838();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e47de0,&UNK_10da40610);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar8 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar6 = PTR_PTR_1126a9be0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0251a0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019f40);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6ab0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar6);
  uVar8 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0251c0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar5);
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0251e0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *param_1 = param_2;
  return;
}



/* Entry: 101f8f6e0; end: 101f8f72b;  */

void FUN_101f8f6e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 101f8f72c; end: 101f8f733;  */

undefined8 FUN_101f8f72c(void)

{
  return 0x1b;
}



/* Entry: 101f8f734; end: 101f8f7b7;  */

void FUN_101f8f734(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f8f878,param_2,FUN_101f8f87c,param_2,FUN_101f8f8a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f8f7b8; end: 101f8f807;  */

undefined8 FUN_101f8f7b8(void)

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



/* Entry: 101f8f808; end: 101f8f837;  */

undefined ** FUN_101f8f808(void)

{
  return &PTR_DAT_112fe9438;
}



/* Entry: 101f8f838; end: 101f8f857;  */

void FUN_101f8f838(void)

{
  func_0x000107c61168(&PTR_PTR_112e47e50);
  return;
}



/* Entry: 101f8f858; end: 101f8f87b;  */

undefined1  [16] FUN_101f8f858(void)

{
  return ZEXT816(0x1104ad7c0);
}



/* Entry: 101f8f87c; end: 101f8f8a3;  */

void FUN_101f8f87c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f8f8a4; end: 101f8f8ab;  */

undefined8 FUN_101f8f8a4(void)

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



/* Entry: 101f8f8ac; end: 101f8f8e7;  */

void FUN_101f8f8ac(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f8f8e8();
  func_0x0001000a7f38("SCSpectaclesLensManagementScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f8f8e8; end: 101f8fad3;  */

void FUN_101f8f8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106ced98;
  ppuVar4 = &PTR_DAT_112fe9438;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e47ed8;
  func_0x0001000285a8(0x112e47ed8,&UNK_10da3db20);
  func_0x0001000a6ee8(&UNK_1104ad7c0,
                      "SCSpectaclesLensManagementEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_101f8fb48,param_1,uVar2,&UNK_1104ad7c0,&PTR_DAT_112e47de8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104ad810;
  func_0x000107c613fc(&UNK_1104ad810,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ad5e0,
                      "SCSpectaclesLensManagementScopedServicesScopeInitializationPluginKey",0x44,2,
                      FUN_101f8fbf8,puVar3,uVar2,&UNK_1104ad5e0,&PTR_DAT_112e47d58);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104ad838;
  func_0x000107c613fc(&UNK_1104ad838,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ada30,
                      "SpectaclesLensManagementScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_101f8fc00,puVar3,uVar2,&UNK_1104ada30,&PTR_DAT_112e47f70);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e47ee0;
  func_0x0001000285a8(0x112e47ee0,&UNK_10da3db28);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f8fad4; end: 101f8fb47;  */

void FUN_101f8fad4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f8fc74;
  func_0x0001000823a8(0x101f8fc74,param_3);
  func_0x000100082720("SCSpectaclesLensManagementEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8fb48; end: 101f8fb4f;  */

void FUN_101f8fb48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f8fc74;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesLensManagementEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8fb50; end: 101f8fbf7;  */

void FUN_101f8fb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ad860;
  func_0x000107c613fc(&UNK_1104ad860,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f8fc6c;
  func_0x0001000823a8(FUN_101f8fc6c,puVar1);
  func_0x000100082720("SCSpectaclesLensManagementScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f8fbf8; end: 101f8fbff;  */

void FUN_101f8fbf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104ad860;
  func_0x000107c613fc(&UNK_1104ad860,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f8fc6c;
  func_0x0001000823a8(FUN_101f8fc6c,puVar3);
  func_0x000100082720("SCSpectaclesLensManagementScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f8fc00; end: 101f8fc3f;  */

void FUN_101f8fc00(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f90400(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesLensManagementScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8fc40; end: 101f8fc6b;  */

void FUN_101f8fc40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8fc6c; end: 101f8fc7b;  */

void FUN_101f8fc6c(undefined8 *param_1)

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
  puVar1 = &UNK_1104ad668;
  func_0x000107c613fc(&UNK_1104ad668,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f8ea6c;
  func_0x00010058fa64(FUN_101f8ea6c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8fc7c; end: 101f8fd57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f90090();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e47ee8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e47ef0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8fd58);
  (*pcVar1)();
}



/* Entry: 101f8fd58; end: 101f8fdb7; -[_TtC40SpectaclesLensManagementScopeGraphBridge55SpectaclesLensManagementScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f8fd58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesLensManagementScopeGraphBridge.SpectaclesLensManagementScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8fd84);
  (*pcVar1)();
}



/* Entry: 101f8fdb8; end: 101f8fdef; -[_TtC40SpectaclesLensManagementScopeGraphBridge55SpectaclesLensManagementScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f8fdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8fdd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8fdb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47ee8));
  return;
}



/* Entry: 101f8fdf0; end: 101f8fe17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8fdf0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e47ef0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e47ee8));
  return;
}



/* Entry: 101f8fe18; end: 101f8fe37;  */

void FUN_101f8fe18(void)

{
  func_0x000107c61168(&PTR_PTR_11280fba0);
  return;
}



/* Entry: 101f8fe38; end: 101f8febf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8fe38(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47f20) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e47f28);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f8fec0);
  (*pcVar2)();
}



/* Entry: 101f8fec0; end: 101f8ffa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f8fec0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47f20);
  *(undefined **)(unaff_x20 + _DAT_112e47f20) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47f28);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e47f28))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ad950;
  func_0x000107c613fc(&UNK_1104ad950,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f8ffac,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f8ffa8; end: 101f8ffb3;  */

void FUN_101f8ffa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f8ffb4; end: 101f90013; -[_TtC40SpectaclesLensManagementScopeGraphBridge55SCSpectaclesLensManagementScopedServicesSaberEntryPoint init] */

void FUN_101f8ffb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesLensManagementScopeGraphBridge.SCSpectaclesLensManagementScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8ffe0);
  (*pcVar1)();
}



/* Entry: 101f90014; end: 101f9004b; -[_TtC40SpectaclesLensManagementScopeGraphBridge55SCSpectaclesLensManagementScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90014(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e47f28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47f20));
  return;
}



/* Entry: 101f9004c; end: 101f9004f;  */

void FUN_101f9004c(void)

{
  return;
}



/* Entry: 101f90050; end: 101f9006f;  */

void FUN_101f90050(void)

{
  FUN_101f8fec0();
  return;
}



/* Entry: 101f90070; end: 101f9008f;  */

void FUN_101f90070(void)

{
  func_0x000107c61168(&PTR_PTR_11280fc68);
  return;
}



/* Entry: 101f90090; end: 101f9015f;  */

undefined8 FUN_101f90090(void)

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
  
  func_0x000107c61428(0x112e47f58,&uStack_40,0x20,0);
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
    FUN_101f90160();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f90160; end: 101f9017f;  */

void FUN_101f90160(void)

{
  func_0x000107c61168(&PTR_PTR_11280fd30);
  return;
}



/* Entry: 101f90180; end: 101f9019b;  */

void FUN_101f90180(undefined8 param_1)

{
  func_0x0001000285a8(0x112e47f60,&UNK_10da3dbf8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f90208,param_1);
  return;
}



/* Entry: 101f9019c; end: 101f90207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f9019c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101f90160();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e47f68) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101f90208; end: 101f9020f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90208(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101f90160();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e47f68) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101f90210; end: 101f9025b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f90210(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47f68) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f9025c; end: 101f902bb; -[_TtC40SpectaclesLensManagementScopeGraphBridge48SpectaclesLensManagementScopeGraphBridgeServices init] */

void FUN_101f9025c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesLensManagementScopeGraphBridge.SpectaclesLensManagementScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f90288);
  (*pcVar1)();
}



/* Entry: 101f902bc; end: 101f902cb; -[_TtC40SpectaclesLensManagementScopeGraphBridge48SpectaclesLensManagementScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f902bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e47f68));
  return;
}



/* Entry: 101f902cc; end: 101f90357;  */

void FUN_101f902cc(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101f9030c,0);
  return;
}



/* Entry: 101f90358; end: 101f90373;  */

void FUN_101f90358(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101f903c4,param_1);
  return;
}



/* Entry: 101f90374; end: 101f903c3;  */

void FUN_101f90374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101f903c4; end: 101f903f7;  */

void FUN_101f903c4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101f903f8; end: 101f903ff;  */

undefined8 FUN_101f903f8(void)

{
  return 0x1b;
}



/* Entry: 101f90400; end: 101f90577;  */

void FUN_101f90400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ad998;
  func_0x000107c613fc(&UNK_1104ad998,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f90578,puVar1);
  return;
}



/* Entry: 101f90578; end: 101f9057f;  */

void FUN_101f90578(undefined8 *param_1)

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
  func_0x000107c61428(0x112e47f58,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e47f58,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ada70;
  func_0x000107c613fc(&UNK_1104ada70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f9064c;
  func_0x00010058fa64(0x101f9064c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f90580; end: 101f905db;  */

void FUN_101f90580(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e47f58,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e47f58,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}


