/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103428908; end: 103428963;  */

void FUN_103428908(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f67d18,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f67d18,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103428964; end: 1034289bb;  */

undefined ** FUN_103428964(void)

{
  return &PTR_DAT_113066bf8;
}



/* Entry: 1034289bc; end: 103428a03; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034289bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67d78;
  func_0x000107c61428(param_1 + _DAT_112f67d78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103428a04; end: 103428a5b; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67d78;
  func_0x000107c61428(param_1 + _DAT_112f67d78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103428a5c; end: 103428aa3; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint sCLensActivityCenterScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428a5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67d80;
  func_0x000107c61428(param_1 + _DAT_112f67d80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103428aa4; end: 103428b07; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint setSCLensActivityCenterScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67d80;
  func_0x000107c61428(param_1 + _DAT_112f67d80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103428b08; end: 103428c3b;  */

/* WARNING: Possible PIC construction at 0x000103428bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103428bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103428bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103428bc4) */
/* WARNING: Removing unreachable block (ram,0x000103428be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428b08(void)

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
  func_0x000107c50e70();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10342833c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1034285b4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103428c3c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f67ca8) = lVar5;
    *(long *)(lVar4 + _DAT_112f67cb0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103428c3c; end: 103428c63; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103428c3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103428b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103428c64; end: 103428ca7; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint end] */

void FUN_103428c64(undefined8 param_1)

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



/* Entry: 103428ca8; end: 103428e3f;  */

void FUN_103428ca8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0eb3b80)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f14c480,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCLensActivityCenterScopeGraphBridge/SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103428e40);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58418();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103428e40; end: 103428eeb; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103428e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103428ca8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103428eec; end: 103428f57; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428eec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f67d78,0);
  *(undefined8 *)(param_1 + _DAT_112f67d80) = 0;
  *(undefined8 *)(param_1 + _DAT_112f67d88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103428f58; end: 103428f8b;  */

void FUN_103428f58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103428f8c; end: 103428fd3; -[SCSCLensActivityCenterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103428fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103428fbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428f8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f67d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f67d80));
  return;
}



/* Entry: 103428fd4; end: 103428ff3;  */

void FUN_103428fd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9750);
  return;
}



/* Entry: 103428ff4; end: 10342903b; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428ff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f67db8;
  func_0x000107c61428(param_1 + _DAT_112f67db8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10342903c; end: 103429093; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342903c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f67db8;
  func_0x000107c61428(param_1 + _DAT_112f67db8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103429094; end: 10342916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103429094(undefined8 param_1,long param_2)

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
    FUN_103428594();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f67ce0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342916c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f67ce8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f67dc0);
    *(long **)(unaff_x20 + _DAT_112f67dc0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10342916c; end: 103429193; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint begin] */

void FUN_10342916c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103429094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103429194; end: 10342930b;  */

/* WARNING: Possible PIC construction at 0x0001034291fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103429200) */
/* WARNING: Removing unreachable block (ram,0x000103429298) */
/* WARNING: Removing unreachable block (ram,0x0001034292b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103429194(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f67dc0);
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



/* Entry: 10342930c; end: 103429313;  */

void FUN_10342930c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103429314; end: 103429347; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint end] */

void FUN_103429314(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103429194();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103429348; end: 103429467;  */

void FUN_103429348(long param_1,long param_2,long param_3)

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
                        "SCLensActivityCenterScopeGraphBridge/SCSCLensActivityCenterScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x34,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103429468);
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



/* Entry: 103429468; end: 103429513; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103429468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103429348(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103429514; end: 103429573; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103429514(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f67db8,0);
  *(undefined8 *)(param_1 + _DAT_112f67dc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103429574; end: 1034295a7;  */

void FUN_103429574(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034295a8; end: 1034295df; -[SCSCLensActivityCenterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034295a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f67db8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f67dc0));
  return;
}



/* Entry: 1034295e0; end: 1034295ff;  */

void FUN_1034295e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9818);
  return;
}



/* Entry: 103429600; end: 10342964b;  */

void FUN_103429600(undefined8 param_1)

{
  func_0x0001000285a8(0x112f67df0,&UNK_10dbc3ad0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1034296c0,param_1);
  return;
}



/* Entry: 10342964c; end: 1034296bf;  */

void FUN_10342964c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3d1dc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x00010342b5fc(0);
  func_0x000107c610f8();
  FUN_10342aeb8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034296c0; end: 103429707;  */

