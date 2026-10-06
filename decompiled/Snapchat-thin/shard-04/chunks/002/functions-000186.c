/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032acb58; end: 1032acb9b;  */

void FUN_1032acb58(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1032acb9c; end: 1032acba7; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider setGamesExplorerMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032acb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52298;
  func_0x000107c61428(param_1 + _DAT_112f52298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032acba8; end: 1032acbfb;  */

void FUN_1032acba8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032acbfc; end: 1032ace0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032acbfc(void)

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
    func_0x000107c43cf8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001032abd60();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f521f8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f522a0);
      *(long *)(unaff_x20 + _DAT_112f522a0) = lVar4;
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
                      "GamesExplorerMainCameraScopeGraphBridge/SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider.swift"
                      ,0x85,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032acd28);
  (*pcVar1)();
}



/* Entry: 1032ace10; end: 1032ace43; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider provide] */

void FUN_1032ace10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032acbfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032ace44; end: 1032ace77; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_1032ace44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001032acd28();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032ace78; end: 1032acebb; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider end] */

void FUN_1032ace78(undefined8 param_1)

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



/* Entry: 1032acebc; end: 1032ad053;  */

void FUN_1032acebc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0ec8f30)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f1370d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GamesExplorerMainCameraScopeGraphBridge/SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider.swift"
                            ,0x85,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ad054);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54da4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032ad054; end: 1032ad0ff; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1032ad054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032acebc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032ad100; end: 1032ad173; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad100(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52290,0);
  func_0x000107c61614(param_1 + _DAT_112f52298,0);
  *(undefined8 *)(param_1 + _DAT_112f522a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032ad174; end: 1032ad1a7;  */

void FUN_1032ad174(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032ad1a8; end: 1032ad1ef; -[SCSCGamesExplorerMainCameraScopedLensExplorerSessionLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad1a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52290);
  func_0x000107c61610(param_1 + _DAT_112f52298);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f522a0));
  return;
}



/* Entry: 1032ad1f0; end: 1032ad20f;  */

void FUN_1032ad1f0(void)

{
  func_0x000107c61168(&PTR_PTR_112f522e8);
  return;
}



/* Entry: 1032ad210; end: 1032ad257; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad210(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52350;
  func_0x000107c61428(param_1 + _DAT_112f52350,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032ad258; end: 1032ad2af; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52350;
  func_0x000107c61428(param_1 + _DAT_112f52350,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032ad2b0; end: 1032ad387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad2b0(undefined8 param_1,long param_2)

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
    FUN_1032ac034();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f521b0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032ad388);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f521b8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f52358);
    *(long **)(unaff_x20 + _DAT_112f52358) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032ad388; end: 1032ad3af; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint begin] */

void FUN_1032ad388(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032ad2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032ad3b0; end: 1032ad527;  */

/* WARNING: Possible PIC construction at 0x0001032ad418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032ad4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032ad41c) */
/* WARNING: Removing unreachable block (ram,0x0001032ad4b4) */
/* WARNING: Removing unreachable block (ram,0x0001032ad4cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad3b0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f52358);
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



/* Entry: 1032ad528; end: 1032ad52f;  */

void FUN_1032ad528(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032ad530; end: 1032ad563; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint end] */

void FUN_1032ad530(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032ad3b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032ad564; end: 1032ad683;  */

void FUN_1032ad564(long param_1,long param_2,long param_3)

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
                        "GamesExplorerMainCameraScopeGraphBridge/SCGamesExplorerMainCameraScopedServicesSaberEntryPoint.swift"
                        ,100,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ad684);
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



/* Entry: 1032ad684; end: 1032ad72f; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032ad684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032ad564(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032ad730; end: 1032ad78f; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad730(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f52350,0);
  *(undefined8 *)(param_1 + _DAT_112f52358) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032ad790; end: 1032ad7c3;  */

void FUN_1032ad790(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032ad7c4; end: 1032ad7fb; -[SCGamesExplorerMainCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad7c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f52350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52358));
  return;
}



/* Entry: 1032ad7fc; end: 1032ad81b;  */

void FUN_1032ad7fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8b40);
  return;
}



