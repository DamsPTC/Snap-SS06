/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032aa1ac; end: 1032aa1b7; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider gamesExplorerDeeplinkScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa1ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51f08;
  func_0x000107c61428(param_1 + _DAT_112f51f08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032aa1b8; end: 1032aa1fb;  */

void FUN_1032aa1b8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1032aa1fc; end: 1032aa207; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider setGamesExplorerDeeplinkScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51f08;
  func_0x000107c61428(param_1 + _DAT_112f51f08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032aa208; end: 1032aa25b;  */

void FUN_1032aa208(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032aa25c; end: 1032aa46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032aa25c(void)

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
    func_0x000107c43ce8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001032a93c0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f51e68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f51f10);
      *(long *)(unaff_x20 + _DAT_112f51f10) = lVar4;
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
                      "GamesExplorerDeeplinkScopeGraphBridge/SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider.swift"
                      ,0x81,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032aa388);
  (*pcVar1)();
}



/* Entry: 1032aa470; end: 1032aa4a3; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider provide] */

void FUN_1032aa470(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032aa25c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032aa4a4; end: 1032aa4d7; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_1032aa4a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001032aa388();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032aa4d8; end: 1032aa51b; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider end] */

void FUN_1032aa4d8(undefined8 param_1)

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



/* Entry: 1032aa51c; end: 1032aa6b3;  */

void FUN_1032aa51c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0ec9630)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1369d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GamesExplorerDeeplinkScopeGraphBridge/SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider.swift"
                            ,0x81,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032aa6b4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54d98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032aa6b4; end: 1032aa75f; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1032aa6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032aa51c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032aa760; end: 1032aa7d3; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa760(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f51f00,0);
  func_0x000107c61614(param_1 + _DAT_112f51f08,0);
  *(undefined8 *)(param_1 + _DAT_112f51f10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032aa7d4; end: 1032aa807;  */

void FUN_1032aa7d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032aa808; end: 1032aa84f; -[SCSCGamesExplorerDeeplinkScopedLensExplorerSessionLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa808(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51f00);
  func_0x000107c61610(param_1 + _DAT_112f51f08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f51f10));
  return;
}



/* Entry: 1032aa850; end: 1032aa86f;  */

void FUN_1032aa850(void)

{
  func_0x000107c61168(&PTR_PTR_112f51f58);
  return;
}



/* Entry: 1032aa870; end: 1032aa8b7; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa870(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51fc0;
  func_0x000107c61428(param_1 + _DAT_112f51fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032aa8b8; end: 1032aa90f; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51fc0;
  func_0x000107c61428(param_1 + _DAT_112f51fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032aa910; end: 1032aa9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aa910(undefined8 param_1,long param_2)

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
    FUN_1032a9694();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f51e20) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032aa9e8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f51e28);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f51fc8);
    *(long **)(unaff_x20 + _DAT_112f51fc8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032aa9e8; end: 1032aaa0f; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint begin] */

void FUN_1032aa9e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032aa910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032aaa10; end: 1032aab87;  */

/* WARNING: Possible PIC construction at 0x0001032aaa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032aab10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032aaa7c) */
/* WARNING: Removing unreachable block (ram,0x0001032aab14) */
/* WARNING: Removing unreachable block (ram,0x0001032aab2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aaa10(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f51fc8);
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



/* Entry: 1032aab88; end: 1032aab8f;  */

void FUN_1032aab88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032aab90; end: 1032aabc3; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint end] */

void FUN_1032aab90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032aaa10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032aabc4; end: 1032aace3;  */

void FUN_1032aabc4(long param_1,long param_2,long param_3)

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
                        "GamesExplorerDeeplinkScopeGraphBridge/SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x31,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032aace4);
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



/* Entry: 1032aace4; end: 1032aad8f; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032aace4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032aabc4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032aad90; end: 1032aadef; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aad90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f51fc0,0);
  *(undefined8 *)(param_1 + _DAT_112f51fc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032aadf0; end: 1032aae23;  */

void FUN_1032aadf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032aae24; end: 1032aae5b; -[SCGamesExplorerDeeplinkScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aae24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51fc8));
  return;
}



/* Entry: 1032aae5c; end: 1032aae7b;  */