void FUN_1034296c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3d1dc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x00010342b5fc(0);
  func_0x000107c610f8();
  FUN_10342aeb8();
  *param_1 = uVar1;
  return;
}



/* Entry: 103429708; end: 10342978b;  */

void FUN_103429708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 10342978c; end: 1034297af;  */

void FUN_10342978c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 1034297b0; end: 103429d4f;  */

/* WARNING: Possible PIC construction at 0x000103429844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103429c78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103429ce0) */
/* WARNING: Removing unreachable block (ram,0x000103429cd0) */
/* WARNING: Removing unreachable block (ram,0x000103429c9c) */
/* WARNING: Removing unreachable block (ram,0x000103429c8c) */
/* WARNING: Removing unreachable block (ram,0x000103429d08) */
/* WARNING: Removing unreachable block (ram,0x000103429cf8) */
/* WARNING: Removing unreachable block (ram,0x000103429d48) */
/* WARNING: Removing unreachable block (ram,0x000103429d38) */
/* WARNING: Removing unreachable block (ram,0x000103429d28) */
/* WARNING: Removing unreachable block (ram,0x000103429c2c) */
/* WARNING: Removing unreachable block (ram,0x000103429c1c) */
/* WARNING: Removing unreachable block (ram,0x000103429c0c) */
/* WARNING: Removing unreachable block (ram,0x000103429bfc) */
/* WARNING: Removing unreachable block (ram,0x000103429bec) */
/* WARNING: Removing unreachable block (ram,0x000103429994) */
/* WARNING: Removing unreachable block (ram,0x000103429998) */
/* WARNING: Removing unreachable block (ram,0x000103429ce8) */
/* WARNING: Removing unreachable block (ram,0x0001034299c8) */
/* WARNING: Removing unreachable block (ram,0x000103429d18) */
/* WARNING: Removing unreachable block (ram,0x0001034299d0) */
/* WARNING: Removing unreachable block (ram,0x000103429bd0) */
/* WARNING: Removing unreachable block (ram,0x000103429be4) */
/* WARNING: Removing unreachable block (ram,0x000103429864) */
/* WARNING: Removing unreachable block (ram,0x000103429c3c) */
/* WARNING: Removing unreachable block (ram,0x000103429898) */
/* WARNING: Removing unreachable block (ram,0x000103429ca4) */
/* WARNING: Removing unreachable block (ram,0x0001034298bc) */
/* WARNING: Removing unreachable block (ram,0x000103429c5c) */
/* WARNING: Removing unreachable block (ram,0x0001034298f0) */
/* WARNING: Removing unreachable block (ram,0x000103429c6c) */
/* WARNING: Removing unreachable block (ram,0x000103429920) */
/* WARNING: Removing unreachable block (ram,0x000103429cc8) */
/* WARNING: Removing unreachable block (ram,0x000103429944) */
/* WARNING: Removing unreachable block (ram,0x000103429c84) */
/* WARNING: Removing unreachable block (ram,0x000103429978) */
/* WARNING: Removing unreachable block (ram,0x000103429848) */
/* WARNING: Removing unreachable block (ram,0x000103429c7c) */
/* WARNING: Removing unreachable block (ram,0x000103429ca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034297b0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
  }
  else {
    func_0x000107c5fadc(0xd000000000000024,0x800000010f14c5b0);
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 103429d50; end: 103429e97;  */

