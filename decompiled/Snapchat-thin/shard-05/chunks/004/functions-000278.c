/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103daf4ec; end: 103daf513; -[SCLogoutScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103daf4ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103daf3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103daf514; end: 103daf557; -[SCLogoutScopeGraphBridgeSaberEntryPoint end] */

void FUN_103daf514(undefined8 param_1)

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



/* Entry: 103daf558; end: 103daf6ef;  */

void FUN_103daf558(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e48640)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1b79c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LogoutScopeGraphBridge/SCLogoutScopeGraphBridgeSaberEntryPoint.swift",
                            0x44,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103daf6f0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5612c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103daf6f0; end: 103daf79b; -[SCLogoutScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103daf6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103daf558(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103daf79c; end: 103daf807; -[SCLogoutScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf79c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113009db0,0);
  *(undefined8 *)(param_1 + _DAT_113009db8) = 0;
  *(undefined8 *)(param_1 + _DAT_113009dc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103daf808; end: 103daf83b;  */

void FUN_103daf808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103daf83c; end: 103daf883; -[SCLogoutScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103daf868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103daf86c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf83c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_113009db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113009db8));
  return;
}



/* Entry: 103daf884; end: 103daf8a3;  */

void FUN_103daf884(void)

{
  func_0x000107c61168(&PTR_PTR_11294a608);
  return;
}



/* Entry: 103daf8a4; end: 103daf8eb; -[SCSCLogoutScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf8a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113009df0;
  func_0x000107c61428(param_1 + _DAT_113009df0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103daf8ec; end: 103daf943; -[SCSCLogoutScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113009df0;
  func_0x000107c61428(param_1 + _DAT_113009df0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103daf944; end: 103dafa1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf944(undefined8 param_1,long param_2)

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
    FUN_103daee44();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_113009d18) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dafa1c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_113009d20);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113009df8);
    *(long **)(unaff_x20 + _DAT_113009df8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103dafa1c; end: 103dafa43; -[SCSCLogoutScopedServicesSaberEntryPoint begin] */

void FUN_103dafa1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103daf944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103dafa44; end: 103dafbbb;  */

/* WARNING: Possible PIC construction at 0x000103dafaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dafb44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dafab0) */
/* WARNING: Removing unreachable block (ram,0x000103dafb48) */
/* WARNING: Removing unreachable block (ram,0x000103dafb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dafa44(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_113009df8);
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



/* Entry: 103dafbbc; end: 103dafbc3;  */

void FUN_103dafbbc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103dafbc4; end: 103dafbf7; -[SCSCLogoutScopedServicesSaberEntryPoint end] */

void FUN_103dafbc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103dafa44();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dafbf8; end: 103dafd17;  */

void FUN_103dafbf8(long param_1,long param_2,long param_3)

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
                        "LogoutScopeGraphBridge/SCSCLogoutScopedServicesSaberEntryPoint.swift",0x44,
                        2,0x32,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103dafd18);
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



/* Entry: 103dafd18; end: 103dafdc3; -[SCSCLogoutScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103dafd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103dafbf8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103dafdc4; end: 103dafe23; -[SCSCLogoutScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dafdc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113009df0,0);
  *(undefined8 *)(param_1 + _DAT_113009df8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dafe24; end: 103dafe57;  */

void FUN_103dafe24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103dafe58; end: 103dafe8f; -[SCSCLogoutScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dafe58(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_113009df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113009df8));
  return;
}



/* Entry: 103dafe90; end: 103dafeaf;  */

void FUN_103dafe90(void)

{
  func_0x000107c61168(&PTR_PTR_11294a6d0);
  return;
}



/* Entry: 103dafeb0; end: 103daff1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dafeb0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103db02a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113009e30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103daff1c; end: 103daff87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daff1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113009e30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103daff88; end: 103daffe7; -[_TtC44PostRegistrationScopedFactoryServiceProvider32SCPostRegistrationScopedServices init] */

void FUN_103daff88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationScopedFactoryServiceProvider.SCPostRegistrationScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103daffb4);
  (*pcVar1)();
}



/* Entry: 103daffe8; end: 103dafff7; -[_TtC44PostRegistrationScopedFactoryServiceProvider32SCPostRegistrationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daffe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113009e30));
  return;
}



/* Entry: 103dafff8; end: 103db0063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dafff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11070fd78;
  func_0x000107c613fc(&UNK_11070fd78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  FUN_103dc513c(FUN_103db033c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103db0064; end: 103db00ff;  */

void FUN_103db0064(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11070fc88;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11070fc88;
  return;
}



