/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10330fc0c; end: 10330fc17; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint setSCContentProductPlaybackScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f588c0;
  func_0x000107c61428(param_1 + _DAT_112f588c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10330fc18; end: 10330fc5f; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint lensExplorerStoryScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fc18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f588c8;
  func_0x000107c61428(param_1 + _DAT_112f588c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10330fc60; end: 10330fc6b; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint setLensExplorerStoryScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f588c8;
  func_0x000107c61428(param_1 + _DAT_112f588c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10330fc6c; end: 10330fccb;  */

void FUN_10330fc6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10330fccc; end: 10330fe87;  */

/* WARNING: Possible PIC construction at 0x00010330fde4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330fe08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330fe18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330fe5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330fe1c) */
/* WARNING: Removing unreachable block (ram,0x00010330fe0c) */
/* WARNING: Removing unreachable block (ram,0x00010330fde8) */
/* WARNING: Removing unreachable block (ram,0x00010330fe60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fccc(void)

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
  func_0x000107c50c58();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4b0fc();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10330f2e8();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10330f560();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10330fe88);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f587e0) = lVar5;
      *(long *)(lVar3 + _DAT_112f587e8) = unaff_x20;
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



/* Entry: 10330fe88; end: 10330feaf; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10330fe88(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10330fccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10330feb0; end: 10330fef3; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint end] */

void FUN_10330feb0(undefined8 param_1)

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



/* Entry: 10330fef4; end: 1033100f7;  */

void FUN_10330fef4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0fae540)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f051ac0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0ec1ae0)) &&
           (func_0x000107c605b8(0xd000000000000030,0x800000010f13e520,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LensExplorerStoryScopeGraphBridge/SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5a,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033100f8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55d20();
        goto LAB_10330ff80;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58200();
  }
LAB_10330ff80:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033100f8; end: 1033101a3; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1033100f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10330fef4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033101a4; end: 10331021b; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033101a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f588b8,0);
  *(undefined8 *)(param_1 + _DAT_112f588c0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f588c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f588d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10331021c; end: 10331024f;  */

void FUN_10331021c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103310250; end: 1033102a7; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010331027c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103310280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310250(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f588b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f588c0));
  return;
}



/* Entry: 1033102a8; end: 1033102c7;  */

void FUN_1033102a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd8b0);
  return;
}



/* Entry: 1033102c8; end: 10331030f; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033102c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58900;
  func_0x000107c61428(param_1 + _DAT_112f58900,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103310310; end: 103310367; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58900;
  func_0x000107c61428(param_1 + _DAT_112f58900,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103310368; end: 10331043f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310368(undefined8 param_1,long param_2)

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
    FUN_10330f540();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f58818) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103310440);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f58820);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f58908);
    *(long **)(unaff_x20 + _DAT_112f58908) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103310440; end: 103310467; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint begin] */

void FUN_103310440(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103310368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103310468; end: 1033105df;  */

/* WARNING: Possible PIC construction at 0x0001033104d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033104d4) */
/* WARNING: Removing unreachable block (ram,0x00010331056c) */
/* WARNING: Removing unreachable block (ram,0x000103310584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310468(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f58908);
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



/* Entry: 1033105e0; end: 1033105e7;  */

void FUN_1033105e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033105e8; end: 10331061b; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint end] */

void FUN_1033105e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103310468();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10331061c; end: 10331073b;  */

void FUN_10331061c(long param_1,long param_2,long param_3)

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
                        "LensExplorerStoryScopeGraphBridge/SCSCLensExplorerStoryScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10331073c);
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



/* Entry: 10331073c; end: 1033107e7; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10331073c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10331061c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033107e8; end: 103310847; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033107e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f58900,0);
  *(undefined8 *)(param_1 + _DAT_112f58908) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103310848; end: 10331087b;  */

void FUN_103310848(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10331087c; end: 1033108b3; -[SCSCLensExplorerStoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331087c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f58900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58908));
  return;
}



/* Entry: 1033108b4; end: 1033108d3;  */