void FUN_1032aae5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8658);
  return;
}



/* Entry: 1032aae7c; end: 1032aaf67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aae7c(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032ab2cc();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f52000) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_112f52008) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar2;
  lStack_40 = param_2;
  func_0x000107c6157c(param_3);
  plVar3 = &lStack_48;
  func_0x000107c61154(plVar3,puVar1);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1032aaf68; end: 1032aaf87;  */

void FUN_1032aaf68(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032aaf88; end: 1032aafe7; -[_TtC51GamesExplorerMainCameraScopedFactoryServiceProvider37GamesExplorerMainCameraScopedServices init] */

void FUN_1032aaf88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerMainCameraScopedFactoryServiceProvider.GamesExplorerMainCameraScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032aafb4);
  (*pcVar1)();
}



/* Entry: 1032aafe8; end: 1032ab01f; -[_TtC51GamesExplorerMainCameraScopedFactoryServiceProvider37GamesExplorerMainCameraScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032ab004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ab008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aafe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f52000));
  return;
}



/* Entry: 1032ab020; end: 1032ab08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ab020(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110633f10;
  func_0x000107c613fc(&UNK_110633f10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032ab364,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032ab08c; end: 1032ab127;  */

void FUN_1032ab08c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110633e20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110633e20;
  return;
}



/* Entry: 1032ab128; end: 1032ab15f;  */

void FUN_1032ab128(long *param_1)

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



/* Entry: 1032ab160; end: 1032ab167;  */

undefined8 FUN_1032ab160(void)

{
  return 0x1b;
}



/* Entry: 1032ab168; end: 1032ab29b;  */

void FUN_1032ab168(undefined8 *param_1)

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
  puVar1 = &UNK_110633f38;
  func_0x000107c613fc(&UNK_110633f38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032ab33c;
  func_0x00010058fa64(FUN_1032ab33c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032ab29c; end: 1032ab2cb;  */

undefined ** FUN_1032ab29c(void)

{
  return &PTR_DAT_113066640;
}



/* Entry: 1032ab2cc; end: 1032ab2eb;  */

void FUN_1032ab2cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8718);
  return;
}



/* Entry: 1032ab2ec; end: 1032ab33b;  */

undefined1  [16] FUN_1032ab2ec(void)

{
  return ZEXT816(0x110633e70);
}



/* Entry: 1032ab33c; end: 1032ab363;  */

void FUN_1032ab33c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032ab364; end: 1032ab377;  */

