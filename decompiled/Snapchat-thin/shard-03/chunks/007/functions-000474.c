/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bce564; end: 102bce5ab; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bce564(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd2e8;
  func_0x000107c61428(param_1 + _DAT_112efd2e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bce5ac; end: 102bce603; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bce5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd2e8;
  func_0x000107c61428(param_1 + _DAT_112efd2e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bce604; end: 102bce64b; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint contextPostStoryScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bce604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd2f0;
  func_0x000107c61428(param_1 + _DAT_112efd2f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bce64c; end: 102bce6af; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint setContextPostStoryScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bce64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd2f0;
  func_0x000107c61428(param_1 + _DAT_112efd2f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bce6b0; end: 102bce7e3;  */

/* WARNING: Possible PIC construction at 0x000102bce768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bce784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bce7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bce76c) */
/* WARNING: Removing unreachable block (ram,0x000102bce788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bce6b0(void)

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
  func_0x000107c405c4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102bcdee4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102bce15c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bce7e4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efd218) = lVar5;
    *(long *)(lVar4 + _DAT_112efd220) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102bce7e4; end: 102bce80b; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102bce7e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bce6b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bce80c; end: 102bce84f; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint end] */

void FUN_102bce80c(undefined8 param_1)

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



/* Entry: 102bce850; end: 102bce9e7;  */

void FUN_102bce850(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f03870)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f0fc790,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextPostStoryScopeGraphBridge/SCContextPostStoryScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bce9e8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53904();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bce9e8; end: 102bcea93; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102bce9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bce850(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bcea94; end: 102bceaff; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcea94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efd2e8,0);
  *(undefined8 *)(param_1 + _DAT_112efd2f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112efd2f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bceb00; end: 102bceb33;  */

void FUN_102bceb00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bceb34; end: 102bceb7b; -[SCContextPostStoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bceb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bceb64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bceb34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efd2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd2f0));
  return;
}



/* Entry: 102bceb7c; end: 102bceb9b;  */

void FUN_102bceb7c(void)

{
  func_0x000107c61168(&PTR_PTR_112894c08);
  return;
}



/* Entry: 102bceb9c; end: 102bcebe3; -[SCSCContextPostStoryScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bceb9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efd328;
  func_0x000107c61428(param_1 + _DAT_112efd328,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bcebe4; end: 102bcec3b; -[SCSCContextPostStoryScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcebe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efd328;
  func_0x000107c61428(param_1 + _DAT_112efd328,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bcec3c; end: 102bced13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcec3c(undefined8 param_1,long param_2)

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
    FUN_102bce13c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efd250) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bced14);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efd258);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efd330);
    *(long **)(unaff_x20 + _DAT_112efd330) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102bced14; end: 102bced3b; -[SCSCContextPostStoryScopedServicesSaberEntryPoint begin] */

void FUN_102bced14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bcec3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bced3c; end: 102bceeb3;  */

/* WARNING: Possible PIC construction at 0x000102bceda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bcee3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bceda8) */
/* WARNING: Removing unreachable block (ram,0x000102bcee40) */
/* WARNING: Removing unreachable block (ram,0x000102bcee58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bced3c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efd330);
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



/* Entry: 102bceeb4; end: 102bceebb;  */

void FUN_102bceeb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bceebc; end: 102bceeef; -[SCSCContextPostStoryScopedServicesSaberEntryPoint end] */

void FUN_102bceebc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102bced3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102bceef0; end: 102bcf00f;  */

void FUN_102bceef0(long param_1,long param_2,long param_3)

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
                        "ContextPostStoryScopeGraphBridge/SCSCContextPostStoryScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bcf010);
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



/* Entry: 102bcf010; end: 102bcf0bb; -[SCSCContextPostStoryScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102bcf010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bceef0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bcf0bc; end: 102bcf11b; -[SCSCContextPostStoryScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcf0bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efd328,0);
  *(undefined8 *)(param_1 + _DAT_112efd330) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bcf11c; end: 102bcf14f;  */

void FUN_102bcf11c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bcf150; end: 102bcf187; -[SCSCContextPostStoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcf150(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efd328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd330));
  return;
}



/* Entry: 102bcf188; end: 102bcf1a7;  */

void FUN_102bcf188(void)

{
  func_0x000107c61168(&PTR_PTR_112894cd0);
  return;
}



/* Entry: 102bcf1a8; end: 102bcf213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcf1a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102bcf59c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efd368) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102bcf214; end: 102bcf27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcf214(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efd368) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bcf280; end: 102bcf2df; -[_TtC44ContextSpotlightScopedFactoryServiceProvider32SCContextSpotlightScopedServices init] */

void FUN_102bcf280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextSpotlightScopedFactoryServiceProvider.SCContextSpotlightScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bcf2ac);
  (*pcVar1)();
}



/* Entry: 102bcf2e0; end: 102bcf2ef; -[_TtC44ContextSpotlightScopedFactoryServiceProvider32SCContextSpotlightScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcf2e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efd368));
  return;
}



/* Entry: 102bcf2f0; end: 102bcf35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcf2f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105ad558;
  func_0x000107c613fc(&UNK_1105ad558,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102bcf634,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102bcf35c; end: 102bcf3f7;  */

void FUN_102bcf35c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105ad468;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105ad468;
  return;
}



