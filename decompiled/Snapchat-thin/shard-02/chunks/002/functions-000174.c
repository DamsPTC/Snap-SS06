/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ad2930; end: 101ad296b; -[_TtC53StartupCompleteCameraLockScreenWidgetScopeGraphBridge61StartupCompleteCameraLockScreenWidgetScopeGraphBridgeServices init] */

void FUN_101ad2930(undefined8 param_1)

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



/* Entry: 101ad296c; end: 101ad299f;  */

void FUN_101ad296c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad29a0; end: 101ad29a7;  */

undefined8 FUN_101ad29a0(void)

{
  return 0x1b;
}



/* Entry: 101ad29a8; end: 101ad2b1f;  */

void FUN_101ad29a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104404e0;
  func_0x000107c613fc(&UNK_1104404e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101ad2b20,puVar1);
  return;
}



/* Entry: 101ad2b20; end: 101ad2b27;  */

void FUN_101ad2b20(undefined8 *param_1)

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
  func_0x000107c61428(0x112df9dd8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112df9dd8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110440578;
  func_0x000107c613fc(&UNK_110440578,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ad2bd4;
  func_0x00010058fa64(0x101ad2bd4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad2b28; end: 101ad2b83;  */

void FUN_101ad2b28(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112df9dd8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112df9dd8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101ad2b84; end: 101ad2bdb;  */

undefined ** FUN_101ad2b84(void)

{
  return &PTR_DAT_112f32a68;
}



/* Entry: 101ad2bdc; end: 101ad2c23; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2bdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df9e38;
  func_0x000107c61428(param_1 + _DAT_112df9e38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ad2c24; end: 101ad2c7b; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df9e38;
  func_0x000107c61428(param_1 + _DAT_112df9e38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ad2c7c; end: 101ad2cc3; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint startupCompleteCameraLockScreenWidgetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2c7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df9e40;
  func_0x000107c61428(param_1 + _DAT_112df9e40,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ad2cc4; end: 101ad2d27; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint setStartupCompleteCameraLockScreenWidgetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df9e40;
  func_0x000107c61428(param_1 + _DAT_112df9e40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ad2d28; end: 101ad2e5b;  */

/* WARNING: Possible PIC construction at 0x000101ad2de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad2dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad2e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad2de4) */
/* WARNING: Removing unreachable block (ram,0x000101ad2e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad2d28(void)

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
  func_0x000107c5bc88();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101ad255c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101ad27d4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad2e5c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112df9d68) = lVar5;
    *(long *)(lVar4 + _DAT_112df9d70) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101ad2e5c; end: 101ad2e83; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101ad2e5c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ad2d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad2e84; end: 101ad2ec7; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint end] */

void FUN_101ad2e84(undefined8 param_1)

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



/* Entry: 101ad2ec8; end: 101ad305f;  */

void FUN_101ad2ec8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffbc) || (param_3 != -0x7ffffffef10085c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000044,0x800000010eff7a40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StartupCompleteCameraLockScreenWidgetScopeGraphBridge/SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x82,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad3060);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101ad3060; end: 101ad310b; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101ad3060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ad2ec8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ad310c; end: 101ad3177; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad310c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112df9e38,0);
  *(undefined8 *)(param_1 + _DAT_112df9e40) = 0;
  *(undefined8 *)(param_1 + _DAT_112df9e48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad3178; end: 101ad31ab;  */

void FUN_101ad3178(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad31ac; end: 101ad31f3; -[SCStartupCompleteCameraLockScreenWidgetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ad31d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad31ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112df9e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9e40));
  return;
}



/* Entry: 101ad31f4; end: 101ad3213;  */

void FUN_101ad31f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4a30);
  return;
}



/* Entry: 101ad3214; end: 101ad325b; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad3214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df9e78;
  func_0x000107c61428(param_1 + _DAT_112df9e78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ad325c; end: 101ad32b3; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad325c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df9e78;
  func_0x000107c61428(param_1 + _DAT_112df9e78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ad32b4; end: 101ad338b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad32b4(undefined8 param_1,long param_2)

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
    FUN_101ad27b4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112df9da0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad338c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112df9da8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112df9e80);
    *(long **)(unaff_x20 + _DAT_112df9e80) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101ad338c; end: 101ad33b3; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint begin] */

void FUN_101ad338c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101ad32b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ad33b4; end: 101ad352b;  */