undefined * FUN_103429d50(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c3d1dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afc98;
    func_0x000107c61168();
    func_0x000107c3e26c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined **)(unaff_x20 + 0x68) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar6);
    puVar5 = &UNK_110654068;
    func_0x000107c613fc(&UNK_110654068,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    pcStack_50 = FUN_103429e98;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e10;
    puStack_58 = &UNK_110654080;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c3fa70(lVar2);
    func_0x000107c60bd0(ppuVar4);
    puVar5 = puVar3;
    func_0x000107c4f3ec(puVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  return puVar5;
}



/* Entry: 103429e98; end: 103429ebb;  */

void FUN_103429e98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103429ebc; end: 103429f4f;  */

void FUN_103429ebc(void)

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
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 103429f50; end: 103429f8f;  */

void FUN_103429f50(void)

{
  FUN_1034297b0();
  return;
}



/* Entry: 103429f90; end: 103429faf;  */

void FUN_103429f90(void)

{
  func_0x000107c61168(&PTR_PTR_112f67e60);
  return;
}



/* Entry: 103429fb0; end: 10342a023;  */

void FUN_103429fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10342a024; end: 10342a123;  */

undefined * FUN_10342a024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1106540d8;
  func_0x000107c613fc(&UNK_1106540d8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_10342a17c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10342a184;
  puStack_58 = &UNK_1106540f0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = PTR_PTR_1126ad228;
  func_0x000107c610f8(PTR_PTR_1126ad228);
  func_0x000107c4719c();
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 10342a124; end: 10342a17b;  */

long FUN_10342a124(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010342be0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  return lVar1;
}



/* Entry: 10342a17c; end: 10342a183;  */

long FUN_10342a17c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010342be0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return lVar3;
}



/* Entry: 10342a184; end: 10342a1bb;  */

void FUN_10342a184(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10342a1bc; end: 10342a1d7;  */

void FUN_10342a1bc(long param_1,long param_2)

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



/* Entry: 10342a1d8; end: 10342a1f3;  */

/* WARNING: Possible PIC construction at 0x00010342a1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342a1e8) */

void FUN_10342a1d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10342a1f4; end: 10342a23f;  */

void FUN_10342a1f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10342a240; end: 10342a2bb;  */

void FUN_10342a240(undefined8 param_1)

{
  if (lRam0000000112f67f40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7645ec);
  return;
}



/* Entry: 10342a2bc; end: 10342a2df;  */

void FUN_10342a2bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10342a024();
  *param_1 = param_2;
  return;
}



/* Entry: 10342a2e0; end: 10342a5e3;  */

undefined * FUN_10342a2e0(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lStack_100;
  undefined1 auStack_f8 [64];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    uVar3 = 0x112d48640;
    func_0x0001000285a8(0x112d48640,&UNK_10d910200);
    func_0x000107c60498(puVar13,uVar3);
    puVar15 = puVar13;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  lVar12 = 0;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar7 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = lVar12 << 9 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 3;
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + uVar7);
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar7);
      uVar3 = 0;
      uStack_b8 = uVar16;
      lStack_b0 = lVar14;
      func_0x000100f89a24(0);
      func_0x000107c61174(lVar14);
      func_0x000107c61174(uVar16);
      func_0x000107c61174(lVar14);
      func_0x000107c61174(uVar16);
      func_0x000107c6147c(auStack_a8,&uStack_b8,uVar3,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(lVar14);
      if (lStack_b0 == 0) {
        func_0x000107c61574(param_1);
        FUN_10342ac98(&lStack_b0,0x112ea49f8,&UNK_10dab7b90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10342a5e4);
        (*pcVar1)();
      }
      lStack_100 = lStack_b0;
      func_0x000100102924(auStack_a8,auStack_f8);
      lVar14 = lStack_100;
      puVar6 = auStack_88;
      func_0x000100102924(auStack_f8,puVar6);
      uVar3 = *(undefined8 *)(puVar15 + 0x28);
      lVar4 = lVar14;
      func_0x000107c5faec(lVar14);
      func_0x000107c6068c(&lStack_100,uVar3);
      plVar5 = &lStack_100;
      func_0x000107c5fb58(plVar5,lVar4,puVar6);
      func_0x000107c606a8();
      func_0x000107c6142c(puVar6);
      uVar11 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
      uVar10 = (ulong)plVar5 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar10 >> 6;
      uVar7 = -1L << (uVar10 & 0x3f) & (*(ulong *)(puVar15 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar7 == 0) {
        bVar2 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar10 = uVar8 + 1;
          if ((uVar10 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10342a5c0);
            (*pcVar1)();
          }
          uVar8 = 0;
          if (uVar10 != uVar7) {
            uVar8 = uVar10;
          }
          bVar2 = (bool)(uVar10 == uVar7 | bVar2);
        } while (*(ulong *)(puVar15 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar15 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar10 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar15 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar15 + uVar8 + 0x40)
      ;
      *(long *)(*(long *)(puVar15 + 0x30) + uVar7 * 8) = lVar14;
      func_0x000100102924(auStack_88,*(long *)(puVar15 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10342a5bc);
      (*pcVar1)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar12) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar12];
  }
  func_0x000107c61574(param_1);
  return puVar15;
}



/* Entry: 10342a5e4; end: 10342a643; -[_TtC34SCLensActivityCenterImplementation30LACLensExplorerButtonViewModel attributedStringForElementId:withPreferredFont:] */

