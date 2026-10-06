/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014e8868; end: 1014e8937;  */

undefined8 FUN_1014e8868(void)

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
  
  func_0x000107c61428(0x112daa7c0,&uStack_40,0x20,0);
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
    FUN_1014e8938();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1014e8938; end: 1014e8957;  */

void FUN_1014e8938(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc380);
  return;
}



/* Entry: 1014e8958; end: 1014e89c3;  */

void FUN_1014e8958(void)

{
  func_0x0001000285a8(0x112daa7c8,&UNK_10d952a28);
  func_0x0001000823a8(0x1014e8998,0);
  return;
}



/* Entry: 1014e89c4; end: 1014e89ff; -[_TtC33CountryCodePickerScopeGraphBridge41CountryCodePickerScopeGraphBridgeServices init] */

void FUN_1014e89c4(undefined8 param_1)

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



/* Entry: 1014e8a00; end: 1014e8a33;  */

void FUN_1014e8a00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014e8a34; end: 1014e8a3b;  */

undefined8 FUN_1014e8a34(void)

{
  return 0x1b;
}



/* Entry: 1014e8a3c; end: 1014e8bb3;  */

void FUN_1014e8a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d29c0;
  func_0x000107c613fc(&UNK_1103d29c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1014e8bb4,puVar1);
  return;
}



/* Entry: 1014e8bb4; end: 1014e8bbb;  */

void FUN_1014e8bb4(undefined8 *param_1)

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
  func_0x000107c61428(0x112daa7c0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112daa7c0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103d2a58;
  func_0x000107c613fc(&UNK_1103d2a58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1014e8c68;
  func_0x00010058fa64(0x1014e8c68,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014e8bbc; end: 1014e8c17;  */

void FUN_1014e8bbc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112daa7c0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112daa7c0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1014e8c18; end: 1014e8c6f;  */

undefined ** FUN_1014e8c18(void)

{
  return &PTR_DAT_113066a48;
}



/* Entry: 1014e8c70; end: 1014e8cb7; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e8c70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daa820;
  func_0x000107c61428(param_1 + _DAT_112daa820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014e8cb8; end: 1014e8d0f; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e8cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daa820;
  func_0x000107c61428(param_1 + _DAT_112daa820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014e8d10; end: 1014e8d57; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint countryCodePickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e8d10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daa828;
  func_0x000107c61428(param_1 + _DAT_112daa828,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1014e8d58; end: 1014e8dbb; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint setCountryCodePickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e8d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daa828;
  func_0x000107c61428(param_1 + _DAT_112daa828,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1014e8dbc; end: 1014e8eef;  */

/* WARNING: Possible PIC construction at 0x0001014e8e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014e8e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014e8eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e8e78) */
/* WARNING: Removing unreachable block (ram,0x0001014e8e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e8dbc(void)

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
  func_0x000107c4086c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1014e85f0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1014e8868();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e8ef0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112daa750) = lVar5;
    *(long *)(lVar4 + _DAT_112daa758) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1014e8ef0; end: 1014e8f17; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1014e8ef0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014e8dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014e8f18; end: 1014e8f5b; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_1014e8f18(undefined8 param_1)

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



/* Entry: 1014e8f5c; end: 1014e90f3;  */

void FUN_1014e8f5c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef1078790)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010ef87870,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CountryCodePickerScopeGraphBridge/SCCountryCodePickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5a,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e90f4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53a24();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1014e90f4; end: 1014e919f; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1014e90f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014e8f5c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014e91a0; end: 1014e920b; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e91a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daa820,0);
  *(undefined8 *)(param_1 + _DAT_112daa828) = 0;
  *(undefined8 *)(param_1 + _DAT_112daa830) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014e920c; end: 1014e923f;  */

void FUN_1014e920c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014e9240; end: 1014e9287; -[SCCountryCodePickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014e926c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e9270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e9240(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daa820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daa828));
  return;
}



/* Entry: 1014e9288; end: 1014e92a7;  */

void FUN_1014e9288(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc430);
  return;
}



