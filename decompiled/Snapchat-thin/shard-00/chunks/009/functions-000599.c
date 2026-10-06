/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b852e8; end: 100b8535b; -[SCSCLensContentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b852e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113027968,0);
  func_0x000107c61614(param_1 + _DAT_113027970,0);
  *(undefined8 *)(param_1 + _DAT_113027978) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b8535c; end: 100b85407; -[SCSCLensContentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b8535c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b85408(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b85408; end: 100b8559f;  */

void FUN_100b85408(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCLensContentServicesSaberServiceProvider.swift"
                            ,0x51,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b855a0);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b855a0; end: 100b855ab; -[SCSCLensContentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b855a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113027968;
  func_0x000107c61428(param_1 + _DAT_113027968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b855ac; end: 100b855ff;  */

void FUN_100b855ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85600; end: 100b8560b; -[SCSCLensContentServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113027970;
  func_0x000107c61428(param_1 + _DAT_113027970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8560c; end: 100b8563f; -[SCSCLensContentServicesSaberServiceProvider __safeProvide] */

void FUN_100b8560c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b85640();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b85640; end: 100b85727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85640(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b85784();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026660);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113027978);
      *(long *)(unaff_x20 + _DAT_113027978) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b85728; end: 100b85733; -[SCSCLensContentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85728(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113027968;
  func_0x000107c61428(param_1 + _DAT_113027968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b85734; end: 100b85777;  */

void FUN_100b85734(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b85778; end: 100b85783; -[SCSCLensContentServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113027970;
  func_0x000107c61428(param_1 + _DAT_113027970,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b85784; end: 100b857ff;  */

void FUN_100b85784(undefined8 param_1)

{
  if (lRam0000000113023930 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cf110);
  return;
}



/* Entry: 100b85800; end: 100b8580b; -[SCSponsoredLensPlayablesEntryPoint setLensContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc50;
  func_0x000107c61428(param_1 + _DAT_112d3bc50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8580c; end: 100b85817; -[SCSponsoredLensPlayablesEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8580c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc58;
  func_0x000107c61428(param_1 + _DAT_112d3bc58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85818; end: 100b8588b; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85818(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113056f20,0);
  func_0x000107c61614(param_1 + _DAT_113056f28,0);
  *(undefined8 *)(param_1 + _DAT_113056f30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b8588c; end: 100b85937; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b8588c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b85938(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b85938; end: 100b85acf;  */

void FUN_100b85938(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e18ae0)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1e7520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CofSystemScopeGraphBridge/SCSCAppStartExperimentReaderServicesSaberServiceProvider.swift"
                            ,0x58,2,0x3b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85ad0);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53550();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b85ad0; end: 100b85adb; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056f20;
  func_0x000107c61428(param_1 + _DAT_113056f20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85adc; end: 100b85b2f;  */

void FUN_100b85adc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85b30; end: 100b85b3b; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider setCofSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056f28;
  func_0x000107c61428(param_1 + _DAT_113056f28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85b3c; end: 100b85b6f; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider __safeProvide] */

void FUN_100b85b3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b85b70();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b85b70; end: 100b85c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85b70(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fd28();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b85cb4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113056d60);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113056f30);
      *(long *)(unaff_x20 + _DAT_113056f30) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b85c58; end: 100b85c63; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85c58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056f20;
  func_0x000107c61428(param_1 + _DAT_113056f20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b85c64; end: 100b85ca7;  */

void FUN_100b85c64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b85ca8; end: 100b85cb3; -[SCSCAppStartExperimentReaderServicesSaberServiceProvider cofSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056f28;
  func_0x000107c61428(param_1 + _DAT_113056f28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b85cb4; end: 100b85d53;  */

void FUN_100b85cb4(undefined8 param_1)

{
  if (lRam00000001130566f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7e9bf4);
  return;
}



/* Entry: 100b85d54; end: 100b85d73; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices aserConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85d54(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113080728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b85d74; end: 100b85d83; -[SCSnapUploadWorkflowServices snapUploadWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4d90));
  return;
}



/* Entry: 100b85d84; end: 100b85d8f; -[SCSponsoredLensPlayablesEntryPoint setAppStartExperimentReaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc60;
  func_0x000107c61428(param_1 + _DAT_112d3bc60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b85d90; end: 100b85d97; -[SCCloudSyncBackgroundUploadSchedulingServices backgroundUploadScheduler] */

undefined8 FUN_100b85d90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b85d98; end: 100b85dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85d98(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112770f60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b85dbc; end: 100b85dfb; -[_TtC30SCMemPlatBackupMonitorServices28MemPlatBackupMonitorServices backupMonitorSCLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85dbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b85dfc; end: 100b85edb; -[SCCloudSyncServiceProvider _backupNowManager] */

void FUN_100b85dfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000100b85d30();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4cb88();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  FUN_100b85d98();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4cab4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_107eae334;
  puStack_48 = &UNK_110a10df8;
  puVar3 = PTR_PTR_1126ae720;
  uStack_40 = uVar2;
  uStack_38 = uVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b85edc; end: 100b85f23; -[MemoriesSearchTagsServices tagsSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85edc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  FUN_100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 100b85f24; end: 100b85f97; -[SCSCAdConfigProviderServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b85f24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11300f648,0);
  func_0x000107c61614(param_1 + _DAT_11300f650,0);
  *(undefined8 *)(param_1 + _DAT_11300f658) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b85f98; end: 100b86043; -[SCSCAdConfigProviderServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_100b85f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b86044(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b86044; end: 100b861db;  */

void FUN_100b86044(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e453e0)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1bac20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdclUserSessionScopeGraphBridge/SCSCAdConfigProviderServiceSaberServiceProvider.swift"
                            ,0x55,2,0x52,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b861dc);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52470();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b861dc; end: 100b861fb;  */

void FUN_100b861dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc0e8);
  return;
}



/* Entry: 100b861fc; end: 100b8623f;  */

void FUN_100b861fc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_100b861dc();
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_100b862a0();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100b86240; end: 100b8624b; -[SCSCAdConfigProviderServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300f648;
  func_0x000107c61428(param_1 + _DAT_11300f648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8624c; end: 100b8629f;  */

void FUN_100b8624c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b862a0; end: 100b863db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b862a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112e07790;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f002310);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e07788) = param_1;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b863dc; end: 100b863e7; -[SCSCAdConfigProviderServiceSaberServiceProvider setAdclUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b863dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300f650;
  func_0x000107c61428(param_1 + _DAT_11300f650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b863e8; end: 100b8641b; -[SCSCAdConfigProviderServiceSaberServiceProvider __safeProvide] */

void FUN_100b863e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b8641c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b8641c; end: 100b86503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8641c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d580();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b86560();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11300eb50);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300f658);
      *(long *)(unaff_x20 + _DAT_11300f658) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b86504; end: 100b8650f; -[SCSCAdConfigProviderServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300f648;
  func_0x000107c61428(param_1 + _DAT_11300f648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b86510; end: 100b86553;  */

void FUN_100b86510(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b86554; end: 100b8655f; -[SCSCAdConfigProviderServiceSaberServiceProvider adclUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86554(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300f650;
  func_0x000107c61428(param_1 + _DAT_11300f650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b86560; end: 100b865db;  */

void FUN_100b86560(undefined8 param_1)

{
  if (lRam000000011300d9f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c4240);
  return;
}



/* Entry: 100b865dc; end: 100b865e7; -[SCSponsoredLensPlayablesEntryPoint setAdConfigProviderService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b865dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc68;
  func_0x000107c61428(param_1 + _DAT_112d3bc68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b865e8; end: 100b8665b; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b865e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11300f048,0);
  func_0x000107c61614(param_1 + _DAT_11300f050,0);
  *(undefined8 *)(param_1 + _DAT_11300f058) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b8665c; end: 100b86707; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_100b8665c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b86708(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b86708; end: 100b8689f;  */

void FUN_100b86708(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e453e0)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1bac20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdclUserSessionScopeGraphBridge/SCAdPlayableWebViewFactoryServiceSaberServiceProvider.swift"
                            ,0x5b,2,0x52,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b868a0);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52470();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b868a0; end: 100b868ab; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b868a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300f048;
  func_0x000107c61428(param_1 + _DAT_11300f048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b868ac; end: 100b868ff;  */

void FUN_100b868ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b86900; end: 100b8690b; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider setAdclUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86900(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300f050;
  func_0x000107c61428(param_1 + _DAT_11300f050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b8690c; end: 100b8693f; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider __safeProvide] */

void FUN_100b8690c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b86940();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b86940; end: 100b86a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86940(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d580();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b86a84();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11300eb10);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300f058);
      *(long *)(unaff_x20 + _DAT_11300f058) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b86a28; end: 100b86a33; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86a28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300f048;
  func_0x000107c61428(param_1 + _DAT_11300f048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b86a34; end: 100b86a77;  */

void FUN_100b86a34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b86a78; end: 100b86a83; -[SCAdPlayableWebViewFactoryServiceSaberServiceProvider adclUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86a78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300f050;
  func_0x000107c61428(param_1 + _DAT_11300f050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b86a84; end: 100b86aff;  */

void FUN_100b86a84(undefined8 param_1)

{
  if (lRam000000011300d370 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c3f20);
  return;
}



/* Entry: 100b86b00; end: 100b86b0b; -[SCSponsoredLensPlayablesEntryPoint setAdPlayableWebViewFactoryService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc70;
  func_0x000107c61428(param_1 + _DAT_112d3bc70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b86b0c; end: 100b86b17; -[SCSponsoredLensPlayablesEntryPoint setSponsoredLensTrackingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b86b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc78;
  func_0x000107c61428(param_1 + _DAT_112d3bc78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b86b18; end: 100b871b3; -[SCCloudSync initWithDependencyProvider:dataVault:thumbnailFileGenerator:networker:clientCompatVersion:dataObjectContext:featureSettingsService:searchIndexer:userTrackedLogger:apiURLSessionBackgroundTaskResults:networkConnectivityMonitor:coreConfigProvider:aserConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:memoriesUserDefaultsManager:backgroundUploadScheduler:applicationLifecycleEvents:memPlatBackupService:dataCapManager:memPlatBackupMonitor:memPlatBackupNowManager:tagsSyncer:] */

undefined8 *
FUN_100b86b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174();
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  puStack_80 = PTR_PTR_1126fb9c0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174();
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[8];
    puVar1[8] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[9];
    puVar1[9] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[10];
    puVar1[10] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_26;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4e600(param_3);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_100b886a0;
    puStack_a0 = &UNK_110841f80;
    func_0x000107c61174(param_3);
    uStack_98 = param_3;
    func_0x000107c61174(puVar1);
    puStack_90 = puVar1;
    func_0x000107c4e524(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    func_0x000107c61170(uVar2);
    puVar1[0x17] = param_7;
    puVar3 = PTR_PTR_1126d8380;
    func_0x000107c610fc();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d8388;
    func_0x000107c610fc();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    func_0x000107c610fc();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d8390;
    func_0x000107c61160();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_c0,puVar1);
    uVar2 = param_21;
    func_0x000107c5e370(param_21);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_c8,auStack_c0);
    uVar4 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61170(puStack_90);
    func_0x000107c61170(uStack_98);
  }
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b871b4; end: 100b871bf; -[SCSponsoredLensPlayablesEntryPoint setCtaHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b871b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc80;
  func_0x000107c61428(param_1 + _DAT_112d3bc80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b871c0; end: 100b871cb; -[SCCloudSyncDependencyProvidingServices performer] */

undefined8 FUN_100b871c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100b871cc; end: 100b872bb;  */

void FUN_100b871cc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO11unspecifiedyA2EmFWC_11034f7d8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00ebb0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100b872bc; end: 100b8732f; -[SCAdRenderDataMapperServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b872bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130124e0,0);
  func_0x000107c61614(param_1 + _DAT_1130124e8,0);
  *(undefined8 *)(param_1 + _DAT_1130124f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b87330; end: 100b873db; -[SCAdRenderDataMapperServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b87330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b873dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b873dc; end: 100b87573;  */

void FUN_100b873dc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e432a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1bcd60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AradsUserSessionScopeGraphBridge/SCAdRenderDataMapperServicesSaberServiceProvider.swift"
                            ,0x57,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b87574);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c528c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b87574; end: 100b8757f; -[SCAdRenderDataMapperServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b87574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130124e0;
  func_0x000107c61428(param_1 + _DAT_1130124e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b87580; end: 100b875d3;  */

void FUN_100b87580(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b875d4; end: 100b875df; -[SCAdRenderDataMapperServicesSaberServiceProvider setAradsUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b875d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130124e8;
  func_0x000107c61428(param_1 + _DAT_1130124e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b875e0; end: 100b87613; -[SCAdRenderDataMapperServicesSaberServiceProvider __safeProvide] */

void FUN_100b875e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b87614();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b87614; end: 100b876fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b87614(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e0ec();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b87758();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_1130121e0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130124f0);
      *(long *)(unaff_x20 + _DAT_1130124f0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b876fc; end: 100b87707; -[SCAdRenderDataMapperServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b876fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130124e0;
  func_0x000107c61428(param_1 + _DAT_1130124e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b87708; end: 100b8774b;  */

void FUN_100b87708(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b8774c; end: 100b87757; -[SCAdRenderDataMapperServicesSaberServiceProvider aradsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8774c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130124e8;
  func_0x000107c61428(param_1 + _DAT_1130124e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b87758; end: 100b877d3;  */

void FUN_100b87758(undefined8 param_1)

{
  if (lRam0000000113011d00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c6718);
  return;
}



/* Entry: 100b877d4; end: 100b877e3;  */

void FUN_100b877d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b877e4; end: 100b877ef; -[SCSponsoredLensPlayablesEntryPoint setAdRenderDataMapperServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b877e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3bc88;
  func_0x000107c61428(param_1 + _DAT_112d3bc88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b877f0; end: 100b87817; -[SCSponsoredLensPlayablesEntryPoint begin] */

void FUN_100b877f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b87818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b87818; end: 100b884ef;  */

/* WARNING: Possible PIC construction at 0x000100b87e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8804c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8825c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8827c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b882b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b882c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b882d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b882e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b882f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b884a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b884b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b88388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8839c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b883ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b883bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b883cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b883dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b883ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b8840c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b87a5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b87a70) */
/* WARNING: Removing unreachable block (ram,0x000100b87a90) */
/* WARNING: Removing unreachable block (ram,0x000100b87ac0) */
/* WARNING: Removing unreachable block (ram,0x000100b87ab0) */
/* WARNING: Removing unreachable block (ram,0x000100b87af0) */
/* WARNING: Removing unreachable block (ram,0x000100b87ae0) */
/* WARNING: Removing unreachable block (ram,0x000100b87ad0) */
/* WARNING: Removing unreachable block (ram,0x000100b87b20) */
/* WARNING: Removing unreachable block (ram,0x000100b87b10) */
/* WARNING: Removing unreachable block (ram,0x000100b87b00) */
/* WARNING: Removing unreachable block (ram,0x000100b87b60) */
/* WARNING: Removing unreachable block (ram,0x000100b87b50) */
/* WARNING: Removing unreachable block (ram,0x000100b87b40) */
/* WARNING: Removing unreachable block (ram,0x000100b87bb0) */
/* WARNING: Removing unreachable block (ram,0x000100b87ba0) */
/* WARNING: Removing unreachable block (ram,0x000100b87b90) */
/* WARNING: Removing unreachable block (ram,0x000100b87b80) */
/* WARNING: Removing unreachable block (ram,0x000100b87c00) */
/* WARNING: Removing unreachable block (ram,0x000100b87bf0) */
/* WARNING: Removing unreachable block (ram,0x000100b87be0) */
/* WARNING: Removing unreachable block (ram,0x000100b87bd0) */
/* WARNING: Removing unreachable block (ram,0x000100b87bc0) */
/* WARNING: Removing unreachable block (ram,0x000100b87c50) */
/* WARNING: Removing unreachable block (ram,0x000100b87c40) */
/* WARNING: Removing unreachable block (ram,0x000100b87c30) */
/* WARNING: Removing unreachable block (ram,0x000100b87c20) */
/* WARNING: Removing unreachable block (ram,0x000100b87c10) */
/* WARNING: Removing unreachable block (ram,0x000100b87cb0) */
/* WARNING: Removing unreachable block (ram,0x000100b87ca0) */
/* WARNING: Removing unreachable block (ram,0x000100b87c90) */
/* WARNING: Removing unreachable block (ram,0x000100b87c80) */
/* WARNING: Removing unreachable block (ram,0x000100b87c70) */
/* WARNING: Removing unreachable block (ram,0x000100b87d74) */
/* WARNING: Removing unreachable block (ram,0x000100b87d4c) */
/* WARNING: Removing unreachable block (ram,0x000100b87d3c) */
/* WARNING: Removing unreachable block (ram,0x000100b87d2c) */
/* WARNING: Removing unreachable block (ram,0x000100b87d1c) */
/* WARNING: Removing unreachable block (ram,0x000100b87d0c) */
/* WARNING: Removing unreachable block (ram,0x000100b88410) */
/* WARNING: Removing unreachable block (ram,0x000100b88414) */
/* WARNING: Removing unreachable block (ram,0x000100b883f0) */
/* WARNING: Removing unreachable block (ram,0x000100b883e0) */
/* WARNING: Removing unreachable block (ram,0x000100b883d0) */
/* WARNING: Removing unreachable block (ram,0x000100b883c0) */
/* WARNING: Removing unreachable block (ram,0x000100b883b0) */
/* WARNING: Removing unreachable block (ram,0x000100b883a0) */
/* WARNING: Removing unreachable block (ram,0x000100b87de4) */
/* WARNING: Removing unreachable block (ram,0x000100b88390) */
/* WARNING: Removing unreachable block (ram,0x000100b8838c) */
/* WARNING: Removing unreachable block (ram,0x000100b8837c) */
/* WARNING: Removing unreachable block (ram,0x000100b8836c) */
/* WARNING: Removing unreachable block (ram,0x000100b884a8) */
/* WARNING: Removing unreachable block (ram,0x000100b884b4) */
/* WARNING: Removing unreachable block (ram,0x000100b88498) */
/* WARNING: Removing unreachable block (ram,0x000100b88488) */
/* WARNING: Removing unreachable block (ram,0x000100b88468) */
/* WARNING: Removing unreachable block (ram,0x000100b88458) */
/* WARNING: Removing unreachable block (ram,0x000100b88460) */
/* WARNING: Removing unreachable block (ram,0x000100b88448) */
/* WARNING: Removing unreachable block (ram,0x000100b88438) */
/* WARNING: Removing unreachable block (ram,0x000100b88338) */
/* WARNING: Removing unreachable block (ram,0x000100b884b8) */
/* WARNING: Removing unreachable block (ram,0x000100b88328) */
/* WARNING: Removing unreachable block (ram,0x000100b88318) */
/* WARNING: Removing unreachable block (ram,0x000100b88308) */
/* WARNING: Removing unreachable block (ram,0x000100b882f8) */
/* WARNING: Removing unreachable block (ram,0x000100b882e8) */
/* WARNING: Removing unreachable block (ram,0x000100b882d8) */
/* WARNING: Removing unreachable block (ram,0x000100b882c8) */
/* WARNING: Removing unreachable block (ram,0x000100b882b8) */
/* WARNING: Removing unreachable block (ram,0x000100b88280) */
/* WARNING: Removing unreachable block (ram,0x000100b88260) */
/* WARNING: Removing unreachable block (ram,0x000100b8823c) */
/* WARNING: Removing unreachable block (ram,0x000100b88068) */
/* WARNING: Removing unreachable block (ram,0x000100b88050) */
/* WARNING: Removing unreachable block (ram,0x000100b87f98) */
/* WARNING: Removing unreachable block (ram,0x000100b87ec8) */
/* WARNING: Removing unreachable block (ram,0x000100b87e30) */
/* WARNING: Removing unreachable block (ram,0x000100b88354) */
/* WARNING: Removing unreachable block (ram,0x000100b87e34) */
/* WARNING: Removing unreachable block (ram,0x000100b88420) */
/* WARNING: Removing unreachable block (ram,0x000100b87e54) */
/* WARNING: Removing unreachable block (ram,0x000100b87e14) */
/* WARNING: Removing unreachable block (ram,0x000100b87a60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b87818(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  lVar9 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar9 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c4c144();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f2a4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4c150();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c4b59c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar9);
          lVar9 = lVar1;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4afe4();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar9);
            lVar9 = lVar1;
          }
          else {
            lVar5 = unaff_x20;
            func_0x000107c40014();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar5 = unaff_x20;
              func_0x000107c3de4c();
              func_0x000107c61180();
              if (lVar5 != 0) {
                lVar6 = unaff_x20;
                func_0x000107c3d290();
                func_0x000107c61180();
                if (lVar6 == 0) {
                  func_0x000107c61170(lVar9);
                  lVar9 = lVar1;
                }
                else {
                  lVar7 = unaff_x20;
                  func_0x000107c3d3ac();
                  func_0x000107c61180();
                  if (lVar7 == 0) {
                    func_0x000107c61170(lVar9);
                    lVar9 = lVar1;
                  }
                  else {
                    lVar8 = unaff_x20;
                    func_0x000107c5b804();
                    func_0x000107c61180();
                    if (lVar8 != 0) {
                      lVar8 = unaff_x20;
                      func_0x000107c40df8();
                      func_0x000107c61180();
                      if (lVar8 != 0) {
                        func_0x000107c3d410();
                        func_0x000107c61180();
                        if (unaff_x20 == 0) {
                          func_0x000107c61170(lVar9);
                          lVar9 = lVar1;
                        }
                        else {
                          lVar9 = 0;
                          FUN_100b88954();
                          func_0x000107c613fc();
                          *(undefined8 *)(lVar9 + 0x18) = 0;
                          func_0x000107c5dbd4();
                          func_0x000107c61180();
                          uVar11 = *(undefined8 *)(lVar5 + _DAT_113092298);
                          uVar10 = *(undefined8 *)(lVar6 + _DAT_11304a478);
                          uVar12 = *(undefined8 *)(lVar7 + _DAT_1130115c0);
                          *(long *)(lVar9 + 0x10) = lVar4;
                          lVar9 = 0;
                          FUN_100b88c50();
                          func_0x000107c61534();
                          *(undefined8 *)(lVar9 + 0x10) = uVar11;
                          if (cRam0000000112d3bae0 == '\0') {
                            func_0x000107c615f4(uVar11,2);
                            func_0x000107c6157c(uVar10);
                            func_0x000107c6157c(uVar12);
                            func_0x000107c61574(lVar9);
                            lVar9 = lVar2;
                          }
                          else if (cRam0000000112d3bae0 == '\x01') {
                            func_0x000107c615f4(uVar11,2);
                            func_0x000107c6157c(uVar10);
                            func_0x000107c6157c(uVar12);
                            func_0x000107c61174(lVar4);
                            func_0x000107c4aeb0(lVar3);
                            func_0x000107c61180();
                            func_0x000107c4aeb4();
                            func_0x000107c61180();
                            lVar9 = lVar3;
                          }
                          else {
                            func_0x000107c615f4(uVar11,2);
                            func_0x000107c6157c(uVar10);
                            func_0x000107c6157c(uVar12);
                            func_0x000107c61174(lVar4);
                            lVar9 = -0x2fffffffffffffe0;
                            func_0x000107c5fadc(0xd000000000000020,0x800000010ef13140);
                            func_0x000107c3ebd4(uVar11);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 100b884f0; end: 100b884fb; -[SCSponsoredLensPlayablesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b884f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc28;
  func_0x000107c61428(param_1 + _DAT_112d3bc28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b884fc; end: 100b8851b; -[SCCloudSyncStatusListenerAnnouncer .cxx_construct] */

void FUN_100b884fc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 100b8851c; end: 100b885cb; -[SCCloudSyncRetry init] */

undefined1 * FUN_100b8851c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb9c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b885cc; end: 100b885d7; -[SCSponsoredLensPlayablesEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b885cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc30;
  func_0x000107c61428(param_1 + _DAT_112d3bc30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b885d8; end: 100b885e3; -[SCSponsoredLensPlayablesEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b885d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc38;
  func_0x000107c61428(param_1 + _DAT_112d3bc38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b885e4; end: 100b885ef; -[SCSponsoredLensPlayablesEntryPoint mainCameraScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b885e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc40;
  func_0x000107c61428(param_1 + _DAT_112d3bc40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b885f0; end: 100b885fb; -[SCSponsoredLensPlayablesEntryPoint lensesFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b885f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc48;
  func_0x000107c61428(param_1 + _DAT_112d3bc48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b885fc; end: 100b88607; -[SCSponsoredLensPlayablesEntryPoint lensContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b885fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc50;
  func_0x000107c61428(param_1 + _DAT_112d3bc50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b88608; end: 100b88613; -[SCSponsoredLensPlayablesEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b88608(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc58;
  func_0x000107c61428(param_1 + _DAT_112d3bc58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b88614; end: 100b88687; -[SCGrapheneMemoriesSyncMetric2 init] */

undefined1 * FUN_100b88614(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fba80;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b88688; end: 100b88693; -[SCSponsoredLensPlayablesEntryPoint appStartExperimentReaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b88688(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc60;
  func_0x000107c61428(param_1 + _DAT_112d3bc60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b88694; end: 100b8869f; -[SCSponsoredLensPlayablesEntryPoint adConfigProviderService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b88694(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc68;
  func_0x000107c61428(param_1 + _DAT_112d3bc68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b886a0; end: 100b886e7;  */

void FUN_100b886a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c40aa4();
  func_0x000107c611b0();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd42b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__bindMemPlatBackupMonitor_112552a48);
  return;
}



/* Entry: 100b886e8; end: 100b886ef; -[SCCloudSyncDependencyProvidingServices memoriesAssetRepository] */

undefined8 FUN_100b886e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100b886f0; end: 100b886fb; -[SCSponsoredLensPlayablesEntryPoint adPlayableWebViewFactoryService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b886f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc70;
  func_0x000107c61428(param_1 + _DAT_112d3bc70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b886fc; end: 100b88707; -[SCSponsoredLensPlayablesEntryPoint sponsoredLensTrackingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b886fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3bc78;
  func_0x000107c61428(param_1 + _DAT_112d3bc78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