void FUN_1033108b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd980);
  return;
}



/* Entry: 1033108d4; end: 10331093f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033108d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103310cc8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f58940) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103310940; end: 1033109ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310940(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58940) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033109ac; end: 103310a0b; -[_TtC41LensInfoCardsScopedFactoryServiceProvider29SCLensInfoCardsScopedServices init] */

void FUN_1033109ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardsScopedFactoryServiceProvider.SCLensInfoCardsScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033109d8);
  (*pcVar1)();
}



/* Entry: 103310a0c; end: 103310a1b; -[_TtC41LensInfoCardsScopedFactoryServiceProvider29SCLensInfoCardsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f58940));
  return;
}



/* Entry: 103310a1c; end: 103310a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103310a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11063d3c0;
  func_0x000107c613fc(&UNK_11063d3c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103310d60,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103310a88; end: 103310b23;  */

void FUN_103310a88(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063d2d0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063d2d0;
  return;
}



/* Entry: 103310b24; end: 103310b5b;  */

void FUN_103310b24(long *param_1)

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



/* Entry: 103310b5c; end: 103310b63;  */

undefined8 FUN_103310b5c(void)

{
  return 0x1b;
}



/* Entry: 103310b64; end: 103310c97;  */

void FUN_103310b64(undefined8 *param_1)

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
  puVar1 = &UNK_11063d3e8;
  func_0x000107c613fc(&UNK_11063d3e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103310d38;
  func_0x00010058fa64(FUN_103310d38,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103310c98; end: 103310cc7;  */

undefined ** FUN_103310c98(void)

{
  return &PTR_DAT_113066c58;
}



/* Entry: 103310cc8; end: 103310ce7;  */

void FUN_103310cc8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cda40);
  return;
}



/* Entry: 103310ce8; end: 103310d37;  */

undefined1  [16] FUN_103310ce8(void)

{
  return ZEXT816(0x11063d320);
}



/* Entry: 103310d38; end: 103310d5f;  */