void FUN_10342a5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10342aa64(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10342a644; end: 10342a71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342a644(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (param_1 == 4) {
    func_0x00010921ddc8();
    func_0x000107c61180();
  }
  else if (param_1 == 0) {
    if (*(char *)(unaff_x20 + _DAT_112f67ff0) == '\x01') {
      uVar1 = 0xd000000000000016;
      func_0x000107c5fadc(0xd000000000000016,0x800000010f14c650);
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c450cc();
    }
    else {
      uVar1 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010f14c630);
      func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c450cc();
    }
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10342a720; end: 10342a75b; -[_TtC34SCLensActivityCenterImplementation30LACLensExplorerButtonViewModel imageForElementId:] */

void FUN_10342a720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10342a644(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10342a75c; end: 10342a823;  */

/* WARNING: Possible PIC construction at 0x00010342a7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342a7fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342a75c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long unaff_x20;
  
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f14c670);
  bVar3 = *(char *)(unaff_x20 + _DAT_112f67ff0) == '\0';
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10342a824; end: 10342a8f7; -[_TtC34SCLensActivityCenterImplementation30LACLensExplorerButtonViewModel deepLinkUrl] */

void FUN_10342a824(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c61174(param_1);
  FUN_10342a75c(puVar4);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10342a8f8; end: 10342a957; -[_TtC34SCLensActivityCenterImplementation30LACLensExplorerButtonViewModel init] */

void FUN_10342a8f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterImplementation.LACLensExplorerButtonViewModel",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342a924);
  (*pcVar1)();
}



/* Entry: 10342a958; end: 10342a96b; -[_TtC34SCLensActivityCenterImplementation30LACLensExplorerButtonViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342a958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f67ff8 + 8))
  ;
  return;
}



/* Entry: 10342a96c; end: 10342aa63;  */

undefined * FUN_10342a96c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112f68038);
    puVar2 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar3;
      func_0x000100ecbb30();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10342aa60);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10342aa64);
        (*pcVar1)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 10342aa64; end: 10342ac67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10342aa64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  if (param_1 == 3) {
    lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f67ff8))[1];
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f67ff8);
      lVar1 = 0x112f68028;
      func_0x0001000285a8(0x112f68028,&UNK_10dbc3ca8);
      func_0x000107c61534();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      uVar2 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      func_0x000107c61174();
      func_0x00010052bbec();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c3fdc0();
      func_0x000107c61180();
      func_0x000107c615e8(uVar2);
      *(undefined8 *)(lVar1 + 0x28) = uVar3;
      lVar4 = lVar1;
      FUN_10342a96c(lVar1);
      func_0x000107c61588(lVar1);
      FUN_10342ac98((undefined8 *)(lVar1 + 0x20),0x112f68030,&UNK_10dbc3cb0);
      lVar1 = lVar4;
      FUN_10342a2e0(lVar4);
      func_0x000107c6142c(lVar4);
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x000107c5fadc(uVar7,lVar6);
      uVar2 = 0;
      func_0x000100eca28c(0);
      uVar3 = uVar2;
      func_0x000100ecbdec();
      lVar6 = lVar1;
      func_0x000107c5f9dc(lVar1,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
      func_0x000107c6142c(lVar1);
      func_0x000107c48af8(puVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar6);
      return puVar5;
    }
  }
  else if (param_1 == 2) {
    if (*(char *)(unaff_x20 + _DAT_112f67ff0) == '\x01') {
      FUN_10342cc50();
    }
    else {
      func_0x00010342cd1c();
    }
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48af4(puVar5);
    func_0x000107c61170(param_1);
    return puVar5;
  }
  return (undefined *)0x0;
}



/* Entry: 10342ac68; end: 10342ac77;  */

undefined1  [16] FUN_10342ac68(void)

{
  return ZEXT816(0x110654140);
}



/* Entry: 10342ac78; end: 10342ac97;  */

void FUN_10342ac78(void)

{
  func_0x000107c61168(&PTR_PTR_1128d98d8);
  return;
}



/* Entry: 10342ac98; end: 10342acd7;  */