void FUN_1032ab364(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032ab378; end: 1032ab65f;  */

void FUN_1032ab378(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f52080,&UNK_10dba8020);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  FUN_1032ab9b4(param_3,param_4,param_5,param_6);
  func_0x000100082720("GamesExplorerMainCameraScopedLensExplorerSessionLoggingServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1032ab128;
  func_0x0001000823a8(FUN_1032ab128,0);
  func_0x000100082720("GamesExplorerMainCameraScopedServicesCleanupRelayServiceProvider",0x40,2);
  uVar3 = param_3;
  FUN_1032ac144();
  func_0x000100082720("GamesExplorerMainCameraScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f52088,&UNK_10dba8030);
  puVar4 = &UNK_110633fe8;
  func_0x000107c613fc(&UNK_110633fe8,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(code **)(puVar4 + 0x20) = pcVar2;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar2);
  uVar8 = 0x1032ab66c;
  func_0x0001000823a8(0x1032ab66c,puVar4);
  func_0x000100082720("GamesExplorerMainCameraScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f52010,&UNK_10dba7d70);
  func_0x000107c6157c(uVar8);
  uVar5 = 0x1032ab678;
  func_0x0001000823a8(0x1032ab678,uVar8);
  func_0x000100082720("GamesExplorerMainCameraScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f51ff8,&UNK_10dba7d60);
  puVar4 = &UNK_110634010;
  func_0x000107c613fc(&UNK_110634010,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(param_3);
  uVar6 = 0x1032ab680;
  func_0x0001000823a8(0x1032ab680,puVar4);
  func_0x000100082720("GamesExplorerMainCameraScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110634038;
  func_0x000107c613fc(&UNK_110634038,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  pcVar7 = FUN_1032ab6b4;
  func_0x0001000823a8(FUN_1032ab6b4,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar5);
  func_0x000100082720("GamesExplorerMainCameraScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar7;
  return;
}



/* Entry: 1032ab660; end: 1032ab687;  */

void FUN_1032ab660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f52080,&UNK_10dba8020);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  FUN_1032ab9b4(uVar2,uVar6,uVar5,uVar7);
  func_0x000100082720("GamesExplorerMainCameraScopedLensExplorerSessionLoggingServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_1032ab128;
  func_0x0001000823a8(FUN_1032ab128,0);
  func_0x000100082720("GamesExplorerMainCameraScopedServicesCleanupRelayServiceProvider",0x40,2);
  uVar9 = uVar2;
  FUN_1032ac144();
  func_0x000100082720("GamesExplorerMainCameraScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f52088,&UNK_10dba8030);
  puVar4 = &UNK_110633fe8;
  func_0x000107c613fc(&UNK_110633fe8,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(code **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  uVar5 = 0x1032ab66c;
  func_0x0001000823a8(0x1032ab66c,puVar4);
  func_0x000100082720("GamesExplorerMainCameraScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f52010,&UNK_10dba7d70);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1032ab678;
  func_0x0001000823a8(0x1032ab678,uVar5);
  func_0x000100082720("GamesExplorerMainCameraScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f51ff8,&UNK_10dba7d60);
  puVar4 = &UNK_110634010;
  func_0x000107c613fc(&UNK_110634010,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  uVar7 = 0x1032ab680;
  func_0x0001000823a8(0x1032ab680,puVar4);
  func_0x000100082720("GamesExplorerMainCameraScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110634038;
  func_0x000107c613fc(&UNK_110634038,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_1032ab6b4;
  func_0x0001000823a8(FUN_1032ab6b4,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("GamesExplorerMainCameraScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1032ab688; end: 1032ab6b3;  */

void FUN_1032ab688(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032ab6b4; end: 1032ab6bb;  */

void FUN_1032ab6b4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110633e20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110633e20;
  return;
}



/* Entry: 1032ab6bc; end: 1032ab6f7;  */

void FUN_1032ab6bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032ab6f8();
  func_0x0001000a7f38("GamesExplorerMainCameraScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032ab6f8; end: 1032ab88f;  */

void FUN_1032ab6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cce0;
  ppuVar4 = &PTR_DAT_113066640;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110634060;
  func_0x000107c613fc(&UNK_110634060,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f52090;
  func_0x0001000285a8(0x112f52090,&UNK_10dba8038);
  func_0x0001000a6ee8(&UNK_110634378,
                      "GamesExplorerMainCameraScopeGraphBridgeScopeInitializationPluginKey",0x43,2,
                      FUN_1032ab890,puVar2,uVar3,&UNK_110634378,&PTR_DAT_112f52200);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110634088;
  func_0x000107c613fc(&UNK_110634088,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110633eb0,
                      "GamesExplorerMainCameraScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_1032ab978,puVar2,uVar3,&UNK_110633eb0,&PTR_DAT_112f52018);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f52098;
  func_0x0001000285a8(0x112f52098,&UNK_10dba8040);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032ab890; end: 1032ab8cf;  */

void FUN_1032ab890(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032ac2c8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GamesExplorerMainCameraScopeGraphBridgeScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032ab8d0; end: 1032ab977;  */

void FUN_1032ab8d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106340b0;
  func_0x000107c613fc(&UNK_1106340b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032ab9ac;
  func_0x0001000823a8(FUN_1032ab9ac,puVar1);
  func_0x000100082720("GamesExplorerMainCameraScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032ab978; end: 1032ab97f;  */

void FUN_1032ab978(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106340b0;
  func_0x000107c613fc(&UNK_1106340b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032ab9ac;
  func_0x0001000823a8(FUN_1032ab9ac,puVar3);
  func_0x000100082720("GamesExplorerMainCameraScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032ab980; end: 1032ab9ab;  */

void FUN_1032ab980(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032ab9ac; end: 1032ab9b3;  */

void FUN_1032ab9ac(undefined8 *param_1)

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
  puVar1 = &UNK_110633f38;
  func_0x000107c613fc(&UNK_110633f38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032ab33c;
  func_0x00010058fa64(FUN_1032ab33c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032ab9b4; end: 1032aba57;  */

void FUN_1032ab9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f520a0,&UNK_10dba8050);
  puVar1 = &UNK_110634180;
  func_0x000107c613fc(&UNK_110634180,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1032aba58,puVar1);
  return;
}



/* Entry: 1032aba58; end: 1032abb57;  */

void FUN_1032aba58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126acfa8;
  func_0x000107c61168(PTR_PTR_1126acfa8);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000107c52080(puVar1,param_3,uStack_58,uStack_60,uStack_68,uStack_70,0xb);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_58);
  puVar2 = PTR_PTR_1126acfb8;
  func_0x000107c610f8();
  func_0x000107c48638();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1032abb58; end: 1032abb67;  */

undefined1  [16] FUN_1032abb58(void)

{
  return ZEXT816(0x1106341a8);
}



/* Entry: 1032abb68; end: 1032abbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032abb68(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032ac054();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f520a8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f520b0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032abbf0);
  (*pcVar1)();
}



/* Entry: 1032abbf0; end: 1032abc4f; -[_TtC39GamesExplorerMainCameraScopeGraphBridge54GamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032abbf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerMainCameraScopeGraphBridge.GamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032abc1c);
  (*pcVar1)();
}



/* Entry: 1032abc50; end: 1032abc87; -[_TtC39GamesExplorerMainCameraScopeGraphBridge54GamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032abc6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032abc70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032abc50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f520a8));
  return;
}



/* Entry: 1032abc88; end: 1032abcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032abc88(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f520b0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f520a8));
  return;
}



/* Entry: 1032abcb0; end: 1032abccf;  */

void FUN_1032abcb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c87e0);
  return;
}



/* Entry: 1032abcd0; end: 1032abd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032abcd0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f521f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032abd34; end: 1032abd3b;  */

void FUN_1032abd34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032abd3c; end: 1032abddb;  */

void FUN_1032abd3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032abddc; end: 1032abdfb;  */

void FUN_1032abddc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032abdfc; end: 1032abe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032abdfc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f521b0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f521b8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032abe84);
  (*pcVar2)();
}



/* Entry: 1032abe84; end: 1032abf6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032abe84(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f521b0);
  *(undefined **)(unaff_x20 + _DAT_112f521b0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f521b8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f521b8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106342d8;
  func_0x000107c613fc(&UNK_1106342d8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032abf70,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032abf6c; end: 1032abf77;  */

void FUN_1032abf6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032abf78; end: 1032abfd7; -[_TtC39GamesExplorerMainCameraScopeGraphBridge52GamesExplorerMainCameraScopedServicesSaberEntryPoint init] */

void FUN_1032abf78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerMainCameraScopeGraphBridge.GamesExplorerMainCameraScopedServicesSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032abfa4);
  (*pcVar1)();
}



/* Entry: 1032abfd8; end: 1032ac00f; -[_TtC39GamesExplorerMainCameraScopeGraphBridge52GamesExplorerMainCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032abfd8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f521b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f521b0));
  return;
}



/* Entry: 1032ac010; end: 1032ac013;  */

void FUN_1032ac010(void)

{
  return;
}



/* Entry: 1032ac014; end: 1032ac033;  */

void FUN_1032ac014(void)

{
  FUN_1032abe84();
  return;
}



/* Entry: 1032ac034; end: 1032ac053;  */

void FUN_1032ac034(void)

{
  func_0x000107c61168(&PTR_PTR_1128c88a8);
  return;
}



/* Entry: 1032ac054; end: 1032ac123;  */

undefined8 FUN_1032ac054(void)

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
  
  func_0x000107c61428(0x112f521e8,&uStack_40,0x20,0);
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
    FUN_1032ac124();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032ac124; end: 1032ac143;  */

void FUN_1032ac124(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8970);
  return;
}



/* Entry: 1032ac144; end: 1032ac18f;  */

void FUN_1032ac144(undefined8 param_1)

{
  func_0x0001000285a8(0x112f521f0,&UNK_10dba8228);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032ac1fc,param_1);
  return;
}



/* Entry: 1032ac190; end: 1032ac1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac190(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1032ac124();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f521f8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1032ac1fc; end: 1032ac203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac1fc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1032ac124();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f521f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1032ac204; end: 1032ac24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac204(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f521f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032ac250; end: 1032ac2af; -[_TtC39GamesExplorerMainCameraScopeGraphBridge47GamesExplorerMainCameraScopeGraphBridgeServices init] */

void FUN_1032ac250(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerMainCameraScopeGraphBridge.GamesExplorerMainCameraScopeGraphBridgeServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ac27c);
  (*pcVar1)();
}



/* Entry: 1032ac2b0; end: 1032ac2c7; -[_TtC39GamesExplorerMainCameraScopeGraphBridge47GamesExplorerMainCameraScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f521f8));
  return;
}



/* Entry: 1032ac2c8; end: 1032ac43f;  */

void FUN_1032ac2c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110634320;
  func_0x000107c613fc(&UNK_110634320,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032ac440,puVar1);
  return;
}



/* Entry: 1032ac440; end: 1032ac447;  */

void FUN_1032ac440(undefined8 *param_1)

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
  func_0x000107c61428(0x112f521e8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f521e8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106343b8;
  func_0x000107c613fc(&UNK_1106343b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032ac4f4;
  func_0x00010058fa64(0x1032ac4f4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032ac448; end: 1032ac4a3;  */

void FUN_1032ac448(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f521e8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f521e8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032ac4a4; end: 1032ac4fb;  */

undefined ** FUN_1032ac4a4(void)

{
  return &PTR_DAT_113066640;
}



/* Entry: 1032ac4fc; end: 1032ac543; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac4fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52250;
  func_0x000107c61428(param_1 + _DAT_112f52250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032ac544; end: 1032ac59b; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac544(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52250;
  func_0x000107c61428(param_1 + _DAT_112f52250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032ac59c; end: 1032ac5e3; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint gamesExplorerMainCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac59c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52258;
  func_0x000107c61428(param_1 + _DAT_112f52258,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032ac5e4; end: 1032ac647; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint setGamesExplorerMainCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52258;
  func_0x000107c61428(param_1 + _DAT_112f52258,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032ac648; end: 1032ac77b;  */

/* WARNING: Possible PIC construction at 0x0001032ac700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ac71c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ac738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ac704) */
/* WARNING: Removing unreachable block (ram,0x0001032ac720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ac648(void)

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
  func_0x000107c43cfc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032abcb0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032ac054();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ac77c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f520a8) = lVar5;
    *(long *)(lVar4 + _DAT_112f520b0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032ac77c; end: 1032ac7a3; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032ac77c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032ac648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032ac7a4; end: 1032ac7e7; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032ac7a4(undefined8 param_1)

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



/* Entry: 1032ac7e8; end: 1032ac97f;  */

void FUN_1032ac7e8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffca) || (param_3 != -0x7ffffffef0ec9070)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000036,0x800000010f136f90,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GamesExplorerMainCameraScopeGraphBridge/SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x66,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ac980);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54da8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032ac980; end: 1032aca2b; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032ac980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032ac7e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032aca2c; end: 1032aca97; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aca2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52250,0);
  *(undefined8 *)(param_1 + _DAT_112f52258) = 0;
  *(undefined8 *)(param_1 + _DAT_112f52260) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032aca98; end: 1032acacb;  */

void FUN_1032aca98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032acacc; end: 1032acb13; -[SCGamesExplorerMainCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032acaf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032acafc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032acacc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52258));
  return;
}



/* Entry: 1032acb14; end: 1032acb33;  */

void FUN_1032acb14(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8a30);
  return;
}



/* Entry: 1032acb34; end: 1032acb3f; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032acb34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52290;
  func_0x000107c61428(param_1 + _DAT_112f52290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032acb40; end: 1032acb4b; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032acb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52290;
  func_0x000107c61428(param_1 + _DAT_112f52290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032acb4c; end: 1032acb57; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider gamesExplorerMainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032acb4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52298;
  func_0x000107c61428(param_1 + _DAT_112f52298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