void FUN_103310d38(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103310d60; end: 103310d63;  */

void FUN_103310d60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103310d64; end: 103310ef3;  */

/* WARNING: Possible PIC construction at 0x000103310e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103310ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103310eb8) */
/* WARNING: Removing unreachable block (ram,0x000103310ea8) */
/* WARNING: Removing unreachable block (ram,0x000103310e98) */
/* WARNING: Removing unreachable block (ram,0x000103310e88) */
/* WARNING: Removing unreachable block (ram,0x000103310e78) */
/* WARNING: Removing unreachable block (ram,0x000103310e68) */
/* WARNING: Removing unreachable block (ram,0x000103310ec8) */

void FUN_103310d64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11063d470;
  func_0x000107c613fc(&UNK_11063d470,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  uVar2 = 0x112f589b0;
  func_0x0001000285a8(0x112f589b0,&UNK_10dbb0a00);
  func_0x000107c613fc();
  uVar3 = 0x103311440;
  func_0x0001000841fc(0x103311440,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbb09d0,0x2b,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103310ef4; end: 103310f37;  */

void FUN_103310ef4(void)

{
  long unaff_x20;
  
  FUN_103310d64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 103310f38; end: 103310f47;  */

undefined1  [16] FUN_103310f38(void)

{
  return ZEXT816(0x11063d450);
}



/* Entry: 103310f48; end: 1033113ab;  */

void FUN_103310f48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f589b8,&UNK_10dbb0a08);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103312740();
  func_0x000100082720("SCLensesModularCameraScopeExposerSubjectServiceProvider",0x37,2);
  puVar3 = puVar2;
  FUN_1033127cc();
  func_0x000100082720("SCLensesModularCameraScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103310b24;
  func_0x0001000823a8(FUN_103310b24,0);
  func_0x000100082720("SCLensInfoCardsScopedServicesCleanupRelayServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f589c0,&UNK_10dbb0a20);
  puVar5 = &UNK_11063d498;
  func_0x000107c613fc(&UNK_11063d498,0x98,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 *)(puVar5 + 0x48) = param_9;
  *(undefined8 *)(puVar5 + 0x50) = param_10;
  *(undefined8 *)(puVar5 + 0x58) = param_11;
  *(undefined8 *)(puVar5 + 0x60) = param_12;
  *(undefined8 *)(puVar5 + 0x68) = param_13;
  *(undefined8 *)(puVar5 + 0x70) = param_14;
  *(undefined8 *)(puVar5 + 0x78) = param_15;
  *(undefined8 *)(puVar5 + 0x80) = param_16;
  *(undefined8 *)(puVar5 + 0x88) = param_17;
  *(undefined8 **)(puVar5 + 0x90) = puVar3;
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
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103311488;
  func_0x0001000823a8(0x103311488,puVar5);
  func_0x000100082720("LensInfoCardScopeEntryPointWrapperServiceProvider",0x31,2);
  puVar6 = puVar2;
  FUN_1033125f4();
  func_0x000100082720("LensInfoCardsScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f589c8,&UNK_10dbb0a10);
  puVar5 = &UNK_11063d4c0;
  func_0x000107c613fc(&UNK_11063d4c0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1033114cc;
  func_0x0001000823a8(FUN_1033114cc,puVar5);
  func_0x000100082720("SCLensInfoCardsScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f58948,&UNK_10dbb07d0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1033114d8;
  func_0x0001000823a8(0x1033114d8,pcVar7);
  func_0x000100082720("SCLensInfoCardsScopeInitializationServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f58938,&UNK_10dbb07c0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1033114e0;
  func_0x0001000823a8(0x1033114e0,uVar8);
  func_0x000100082720("SCLensInfoCardsScopedServicesServiceProvider",0x2c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11063d4e8;
  func_0x000107c613fc(&UNK_11063d4e8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1033114e8;
  func_0x0001000823a8(0x1033114e8,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensInfoCardsScopeEntryPointProvider",0x26,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1033113ac; end: 1033114cb;  */

void FUN_1033113ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033114cc; end: 1033114ef;  */

void FUN_1033114cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103311d5c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCLensInfoCardsScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033114f0; end: 103311aeb;  */

void FUN_1033114f0(long *param_1,long param_2)

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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
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
  FUN_103311cac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  func_0x0001000285a8(0x112e48e78,&UNK_10da3fdf0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c6157c(uStack_f0);
  uVar17 = uVar16;
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar18;
  FUN_103315bf4(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x0001033153b0(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uVar12,uVar13,uVar14,uVar15,puVar18);
  func_0x000107c61574(uVar16);
  *(undefined8 *)(param_2 + 0x10) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 103311aec; end: 103311ba7;  */

void FUN_103311aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 103311ba8; end: 103311baf;  */

undefined8 FUN_103311ba8(void)

{
  return 0x1b;
}



/* Entry: 103311bb0; end: 103311c33;  */

void FUN_103311bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103311cec,param_2,FUN_103311cf0,param_2,FUN_103311d18,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103311c34; end: 103311c7b;  */

undefined8 FUN_103311c34(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103315a84();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103311c7c; end: 103311cab;  */

undefined ** FUN_103311c7c(void)

{
  return &PTR_DAT_113066c58;
}



/* Entry: 103311cac; end: 103311ccb;  */

void FUN_103311cac(void)

{
  func_0x000107c61168(&PTR_PTR_112f58a38);
  return;
}



/* Entry: 103311ccc; end: 103311cef;  */

undefined1  [16] FUN_103311ccc(void)

{
  return ZEXT816(0x11063d540);
}



/* Entry: 103311cf0; end: 103311d17;  */

void FUN_103311cf0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103311d18; end: 103311d1f;  */

undefined8 FUN_103311d18(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103315a84();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103311d20; end: 103311d5b;  */

void FUN_103311d20(undefined8 *param_1,undefined8 param_2)

{
  FUN_103311d5c();
  func_0x0001000a7f38("SCLensInfoCardsScopeInitializationPluginRegistryServiceProvider",0x3f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103311d5c; end: 103311f47;  */

void FUN_103311d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d708;
  ppuVar4 = &PTR_DAT_113066c58;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f58b18;
  func_0x0001000285a8(0x112f58b18,&UNK_10dbb0bc8);
  func_0x0001000a6ee8(&UNK_11063d540,
                      "LensInfoCardScopeEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_103311fbc,param_1,uVar2,&UNK_11063d540,&PTR_DAT_112f589d0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11063d590;
  func_0x000107c613fc(&UNK_11063d590,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11063d7e0,"LensInfoCardsScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_103311fc4,puVar3,uVar2,&UNK_11063d7e0,&PTR_DAT_112f58bb0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11063d5b8;
  func_0x000107c613fc(&UNK_11063d5b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11063d360,"SCLensInfoCardsScopedServicesScopeInitializationPluginKey",
                      0x39,2,FUN_1033120ac,puVar3,uVar2,&UNK_11063d360,&PTR_DAT_112f58950);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f58b20;
  func_0x0001000285a8(0x112f58b20,&UNK_10dbb0bd0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 103311f48; end: 103311fbb;  */

void FUN_103311f48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1033120e8;
  func_0x0001000823a8(0x1033120e8,param_3);
  func_0x000100082720("LensInfoCardScopeEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103311fbc; end: 103311fc3;  */

void FUN_103311fbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1033120e8;
  func_0x0001000823a8();
  func_0x000100082720("LensInfoCardScopeEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103311fc4; end: 103312003;  */

void FUN_103311fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103312874(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensInfoCardsScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103312004; end: 1033120ab;  */

void FUN_103312004(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11063d5e0;
  func_0x000107c613fc(&UNK_11063d5e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1033120e0;
  func_0x0001000823a8(FUN_1033120e0,puVar1);
  func_0x000100082720("SCLensInfoCardsScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1033120ac; end: 1033120b3;  */

void FUN_1033120ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11063d5e0;
  func_0x000107c613fc(&UNK_11063d5e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1033120e0;
  func_0x0001000823a8(FUN_1033120e0,puVar3);
  func_0x000100082720("SCLensInfoCardsScopedServicesScopeInitializationPluginProvider",0x3e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1033120b4; end: 1033120df;  */

void FUN_1033120b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033120e0; end: 1033120ef;  */

void FUN_1033120e0(undefined8 *param_1)

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
  puVar1 = &UNK_11063d3e8;
  func_0x000107c613fc(&UNK_11063d3e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103310d38;
  func_0x00010058fa64(FUN_103310d38,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033120f0; end: 1033121cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033120f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_103312504();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f58b28) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f58b30) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033121cc);
  (*pcVar1)();
}



/* Entry: 1033121cc; end: 10331222b; -[_TtC29LensInfoCardsScopeGraphBridge44LensInfoCardsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1033121cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardsScopeGraphBridge.LensInfoCardsScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033121f8);
  (*pcVar1)();
}



/* Entry: 10331222c; end: 103312263; -[_TtC29LensInfoCardsScopeGraphBridge44LensInfoCardsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103312248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331224c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331222c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58b28));
  return;
}



/* Entry: 103312264; end: 10331228b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312264(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f58b30),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f58b28));
  return;
}



/* Entry: 10331228c; end: 1033122ab;  */

void FUN_10331228c(void)

{
  func_0x000107c61168(&PTR_PTR_1128cdb00);
  return;
}



/* Entry: 1033122ac; end: 103312333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033122ac(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58b60) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f58b68);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103312334);
  (*pcVar2)();
}



/* Entry: 103312334; end: 10331241b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103312334(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f58b60);
  *(undefined **)(unaff_x20 + _DAT_112f58b60) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f58b68);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f58b68))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11063d700;
  func_0x000107c613fc(&UNK_11063d700,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103312420,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10331241c; end: 103312427;  */

void FUN_10331241c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103312428; end: 103312487; -[_TtC29LensInfoCardsScopeGraphBridge44SCLensInfoCardsScopedServicesSaberEntryPoint init] */

void FUN_103312428(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardsScopeGraphBridge.SCLensInfoCardsScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103312454);
  (*pcVar1)();
}



/* Entry: 103312488; end: 1033124bf; -[_TtC29LensInfoCardsScopeGraphBridge44SCLensInfoCardsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312488(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f58b68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58b60));
  return;
}



/* Entry: 1033124c0; end: 1033124c3;  */

void FUN_1033124c0(void)

{
  return;
}



/* Entry: 1033124c4; end: 1033124e3;  */

void FUN_1033124c4(void)

{
  FUN_103312334();
  return;
}



/* Entry: 1033124e4; end: 103312503;  */

void FUN_1033124e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cdbc8);
  return;
}



/* Entry: 103312504; end: 1033125d3;  */

undefined8 FUN_103312504(void)

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
  
  func_0x000107c61428(0x112f58b98,&uStack_40,0x20,0);
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
    FUN_1033125d4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1033125d4; end: 1033125f3;  */

void FUN_1033125d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cdc90);
  return;
}



/* Entry: 1033125f4; end: 10331260f;  */

void FUN_1033125f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112f58ba0,&UNK_10dbb0c88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10331267c,param_1);
  return;
}



/* Entry: 103312610; end: 10331267b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312610(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1033125d4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f58ba8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10331267c; end: 103312683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331267c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1033125d4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f58ba8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103312684; end: 1033126cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312684(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58ba8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033126d0; end: 10331272f; -[_TtC29LensInfoCardsScopeGraphBridge37LensInfoCardsScopeGraphBridgeServices init] */

void FUN_1033126d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardsScopeGraphBridge.LensInfoCardsScopeGraphBridgeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033126fc);
  (*pcVar1)();
}



/* Entry: 103312730; end: 10331273f; -[_TtC29LensInfoCardsScopeGraphBridge37LensInfoCardsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f58ba8));
  return;
}



/* Entry: 103312740; end: 1033127cb;  */

void FUN_103312740(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103312780,0);
  return;
}



/* Entry: 1033127cc; end: 1033127e7;  */

void FUN_1033127cc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103312838,param_1);
  return;
}



/* Entry: 1033127e8; end: 103312837;  */

void FUN_1033127e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103312838; end: 10331286b;  */

void FUN_103312838(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10331286c; end: 103312873;  */

undefined8 FUN_10331286c(void)

{
  return 0x1b;
}



/* Entry: 103312874; end: 1033129eb;  */

void FUN_103312874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11063d748;
  func_0x000107c613fc(&UNK_11063d748,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1033129ec,puVar1);
  return;
}



/* Entry: 1033129ec; end: 1033129f3;  */

void FUN_1033129ec(undefined8 *param_1)

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
  func_0x000107c61428(0x112f58b98,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f58b98,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11063d820;
  func_0x000107c613fc(&UNK_11063d820,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103312ac0;
  func_0x00010058fa64(0x103312ac0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033129f4; end: 103312a4f;  */

void FUN_1033129f4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f58b98,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f58b98,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103312a50; end: 103312ac7;  */

undefined ** FUN_103312a50(void)

{
  return &PTR_DAT_113066c58;
}



/* Entry: 103312ac8; end: 103312b0f; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312ac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58c00;
  func_0x000107c61428(param_1 + _DAT_112f58c00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103312b10; end: 103312b67; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58c00;
  func_0x000107c61428(param_1 + _DAT_112f58c00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103312b68; end: 103312baf; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint sCLensesModularCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312b68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58c08;
  func_0x000107c61428(param_1 + _DAT_112f58c08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103312bb0; end: 103312bbb; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint setSCLensesModularCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58c08;
  func_0x000107c61428(param_1 + _DAT_112f58c08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103312bbc; end: 103312c03; -[SCLensInfoCardsScopeGraphBridgeSaberEntryPoint lensInfoCardsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103312bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58c10;
  func_0x000107c61428(param_1 + _DAT_112f58c10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