undefined8 FUN_10342ac98(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10342acd8; end: 10342ad1b; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10342acd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68040;
  func_0x000107c61428(param_1 + _DAT_112f68040,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10342ad1c; end: 10342ad6b; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin setPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ad1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68040;
  func_0x000107c61428(param_1 + _DAT_112f68040,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10342ad6c; end: 10342adb3; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin bannerModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ad6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68048;
  func_0x000107c61428(param_1 + _DAT_112f68048,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10342adb4; end: 10342ae17; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin setBannerModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342adb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68048;
  func_0x000107c61428(param_1 + _DAT_112f68048,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10342ae18; end: 10342ae43; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin bannerSectionId] */

void FUN_10342ae18(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f14c700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10342ae44; end: 10342aeb7; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin canProvideBannerForFeedId:] */

uint FUN_10342ae44(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == 0x554f595f524f46) && (param_2 == -0x1900000000000000)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 10342aeb8; end: 10342b123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10342aeb8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_70;
  long lStack_68;
  
  puVar10 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f68040) = 0xffffffffffffffff;
  lVar2 = _DAT_112f68060;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar3 = _DAT_112f68068;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  lVar6 = _DAT_112f68050;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar6) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f68058) = param_1;
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  lVar5 = 0;
  FUN_10342ac78();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f67ff8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar6 + _DAT_112f67ff0) = 0;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar11);
  plVar7 = &lStack_70;
  func_0x000107c61154(plVar7,puVar4);
  func_0x000107c4d664(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(plVar7);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar3);
  FUN_10342bce8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar11);
  uVar8 = 0;
  func_0x000107c6010c(0);
  func_0x000107c4d664(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  FUN_10342b82c();
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar3);
  puVar4 = PTR_PTR_1126ad230;
  func_0x000107c610f8();
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f14c700);
  func_0x000107c48540();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + _DAT_112f68048) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10342b124();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_1);
  return puVar10;
}



/* Entry: 10342b124; end: 10342b317;  */

/* WARNING: Possible PIC construction at 0x00010342b1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342b2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342b1f0) */
/* WARNING: Removing unreachable block (ram,0x00010342b2d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342b124(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar1 = *(char **)(unaff_x20 + _DAT_112f68058);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c5eefc();
    if (*(long *)(pcVar2 + 0x10) == 0) {
      func_0x000107c6142c();
    }
    else {
      func_0x000107c61434(*(undefined8 *)(pcVar2 + 0x28));
      func_0x000107c6142c(pcVar2);
      func_0x000107c3e644(pcVar1);
      func_0x000107c61180();
      pcVar2 = pcVar1;
      func_0x000107c421ac();
      func_0x000107c61180();
      func_0x000107c61170(pcVar1);
      pcVar1 = "loadBadge()";
      func_0x0001000c10c0("loadBadge()");
      func_0x000107c61180();
      func_0x000107c4da88(pcVar2,param_2,pcVar1);
      func_0x000107c61180();
      func_0x000107c61170(pcVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
    return;
  }
  return;
}



/* Entry: 10342b318; end: 10342b367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342b318(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f68050));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10342b368; end: 10342b3cf; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342b368(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f68050);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10342b3d0; end: 10342b437; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010342b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342b40c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342b3f0) */
/* WARNING: Removing unreachable block (ram,0x00010342b410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342b3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68048));
  return;
}



/* Entry: 10342b438; end: 10342b583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342b438(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x000107c5c38c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar7 = 0;
      puVar8 = (undefined1 *)0x0;
    }
    else {
      lVar7 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_1;
    func_0x000107c5ab40();
    lVar2 = 0;
    FUN_10342ac78();
    lVar3 = lVar2;
    func_0x000107c610f8();
    plVar4 = (long *)(lVar3 + _DAT_112f67ff8);
    *plVar4 = lVar7;
    plVar4[1] = (long)puVar8;
    *(char *)(lVar3 + _DAT_112f67ff0) = (char)lVar1;
    plVar4 = &lStack_68;
    lStack_68 = lVar3;
    lStack_60 = lVar2;
    func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112f68060));
    uVar5 = *(undefined8 *)(param_2 + _DAT_112f68068);
    func_0x000107c61174(uVar5);
    func_0x000107c5ac20(param_1);
    uVar6 = (ulong)((uint)param_1 ^ 1);
    func_0x000107c5fca0(uVar6);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(plVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 10342b584; end: 10342b5cf;  */

void FUN_10342b584(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10342b5d0; end: 10342b61b; -[_TtC34SCLensActivityCenterImplementation21LACLensExplorerPlugin init] */

void FUN_10342b5d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterImplementation.LACLensExplorerPlugin",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342b5fc);
  (*pcVar1)();
}



/* Entry: 10342b61c; end: 10342b693;  */

void FUN_10342b61c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10342bce8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10342b694; end: 10342b82b;  */