/* Entry: 102bcf3f8; end: 102bcf42f;  */

void FUN_102bcf3f8(long *param_1)

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



/* Entry: 102bcf430; end: 102bcf437;  */

undefined8 FUN_102bcf430(void)

{
  return 0x1b;
}



/* Entry: 102bcf438; end: 102bcf56b;  */

void FUN_102bcf438(undefined8 *param_1)

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
  puVar1 = &UNK_1105ad580;
  func_0x000107c613fc(&UNK_1105ad580,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bcf60c;
  func_0x00010058fa64(FUN_102bcf60c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bcf56c; end: 102bcf59b;  */

undefined ** FUN_102bcf56c(void)

{
  return &PTR_DAT_113066a18;
}



/* Entry: 102bcf59c; end: 102bcf5bb;  */

void FUN_102bcf59c(void)

{
  func_0x000107c61168(&PTR_PTR_112894d90);
  return;
}



/* Entry: 102bcf5bc; end: 102bcf60b;  */

undefined1  [16] FUN_102bcf5bc(void)

{
  return ZEXT816(0x1105ad4b8);
}



/* Entry: 102bcf60c; end: 102bcf633;  */

void FUN_102bcf60c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102bcf634; end: 102bcf647;  */

void FUN_102bcf634(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bcf648; end: 102bcfdcb;  */

void FUN_102bcf648(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112efd3e0,&UNK_10db2f5c8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efd3e8,&UNK_10db2f5d0);
  puVar2 = &UNK_1105ad630;
  func_0x000107c613fc(&UNK_1105ad630,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  pcVar3 = FUN_102bcfe54;
  func_0x0001000823a8(FUN_102bcfe54,puVar2);
  pcVar4 = "HeroContextCardDataServicesEntryPointWrapperServiceProvider";
  func_0x000100082720("HeroContextCardDataServicesEntryPointWrapperServiceProvider",0x3b,2);
  func_0x000102bd41b8();
  pcVar5 = "SCContextOperaEmbeddedComponentScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeExposerSubjectServiceProvider",0x41,2);
  FUN_102bd4204();
  func_0x000100082720("SCGroupAvatarScopeExposerSubjectServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112efd3f0,&UNK_10db2f5d8);
  func_0x000107c6157c(pcVar3);
  uVar14 = 0x102bcfe60;
  func_0x0001000823a8(0x102bcfe60,pcVar3);
  func_0x000100082720("SCContextHeroContextCardDataServicesServiceProvider",0x33,2);
  pcVar6 = pcVar4;
  FUN_102bd41f8();
  func_0x000100082720("SCContextOperaEmbeddedComponentScopeExposerObservableServiceProvider",0x44,2)
  ;
  pcVar7 = pcVar5;
  FUN_102bd4290();
  func_0x000100082720("SCGroupAvatarScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_102bcf3f8;
  func_0x0001000823a8(FUN_102bcf3f8,0);
  func_0x000100082720("SCContextSpotlightScopedServicesCleanupRelayServiceProvider",0x3b,2);
  uVar9 = uVar14;
  FUN_102bd3f54(uVar14,pcVar4,pcVar5);
  func_0x000100082720("ContextSpotlightScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112efd3f8,&UNK_10db2f7a0);
  puVar2 = &UNK_1105ad658;
  func_0x000107c613fc(&UNK_1105ad658,0x148,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  *(undefined8 *)(puVar2 + 0x30) = param_10;
  *(undefined8 *)(puVar2 + 0x38) = param_11;
  *(undefined8 *)(puVar2 + 0x40) = param_12;
  *(undefined8 *)(puVar2 + 0x48) = param_13;
  *(undefined8 *)(puVar2 + 0x50) = param_14;
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  *(undefined8 *)(puVar2 + 0x60) = param_15;
  *(undefined8 *)(puVar2 + 0x68) = param_16;
  *(undefined8 *)(puVar2 + 0x70) = param_17;
  *(undefined8 *)(puVar2 + 0x78) = param_18;
  *(undefined8 *)(puVar2 + 0x80) = param_3;
  *(undefined8 *)(puVar2 + 0x88) = param_19;
  *(undefined8 *)(puVar2 + 0x90) = param_20;
  *(undefined8 *)(puVar2 + 0x98) = param_6;
  *(undefined8 *)(puVar2 + 0xa0) = uVar14;
  *(undefined8 *)(puVar2 + 0xa8) = param_21;
  *(undefined8 *)(puVar2 + 0xb0) = param_22;
  *(undefined8 *)(puVar2 + 0xb8) = param_23;
  *(undefined8 *)(puVar2 + 0xc0) = param_24;
  *(undefined8 *)(puVar2 + 200) = param_25;
  *(undefined8 *)(puVar2 + 0xd0) = param_26;
  *(undefined8 *)(puVar2 + 0xd8) = param_27;
  *(undefined8 *)(puVar2 + 0xe0) = param_28;
  *(undefined8 *)(puVar2 + 0xe8) = param_5;
  *(undefined8 *)(puVar2 + 0xf0) = param_29;
  *(undefined8 *)(puVar2 + 0xf8) = param_30;
  *(undefined8 *)(puVar2 + 0x100) = param_31;
  *(undefined8 *)(puVar2 + 0x108) = param_32;
  *(undefined8 *)(puVar2 + 0x110) = param_33;
  *(undefined8 *)(puVar2 + 0x118) = param_34;
  *(undefined8 *)(puVar2 + 0x120) = param_35;
  *(undefined8 *)(puVar2 + 0x128) = param_36;
  *(undefined8 *)(puVar2 + 0x130) = param_37;
  *(char **)(puVar2 + 0x138) = pcVar6;
  *(char **)(puVar2 + 0x140) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar7);
  pcVar10 = FUN_102bcfe68;
  func_0x0001000823a8(FUN_102bcfe68,puVar2);
  func_0x000100082720("SCContextSpotlightEntryPointWrapperServiceProvider",0x32,2);
  func_0x0001000285a8(0x112efd400,&UNK_10db2f5e0);
  puVar2 = &UNK_1105ad680;
  func_0x000107c613fc(&UNK_1105ad680,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar10;
  *(code **)(puVar2 + 0x30) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(pcVar8);
  pcVar11 = FUN_102bcff28;
  func_0x0001000823a8(FUN_102bcff28,puVar2);
  func_0x000100082720("SCContextSpotlightScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112efd370,&UNK_10db2f370);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x102bcff48;
  func_0x0001000823a8(0x102bcff48,pcVar11);
  func_0x000100082720("SCContextSpotlightScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112efd360,&UNK_10db2f360);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x102bcff50;
  func_0x0001000823a8(0x102bcff50,uVar12);
  func_0x000100082720("SCContextSpotlightScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105ad6a8;
  func_0x000107c613fc(&UNK_1105ad6a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar13;
  *(code **)(puVar2 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x102bcff58;
  func_0x0001000823a8(0x102bcff58,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCContextSpotlightScopeEntryPointProvider",0x29,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 102bcfdcc; end: 102bcfe53;  */

void FUN_102bcfdcc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102bcf648(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 102bcfe54; end: 102bcfe67;  */

void FUN_102bcfe54(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_102bd0444();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  FUN_102bd63dc(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x000102bd5e1c();
  *(undefined8 *)(lVar2 + 0x10) = uVar9;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd0140);
    (*pcVar1)();
  }
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar2 + 0x40) = puVar3;
  *param_1 = lVar2;
  return;
}



/* Entry: 102bcfe68; end: 102bcfee3;  */

void FUN_102bcfe68(void)

{
  long unaff_x20;
  
  FUN_102bd04ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 102bcfee4; end: 102bcff27;  */

void FUN_102bcfee4(void)

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



/* Entry: 102bcff28; end: 102bcff5f;  */

void FUN_102bcff28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11074d348;
  ppuVar7 = &PTR_DAT_113066a18;
  uVar8 = uVar2;
  func_0x0001000a3aa4();
  puVar5 = &UNK_1105ad7f0;
  func_0x000107c613fc(&UNK_1105ad7f0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  uVar6 = 0x112efd700;
  func_0x0001000285a8(0x112efd700,&UNK_10db2fa08);
  func_0x0001000a6ee8(&UNK_1105adac8,"ContextSpotlightScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_102bd364c,puVar5,uVar6,&UNK_1105adac8,&PTR_DAT_112efd7e0);
  func_0x000107c61574(puVar5);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_1105ad720,
                      "HeroContextCardDataServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_102bd368c,uVar2,uVar6,&UNK_1105ad720,&PTR_DAT_112efd408);
  func_0x000107c61574(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_1105ad7a0,
                      "SCContextSpotlightEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102bd373c,uVar3,uVar6,&UNK_1105ad7a0,&PTR_DAT_112efd508);
  func_0x000107c61574(uVar3);
  puVar5 = &UNK_1105ad818;
  func_0x000107c613fc(&UNK_1105ad818,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x0001000a6ee8(&UNK_1105ad4f8,"SCContextSpotlightScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102bd3810,puVar5,uVar6,&UNK_1105ad4f8,&PTR_DAT_112efd378);
  func_0x000107c61574(puVar5);
  uVar6 = 0x112efd708;
  func_0x0001000285a8(0x112efd708,&UNK_10db2fa10);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar4,ppuVar7,uVar8,uVar6);
  func_0x0001000a7f38("SCContextSpotlightScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar4;
  return;
}



/* Entry: 102bcff60; end: 102bd02c7;  */

void FUN_102bcff60(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_102bd0444();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_102bd63dc(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000102bd5e1c();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd0140);
  (*pcVar1)();
}



/* Entry: 102bd02c8; end: 102bd0333;  */

void FUN_102bd02c8(void)

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



/* Entry: 102bd0334; end: 102bd0387;  */

void FUN_102bd0334(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102bd0388; end: 102bd038f;  */

undefined8 FUN_102bd0388(void)

{
  return 0x1b;
}



/* Entry: 102bd0390; end: 102bd0413;  */

void FUN_102bd0390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102bd0494,param_2,FUN_102bd0498,param_2,0x102bd04c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102bd0414; end: 102bd0443;  */

undefined ** FUN_102bd0414(void)

{
  return &PTR_DAT_113066a18;
}



/* Entry: 102bd0444; end: 102bd0463;  */

void FUN_102bd0444(void)

{
  func_0x000107c61168(&PTR_PTR_112efd470);
  return;
}



/* Entry: 102bd0464; end: 102bd0497;  */

undefined1  [16] FUN_102bd0464(void)

{
  return ZEXT816(0x1105ad700);
}



/* Entry: 102bd0498; end: 102bd04eb;  */

void FUN_102bd0498(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102bd04ec; end: 102bd30f7;  */

void FUN_102bd04ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  FUN_102bd3370();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  *(undefined8 *)(param_2 + 0xd0) = uStack_120;
  *(undefined8 *)(param_2 + 0xd8) = uStack_128;
  *(undefined8 *)(param_2 + 0xe0) = uStack_130;
  *(undefined8 *)(param_2 + 0xe8) = uStack_138;
  *(undefined8 *)(param_2 + 0xf0) = uStack_140;
  *(undefined8 *)(param_2 + 0xf8) = uStack_148;
  *(undefined8 *)(param_2 + 0x100) = uStack_150;
  *(undefined8 *)(param_2 + 0x108) = uStack_158;
  *(undefined8 *)(param_2 + 0x110) = uStack_160;
  *(undefined8 *)(param_2 + 0x118) = uStack_168;
  *(undefined8 *)(param_2 + 0x120) = uStack_170;
  *(undefined8 *)(param_2 + 0x128) = uStack_178;
  *(undefined8 *)(param_2 + 0x130) = uStack_180;
  *(undefined8 *)(param_2 + 0x138) = uStack_188;
  *(undefined8 *)(param_2 + 0x140) = uStack_190;
  func_0x0001000285a8(0x112efd500,&UNK_10db2f7a8);
  func_0x000107c610f8();
  uVar18 = uStack_78;
  func_0x000107c61174();
  uVar19 = uStack_80;
  func_0x000107c61174();
  uVar20 = uStack_88;
  func_0x000107c61174();
  uVar21 = uStack_90;
  func_0x000107c61174();
  uVar1 = uStack_98;
  func_0x000107c61174();
  uVar2 = uStack_a0;
  func_0x000107c61174();
  uVar3 = uStack_a8;
  func_0x000107c61174();
  uVar4 = uStack_b0;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  func_0x000107c61174();
  uVar6 = uStack_c0;
  func_0x000107c61174();
  uVar7 = uStack_c8;
  func_0x000107c61174();
  uVar8 = uStack_d0;
  func_0x000107c61174();
  uVar9 = uStack_d8;
  func_0x000107c61174();
  uVar10 = uStack_e0;
  func_0x000107c61174();
  uVar11 = uStack_e8;
  func_0x000107c61174();
  uVar12 = uStack_f0;
  func_0x000107c61174();
  uVar13 = uStack_f8;
  func_0x000107c61174();
  uVar14 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  uVar39 = uStack_190;
  func_0x000107c61174();
  uVar17 = uStack_198;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar15;
  func_0x0001000285a8(0x112efa838,&UNK_10db2f7b0);
  func_0x000107c610f8();
  uVar17 = uStack_1a0;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar15 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x20) = puVar15;
  puVar15 = PTR_PTR_1126ac0b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0x6867696c746f7073;
  func_0x000107c5fadc(0x6867696c746f7073,0xee0065706f635374);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000011;
  uVar17 = uVar42;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2e900);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000010;
  uVar17 = uVar41;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar40);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x72655374736f6f62;
  func_0x000107c5fadc(0x72655374736f6f62,0xed00007365636976);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0fcb00);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0fcb20);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x7672655361746164;
  func_0x000107c5fadc(0x7672655361746164,0xec00000073656369);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar40);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar40 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0fcb40);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar40);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar40);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef3c010);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar42);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar17 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef21c10);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x7265536f69647561;
  func_0x000107c5fadc(0x7265536f69647561,0xed00007365636976);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0fcb60);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c8a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar17 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0fcb90);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2d6e0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar17 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0fcbb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar17);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar42 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0fcbe0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar40 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0fcc00);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar42);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61574(uStack_198);
  func_0x000107c61574(uStack_1a0);
  *param_1 = param_2;
  return;
}



/* Entry: 102bd30f8; end: 102bd3263;  */

void FUN_102bd30f8(void)

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
  return;
}



