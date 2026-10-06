/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a72328; end: 100a7234f; -[SCSCUserSessionScopedServicesSaberEntryPoint begin] */

void FUN_100a72328(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a72350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a72350; end: 100a72427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a72350(undefined8 param_1,long param_2)

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
    FUN_100a72470();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112db2410) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a72428);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112db2418);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112db38e8);
    *(long **)(unaff_x20 + _DAT_112db38e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100a72428; end: 100a7246f; -[SCSCUserSessionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a72428(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112db38e0;
  func_0x000107c61428(param_1 + _DAT_112db38e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a72470; end: 100a7248f;  */

void FUN_100a72470(void)

{
  func_0x000107c61168(&PTR_PTR_1127e18b8);
  return;
}



/* Entry: 100a72490; end: 100a75d93;  */

void FUN_100a72490(long param_1)

{
  int extraout_w8;
  
  func_0x0001009ec1a0(param_1 + 0xe8);
  if (extraout_w8 != 0) {
    func_0x000107c36e70();
    func_0x000107c36e60();
    func_0x000107c36e68();
    func_0x000107c36e80();
    func_0x000107c36e7c();
  }
  return;
}



/* Entry: 100a75d94; end: 100a75dff; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a75d94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130448c0,0);
  *(undefined8 *)(param_1 + _DAT_1130448c8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130448d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a75e00; end: 100a75eab; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a75e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a75eac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a75eac; end: 100a76043;  */

void FUN_100a75eac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e23c40)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f1dc3c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SaturnUserSessionScopeGraphBridge/SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5a,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a76044);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58bb4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a76044; end: 100a7609b; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76044(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130448c0;
  func_0x000107c61428(param_1 + _DAT_1130448c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7609c; end: 100a760ff; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint setSaturnUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7609c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130448c8;
  func_0x000107c61428(param_1 + _DAT_1130448c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a76100; end: 100a76127; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a76100(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a76128();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a76128; end: 100a7625b;  */

/* WARNING: Possible PIC construction at 0x000100a761e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a761fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a76218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a761e4) */
/* WARNING: Removing unreachable block (ram,0x000100a76200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76128(void)

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
  func_0x000107c5165c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a763fc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a7641c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7625c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113044678) = lVar5;
    *(long *)(lVar4 + _DAT_113044680) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a7625c; end: 100a7636b;  */

long * FUN_100a7625c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  
  func_0x0001009df4c0();
  plVar1 = *(long **)(param_1 + 0xd0);
  if (plVar1 == (long *)0x0) {
    func_0x000107c386b0();
    func_0x000107c386e0();
    func_0x000107c386f8();
    func_0x000107c386f4();
    func_0x0001009df560(extraout_x8);
    if ((bool)in_ZR) {
      return (long *)0x0;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x70);
    func_0x0001009df560(extraout_x8);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000100a7629c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar1;
    }
  }
  func_0x000107c60e78();
  return (long *)0x10000000;
}



/* Entry: 100a7636c; end: 100a763b3; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7636c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130448c0;
  func_0x000107c61428(param_1 + _DAT_1130448c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a763b4; end: 100a763fb; -[SCSaturnUserSessionScopeGraphBridgeSaberEntryPoint saturnUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a763b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130448c8;
  func_0x000107c61428(param_1 + _DAT_1130448c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a763fc; end: 100a7641b;  */

void FUN_100a763fc(void)

{
  func_0x000107c61168(&PTR_PTR_11297bcf0);
  return;
}



/* Entry: 100a7641c; end: 100a764eb;  */

undefined8 FUN_100a7641c(void)

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
  
  func_0x000107c61428(0x113044850,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1002338b8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a764ec; end: 100a764ff;  */

void FUN_100a764ec(void)

{
  return;
}



/* Entry: 100a76500; end: 100a7654f;  */

void FUN_100a76500(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x618) >> 3 & 1) != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
LAB_100a76530:
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      uVar5 = 0;
      uVar3 = 0;
      goto LAB_100a76544;
    }
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x5e0);
    if ((lVar1 == 0) && (lVar1 = *(long *)(lVar4 + 0x5d8), lVar1 == 0)) {
      plVar2 = (long *)(param_1 + 0x58);
      goto LAB_100a76530;
    }
  }
  uVar5 = *(undefined8 *)(lVar1 + 0x1a0);
  uVar3 = *(undefined8 *)(lVar1 + 0x1a8);
LAB_100a76544:
  *param_2 = uVar5;
  *param_3 = uVar3;
  return;
}