undefined * FUN_10342b694(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126ac588;
  func_0x000107c610f8(PTR_PTR_1126ac588);
  func_0x000107c48974(0x3ff0000000000000,0,0,0);
  lVar2 = 0x112d38c88;
  FUN_10342b61c(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar3 = 2;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar3 = 3;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  puVar4 = PTR_PTR_1126ac590;
  func_0x000107c610f8(PTR_PTR_1126ac590);
  uVar3 = 0;
  FUN_10342bce8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(puVar1);
  lVar5 = lVar2;
  func_0x000107c5fc48(lVar2,uVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c47cb8(0x3fd0000000000000,puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar5);
  puVar6 = PTR_PTR_1126d0d70;
  func_0x000107c61168(PTR_PTR_1126d0d70);
  func_0x000107c44558();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ac578;
  func_0x000107c610f8(PTR_PTR_1126ac578);
  func_0x000107c46744(0);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  return puVar7;
}



/* Entry: 10342b82c; end: 10342bcc3;  */

undefined * FUN_10342b82c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar1 = 0x112d38c88;
  FUN_10342b61c(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 7;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  uVar2 = 0;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 1;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uVar2 = 4;
  func_0x000107c5fe40();
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  puVar3 = PTR_PTR_1126ac588;
  func_0x000107c610f8(PTR_PTR_1126ac588);
  func_0x000107c48974(0,0,0,0x3ff8000000000000);
  puVar4 = PTR_PTR_1126ac590;
  func_0x000107c610f8(PTR_PTR_1126ac590);
  uVar2 = 0;
  FUN_10342bce8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(puVar3);
  lVar5 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c47cb8(0x4000000000000000,puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  puVar6 = PTR_PTR_1126ac580;
  func_0x000107c610f8(PTR_PTR_1126ac580);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f14c700);
  func_0x000107c47118(puVar6);
  func_0x000107c61170(uVar2);
  lVar1 = 0x112f1e5b0;
  FUN_10342b61c(0x112f1e5b0,&PTR_PTR_1126ac578,0x112f1e7b8,&UNK_10db56a40);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xb;
  *(undefined8 *)(lVar1 + 0x10) = 5;
  puVar7 = PTR_PTR_1126ac588;
  func_0x000107c610f8(PTR_PTR_1126ac588);
  func_0x000107c48974(0,0x3ff0000000000000,0x4000000000000000,0xc000000000000000);
  puVar8 = PTR_PTR_1126ac598;
  func_0x000107c610f8(PTR_PTR_1126ac598);
  func_0x000107c48708(0x4008000000000000);
  puVar9 = PTR_PTR_1126d0d70;
  func_0x000107c61168();
  puVar10 = puVar9;
  func_0x000107c45150();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170();
  *(undefined **)(lVar1 + 0x20) = puVar11;
  FUN_10342b694();
  *(undefined **)(lVar1 + 0x28) = puVar10;
  puVar7 = PTR_PTR_1126ac5a0;
  func_0x000107c610f8(PTR_PTR_1126ac5a0);
  func_0x000107c48b0c();
  puVar8 = puVar9;
  func_0x000107c5c8ac(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar8);
  *(undefined **)(lVar1 + 0x30) = puVar7;
  puVar7 = PTR_PTR_1126ac5a0;
  func_0x000107c610f8(PTR_PTR_1126ac5a0);
  func_0x000107c48b0c();
  puVar8 = puVar9;
  func_0x000107c5c8ac(puVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar8);
  *(undefined **)(lVar1 + 0x38) = puVar7;
  puVar7 = PTR_PTR_1126ac588;
  func_0x000107c610f8(PTR_PTR_1126ac588);
  func_0x000107c48974(0,0x3ff0000000000000,0,0);
  puVar8 = PTR_PTR_1126ac598;
  func_0x000107c610f8(PTR_PTR_1126ac598);
  func_0x000107c48708(0x4008000000000000);
  func_0x000107c45150(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  puVar7 = PTR_PTR_1126ac5a8;
  func_0x000107c610f8(PTR_PTR_1126ac5a8);
  uVar2 = 0;
  FUN_10342bce8(0,0x112f1e5b0,&PTR_PTR_1126ac578);
  lVar5 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
  func_0x000107c4605c(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar5);
  return puVar7;
}



/* Entry: 10342bcc4; end: 10342bce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342bcc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar9 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar9,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c5c38c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar8 = 0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      lVar8 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    lVar2 = param_1;
    func_0x000107c5ab40();
    lVar3 = 0;
    FUN_10342ac78();
    lVar4 = lVar3;
    func_0x000107c610f8();
    plVar5 = (long *)(lVar4 + _DAT_112f67ff8);
    *plVar5 = lVar8;
    plVar5[1] = (long)puVar9;
    *(char *)(lVar4 + _DAT_112f67ff0) = (char)lVar2;
    plVar5 = &lStack_68;
    lStack_68 = lVar4;
    lStack_60 = lVar3;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    func_0x000107c4d664(*(undefined8 *)(lVar1 + _DAT_112f68060));
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112f68068);
    func_0x000107c61174(uVar6);
    func_0x000107c5ac20(param_1);
    uVar7 = (ulong)((uint)param_1 ^ 1);
    func_0x000107c5fca0(uVar7);
    func_0x000107c4d664(uVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(plVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 10342bce8; end: 10342bd27;  */

void FUN_10342bce8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10342bd28; end: 10342bddf; -[_TtC34SCLensActivityCenterImplementation27LensActivityCenterPresenter presentLensActivityCenterWithModalUIContainer:wasEntrypointBadged:] */

/* WARNING: Possible PIC construction at 0x00010342bd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342bdbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342bd74) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010342bdc0) */

void FUN_10342bd28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001043688dc(param_3,param_1,param_4);
    func_0x000107c42c1c(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10342bde0; end: 10342be2b;  */

void FUN_10342bde0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10342be2c; end: 10342be97; -[_TtC34SCLensActivityCenterImplementation27LensActivityCenterPresenter didExitActivityCenter] */

/* WARNING: Possible PIC construction at 0x00010342be74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342be78) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10342be2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x10));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10342be98; end: 10342c027;  */

void FUN_10342be98(undefined8 param_1,byte param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  lVar1 = unaff_x20;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (param_3 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1106541c8;
      lStack_70 = param_3;
      puStack_68 = param_4;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c6157c(param_4);
      func_0x000107c61574();
    }
    FUN_10342c628();
    func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_presentViewController_animated_c_112621588,
                        param_1,param_2 & 1,ppuVar4);
  }
  else {
    func_0x000107c61170();
    puVar2 = &UNK_110654200;
    func_0x000107c613fc(&UNK_110654200,0x38,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    puVar2[0x20] = param_2 & 1;
    *(long *)(puVar2 + 0x28) = param_3;
    *(undefined **)(puVar2 + 0x30) = param_4;
    lStack_70 = 0x10342c890;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110654218;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c420a8(unaff_x20);
    ppuVar4 = ppuVar3;
  }
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 10342c028; end: 10342c0ef;  */

void FUN_10342c028(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_80;
  if (param_4 == 0) {
    ppuVar2 = (undefined **)0x0;
    uStack_48 = param_1;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110654240;
    lStack_60 = param_4;
    uStack_58 = param_5;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c6157c(param_5);
    func_0x000107c61574();
    uStack_48 = uVar1;
  }
  FUN_10342c628();
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_presentViewController_animated_c_112621588,param_2,
                      param_3 & 1,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10342c0f0; end: 10342c1a3; -[_TtC34SCLensActivityCenterImplementation32LensActivityCenterViewController presentViewController:animated:completion:] */

/* WARNING: Possible PIC construction at 0x00010342c188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342c18c) */

void FUN_10342c0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106541b0;
    func_0x000107c613fc(&UNK_1106541b0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    pcVar2 = FUN_10342c868;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10342be98(param_3,param_4,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10342c1a4; end: 10342c3df;  */

/* WARNING: Possible PIC construction at 0x00010342c374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342c3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342c3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342c3ac) */
/* WARNING: Removing unreachable block (ram,0x00010342c378) */
/* WARNING: Removing unreachable block (ram,0x00010342c3bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c1a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126afe50;
  func_0x000107c610f8(PTR_PTR_1126afe50);
  func_0x000107c4842c();
  func_0x000107c561c0();
  uVar2 = 0;
  FUN_10342c8cc(0,0x112f681b0,&PTR_PTR_1126ad238);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f68140);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f68148);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f68178);
  uVar3 = uVar8;
  func_0x000107c614f0();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f68150);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f68158);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f68160);
  puVar4 = &UNK_110654278;
  func_0x000107c613fc(&UNK_110654278,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uVar5 = 0;
  FUN_10342c8cc(0,0x112d4c8f8,&PTR_PTR_1126afe50);
  func_0x000107c615f0(lVar6);
  func_0x000107c615f0(uVar7);
  func_0x000107c615f0(uVar8);
  func_0x000107c615f0(uVar10);
  func_0x000107c615f0(uVar11);
  func_0x000107c615f0(uVar9);
  func_0x000107c61174(puVar1);
  FUN_10342c694(lVar6,uVar7,uVar8,uVar10,uVar11,uVar9,puVar1,FUN_10342c8c4,puVar4,uVar2,uVar3,uVar5)
  ;
  func_0x00010011df08();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c610f8(PTR_PTR_1126ad240);
  func_0x000107c4568c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10342c3e0; end: 10342c4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c3e0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112f68170;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    lVar4 = _DAT_112f681f0;
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342c4c4);
      (*pcVar2)();
    }
    func_0x000107c41864(*(undefined8 *)(*(long *)(lVar3 + _DAT_112f681f0) + _DAT_113071140));
    lVar1 = _DAT_113071148;
    lVar4 = *(long *)(lVar3 + lVar4);
    func_0x000107c61428(lVar4 + _DAT_113071148,auStack_60,0,0);
    lVar4 = lVar4 + lVar1;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c41b94();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10342c4c4; end: 10342c533; -[_TtC34SCLensActivityCenterImplementation32LensActivityCenterViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c4c4(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112f68170;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensActivityCenterImplementation/LensActivityCenterViewController.swift",
                      0x49,2,0x68,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342c534);
  (*pcVar1)();
}



/* Entry: 10342c534; end: 10342c58f; -[_TtC34SCLensActivityCenterImplementation32LensActivityCenterViewController initWithNibName:bundle:] */

void FUN_10342c534(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterImplementation.LensActivityCenterViewController",0x43,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342c560);
  (*pcVar1)();
}



/* Entry: 10342c590; end: 10342c627; -[_TtC34SCLensActivityCenterImplementation32LensActivityCenterViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010342c5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342c5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342c5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342c5d0) */
/* WARNING: Removing unreachable block (ram,0x00010342c5b0) */
/* WARNING: Removing unreachable block (ram,0x00010342c5f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f68140));
  return;
}



/* Entry: 10342c628; end: 10342c647;  */

void FUN_10342c628(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9a88);
  return;
}



/* Entry: 10342c648; end: 10342c693; -[_TtC34SCLensActivityCenterImplementation32LensActivityCenterViewController presentationControllerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010342c67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342c680) */

void FUN_10342c648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10342c7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10342c694; end: 10342c7b3;  */

undefined8
FUN_10342c694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614e8(param_10);
  func_0x000107c610f8();
  uStack_68 = param_9;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110654290;
  ppuVar1 = &puStack_90;
  uStack_70 = param_8;
  func_0x000107c60bc4();
  func_0x000107c47aa4(param_10);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61574(uStack_68);
  return param_10;
}



/* Entry: 10342c7b4; end: 10342c867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c7b4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = unaff_x20 + _DAT_112f68170;
  func_0x000107c61618();
  lVar4 = _DAT_112f681f0;
  if (lVar3 != 0) {
    func_0x000107c41864(*(undefined8 *)(*(long *)(lVar3 + _DAT_112f681f0) + _DAT_113071140));
    lVar1 = _DAT_113071148;
    lVar4 = *(long *)(lVar3 + lVar4);
    func_0x000107c61428(lVar4 + _DAT_113071148,auStack_48,0,0);
    lVar4 = lVar4 + lVar1;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c41b94();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c615e8(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10342c868);
  (*pcVar2)();
}



/* Entry: 10342c868; end: 10342c89f;  */

void FUN_10342c868(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010342c870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10342c8a0; end: 10342c8c3;  */

undefined8 FUN_10342c8a0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10342c8c4; end: 10342c8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342c8c4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar3 = lVar4 + _DAT_112f68170;
    func_0x000107c61618();
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112f681f0;
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342c4c4);
      (*pcVar2)();
    }
    func_0x000107c41864(*(undefined8 *)(*(long *)(lVar3 + _DAT_112f681f0) + _DAT_113071140));
    lVar1 = _DAT_113071148;
    lVar4 = *(long *)(lVar3 + lVar4);
    func_0x000107c61428(lVar4 + _DAT_113071148,auStack_60,0,0);
    lVar4 = lVar4 + lVar1;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c41b94();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10342c8cc; end: 10342c90b;  */

void FUN_10342c8cc(undefined8 param_1,long *param_2,long *param_3)

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