/* Entry: 1014e92a8; end: 1014e92ef; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e92a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daa860;
  func_0x000107c61428(param_1 + _DAT_112daa860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1014e92f0; end: 1014e9347; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e92f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daa860;
  func_0x000107c61428(param_1 + _DAT_112daa860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1014e9348; end: 1014e941f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e9348(undefined8 param_1,long param_2)

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
    FUN_1014e8848();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112daa788) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014e9420);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112daa790);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112daa868);
    *(long **)(unaff_x20 + _DAT_112daa868) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1014e9420; end: 1014e9447; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint begin] */

void FUN_1014e9420(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014e9348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014e9448; end: 1014e95bf;  */

/* WARNING: Possible PIC construction at 0x0001014e94b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014e9548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014e94b4) */
/* WARNING: Removing unreachable block (ram,0x0001014e954c) */
/* WARNING: Removing unreachable block (ram,0x0001014e9564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e9448(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112daa868);
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



/* Entry: 1014e95c0; end: 1014e95c7;  */

void FUN_1014e95c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014e95c8; end: 1014e95fb; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint end] */

void FUN_1014e95c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014e9448();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014e95fc; end: 1014e971b;  */

void FUN_1014e95fc(long param_1,long param_2,long param_3)

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
                        "CountryCodePickerScopeGraphBridge/SCSCCountryCodePickerScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e971c);
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



/* Entry: 1014e971c; end: 1014e97c7; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1014e971c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1014e95fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014e97c8; end: 1014e9827; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e97c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112daa860,0);
  *(undefined8 *)(param_1 + _DAT_112daa868) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014e9828; end: 1014e985b;  */

void FUN_1014e9828(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014e985c; end: 1014e9893; -[SCSCCountryCodePickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e985c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112daa860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daa868));
  return;
}



/* Entry: 1014e9894; end: 1014e98b3;  */

void FUN_1014e9894(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc4f8);
  return;
}



/* Entry: 1014e98b4; end: 1014e991f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e98b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1014e9ca8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112daa8a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1014e9920; end: 1014e998b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e9920(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daa8a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014e998c; end: 1014e99eb; -[_TtC47NGOCodeVerificationScopedFactoryServiceProvider35SCNGOCodeVerificationScopedServices init] */

void FUN_1014e998c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NGOCodeVerificationScopedFactoryServiceProvider.SCNGOCodeVerificationScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014e99b8);
  (*pcVar1)();
}



/* Entry: 1014e99ec; end: 1014e99fb; -[_TtC47NGOCodeVerificationScopedFactoryServiceProvider35SCNGOCodeVerificationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e99ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daa8a0));
  return;
}



/* Entry: 1014e99fc; end: 1014e9a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014e99fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d2c70;
  func_0x000107c613fc(&UNK_1103d2c70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1014e9d40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014e9a68; end: 1014e9b03;  */

void FUN_1014e9a68(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d2b80;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d2b80;
  return;
}



/* Entry: 1014e9b04; end: 1014e9b3b;  */

void FUN_1014e9b04(long *param_1)

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



/* Entry: 1014e9b3c; end: 1014e9b43;  */

undefined8 FUN_1014e9b3c(void)

{
  return 0x1b;
}



/* Entry: 1014e9b44; end: 1014e9c77;  */