/* WARNING: Possible PIC construction at 0x000101ad341c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad34b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad3420) */
/* WARNING: Removing unreachable block (ram,0x000101ad34b8) */
/* WARNING: Removing unreachable block (ram,0x000101ad34d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad33b4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112df9e80);
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



/* Entry: 101ad352c; end: 101ad3533;  */

void FUN_101ad352c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ad3534; end: 101ad3567; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint end] */

void FUN_101ad3534(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ad33b4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ad3568; end: 101ad3687;  */

void FUN_101ad3568(long param_1,long param_2,long param_3)

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
                        "StartupCompleteCameraLockScreenWidgetScopeGraphBridge/SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint.swift"
                        ,0x82,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad3688);
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



/* Entry: 101ad3688; end: 101ad3733; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101ad3688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101ad3568(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101ad3734; end: 101ad3793; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad3734(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112df9e78,0);
  *(undefined8 *)(param_1 + _DAT_112df9e80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad3794; end: 101ad37c7;  */

void FUN_101ad3794(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad37c8; end: 101ad37ff; -[SCSCStartupCompleteCameraLockScreenWidgetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad37c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112df9e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9e80));
  return;
}



/* Entry: 101ad3800; end: 101ad381f;  */

void FUN_101ad3800(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4af8);
  return;
}



/* Entry: 101ad3820; end: 101ad388b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad3820(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ad3c14();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112df9eb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ad388c; end: 101ad38f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad388c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df9eb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ad38f8; end: 101ad3957; -[_TtC61StartupCompleteCameraLoggingQueueScopedFactoryServiceProvider49SCStartupCompleteCameraLoggingQueueScopedServices init] */

void FUN_101ad38f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteCameraLoggingQueueScopedFactoryServiceProvider.SCStartupCompleteCameraLoggingQueueScopedServices"
                      ,0x6f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad3924);
  (*pcVar1)();
}



/* Entry: 101ad3958; end: 101ad3967; -[_TtC61StartupCompleteCameraLoggingQueueScopedFactoryServiceProvider49SCStartupCompleteCameraLoggingQueueScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad3958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df9eb8));
  return;
}



/* Entry: 101ad3968; end: 101ad39d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad3968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110440790;
  func_0x000107c613fc(&UNK_110440790,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ad3cf0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ad39d4; end: 101ad3a6f;  */

void FUN_101ad39d4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104406a0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104406a0;
  return;
}



/* Entry: 101ad3a70; end: 101ad3aa7;  */

void FUN_101ad3a70(long *param_1)

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



/* Entry: 101ad3aa8; end: 101ad3aaf;  */

undefined8 FUN_101ad3aa8(void)

{
  return 0x1b;
}



/* Entry: 101ad3ab0; end: 101ad3be3;  */

void FUN_101ad3ab0(undefined8 *param_1)

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
  puVar1 = &UNK_1104407b8;
  func_0x000107c613fc(&UNK_1104407b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad3cc8;
  func_0x00010058fa64(FUN_101ad3cc8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad3be4; end: 101ad3c13;  */

undefined ** FUN_101ad3be4(void)

{
  return &PTR_DAT_112f32ab8;
}



/* Entry: 101ad3c14; end: 101ad3c33;  */

void FUN_101ad3c14(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4bb8);
  return;
}



/* Entry: 101ad3c34; end: 101ad3c83;  */

undefined1  [16] FUN_101ad3c34(void)

{
  return ZEXT816(0x1104406f0);
}



/* Entry: 101ad3c84; end: 101ad3cc7;  */

void FUN_101ad3c84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df9f20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8938;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112df9f20 = puVar1;
  return;
}



/* Entry: 101ad3cc8; end: 101ad3cef;  */

void FUN_101ad3cc8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ad3cf0; end: 101ad3d03;  */

void FUN_101ad3cf0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ad3d04; end: 101ad400f;  */