/* Entry: 102bd3264; end: 102bd326b;  */

undefined8 FUN_102bd3264(void)

{
  return 0x1b;
}



/* Entry: 102bd326c; end: 102bd32ef;  */

void FUN_102bd326c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102bd33b0,param_2,FUN_102bd33b4,param_2,FUN_102bd33dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102bd32f0; end: 102bd333f;  */

undefined8 FUN_102bd32f0(void)

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



/* Entry: 102bd3340; end: 102bd336f;  */

undefined ** FUN_102bd3340(void)

{
  return &PTR_DAT_113066a18;
}



/* Entry: 102bd3370; end: 102bd338f;  */

void FUN_102bd3370(void)

{
  func_0x000107c61168(&PTR_PTR_112efd570);
  return;
}



/* Entry: 102bd3390; end: 102bd33b3;  */

undefined1  [16] FUN_102bd3390(void)

{
  return ZEXT816(0x1105ad7a0);
}



/* Entry: 102bd33b4; end: 102bd33db;  */

void FUN_102bd33b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102bd33dc; end: 102bd33e3;  */

undefined8 FUN_102bd33dc(void)

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



/* Entry: 102bd33e4; end: 102bd364b;  */

void FUN_102bd33e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d348;
  ppuVar4 = &PTR_DAT_113066a18;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105ad7f0;
  func_0x000107c613fc(&UNK_1105ad7f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112efd700;
  func_0x0001000285a8(0x112efd700,&UNK_10db2fa08);
  func_0x0001000a6ee8(&UNK_1105adac8,"ContextSpotlightScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_102bd364c,puVar2,uVar3,&UNK_1105adac8,&PTR_DAT_112efd7e0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105ad720,
                      "HeroContextCardDataServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_102bd368c,param_4,uVar3,&UNK_1105ad720,&PTR_DAT_112efd408);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105ad7a0,
                      "SCContextSpotlightEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102bd373c,param_5,uVar3,&UNK_1105ad7a0,&PTR_DAT_112efd508);
  func_0x000107c61574(param_5);
  puVar2 = &UNK_1105ad818;
  func_0x000107c613fc(&UNK_1105ad818,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105ad4f8,"SCContextSpotlightScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102bd3810,puVar2,uVar3,&UNK_1105ad4f8,&PTR_DAT_112efd378);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112efd708;
  func_0x0001000285a8(0x112efd708,&UNK_10db2fa10);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCContextSpotlightScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102bd364c; end: 102bd368b;  */

void FUN_102bd364c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102bd4330(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextSpotlightScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102bd368c; end: 102bd36b7;  */

void FUN_102bd368c(void)

{
  FUN_102bd36b8();
  return;
}



/* Entry: 102bd36b8; end: 102bd373b;  */

void FUN_102bd36b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102bd373c; end: 102bd3767;  */

void FUN_102bd373c(void)

{
  FUN_102bd36b8();
  return;
}



/* Entry: 102bd3768; end: 102bd380f;  */

void FUN_102bd3768(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105ad840;
  func_0x000107c613fc(&UNK_1105ad840,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102bd3844;
  func_0x0001000823a8(FUN_102bd3844,puVar1);
  func_0x000100082720("SCContextSpotlightScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102bd3810; end: 102bd3817;  */

void FUN_102bd3810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105ad840;
  func_0x000107c613fc(&UNK_1105ad840,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102bd3844;
  func_0x0001000823a8(FUN_102bd3844,puVar3);
  func_0x000100082720("SCContextSpotlightScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102bd3818; end: 102bd3843;  */

void FUN_102bd3818(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bd3844; end: 102bd385b;  */

void FUN_102bd3844(undefined8 *param_1)

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
  puVar1 = &UNK_1105ad580;
  func_0x000107c613fc(&UNK_1105ad580,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bcf60c;
  func_0x00010058fa64(FUN_102bcf60c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bd385c; end: 102bd3973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102bd385c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102bd3e64();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112efd710) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112efd718) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd3974);
  (*pcVar2)();
}



/* Entry: 102bd3974; end: 102bd39d3; -[_TtC32ContextSpotlightScopeGraphBridge47ContextSpotlightScopeGraphBridgeSaberEntryPoint init] */

void FUN_102bd3974(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextSpotlightScopeGraphBridge.ContextSpotlightScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd39a0);
  (*pcVar1)();
}



/* Entry: 102bd39d4; end: 102bd3a0b; -[_TtC32ContextSpotlightScopeGraphBridge47ContextSpotlightScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bd39f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd39f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd39d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd710));
  return;
}



/* Entry: 102bd3a0c; end: 102bd3a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd3a0c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efd718),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efd710));
  return;
}



/* Entry: 102bd3a34; end: 102bd3a53;  */

void FUN_102bd3a34(void)

{
  func_0x000107c61168(&PTR_PTR_112894e50);
  return;
}



/* Entry: 102bd3a54; end: 102bd3aef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bd3a54(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112efd7c8);
  *(undefined8 *)(unaff_x20 + _DAT_112efd748) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112efd750) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102bd3af0; end: 102bd3b4f; -[_TtC32ContextSpotlightScopeGraphBridge51SCContextHeroContextCardDataServicesSaberEntryPoint init] */

void FUN_102bd3af0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextSpotlightScopeGraphBridge.SCContextHeroContextCardDataServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd3b1c);
  (*pcVar1)();
}



/* Entry: 102bd3b50; end: 102bd3be3; -[_TtC32ContextSpotlightScopeGraphBridge51SCContextHeroContextCardDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd3b50(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112efd748));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd750));
  return;
}



/* Entry: 102bd3be4; end: 102bd3beb;  */

undefined8 FUN_102bd3be4(void)

{
  return 0;
}



/* Entry: 102bd3bec; end: 102bd3c0b;  */

void FUN_102bd3bec(void)

{
  func_0x000107c61168(&PTR_PTR_112894f18);
  return;
}



/* Entry: 102bd3c0c; end: 102bd3c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bd3c0c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efd780) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efd788);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bd3c94);
  (*pcVar2)();
}



/* Entry: 102bd3c94; end: 102bd3d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bd3c94(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efd780);
  *(undefined **)(unaff_x20 + _DAT_112efd780) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efd788);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efd788))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105ad980;
  func_0x000107c613fc(&UNK_1105ad980,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102bd3d80,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102bd3d7c; end: 102bd3d87;  */

void FUN_102bd3d7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bd3d88; end: 102bd3de7; -[_TtC32ContextSpotlightScopeGraphBridge47SCContextSpotlightScopedServicesSaberEntryPoint init] */

void FUN_102bd3d88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextSpotlightScopeGraphBridge.SCContextSpotlightScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd3db4);
  (*pcVar1)();
}



/* Entry: 102bd3de8; end: 102bd3e1f; -[_TtC32ContextSpotlightScopeGraphBridge47SCContextSpotlightScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd3de8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efd788));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efd780));
  return;
}



/* Entry: 102bd3e20; end: 102bd3e23;  */

void FUN_102bd3e20(void)

{
  return;
}



/* Entry: 102bd3e24; end: 102bd3e43;  */

void FUN_102bd3e24(void)

{
  FUN_102bd3c94();
  return;
}



/* Entry: 102bd3e44; end: 102bd3e63;  */

void FUN_102bd3e44(void)

{
  func_0x000107c61168(&PTR_PTR_112894fe0);
  return;
}



/* Entry: 102bd3e64; end: 102bd3f33;  */

undefined8 FUN_102bd3e64(void)

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
  
  func_0x000107c61428(0x112efd7b8,&uStack_40,0x20,0);
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
    FUN_102bd3f34();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102bd3f34; end: 102bd3f53;  */

void FUN_102bd3f34(void)

{
  func_0x000107c61168(&PTR_PTR_1128950a8);
  return;
}



/* Entry: 102bd3f54; end: 102bd408f;  */

void FUN_102bd3f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112efd7c0,&UNK_10db2fb28);
  puVar1 = &UNK_1105ad9c8;
  func_0x000107c613fc(&UNK_1105ad9c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102bd4090,puVar1);
  return;
}



/* Entry: 102bd4090; end: 102bd409b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4090(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_102bd3f34();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112efd7c8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112efd7d0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112efd7d8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102bd409c; end: 102bd410f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd409c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efd7c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112efd7d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112efd7d8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bd4110; end: 102bd416f; -[_TtC32ContextSpotlightScopeGraphBridge40ContextSpotlightScopeGraphBridgeServices init] */

void FUN_102bd4110(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextSpotlightScopeGraphBridge.ContextSpotlightScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bd413c);
  (*pcVar1)();
}



/* Entry: 102bd4170; end: 102bd41f7; -[_TtC32ContextSpotlightScopeGraphBridge40ContextSpotlightScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bd418c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bd4190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bd4170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efd7c8));
  return;
}



/* Entry: 102bd41f8; end: 102bd4203;  */

void FUN_102bd41f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102bd45a4,param_1);
  return;
}