/* Entry: 100a76550; end: 100a76703;  */

/* WARNING: Possible PIC construction at 0x000100a7a498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a7a49c) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4b0) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4b8) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4cc) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4d8) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4fc) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4e4) */

void FUN_100a76550(long param_1)

{
  long *plVar1;
  long unaff_x19;
  undefined1 auStack_178 [312];
  
  plVar1 = (long *)(param_1 + -0x20);
  if (*(long *)(param_1 + 0x1048) != 0) {
    func_0x0001009fff88();
    func_0x000100a76598();
  }
  func_0x000100a79764(plVar1);
  func_0x000100a7a05c(plVar1);
  func_0x0001009ea0dc();
  func_0x0001009f443c();
  (**(code **)(*plVar1 + 0x120))();
  if (*(short *)((long)plVar1 + 0x152) == 0) {
    func_0x000107c38a6c();
    func_0x000107c38a5c(auStack_178);
    func_0x000107c38af0();
    FUN_1001549e4();
    func_0x000107c38a70();
  }
  if ((*(byte *)(unaff_x19 + 0x310) & 1) == 0) {
    func_0x000107c38a6c();
    func_0x000107c38a5c(auStack_178);
    func_0x000107c38af0();
    FUN_1001549e4();
    func_0x000107c38a70();
  }
                    /* WARNING: Could not recover jumptable at 0x000100a7a50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(unaff_x19 + 0x58) + 0x1f8) + 0x10))();
  return;
}



/* Entry: 100a76704; end: 100a7676f; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76704(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113044cc0,0);
  *(undefined8 *)(param_1 + _DAT_113044cc8) = 0;
  *(undefined8 *)(param_1 + _DAT_113044cd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a76770; end: 100a7681b; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a76770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7681c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a7681c; end: 100a769b3;  */

void FUN_100a7681c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e238e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f1dc720,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SearchUserSessionScopeGraphBridge/SCSearchUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5a,2,0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a769b4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58d58();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a769b4; end: 100a76a0b; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a769b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044cc0;
  func_0x000107c61428(param_1 + _DAT_113044cc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a76a0c; end: 100a76a6f; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint setSearchUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044cc8;
  func_0x000107c61428(param_1 + _DAT_113044cc8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a76a70; end: 100a76a97; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a76a70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a76a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a76a98; end: 100a76bcb;  */

/* WARNING: Possible PIC construction at 0x000100a76b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a76b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a76b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a76b54) */
/* WARNING: Removing unreachable block (ram,0x000100a76b70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76a98(void)

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
  func_0x000107c51af8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a76c5c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a76c7c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a76bcc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113044b50) = lVar5;
    *(long *)(lVar4 + _DAT_113044b58) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a76bcc; end: 100a76c13; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76bcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044cc0;
  func_0x000107c61428(param_1 + _DAT_113044cc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a76c14; end: 100a76c5b; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint searchUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76c14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044cc8;
  func_0x000107c61428(param_1 + _DAT_113044cc8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a76c5c; end: 100a76c7b;  */

void FUN_100a76c5c(void)

{
  func_0x000107c61168(&PTR_PTR_11297c248);
  return;
}



/* Entry: 100a76c7c; end: 100a76d4b;  */

undefined8 FUN_100a76c7c(void)

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
  
  func_0x000107c61428(0x113044c58,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10021a71c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a76d4c; end: 100a76db7; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76d4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113044e98,0);
  *(undefined8 *)(param_1 + _DAT_113044ea0) = 0;
  *(undefined8 *)(param_1 + _DAT_113044ea8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a76db8; end: 100a76e63; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a76db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a76e64(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a76e64; end: 100a76ffb;  */

void FUN_100a76e64(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e236d0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f1dc930,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SecatUserSessionScopeGraphBridge/SCSecatUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a76ffc);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58d64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a76ffc; end: 100a77053; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a76ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044e98;
  func_0x000107c61428(param_1 + _DAT_113044e98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a77054; end: 100a770b7; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint setSecatUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044ea0;
  func_0x000107c61428(param_1 + _DAT_113044ea0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a770b8; end: 100a770df; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a770b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a770e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a770e0; end: 100a77213;  */

/* WARNING: Possible PIC construction at 0x000100a77198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a771b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a771d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a7719c) */
/* WARNING: Removing unreachable block (ram,0x000100a771b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a770e0(void)

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
  func_0x000107c51b08();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a772a4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a772c4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a77214);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113044dc0) = lVar5;
    *(long *)(lVar4 + _DAT_113044dc8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a77214; end: 100a7725b; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044e98;
  func_0x000107c61428(param_1 + _DAT_113044e98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a7725c; end: 100a772a3; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint secatUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7725c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044ea0;
  func_0x000107c61428(param_1 + _DAT_113044ea0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a772a4; end: 100a772c3;  */

void FUN_100a772a4(void)

{
  func_0x000107c61168(&PTR_PTR_11297c4e0);
  return;
}



/* Entry: 100a772c4; end: 100a77393;  */

undefined8 FUN_100a772c4(void)

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
  
  func_0x000107c61428(0x113044e30,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1001f5644();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a77394; end: 100a7742f;  */

undefined8 * FUN_100a77394(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000100177c98();
  return param_1;
}



/* Entry: 100a77430; end: 100a774af; -[SCSCArgosServiceSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77430(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113044ed8,0);
  func_0x000107c61614(param_1 + _DAT_113044ee0,0);
  *(undefined8 *)(param_1 + _DAT_113044ee8) = 0;
  *(undefined8 *)(param_1 + _DAT_113044ef0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a774b0; end: 100a7755b; -[SCSCArgosServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_100a774b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7755c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a7755c; end: 100a7775f;  */

void FUN_100a7755c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef0e23640)) ||
       (func_0x000107c605b8(0xd000000000000028,0x800000010f1dc9c0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58d60();
    }
    else {
      if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0e23610)) {
        uVar2 = 0xd000000000000015;
        func_0x000107c605b8(0xd000000000000015,0x800000010f1dc9f0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SecatUserSessionScopeGraphBridge/SCSCArgosServiceSaberEntryPoint.swift"
                              ,0x46,2,0x2f,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a77760);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57ff0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a77760; end: 100a7776b; -[SCSCArgosServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044ed8;
  func_0x000107c61428(param_1 + _DAT_113044ed8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7776c; end: 100a777bf;  */

void FUN_100a7776c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a777c0; end: 100a777cb; -[SCSCArgosServiceSaberEntryPoint setSecatUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a777c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044ee0;
  func_0x000107c61428(param_1 + _DAT_113044ee0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a777cc; end: 100a7782f; -[SCSCArgosServiceSaberEntryPoint setSCArgosServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a777cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044ee8;
  func_0x000107c61428(param_1 + _DAT_113044ee8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a77830; end: 100a778f3;  */

void FUN_100a77830(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100a77838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 100a778f4; end: 100a7791b; -[SCSCArgosServiceSaberEntryPoint begin] */

void FUN_100a778f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a7791c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a7791c; end: 100a77a9f;  */

/* WARNING: Possible PIC construction at 0x000100a77a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a77a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a77a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a77a20) */
/* WARNING: Removing unreachable block (ram,0x000100a77a30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7791c(void)

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
    func_0x000107c51b04();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50a48();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a77b44();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113044e40);
        *(undefined8 *)(lVar2 + _DAT_113044df8) = uVar6;
        *(long *)(lVar2 + _DAT_113044e00) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113044e00);
        FUN_100083b20(&lStack_78);
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



/* Entry: 100a77aa0; end: 100a77aab; -[SCSCArgosServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77aa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044ed8;
  func_0x000107c61428(param_1 + _DAT_113044ed8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a77aac; end: 100a77aef;  */

void FUN_100a77aac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a77af0; end: 100a77afb; -[SCSCArgosServiceSaberEntryPoint secatUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77af0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044ee0;
  func_0x000107c61428(param_1 + _DAT_113044ee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a77afc; end: 100a77b43; -[SCSCArgosServiceSaberEntryPoint sCArgosServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a77afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044ee8;
  func_0x000107c61428(param_1 + _DAT_113044ee8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a77b44; end: 100a77b63;  */

void FUN_100a77b44(void)

{
  func_0x000107c61168(&PTR_PTR_11297c5a8);
  return;
}



/* Entry: 100a77b64; end: 100a78117;  */

long FUN_100a77b64(long param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  
  param_1 = param_1 + 0x1f0;
  uStack0000000000000008 = param_2;
  func_0x0001009e3d4c(param_1,&stack0x00000008);
  func_0x000100a77ca4();
  return param_1 + 0x28;
}



/* Entry: 100a78118; end: 100a78183; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a78118(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113045790,0);
  *(undefined8 *)(param_1 + _DAT_113045798) = 0;
  *(undefined8 *)(param_1 + _DAT_1130457a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a78184; end: 100a7822f; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a78184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a78230(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a78230; end: 100a783c7;  */

void FUN_100a78230(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e23180)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f1dce80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SemcUserSessionScopeGraphBridge/SCSemcUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a783c8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58e8c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a783c8; end: 100a7841f; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a783c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045790;
  func_0x000107c61428(param_1 + _DAT_113045790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a78420; end: 100a78483; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint setSemcUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a78420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113045798;
  func_0x000107c61428(param_1 + _DAT_113045798,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a78484; end: 100a784ab; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a78484(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a784ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a784ac; end: 100a785df;  */

/* WARNING: Possible PIC construction at 0x000100a78564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a78580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7859c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a78568) */
/* WARNING: Removing unreachable block (ram,0x000100a78584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a784ac(void)

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
  func_0x000107c51d88();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a78670();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a78690();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a785e0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113044f20) = lVar5;
    *(long *)(lVar4 + _DAT_113044f28) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a785e0; end: 100a78627; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a785e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045790;
  func_0x000107c61428(param_1 + _DAT_113045790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a78628; end: 100a7866f; -[SCSemcUserSessionScopeGraphBridgeSaberEntryPoint semcUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a78628(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113045798;
  func_0x000107c61428(param_1 + _DAT_113045798,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a78670; end: 100a7868f;  */

void FUN_100a78670(void)

{
  func_0x000107c61168(&PTR_PTR_11297c8c8);
  return;
}



/* Entry: 100a78690; end: 100a7875f;  */

undefined8 FUN_100a78690(void)

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
  
  func_0x000107c61428(0x1130456e0,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_100231198();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a78760; end: 100a79897;  */

void FUN_100a78760(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
  func_0x0001009bfda0();
  lVar2 = 0x50;
  func_0x000107c60e20();
  func_0x0001009e3ee8();
  puVar3 = (undefined8 *)*unaff_x19;
  uVar1 = *(undefined1 *)(puVar3 + 2);
  uVar4 = *puVar3;
  *(undefined8 *)(lVar2 + 0x28) = puVar3[1];
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  *(undefined1 *)(lVar2 + 0x30) = uVar1;
  *(undefined2 *)(lVar2 + 0x32) = *(undefined2 *)((long)puVar3 + 0x12);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 **)(lVar2 + 0x38) = (undefined8 *)(lVar2 + 0x40);
  return;
}



/* Entry: 100a79898; end: 100a79917; -[SCSCSnapTokenObservableServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79898(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130457d0,0);
  func_0x000107c61614(param_1 + _DAT_1130457d8,0);
  *(undefined8 *)(param_1 + _DAT_1130457e0) = 0;
  *(undefined8 *)(param_1 + _DAT_1130457e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a79918; end: 100a799c3; -[SCSCSnapTokenObservableServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a79918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a799c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a799c4; end: 100a79bc7;  */

void FUN_100a799c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e230f0)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1dcf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e230c0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000024,0x800000010f1dcf40,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SemcUserSessionScopeGraphBridge/SCSCSnapTokenObservableServicesSaberEntryPoint.swift"
                                ,0x54,2,0x36,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a79bc8);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588b4();
        goto LAB_100a79a50;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58e88();
  }
LAB_100a79a50:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a79bc8; end: 100a79bd3; -[SCSCSnapTokenObservableServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130457d0;
  func_0x000107c61428(param_1 + _DAT_1130457d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a79bd4; end: 100a79c27;  */

void FUN_100a79bd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a79c28; end: 100a79c33; -[SCSCSnapTokenObservableServicesSaberEntryPoint setSemcUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130457d8;
  func_0x000107c61428(param_1 + _DAT_1130457d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a79c34; end: 100a79c97; -[SCSCSnapTokenObservableServicesSaberEntryPoint setSCSnapTokenObservableServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130457e0;
  func_0x000107c61428(param_1 + _DAT_1130457e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a79c98; end: 100a79cbf; -[SCSCSnapTokenObservableServicesSaberEntryPoint begin] */

void FUN_100a79c98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a79cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a79cc0; end: 100a79e43;  */

/* WARNING: Possible PIC construction at 0x000100a79dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a79dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a79dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a79dc4) */
/* WARNING: Removing unreachable block (ram,0x000100a79dd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79cc0(void)

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
    func_0x000107c51d84();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5130c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a79ee8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113045720);
        *(undefined8 *)(lVar2 + _DAT_113044f58) = uVar6;
        *(long *)(lVar2 + _DAT_113044f60) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113044f60);
        FUN_100083b20(&lStack_78);
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



/* Entry: 100a79e44; end: 100a79e4f; -[SCSCSnapTokenObservableServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79e44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130457d0;
  func_0x000107c61428(param_1 + _DAT_1130457d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a79e50; end: 100a79e93;  */

void FUN_100a79e50(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a79e94; end: 100a79e9f; -[SCSCSnapTokenObservableServicesSaberEntryPoint semcUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79e94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130457d8;
  func_0x000107c61428(param_1 + _DAT_1130457d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a79ea0; end: 100a79ee7; -[SCSCSnapTokenObservableServicesSaberEntryPoint sCSnapTokenObservableServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a79ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130457e0;
  func_0x000107c61428(param_1 + _DAT_1130457e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a79ee8; end: 100a79f07;  */

void FUN_100a79ee8(void)

{
  func_0x000107c61168(&PTR_PTR_11297c990);
  return;
}



/* Entry: 100a79f08; end: 100a7a1bb;  */

void FUN_100a79f08(undefined8 param_1)

{
  undefined8 *unaff_x21;
  
  *unaff_x21 = param_1;
  return;
}



/* Entry: 100a7a1bc; end: 100a7a1c3;  */

void FUN_100a7a1bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)&UNK_101a82598;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101a82590;
  puStack_78 = &UNK_110437700;
  uStack_68 = uVar1;
  func_0x000107c60bc4(&puStack_90);
  uVar3 = uStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  puVar6 = puVar4;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  pcStack_70 = FUN_1002bf870;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101a82590;
  puStack_78 = &UNK_110437728;
  uStack_68 = uVar2;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126a8730;
  func_0x000107c610f8();
  func_0x000107c482bc();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  *param_1 = puVar8;
  return;
}



/* Entry: 100a7a1c4; end: 100a7a327;  */

void FUN_100a7a1c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)&UNK_101a82598;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101a82590;
  puStack_78 = &UNK_110437700;
  uStack_68 = param_2;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  puVar4 = puVar2;
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  pcStack_70 = FUN_1002bf870;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101a82590;
  puStack_78 = &UNK_110437728;
  uStack_68 = param_3;
  func_0x000107c60bc4(&puStack_90);
  uVar1 = uStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = PTR_PTR_1126a8730;
  func_0x000107c610f8();
  func_0x000107c482bc();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  *param_1 = puVar6;
  return;
}



/* Entry: 100a7a328; end: 100a7a32f;  */

void FUN_100a7a328(long param_1,long param_2)

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



/* Entry: 100a7a330; end: 100a7a3d3; -[SCSnapTokenObservableServices initWithRefreshTokenUpdates:cloud1TLTokenUpdates:] */

undefined1 *
FUN_100a7a330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702958;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a7a3d4; end: 100a7a547;  */

void FUN_100a7a3d4(void)

{
  return;
}



/* Entry: 100a7a548; end: 100a7a5b3; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7a548(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113047770,0);
  *(undefined8 *)(param_1 + _DAT_113047778) = 0;
  *(undefined8 *)(param_1 + _DAT_113047780) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a7a5b4; end: 100a7a65f; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a7a5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7a660(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a7a660; end: 100a7a7f7;  */

void FUN_100a7a660(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e22100)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f1ddf00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SharingUserSessionScopeGraphBridge/SCSharingUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7a7f8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a7a7f8; end: 100a7a84f; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7a7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113047770;
  func_0x000107c61428(param_1 + _DAT_113047770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7a850; end: 100a7a8b3; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint setSharingUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7a850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113047778;
  func_0x000107c61428(param_1 + _DAT_113047778,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a7a8b4; end: 100a7a8db; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a7a8b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a7a8dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a7a8dc; end: 100a7aa0f;  */

/* WARNING: Possible PIC construction at 0x000100a7a994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7a9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7a9cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a7a998) */
/* WARNING: Removing unreachable block (ram,0x000100a7a9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7a8dc(void)

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
  func_0x000107c5aa88();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a7aaa0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a7aac0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7aa10);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113046f00) = lVar5;
    *(long *)(lVar4 + _DAT_113046f08) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a7aa10; end: 100a7aa57; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7aa10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113047770;
  func_0x000107c61428(param_1 + _DAT_113047770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a7aa58; end: 100a7aa9f; -[SCSharingUserSessionScopeGraphBridgeSaberEntryPoint sharingUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7aa58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113047778;
  func_0x000107c61428(param_1 + _DAT_113047778,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