/* Entry: 1032ad81c; end: 1032ad887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad81c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032adc10();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f52390) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032ad888; end: 1032ad8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad888(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f52390) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032ad8f4; end: 1032ad953; -[_TtC41GamesExplorerScopedFactoryServiceProvider27GamesExplorerScopedServices init] */

void FUN_1032ad8f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerScopedFactoryServiceProvider.GamesExplorerScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ad920);
  (*pcVar1)();
}



/* Entry: 1032ad954; end: 1032ad963; -[_TtC41GamesExplorerScopedFactoryServiceProvider27GamesExplorerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f52390));
  return;
}



/* Entry: 1032ad964; end: 1032ad9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032ad964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106345d0;
  func_0x000107c613fc(&UNK_1106345d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032adca8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032ad9d0; end: 1032ada6b;  */

void FUN_1032ad9d0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106344e0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106344e0;
  return;
}



/* Entry: 1032ada6c; end: 1032adaa3;  */

void FUN_1032ada6c(long *param_1)

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



/* Entry: 1032adaa4; end: 1032adaab;  */

undefined8 FUN_1032adaa4(void)

{
  return 0x1b;
}



/* Entry: 1032adaac; end: 1032adbdf;  */

void FUN_1032adaac(undefined8 *param_1)

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
  puVar1 = &UNK_1106345f8;
  func_0x000107c613fc(&UNK_1106345f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032adc80;
  func_0x00010058fa64(FUN_1032adc80,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032adbe0; end: 1032adc0f;  */

undefined ** FUN_1032adbe0(void)

{
  return &PTR_DAT_113066658;
}



/* Entry: 1032adc10; end: 1032adc2f;  */

void FUN_1032adc10(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8c00);
  return;
}



/* Entry: 1032adc30; end: 1032adc7f;  */

undefined1  [16] FUN_1032adc30(void)

{
  return ZEXT816(0x110634530);
}



/* Entry: 1032adc80; end: 1032adca7;  */

void FUN_1032adc80(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032adca8; end: 1032adcbb;  */

void FUN_1032adca8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032adcbc; end: 1032ae04b;  */

void FUN_1032adcbc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f52408,&UNK_10dba8698);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f52410,&UNK_10dba86a0);
  puVar2 = &UNK_1106346a8;
  func_0x000107c613fc(&UNK_1106346a8,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar9 = 0x1032ae05c;
  func_0x0001000823a8(0x1032ae05c,puVar2);
  func_0x000100082720("SCGamesExplorerCategoriesLoggerEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f52418,&UNK_10dba86a8);
  func_0x000107c6157c(uVar9);
  uVar3 = 0x1032ae06c;
  func_0x0001000823a8(0x1032ae06c,uVar9);
  func_0x000100082720("SCGamesExplorerScopedLensExplorerSessionLoggingServicesServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032ada6c;
  func_0x0001000823a8(FUN_1032ada6c,0);
  func_0x000100082720("GamesExplorerScopedServicesCleanupRelayServiceProvider",0x36,2);
  uVar5 = uVar3;
  FUN_1032af578();
  func_0x000100082720("GamesExplorerScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f52420,&UNK_10dba86b8);
  puVar2 = &UNK_1106346d0;
  func_0x000107c613fc(&UNK_1106346d0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar4);
  uVar6 = 0x1032ae074;
  func_0x0001000823a8(0x1032ae074,puVar2);
  func_0x000100082720("GamesExplorerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f52398,&UNK_10dba8460);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032ae080;
  func_0x0001000823a8(0x1032ae080,uVar6);
  func_0x000100082720("GamesExplorerScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f52388,&UNK_10dba8450);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1032ae088;
  func_0x0001000823a8(0x1032ae088,uVar7);
  func_0x000100082720("GamesExplorerScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106346f8;
  func_0x000107c613fc(&UNK_1106346f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x1032ae090;
  func_0x0001000823a8(0x1032ae090,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("GamesExplorerScopeEntryPointProvider",0x24,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1032ae04c; end: 1032ae097;  */

void FUN_1032ae04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f52408,&UNK_10dba8698);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f52410,&UNK_10dba86a0);
  puVar2 = &UNK_1106346a8;
  func_0x000107c613fc(&UNK_1106346a8,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  *(undefined8 *)(puVar2 + 0x30) = uVar7;
  *(undefined8 *)(puVar2 + 0x38) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x1032ae05c;
  func_0x0001000823a8(0x1032ae05c,puVar2);
  func_0x000100082720("SCGamesExplorerCategoriesLoggerEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f52418,&UNK_10dba86a8);
  func_0x000107c6157c(uVar3);
  uVar4 = 0x1032ae06c;
  func_0x0001000823a8(0x1032ae06c,uVar3);
  func_0x000100082720("SCGamesExplorerScopedLensExplorerSessionLoggingServicesServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1032ada6c;
  func_0x0001000823a8(FUN_1032ada6c,0);
  func_0x000100082720("GamesExplorerScopedServicesCleanupRelayServiceProvider",0x36,2);
  uVar9 = uVar4;
  FUN_1032af578();
  func_0x000100082720("GamesExplorerScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f52420,&UNK_10dba86b8);
  puVar2 = &UNK_1106346d0;
  func_0x000107c613fc(&UNK_1106346d0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  *(code **)(puVar2 + 0x20) = pcVar5;
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1032ae074;
  func_0x0001000823a8(0x1032ae074,puVar2);
  func_0x000100082720("GamesExplorerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f52398,&UNK_10dba8460);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032ae080;
  func_0x0001000823a8(0x1032ae080,uVar6);
  func_0x000100082720("GamesExplorerScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f52388,&UNK_10dba8450);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1032ae088;
  func_0x0001000823a8(0x1032ae088,uVar7);
  func_0x000100082720("GamesExplorerScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106346f8;
  func_0x000107c613fc(&UNK_1106346f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x1032ae090;
  func_0x0001000823a8(0x1032ae090,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("GamesExplorerScopeEntryPointProvider",0x24,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1032ae098; end: 1032ae8e7;  */

void FUN_1032ae098(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_1032aeabc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
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
  uVar7 = uStack_90;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar8 = PTR_PTR_1126acfc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1373a0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1373c0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(param_2 + 0x48) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032ae4f0);
  (*pcVar1)();
}



/* Entry: 1032ae8e8; end: 1032ae95b;  */

void FUN_1032ae8e8(void)

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
  return;
}



/* Entry: 1032ae95c; end: 1032ae9af;  */

void FUN_1032ae95c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032ae9b0; end: 1032ae9b7;  */

undefined8 FUN_1032ae9b0(void)

{
  return 0x1b;
}



/* Entry: 1032ae9b8; end: 1032aea3b;  */

void FUN_1032ae9b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032aeb0c,param_2,FUN_1032aeb10,param_2,FUN_1032aeb38,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032aea3c; end: 1032aea8b;  */

undefined8 FUN_1032aea3c(void)

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



/* Entry: 1032aea8c; end: 1032aeabb;  */

undefined ** FUN_1032aea8c(void)

{
  return &PTR_DAT_113066658;
}



/* Entry: 1032aeabc; end: 1032aeadb;  */

void FUN_1032aeabc(void)

{
  func_0x000107c61168(&PTR_PTR_112f52490);
  return;
}



/* Entry: 1032aeadc; end: 1032aeb0f;  */

undefined1  [16] FUN_1032aeadc(void)

{
  return ZEXT816(0x110634750);
}



/* Entry: 1032aeb10; end: 1032aeb37;  */

void FUN_1032aeb10(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032aeb38; end: 1032aeb3f;  */

undefined8 FUN_1032aeb38(void)

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



/* Entry: 1032aeb40; end: 1032aeb7b;  */

void FUN_1032aeb40(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032aeb7c();
  func_0x0001000a7f38("GamesExplorerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032aeb7c; end: 1032aed67;  */

void FUN_1032aeb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cd08;
  ppuVar4 = &PTR_DAT_113066658;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1106347c0;
  func_0x000107c613fc(&UNK_1106347c0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f52528;
  func_0x0001000285a8(0x112f52528,&UNK_10dba88a8);
  func_0x0001000a6ee8(&UNK_1106349f0,"GamesExplorerScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_1032aed68,puVar2,uVar3,&UNK_1106349f0,&PTR_DAT_112f525f8);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106347e8;
  func_0x000107c613fc(&UNK_1106347e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110634570,"GamesExplorerScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_1032aee50,puVar2,uVar3,&UNK_110634570,&PTR_DAT_112f523a0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110634770,
                      "SCGamesExplorerCategoriesLoggerEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_1032aeecc,param_4,uVar3,&UNK_110634770,&PTR_DAT_112f52428);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f52530;
  func_0x0001000285a8(0x112f52530,&UNK_10dba88b0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032aed68; end: 1032aeda7;  */

void FUN_1032aed68(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032af6fc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GamesExplorerScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032aeda8; end: 1032aee4f;  */

void FUN_1032aeda8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110634810;
  func_0x000107c613fc(&UNK_110634810,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032aef08;
  func_0x0001000823a8(FUN_1032aef08,puVar1);
  func_0x000100082720("GamesExplorerScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032aee50; end: 1032aee57;  */

void FUN_1032aee50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110634810;
  func_0x000107c613fc(&UNK_110634810,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032aef08;
  func_0x0001000823a8(FUN_1032aef08,puVar3);
  func_0x000100082720("GamesExplorerScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032aee58; end: 1032aeecb;  */

void FUN_1032aee58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032aeed4;
  func_0x0001000823a8(0x1032aeed4,param_3);
  func_0x000100082720("SCGamesExplorerCategoriesLoggerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x51,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032aeecc; end: 1032aeedb;  */

void FUN_1032aeecc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032aeed4;
  func_0x0001000823a8();
  func_0x000100082720("SCGamesExplorerCategoriesLoggerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x51,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032aeedc; end: 1032aef07;  */

void FUN_1032aeedc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032aef08; end: 1032aef0f;  */

void FUN_1032aef08(undefined8 *param_1)

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
  puVar1 = &UNK_1106345f8;
  func_0x000107c613fc(&UNK_1106345f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032adc80;
  func_0x00010058fa64(FUN_1032adc80,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032aef10; end: 1032aef97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032aef10(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032af488();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f52538) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f52540) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032aef98);
  (*pcVar1)();
}



/* Entry: 1032aef98; end: 1032aeff7; -[_TtC29GamesExplorerScopeGraphBridge44GamesExplorerScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032aef98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerScopeGraphBridge.GamesExplorerScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032aefc4);
  (*pcVar1)();
}



/* Entry: 1032aeff8; end: 1032af02f; -[_TtC29GamesExplorerScopeGraphBridge44GamesExplorerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032af014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032af018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032aeff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52538));
  return;
}



/* Entry: 1032af030; end: 1032af057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af030(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f52540),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f52538));
  return;
}



/* Entry: 1032af058; end: 1032af077;  */

void FUN_1032af058(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8cc0);
  return;
}



/* Entry: 1032af078; end: 1032af113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032af078(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f525f0);
  *(undefined8 *)(unaff_x20 + _DAT_112f52570) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f52578) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1032af114; end: 1032af173; -[_TtC29GamesExplorerScopeGraphBridge70SCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint init] */

void FUN_1032af114(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerScopeGraphBridge.SCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032af140);
  (*pcVar1)();
}



/* Entry: 1032af174; end: 1032af207; -[_TtC29GamesExplorerScopeGraphBridge70SCGamesExplorerScopedLensExplorerSessionLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af174(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f52570));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f52578));
  return;
}



/* Entry: 1032af208; end: 1032af20f;  */

undefined8 FUN_1032af208(void)

{
  return 0;
}



/* Entry: 1032af210; end: 1032af22f;  */

void FUN_1032af210(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8d88);
  return;
}



/* Entry: 1032af230; end: 1032af2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032af230(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f525a8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f525b0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032af2b8);
  (*pcVar2)();
}



/* Entry: 1032af2b8; end: 1032af39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032af2b8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f525a8);
  *(undefined **)(unaff_x20 + _DAT_112f525a8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f525b0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f525b0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110634950;
  func_0x000107c613fc(&UNK_110634950,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032af3a4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032af3a0; end: 1032af3ab;  */

void FUN_1032af3a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032af3ac; end: 1032af40b; -[_TtC29GamesExplorerScopeGraphBridge42GamesExplorerScopedServicesSaberEntryPoint init] */

void FUN_1032af3ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerScopeGraphBridge.GamesExplorerScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032af3d8);
  (*pcVar1)();
}



/* Entry: 1032af40c; end: 1032af443; -[_TtC29GamesExplorerScopeGraphBridge42GamesExplorerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af40c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f525b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f525a8));
  return;
}



/* Entry: 1032af444; end: 1032af447;  */

void FUN_1032af444(void)

{
  return;
}



/* Entry: 1032af448; end: 1032af467;  */

void FUN_1032af448(void)

{
  FUN_1032af2b8();
  return;
}



/* Entry: 1032af468; end: 1032af487;  */

void FUN_1032af468(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8e50);
  return;
}



/* Entry: 1032af488; end: 1032af557;  */

undefined8 FUN_1032af488(void)

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
  
  func_0x000107c61428(0x112f525e0,&uStack_40,0x20,0);
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
    FUN_1032af558();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032af558; end: 1032af577;  */

void FUN_1032af558(void)

{
  func_0x000107c61168(&PTR_PTR_1128c8f18);
  return;
}



/* Entry: 1032af578; end: 1032af5c3;  */

void FUN_1032af578(undefined8 param_1)

{
  func_0x0001000285a8(0x112f525e8,&UNK_10dba89c8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032af630,param_1);
  return;
}



/* Entry: 1032af5c4; end: 1032af62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af5c4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1032af558();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f525f0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1032af630; end: 1032af637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af630(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1032af558();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f525f0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1032af638; end: 1032af683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af638(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f525f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032af684; end: 1032af6e3; -[_TtC29GamesExplorerScopeGraphBridge37GamesExplorerScopeGraphBridgeServices init] */

void FUN_1032af684(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerScopeGraphBridge.GamesExplorerScopeGraphBridgeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032af6b0);
  (*pcVar1)();
}



/* Entry: 1032af6e4; end: 1032af6fb; -[_TtC29GamesExplorerScopeGraphBridge37GamesExplorerScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f525f0));
  return;
}



/* Entry: 1032af6fc; end: 1032af873;  */

void FUN_1032af6fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110634998;
  func_0x000107c613fc(&UNK_110634998,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032af874,puVar1);
  return;
}



/* Entry: 1032af874; end: 1032af87b;  */

void FUN_1032af874(undefined8 *param_1)

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
  func_0x000107c61428(0x112f525e0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f525e0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110634a30;
  func_0x000107c613fc(&UNK_110634a30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032af928;
  func_0x00010058fa64(0x1032af928,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032af87c; end: 1032af8d7;  */

void FUN_1032af87c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f525e0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f525e0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032af8d8; end: 1032af92f;  */

undefined ** FUN_1032af8d8(void)

{
  return &PTR_DAT_113066658;
}



/* Entry: 1032af930; end: 1032af977; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af930(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52648;
  func_0x000107c61428(param_1 + _DAT_112f52648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032af978; end: 1032af9cf; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52648;
  func_0x000107c61428(param_1 + _DAT_112f52648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032af9d0; end: 1032afa17; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint gamesExplorerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032af9d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f52650;
  func_0x000107c61428(param_1 + _DAT_112f52650,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032afa18; end: 1032afa7b; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint setGamesExplorerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032afa18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f52650;
  func_0x000107c61428(param_1 + _DAT_112f52650,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032afa7c; end: 1032afbaf;  */

/* WARNING: Possible PIC construction at 0x0001032afb34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032afb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032afb6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032afb38) */
/* WARNING: Removing unreachable block (ram,0x0001032afb54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032afa7c(void)

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
  func_0x000107c43d08();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032af058();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032af488();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032afbb0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f52538) = lVar5;
    *(long *)(lVar4 + _DAT_112f52540) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032afbb0; end: 1032afbd7; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032afbb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032afa7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032afbd8; end: 1032afc1b; -[SCGamesExplorerScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032afbd8(undefined8 param_1)

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



/* Entry: 1032afc1c; end: 1032afdb3;  */

void FUN_1032afc1c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0ec8900)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f137700,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "GamesExplorerScopeGraphBridge/SCGamesExplorerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032afdb4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54db4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