/* Entry: 103db0100; end: 103db0137;  */

void FUN_103db0100(long *param_1)

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



/* Entry: 103db0138; end: 103db013f;  */

undefined8 FUN_103db0138(void)

{
  return 0x1b;
}



/* Entry: 103db0140; end: 103db0273;  */

void FUN_103db0140(undefined8 *param_1)

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
  puVar1 = &UNK_11070fda0;
  func_0x000107c613fc(&UNK_11070fda0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103db0314;
  func_0x00010058fa64(FUN_103db0314,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103db0274; end: 103db02a3;  */

undefined ** FUN_103db0274(void)

{
  return &PTR_DAT_113066e50;
}



/* Entry: 103db02a4; end: 103db02c3;  */

void FUN_103db02a4(void)

{
  func_0x000107c61168(&PTR_PTR_11294a790);
  return;
}



/* Entry: 103db02c4; end: 103db0313;  */

undefined1  [16] FUN_103db02c4(void)

{
  return ZEXT816(0x11070fcd8);
}



/* Entry: 103db0314; end: 103db033b;  */

void FUN_103db0314(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103db033c; end: 103db034f;  */

void FUN_103db033c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103db0350; end: 103db0a5b;  */

void FUN_103db0350(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  code *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  code *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 auStack_70 [2];
  
  uVar17 = *param_2;
  func_0x0001000285a8(0x113009ea8,&UNK_10dc92488);
  puVar1 = auStack_70;
  auStack_70[0] = uVar17;
  func_0x0001000838ec();
  func_0x0001000285a8(0x113009eb0,&UNK_10dc92490);
  puVar2 = &UNK_11070fe50;
  func_0x000107c613fc(&UNK_11070fe50,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_103db0abc;
  func_0x0001000823a8(FUN_103db0abc,puVar2);
  pcVar4 = "FollowCreatorsPostRegistrationPrefetchEntryPointWrapperServiceProvider";
  func_0x000100082720("FollowCreatorsPostRegistrationPrefetchEntryPointWrapperServiceProvider",0x46,
                      2);
  func_0x000103db3524();
  pcVar5 = "SCBitmojiCameraPermissionRequestScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopeExposerSubjectServiceProvider",0x42,2);
  FUN_103db3594();
  func_0x000100082720("SCComposerPostRegisterationScopeImageLoadersRegistryScopeExposerSubjectServiceProvider"
                      ,0x56,2);
  func_0x0001000285a8(0x113009eb8,&UNK_10dc92800);
  puVar2 = &UNK_11070fe78;
  func_0x000107c613fc(&UNK_11070fe78,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  uVar17 = 0x103db0ac8;
  func_0x0001000823a8(0x103db0ac8,puVar2);
  func_0x000100082720("SCBillboardStringsPostRegSyncEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x113009ec0,&UNK_10dc924a0);
  puVar2 = &UNK_11070fea0;
  func_0x000107c613fc(&UNK_11070fea0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  *(undefined8 *)(puVar2 + 0x28) = param_11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  uVar6 = 0x103db0ad8;
  func_0x0001000823a8(0x103db0ad8,puVar2);
  func_0x000100082720("SCPostRegAddFriendsImpressionLoggerEntryPointWrapperServiceProvider",0x43,2);
  func_0x0001000285a8(0x113009ec8,&UNK_10dc924a8);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103db0ae4;
  func_0x0001000823a8(0x103db0ae4,uVar6);
  func_0x000100082720("SCPostRegAddFriendsImpressionLoggerServiceServiceProvider",0x39,2);
  FUN_103dc0f74(param_4,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_6,
                param_19,param_20,param_21,param_22,param_23);
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopedFactoryServiceProvider",0x3c,2);
  pcVar8 = pcVar4;
  func_0x000103db3578();
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopeExposerObservableServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar9 = FUN_103db0100;
  func_0x0001000823a8(FUN_103db0100,0);
  func_0x000100082720("SCPostRegistrationScopedServicesCleanupRelayServiceProvider",0x3b,2);
  pcVar10 = pcVar5;
  FUN_103db3624();
  func_0x000100082720("SCComposerPostRegisterationScopeImageLoadersRegistryScopeExposerObservableServiceProvider"
                      ,0x59,2);
  uVar11 = param_4;
  func_0x000104398460();
  func_0x000100082720("SCBitmojiCameraPermissionRequestScopeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x113009ed0,&UNK_10dc924c0);
  puVar2 = &UNK_11070fec8;
  func_0x000107c613fc(&UNK_11070fec8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_24;
  *(char **)(puVar2 + 0x20) = pcVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(pcVar10);
  pcVar12 = FUN_103db0b20;
  func_0x0001000823a8(FUN_103db0b20,puVar2);
  func_0x000100082720("ComposerPostRegistrationScopeImageLoadersRegistryEntryPointWrapperServiceProvider"
                      ,0x51,2);
  pcVar13 = pcVar4;
  FUN_103db3274(pcVar4,uVar11,pcVar5,uVar7);
  func_0x000100082720("PostRegistrationScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x113009ed8,&UNK_10dc924b0);
  puVar2 = &UNK_11070fef0;
  func_0x000107c613fc(&UNK_11070fef0,0x48,7);
  *(code **)(puVar2 + 0x10) = pcVar12;
  *(code **)(puVar2 + 0x18) = pcVar3;
  *(undefined8 **)(puVar2 + 0x20) = puVar1;
  *(char **)(puVar2 + 0x28) = pcVar13;
  *(undefined8 *)(puVar2 + 0x30) = uVar17;
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  *(code **)(puVar2 + 0x40) = pcVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(pcVar9);
  uVar14 = 0x103db0b2c;
  func_0x0001000823a8(0x103db0b2c,puVar2);
  func_0x000100082720("SCPostRegistrationScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x113009e38,&UNK_10dc92230);
  func_0x000107c6157c(uVar14);
  uVar15 = 0x103db0b40;
  func_0x0001000823a8(0x103db0b40,uVar14);
  func_0x000100082720("SCPostRegistrationScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x113009e28,&UNK_10dc92220);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x103db0b48;
  func_0x0001000823a8(0x103db0b48,uVar15);
  func_0x000100082720("SCPostRegistrationScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11070ff18;
  func_0x000107c613fc(&UNK_11070ff18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar16;
  *(code **)(puVar2 + 0x18) = pcVar9;
  func_0x000107c6157c(pcVar9);
  uVar16 = 0x103db0b50;
  func_0x0001000823a8(0x103db0b50,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_4);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000100082720("SCPostRegistrationScopeEntryPointProvider",0x29,2);
  *param_1 = uVar16;
  return;
}



/* Entry: 103db0a5c; end: 103db0abb;  */

void FUN_103db0a5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103db0350(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 103db0abc; end: 103db0aeb;  */

void FUN_103db0abc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_103db1214();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_103dba670(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000103dba534();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_103dba568();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 103db0aec; end: 103db0b1f;  */

void FUN_103db0aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103db0b20; end: 103db0b57;  */

void FUN_103db0b20(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103db0eac();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103db0d94(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103db0b58; end: 103db0c07;  */

void FUN_103db0b58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103db0eac();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103db0d94(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103db0c08; end: 103db0c77;  */

undefined8 FUN_103db0c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103db0d94(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 103db0c78; end: 103db0cab;  */

void FUN_103db0c78(void)

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



/* Entry: 103db0cac; end: 103db0cb3;  */

undefined8 FUN_103db0cac(void)

{
  return 0x1b;
}



/* Entry: 103db0cb4; end: 103db0d37;  */

void FUN_103db0cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103db0eec,param_2,FUN_103db0ef0,param_2,FUN_103db0f18,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103db0d38; end: 103db0d7f;  */

undefined8 FUN_103db0d38(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103dc0248();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103db0d80; end: 103db0d93;  */

void FUN_103db0d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11070ff30;
  return;
}



/* Entry: 103db0d94; end: 103db0e8f;  */

void FUN_103db0d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x113009fb8,&UNK_10dc92678);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010025a71c();
  puVar1 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  FUN_103dc0388(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  func_0x000103dbffb4();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6157c();
  FUN_103dbfff0();
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 103db0e90; end: 103db0eab;  */

undefined ** FUN_103db0e90(void)

{
  return &PTR_DAT_113066e50;
}



/* Entry: 103db0eac; end: 103db0ecb;  */

void FUN_103db0eac(void)

{
  func_0x000107c61168(&PTR_PTR_113009f48);
  return;
}



/* Entry: 103db0ecc; end: 103db0eef;  */

undefined1  [16] FUN_103db0ecc(void)

{
  return ZEXT816(0x11070ff70);
}



/* Entry: 103db0ef0; end: 103db0f17;  */

void FUN_103db0ef0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103db0f18; end: 103db0f1f;  */

undefined8 FUN_103db0f18(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103dc0248();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103db0f20; end: 103db1043;  */

void FUN_103db0f20(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_103db1214();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_103dba670(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000103dba534();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_103dba568();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 103db1044; end: 103db1123;  */

long FUN_103db1044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_103dba670(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103dba534();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_103dba568();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 103db1124; end: 103db1157;  */

void FUN_103db1124(void)

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



/* Entry: 103db1158; end: 103db115f;  */

undefined8 FUN_103db1158(void)

{
  return 0x1b;
}



/* Entry: 103db1160; end: 103db11e3;  */

void FUN_103db1160(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103db1254,param_2,FUN_103db1258,param_2,0x103db1280,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103db11e4; end: 103db1213;  */

undefined ** FUN_103db11e4(void)

{
  return &PTR_DAT_113066e50;
}



/* Entry: 103db1214; end: 103db1233;  */

void FUN_103db1214(void)

{
  func_0x000107c61168(&PTR_PTR_11300a028);
  return;
}



/* Entry: 103db1234; end: 103db1257;  */

undefined1  [16] FUN_103db1234(void)

{
  return ZEXT816(0x11070fff0);
}



/* Entry: 103db1258; end: 103db12ab;  */

void FUN_103db1258(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103db12ac; end: 103db1993;  */

void FUN_103db12ac(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  FUN_103db1aec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126ada48;
  func_0x000107c610f8();
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
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1b7fb0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2fca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 103db1994; end: 103db19df;  */

void FUN_103db1994(void)

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



/* Entry: 103db19e0; end: 103db19e7;  */

undefined8 FUN_103db19e0(void)

{
  return 0x1b;
}



/* Entry: 103db19e8; end: 103db1a6b;  */

void FUN_103db19e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103db1b2c,param_2,FUN_103db1b30,param_2,FUN_103db1b58,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103db1a6c; end: 103db1abb;  */

undefined8 FUN_103db1a6c(void)

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



/* Entry: 103db1abc; end: 103db1aeb;  */

undefined ** FUN_103db1abc(void)

{
  return &PTR_DAT_113066e50;
}



/* Entry: 103db1aec; end: 103db1b0b;  */

void FUN_103db1aec(void)

{
  func_0x000107c61168(&PTR_PTR_11300a100);
  return;
}



/* Entry: 103db1b0c; end: 103db1b2f;  */

undefined1  [16] FUN_103db1b0c(void)

{
  return ZEXT816(0x110710070);
}



/* Entry: 103db1b30; end: 103db1b57;  */

void FUN_103db1b30(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103db1b58; end: 103db1b5f;  */

undefined8 FUN_103db1b58(void)

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



/* Entry: 103db1b60; end: 103db1cb7;  */

void FUN_103db1b60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_103db2114();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103db1e48(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 103db1cb8; end: 103db1d03;  */

void FUN_103db1cb8(void)

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



/* Entry: 103db1d04; end: 103db1d57;  */

void FUN_103db1d04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103db1d58; end: 103db1d5f;  */

undefined8 FUN_103db1d58(void)

{
  return 0x1b;
}



/* Entry: 103db1d60; end: 103db1de3;  */

void FUN_103db1d60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103db2164,param_2,FUN_103db2168,param_2,FUN_103db2190,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103db1de4; end: 103db1e33;  */

undefined8 FUN_103db1de4(void)

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



/* Entry: 103db1e34; end: 103db1e47;  */

void FUN_103db1e34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1107100b0;
  return;
}



/* Entry: 103db1e48; end: 103db20f7;  */

void FUN_103db1e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ada50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1b7fb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1b7fd0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103db20f8);
  (*pcVar1)();
}



/* Entry: 103db20f8; end: 103db2113;  */

undefined ** FUN_103db20f8(void)

{
  return &PTR_DAT_113066e50;
}



/* Entry: 103db2114; end: 103db2133;  */

void FUN_103db2114(void)

{
  func_0x000107c61168(&PTR_PTR_11300a1f0);
  return;
}



/* Entry: 103db2134; end: 103db2167;  */

undefined1  [16] FUN_103db2134(void)

{
  return ZEXT816(0x1107100f0);
}



/* Entry: 103db2168; end: 103db218f;  */

void FUN_103db2168(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103db2190; end: 103db2197;  */

undefined8 FUN_103db2190(void)

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



/* Entry: 103db2198; end: 103db24af;  */

void FUN_103db2198(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074da50;
  ppuVar4 = &PTR_DAT_113066e50;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x11300a278;
  func_0x0001000285a8(0x11300a278,&UNK_10dc92b58);
  func_0x0001000a6ee8(&UNK_11070ff70,
                      "ComposerPostRegistrationScopeImageLoadersRegistryEntryPointWrapperScopeInitializationPluginKey"
                      ,0x5e,2,FUN_103db24b0,param_2,uVar2,&UNK_11070ff70,&PTR_DAT_113009ee0);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11070fff0,
                      "FollowCreatorsPostRegistrationPrefetchEntryPointWrapperScopeInitializationPluginKey"
                      ,0x53,2,0x103db24dc,param_3,uVar2,&UNK_11070fff0,&PTR_DAT_113009fc0);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_110710160;
  func_0x000107c613fc(&UNK_110710160,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110710578,"PostRegistrationScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_103db2508,puVar3,uVar2,&UNK_110710578,&PTR_DAT_11300a480);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110710070,
                      "SCBillboardStringsPostRegSyncEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,FUN_103db2548,param_6,uVar2,&UNK_110710070,&PTR_DAT_11300a098);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_110710110,
                      "SCPostRegAddFriendsImpressionLoggerEntryPointWrapperScopeInitializationPluginKey"
                      ,0x50,2,FUN_103db25f8,param_7,uVar2,&UNK_110710110,&PTR_DAT_11300a188);
  func_0x000107c61574(param_7);
  puVar3 = &UNK_110710188;
  func_0x000107c613fc(&UNK_110710188,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_11070fd18,"SCPostRegistrationScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_103db26cc,puVar3,uVar2,&UNK_11070fd18,&PTR_DAT_113009e40);
  func_0x000107c61574(puVar3);
  uVar2 = 0x11300a280;
  func_0x0001000285a8(0x11300a280,&UNK_10dc92b60);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCPostRegistrationScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 103db24b0; end: 103db2507;  */

void FUN_103db24b0(void)

{
  FUN_103db2574();
  return;
}



/* Entry: 103db2508; end: 103db2547;  */

void FUN_103db2508(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103db36cc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("PostRegistrationScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103db2548; end: 103db2573;  */

void FUN_103db2548(void)

{
  FUN_103db2574();
  return;
}



/* Entry: 103db2574; end: 103db25f7;  */

void FUN_103db2574(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 103db25f8; end: 103db2623;  */

void FUN_103db25f8(void)

{
  FUN_103db2574();
  return;
}



/* Entry: 103db2624; end: 103db26cb;  */

void FUN_103db2624(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107101b0;
  func_0x000107c613fc(&UNK_1107101b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103db2700;
  func_0x0001000823a8(FUN_103db2700,puVar1);
  func_0x000100082720("SCPostRegistrationScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103db26cc; end: 103db26d3;  */

void FUN_103db26cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1107101b0;
  func_0x000107c613fc(&UNK_1107101b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103db2700;
  func_0x0001000823a8(FUN_103db2700,puVar3);
  func_0x000100082720("SCPostRegistrationScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103db26d4; end: 103db26ff;  */

void FUN_103db26d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103db2700; end: 103db2727;  */

void FUN_103db2700(undefined8 *param_1)

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
  puVar1 = &UNK_11070fda0;
  func_0x000107c613fc(&UNK_11070fda0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103db0314;
  func_0x00010058fa64(FUN_103db0314,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103db2728; end: 103db2773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db2728(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11300a290) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103db2774; end: 103db289f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103db2774(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_x6;
  undefined8 in_x7;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (in_x6 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110710248;
    ppuVar3 = &puStack_98;
    lStack_78 = in_x6;
    uStack_70 = in_x7;
    func_0x000107c60bc4();
    uVar1 = uStack_70;
    func_0x000107c6157c(in_x7);
    func_0x000107c61574(uVar1);
  }
  puVar2 = PTR_PTR_1126a78d8;
  func_0x000107c610f8();
  func_0x000107c45628();
  func_0x000107c60bd0(ppuVar3);
  puStack_98 = puVar2;
  func_0x00010008a7c8(&uStack_68,&puStack_98);
  func_0x000100083b20(&puStack_98);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(puStack_98);
  return puVar2;
}



/* Entry: 103db28a0; end: 103db29c3; -[_TtC22SCAddFriendsScopeProxy25SCAddFriendsScopeServices buildWithAddFriendsContext:uiContainer:deckContainerFactory:placement:usesNavigationPresentation:addFriendsWorkflowDelegate:onClickDone:] */

void FUN_103db28a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1107102c8;
    func_0x000107c613fc(&UNK_1107102c8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    uVar3 = 0x103db2a44;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  FUN_103db2774(param_3,param_4,param_5,param_6,param_7,param_8,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103db29c4; end: 103db29f7;  */

void FUN_103db29c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103db29f8; end: 103db2a4f; -[_TtC22SCAddFriendsScopeProxy25SCAddFriendsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db29f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300a290));
  return;
}