void FUN_101ad3d04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112df9f38,&UNK_10d9cbad8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112df9f40,&UNK_10d9cbae0);
  puVar2 = &UNK_110440868;
  func_0x000107c613fc(&UNK_110440868,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar8 = 0x101ad4018;
  func_0x0001000823a8(0x101ad4018,puVar2);
  func_0x000100082720("SCCameraLoggingQueueEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101ad3a70;
  func_0x0001000823a8(FUN_101ad3a70,0);
  pcVar4 = "SCStartupCompleteCameraLoggingQueueScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopedServicesCleanupRelayServiceProvider"
                      ,0x4c,2);
  FUN_101ad4d40();
  func_0x000100082720("StartupCompleteCameraLoggingQueueScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112df9f48,&UNK_10d9cbaf0);
  puVar2 = &UNK_110440890;
  func_0x000107c613fc(&UNK_110440890,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101ad4024;
  func_0x0001000823a8(0x101ad4024,puVar2);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopeInitializationPluginRegistryServiceProvider"
                      ,0x53,2);
  func_0x0001000285a8(0x112df9ec0,&UNK_10d9cb7e0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101ad4030;
  func_0x0001000823a8(0x101ad4030,uVar5);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopeInitializationServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112df9eb0,&UNK_10d9cb7d0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101ad4038;
  func_0x0001000823a8(0x101ad4038,uVar6);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopedServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104408b8;
  func_0x000107c613fc(&UNK_1104408b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101ad4040;
  func_0x0001000823a8(0x101ad4040,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopeEntryPointProvider",0x3a,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101ad4010; end: 101ad4047;  */

void FUN_101ad4010(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *param_2;
  func_0x0001000285a8(0x112df9f38,&UNK_10d9cbad8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112df9f40,&UNK_10d9cbae0);
  puVar2 = &UNK_110440868;
  func_0x000107c613fc(&UNK_110440868,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  uVar3 = 0x101ad4018;
  func_0x0001000823a8(0x101ad4018,puVar2);
  func_0x000100082720("SCCameraLoggingQueueEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101ad3a70;
  func_0x0001000823a8(FUN_101ad3a70,0);
  pcVar5 = "SCStartupCompleteCameraLoggingQueueScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopedServicesCleanupRelayServiceProvider"
                      ,0x4c,2);
  FUN_101ad4d40();
  func_0x000100082720("StartupCompleteCameraLoggingQueueScopeGraphBridgeServicesServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112df9f48,&UNK_10d9cbaf0);
  puVar2 = &UNK_110440890;
  func_0x000107c613fc(&UNK_110440890,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101ad4024;
  func_0x0001000823a8(0x101ad4024,puVar2);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopeInitializationPluginRegistryServiceProvider"
                      ,0x53,2);
  func_0x0001000285a8(0x112df9ec0,&UNK_10d9cb7e0);
  func_0x000107c6157c(uVar6);
  uVar8 = 0x101ad4030;
  func_0x0001000823a8(0x101ad4030,uVar6);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopeInitializationServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112df9eb0,&UNK_10d9cb7d0);
  func_0x000107c6157c(uVar8);
  uVar7 = 0x101ad4038;
  func_0x0001000823a8(0x101ad4038,uVar8);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopedServicesServiceProvider",0x40,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104408b8;
  func_0x000107c613fc(&UNK_1104408b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101ad4040;
  func_0x0001000823a8(0x101ad4040,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopeEntryPointProvider",0x3a,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101ad4048; end: 101ad40f7;  */

void FUN_101ad4048(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101ad444c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101ad428c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad40f8; end: 101ad4167;  */

undefined8 FUN_101ad40f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101ad428c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101ad4168; end: 101ad419b;  */

void FUN_101ad4168(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ad419c; end: 101ad41a3;  */

undefined8 FUN_101ad419c(void)

{
  return 0x1b;
}



/* Entry: 101ad41a4; end: 101ad4227;  */

void FUN_101ad41a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101ad448c,param_2,FUN_101ad4490,param_2,FUN_101ad44b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101ad4228; end: 101ad4277;  */

undefined8 FUN_101ad4228(void)

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



/* Entry: 101ad4278; end: 101ad428b;  */

void FUN_101ad4278(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104408d0;
  return;
}



/* Entry: 101ad428c; end: 101ad442f;  */

void FUN_101ad428c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8940;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010eff6980);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef855a0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ad4430; end: 101ad444b;  */

undefined ** FUN_101ad4430(void)

{
  return &PTR_DAT_112f32ab8;
}



/* Entry: 101ad444c; end: 101ad446b;  */

void FUN_101ad444c(void)

{
  func_0x000107c61168(&PTR_PTR_112df9fb8);
  return;
}



/* Entry: 101ad446c; end: 101ad448f;  */

undefined1  [16] FUN_101ad446c(void)

{
  return ZEXT816(0x110440910);
}



/* Entry: 101ad4490; end: 101ad44b7;  */

void FUN_101ad4490(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ad44b8; end: 101ad44bf;  */

undefined8 FUN_101ad44b8(void)

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



/* Entry: 101ad44c0; end: 101ad44fb;  */

void FUN_101ad44c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ad44fc();
  func_0x0001000a7f38("SCStartupCompleteCameraLoggingQueueScopeInitializationPluginRegistryServiceProvider"
                      ,0x53,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101ad44fc; end: 101ad46e7;  */

void FUN_101ad44fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105fd1f8;
  ppuVar4 = &PTR_DAT_112f32ab8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112dfa028;
  func_0x0001000285a8(0x112dfa028,&UNK_10d9cbc38);
  func_0x0001000a6ee8(&UNK_110440910,
                      "SCCameraLoggingQueueEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_101ad475c,param_1,uVar2,&UNK_110440910,&PTR_DAT_112df9f50);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110440960;
  func_0x000107c613fc(&UNK_110440960,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110440730,
                      "SCStartupCompleteCameraLoggingQueueScopedServicesScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101ad480c,puVar3,uVar2,&UNK_110440730,&PTR_DAT_112df9ec8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110440988;
  func_0x000107c613fc(&UNK_110440988,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110440b18,
                      "StartupCompleteCameraLoggingQueueScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4d,2,FUN_101ad4814,puVar3,uVar2,&UNK_110440b18,&PTR_DAT_112dfa0b8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112dfa030;
  func_0x0001000285a8(0x112dfa030,&UNK_10d9cbc40);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101ad46e8; end: 101ad475b;  */

void FUN_101ad46e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101ad4888;
  func_0x0001000823a8(0x101ad4888,param_3);
  func_0x000100082720("SCCameraLoggingQueueEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad475c; end: 101ad4763;  */

void FUN_101ad475c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101ad4888;
  func_0x0001000823a8();
  func_0x000100082720("SCCameraLoggingQueueEntryPointWrapperScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad4764; end: 101ad480b;  */

void FUN_101ad4764(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104409b0;
  func_0x000107c613fc(&UNK_1104409b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101ad4880;
  func_0x0001000823a8(FUN_101ad4880,puVar1);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopedServicesScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101ad480c; end: 101ad4813;  */

void FUN_101ad480c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104409b0;
  func_0x000107c613fc(&UNK_1104409b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101ad4880;
  func_0x0001000823a8(FUN_101ad4880,puVar3);
  func_0x000100082720("SCStartupCompleteCameraLoggingQueueScopedServicesScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101ad4814; end: 101ad4853;  */

void FUN_101ad4814(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101ad4e24(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("StartupCompleteCameraLoggingQueueScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ad4854; end: 101ad487f;  */

void FUN_101ad4854(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ad4880; end: 101ad488f;  */

void FUN_101ad4880(undefined8 *param_1)

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
  puVar1 = &UNK_1104407b8;
  func_0x000107c613fc(&UNK_1104407b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ad3cc8;
  func_0x00010058fa64(FUN_101ad3cc8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad4890; end: 101ad4917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ad4890(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101ad4c50();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112dfa038) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112dfa040) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad4918);
  (*pcVar1)();
}



/* Entry: 101ad4918; end: 101ad4977; -[_TtC49StartupCompleteCameraLoggingQueueScopeGraphBridge64StartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint init] */

void FUN_101ad4918(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteCameraLoggingQueueScopeGraphBridge.StartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint"
                      ,0x72,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad4944);
  (*pcVar1)();
}



/* Entry: 101ad4978; end: 101ad49af; -[_TtC49StartupCompleteCameraLoggingQueueScopeGraphBridge64StartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ad4994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad4998) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad4978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa038));
  return;
}



/* Entry: 101ad49b0; end: 101ad49d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad49b0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dfa040),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dfa038));
  return;
}



/* Entry: 101ad49d8; end: 101ad49f7;  */

void FUN_101ad49d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4c78);
  return;
}



/* Entry: 101ad49f8; end: 101ad4a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ad49f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dfa070) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dfa078);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ad4a80);
  (*pcVar2)();
}



/* Entry: 101ad4a80; end: 101ad4b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ad4a80(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dfa070);
  *(undefined **)(unaff_x20 + _DAT_112dfa070) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dfa078);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dfa078))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110440a78;
  func_0x000107c613fc(&UNK_110440a78,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101ad4b6c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101ad4b68; end: 101ad4b73;  */

void FUN_101ad4b68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101ad4b74; end: 101ad4bd3; -[_TtC49StartupCompleteCameraLoggingQueueScopeGraphBridge64SCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint init] */

void FUN_101ad4b74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteCameraLoggingQueueScopeGraphBridge.SCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint"
                      ,0x72,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad4ba0);
  (*pcVar1)();
}



/* Entry: 101ad4bd4; end: 101ad4c0b; -[_TtC49StartupCompleteCameraLoggingQueueScopeGraphBridge64SCStartupCompleteCameraLoggingQueueScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad4bd4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dfa078));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dfa070));
  return;
}



/* Entry: 101ad4c0c; end: 101ad4c0f;  */

void FUN_101ad4c0c(void)

{
  return;
}



/* Entry: 101ad4c10; end: 101ad4c2f;  */

void FUN_101ad4c10(void)

{
  FUN_101ad4a80();
  return;
}



/* Entry: 101ad4c30; end: 101ad4c4f;  */

void FUN_101ad4c30(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4d40);
  return;
}



/* Entry: 101ad4c50; end: 101ad4d1f;  */

undefined8 FUN_101ad4c50(void)

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
  
  func_0x000107c61428(0x112dfa0a8,&uStack_40,0x20,0);
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
    FUN_101ad4d20();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101ad4d20; end: 101ad4d3f;  */

void FUN_101ad4d20(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4e08);
  return;
}



/* Entry: 101ad4d40; end: 101ad4dab;  */

void FUN_101ad4d40(void)

{
  func_0x0001000285a8(0x112dfa0b0,&UNK_10d9cbd48);
  func_0x0001000823a8(0x101ad4d80,0);
  return;
}



/* Entry: 101ad4dac; end: 101ad4de7; -[_TtC49StartupCompleteCameraLoggingQueueScopeGraphBridge57StartupCompleteCameraLoggingQueueScopeGraphBridgeServices init] */

void FUN_101ad4dac(undefined8 param_1)

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



/* Entry: 101ad4de8; end: 101ad4e1b;  */

void FUN_101ad4de8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ad4e1c; end: 101ad4e23;  */

undefined8 FUN_101ad4e1c(void)

{
  return 0x1b;
}



/* Entry: 101ad4e24; end: 101ad4f9b;  */

void FUN_101ad4e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110440ac0;
  func_0x000107c613fc(&UNK_110440ac0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101ad4f9c,puVar1);
  return;
}



/* Entry: 101ad4f9c; end: 101ad4fa3;  */

void FUN_101ad4f9c(undefined8 *param_1)

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
  func_0x000107c61428(0x112dfa0a8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dfa0a8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110440b58;
  func_0x000107c613fc(&UNK_110440b58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101ad5050;
  func_0x00010058fa64(0x101ad5050,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ad4fa4; end: 101ad4fff;  */

void FUN_101ad4fa4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dfa0a8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dfa0a8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101ad5000; end: 101ad5057;  */

undefined ** FUN_101ad5000(void)

{
  return &PTR_DAT_112f32ab8;
}



/* Entry: 101ad5058; end: 101ad509f; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5058(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfa108;
  func_0x000107c61428(param_1 + _DAT_112dfa108,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ad50a0; end: 101ad50f7; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad50a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfa108;
  func_0x000107c61428(param_1 + _DAT_112dfa108,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101ad50f8; end: 101ad513f; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint startupCompleteCameraLoggingQueueScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad50f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dfa110;
  func_0x000107c61428(param_1 + _DAT_112dfa110,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101ad5140; end: 101ad51a3; -[SCStartupCompleteCameraLoggingQueueScopeGraphBridgeSaberEntryPoint setStartupCompleteCameraLoggingQueueScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad5140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dfa110;
  func_0x000107c61428(param_1 + _DAT_112dfa110,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101ad51a4; end: 101ad52d7;  */

/* WARNING: Possible PIC construction at 0x000101ad525c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad5278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ad5294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ad5260) */
/* WARNING: Removing unreachable block (ram,0x000101ad527c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad51a4(void)

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
  func_0x000107c5bc8c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101ad49d8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101ad4c50();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ad52d8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112dfa038) = lVar5;
    *(long *)(lVar4 + _DAT_112dfa040) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