void FUN_1014e9b44(undefined8 *param_1)

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
  puVar1 = &UNK_1103d2c98;
  func_0x000107c613fc(&UNK_1103d2c98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014e9d18;
  func_0x00010058fa64(FUN_1014e9d18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014e9c78; end: 1014e9ca7;  */

undefined ** FUN_1014e9c78(void)

{
  return &PTR_DAT_113066dc0;
}



/* Entry: 1014e9ca8; end: 1014e9cc7;  */

void FUN_1014e9ca8(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc5b8);
  return;
}



/* Entry: 1014e9cc8; end: 1014e9d17;  */

undefined1  [16] FUN_1014e9cc8(void)

{
  return ZEXT816(0x1103d2bd0);
}



/* Entry: 1014e9d18; end: 1014e9d3f;  */

void FUN_1014e9d18(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1014e9d40; end: 1014e9d43;  */

void FUN_1014e9d40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1014e9d44; end: 1014e9dbf;  */

void FUN_1014e9d44(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112daa910,&UNK_10d952e58);
  func_0x000107c613fc();
  pcVar1 = FUN_1014ea0d4;
  func_0x0001000841fc(FUN_1014ea0d4,param_2);
  func_0x000100084214(&UNK_10d952e20,0x31,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1014e9dc0; end: 1014e9dd7;  */

void FUN_1014e9dc0(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112daa910,&UNK_10d952e58);
  func_0x000107c613fc();
  pcVar1 = FUN_1014ea0d4;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10d952e20,0x31,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1014e9dd8; end: 1014ea0d3;  */

void FUN_1014e9dd8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  func_0x0001000285a8(0x112daa918,&UNK_10d952e60);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1014ead74();
  func_0x000100082720("NGOCodeVerificationScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa920,&UNK_10d952e80);
  puVar3 = &UNK_1103d2cf8;
  func_0x000107c613fc(&UNK_1103d2cf8,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1014ea0dc;
  func_0x0001000823a8(0x1014ea0dc,puVar3);
  func_0x000100082720("SCNGOCodeVerificationEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1014e9b04;
  func_0x0001000823a8(FUN_1014e9b04,0);
  func_0x000100082720("SCNGOCodeVerificationScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112daa928,&UNK_10d952e68);
  puVar3 = &UNK_1103d2d20;
  func_0x000107c613fc(&UNK_1103d2d20,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1014ea0e4;
  func_0x0001000823a8(0x1014ea0e4,puVar3);
  func_0x000100082720("SCNGOCodeVerificationScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112daa8a8,&UNK_10d952bf0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1014ea0f0;
  func_0x0001000823a8(0x1014ea0f0,uVar5);
  func_0x000100082720("SCNGOCodeVerificationScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa898,&UNK_10d952be0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1014ea0f8;
  func_0x0001000823a8(0x1014ea0f8,uVar6);
  func_0x000100082720("SCNGOCodeVerificationScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d2d48;
  func_0x000107c613fc(&UNK_1103d2d48,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1014ea12c;
  func_0x0001000823a8(FUN_1014ea12c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCNGOCodeVerificationScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1014ea0d4; end: 1014ea0ff;  */

void FUN_1014ea0d4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001000285a8(0x112daa918,&UNK_10d952e60);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1014ead74();
  func_0x000100082720("NGOCodeVerificationScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa920,&UNK_10d952e80);
  puVar3 = &UNK_1103d2cf8;
  func_0x000107c613fc(&UNK_1103d2cf8,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1014ea0dc;
  func_0x0001000823a8(0x1014ea0dc,puVar3);
  func_0x000100082720("SCNGOCodeVerificationEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1014e9b04;
  func_0x0001000823a8(FUN_1014e9b04,0);
  func_0x000100082720("SCNGOCodeVerificationScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112daa928,&UNK_10d952e68);
  puVar3 = &UNK_1103d2d20;
  func_0x000107c613fc(&UNK_1103d2d20,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1014ea0e4;
  func_0x0001000823a8(0x1014ea0e4,puVar3);
  func_0x000100082720("SCNGOCodeVerificationScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112daa8a8,&UNK_10d952bf0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1014ea0f0;
  func_0x0001000823a8(0x1014ea0f0,uVar5);
  func_0x000100082720("SCNGOCodeVerificationScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa898,&UNK_10d952be0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1014ea0f8;
  func_0x0001000823a8(0x1014ea0f8,uVar6);
  func_0x000100082720("SCNGOCodeVerificationScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103d2d48;
  func_0x000107c613fc(&UNK_1103d2d48,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1014ea12c;
  func_0x0001000823a8(FUN_1014ea12c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCNGOCodeVerificationScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1014ea100; end: 1014ea12b;  */

void FUN_1014ea100(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014ea12c; end: 1014ea133;  */

void FUN_1014ea12c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d2b80;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d2b80;
  return;
}



/* Entry: 1014ea134; end: 1014ea21b;  */

void FUN_1014ea134(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1014ea480();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1014ea338(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ea21c; end: 1014ea247;  */

void FUN_1014ea21c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014ea248; end: 1014ea24f;  */

undefined8 FUN_1014ea248(void)

{
  return 0x1b;
}



/* Entry: 1014ea250; end: 1014ea2d3;  */

void FUN_1014ea250(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1014ea4c0,param_2,FUN_1014ea4c4,param_2,FUN_1014ea4ec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1014ea2d4; end: 1014ea323;  */

undefined8 FUN_1014ea2d4(void)

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



/* Entry: 1014ea324; end: 1014ea337;  */

void FUN_1014ea324(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103d2d60;
  return;
}



/* Entry: 1014ea338; end: 1014ea463;  */

void FUN_1014ea338(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7580;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef87b90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1014ea464; end: 1014ea47f;  */

undefined ** FUN_1014ea464(void)

{
  return &PTR_DAT_113066dc0;
}



/* Entry: 1014ea480; end: 1014ea49f;  */

void FUN_1014ea480(void)

{
  func_0x000107c61168(&PTR_PTR_112daa998);
  return;
}



/* Entry: 1014ea4a0; end: 1014ea4c3;  */

undefined1  [16] FUN_1014ea4a0(void)

{
  return ZEXT816(0x1103d2da0);
}



/* Entry: 1014ea4c4; end: 1014ea4eb;  */

void FUN_1014ea4c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1014ea4ec; end: 1014ea4f3;  */

undefined8 FUN_1014ea4ec(void)

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



/* Entry: 1014ea4f4; end: 1014ea52f;  */

void FUN_1014ea4f4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1014ea530();
  func_0x0001000a7f38("SCNGOCodeVerificationScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 1014ea530; end: 1014ea71b;  */

void FUN_1014ea530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d960;
  ppuVar4 = &PTR_DAT_113066dc0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103d2df0;
  func_0x000107c613fc(&UNK_1103d2df0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112daaa00;
  func_0x0001000285a8(0x112daaa00,&UNK_10d952fc8);
  func_0x0001000a6ee8(&UNK_1103d3000,
                      "NGOCodeVerificationScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_1014ea71c,puVar2,uVar3,&UNK_1103d3000,&PTR_DAT_112daaa90);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103d2da0,
                      "SCNGOCodeVerificationEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1014ea7d0,param_3,uVar3,&UNK_1103d2da0,&PTR_DAT_112daa930);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1103d2e18;
  func_0x000107c613fc(&UNK_1103d2e18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103d2c10,
                      "SCNGOCodeVerificationScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1014ea880,puVar2,uVar3,&UNK_1103d2c10,&PTR_DAT_112daa8b0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112daaa08;
  func_0x0001000285a8(0x112daaa08,&UNK_10d952fd0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1014ea71c; end: 1014ea75b;  */

void FUN_1014ea71c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1014eae58(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("NGOCodeVerificationScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ea75c; end: 1014ea7cf;  */

void FUN_1014ea75c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1014ea8bc;
  func_0x0001000823a8(0x1014ea8bc,param_3);
  func_0x000100082720("SCNGOCodeVerificationEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ea7d0; end: 1014ea7d7;  */

void FUN_1014ea7d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1014ea8bc;
  func_0x0001000823a8();
  func_0x000100082720("SCNGOCodeVerificationEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1014ea7d8; end: 1014ea87f;  */

void FUN_1014ea7d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d2e40;
  func_0x000107c613fc(&UNK_1103d2e40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1014ea8b4;
  func_0x0001000823a8(FUN_1014ea8b4,puVar1);
  func_0x000100082720("SCNGOCodeVerificationScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 1014ea880; end: 1014ea887;  */

void FUN_1014ea880(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d2e40;
  func_0x000107c613fc(&UNK_1103d2e40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1014ea8b4;
  func_0x0001000823a8(FUN_1014ea8b4,puVar3);
  func_0x000100082720("SCNGOCodeVerificationScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1014ea888; end: 1014ea8b3;  */

void FUN_1014ea888(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014ea8b4; end: 1014ea8c3;  */

void FUN_1014ea8b4(undefined8 *param_1)

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
  puVar1 = &UNK_1103d2c98;
  func_0x000107c613fc(&UNK_1103d2c98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1014e9d18;
  func_0x00010058fa64(FUN_1014e9d18,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014ea8c4; end: 1014ea94b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014ea8c4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1014eac84();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112daaa10) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112daaa18) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ea94c);
  (*pcVar1)();
}



/* Entry: 1014ea94c; end: 1014ea9ab; -[_TtC35NGOCodeVerificationScopeGraphBridge50NGOCodeVerificationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1014ea94c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NGOCodeVerificationScopeGraphBridge.NGOCodeVerificationScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014ea978);
  (*pcVar1)();
}



/* Entry: 1014ea9ac; end: 1014ea9e3; -[_TtC35NGOCodeVerificationScopeGraphBridge50NGOCodeVerificationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014ea9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014ea9cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ea9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daaa10));
  return;
}



/* Entry: 1014ea9e4; end: 1014eaa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014ea9e4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112daaa18),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112daaa10));
  return;
}



/* Entry: 1014eaa0c; end: 1014eaa2b;  */

void FUN_1014eaa0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc678);
  return;
}



/* Entry: 1014eaa2c; end: 1014eaab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014eaa2c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daaa48) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112daaa50);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014eaab4);
  (*pcVar2)();
}



/* Entry: 1014eaab4; end: 1014eab9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014eaab4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daaa48);
  *(undefined **)(unaff_x20 + _DAT_112daaa48) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112daaa50);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112daaa50))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103d2f60;
  func_0x000107c613fc(&UNK_1103d2f60,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1014eaba0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1014eab9c; end: 1014eaba7;  */

void FUN_1014eab9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1014eaba8; end: 1014eac07; -[_TtC35NGOCodeVerificationScopeGraphBridge50SCNGOCodeVerificationScopedServicesSaberEntryPoint init] */

void FUN_1014eaba8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NGOCodeVerificationScopeGraphBridge.SCNGOCodeVerificationScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014eabd4);
  (*pcVar1)();
}



/* Entry: 1014eac08; end: 1014eac3f; -[_TtC35NGOCodeVerificationScopeGraphBridge50SCNGOCodeVerificationScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014eac08(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daaa50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daaa48));
  return;
}



/* Entry: 1014eac40; end: 1014eac43;  */

void FUN_1014eac40(void)

{
  return;
}



/* Entry: 1014eac44; end: 1014eac63;  */

void FUN_1014eac44(void)

{
  FUN_1014eaab4();
  return;
}



/* Entry: 1014eac64; end: 1014eac83;  */

void FUN_1014eac64(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc740);
  return;
}



/* Entry: 1014eac84; end: 1014ead53;  */

undefined8 FUN_1014eac84(void)

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
  
  func_0x000107c61428(0x112daaa80,&uStack_40,0x20,0);
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
    FUN_1014ead54();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1014ead54; end: 1014ead73;  */

void FUN_1014ead54(void)

{
  func_0x000107c61168(&PTR_PTR_1127dc808);
  return;
}



/* Entry: 1014ead74; end: 1014eaddf;  */

void FUN_1014ead74(void)

{
  func_0x0001000285a8(0x112daaa88,&UNK_10d9530a8);
  func_0x0001000823a8(0x1014eadb4,0);
  return;
}



/* Entry: 1014eade0; end: 1014eae1b; -[_TtC35NGOCodeVerificationScopeGraphBridge43NGOCodeVerificationScopeGraphBridgeServices init] */

void FUN_1014eade0(undefined8 param_1)

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



/* Entry: 1014eae1c; end: 1014eae4f;  */

void FUN_1014eae1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014eae50; end: 1014eae57;  */

undefined8 FUN_1014eae50(void)

{
  return 0x1b;
}



/* Entry: 1014eae58; end: 1014eafcf;  */

void FUN_1014eae58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d2fa8;
  func_0x000107c613fc(&UNK_1103d2fa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1014eafd0,puVar1);
  return;
}



/* Entry: 1014eafd0; end: 1014eafd7;  */

void FUN_1014eafd0(undefined8 *param_1)

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
  func_0x000107c61428(0x112daaa80,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112daaa80,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103d3040;
  func_0x000107c613fc(&UNK_1103d3040,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1014eb084;
  func_0x00010058fa64(0x1014eb084,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1014eafd8; end: 1014eb033;  */

void FUN_1014eafd8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112daaa80,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112daaa80,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1014eb034; end: 1014eb08b;  */

undefined ** FUN_1014eb034(void)

{
  return &PTR_DAT_113066dc0;
}


