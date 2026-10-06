/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ba3bd8; end: 100ba3ccb; -[SCLensDataConfigProvider lensContentFallbackMigrationType] */

undefined8 FUN_100ba3bd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d388();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100ba3ccc; end: 100ba3d3f; -[SCSCMemoriesNavigationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba3ccc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fabbd0,0);
  func_0x000107c61614(param_1 + _DAT_112fabbd8,0);
  *(undefined8 *)(param_1 + _DAT_112fabbe0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ba3d40; end: 100ba3deb; -[SCSCMemoriesNavigationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100ba3d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ba3dec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ba3dec; end: 100ba3f83;  */

void FUN_100ba3dec(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e8c190)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f173e70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemUserNavigationScopeGraphBridge/SCSCMemoriesNavigationServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x47,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba3f84);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c564d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ba3f84; end: 100ba3ff3;  */

/* WARNING: Possible PIC construction at 0x000100ba3fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba3fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba3fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba3fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba3fe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba3fd4) */
/* WARNING: Removing unreachable block (ram,0x000100ba3fc4) */
/* WARNING: Removing unreachable block (ram,0x000100ba3fb4) */
/* WARNING: Removing unreachable block (ram,0x000100ba3fa4) */
/* WARNING: Removing unreachable block (ram,0x000100ba3fe4) */

void FUN_100ba3f84(long param_1)

{
  func_0x000107c61120(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 100ba3ff4; end: 100ba3fff; -[SCSCMemoriesNavigationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba3ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fabbd0;
  func_0x000107c61428(param_1 + _DAT_112fabbd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba4000; end: 100ba4053;  */

void FUN_100ba4000(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba4054; end: 100ba409b;  */

void FUN_100ba4054(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc78();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba409c; end: 100ba4153; -[SCLensContentEntryPoint _lensDownloadTrackerWithPreferences:] */

void FUN_100ba409c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bba70;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  uVar2 = param_3;
  func_0x000107c5c734(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar2;
  func_0x000107c4ada0(uVar2);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  func_0x000107c47ff8(0x40f5180000000000,puVar1,param_2,uVar3,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100ba4154; end: 100ba415b; -[SCLegacyLensPreferences legacy_rawPreferences] */

undefined8 FUN_100ba4154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100ba415c; end: 100ba424f; -[SCLensDownloadTracker initWithPreferencesStorage:currentDateProvider:cooldownTimeInterval:] */

undefined1 *
FUN_100ba415c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112705ae8;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba4250; end: 100ba45db; -[SCLensContentEntryPoint _createLensDataFetcherFactoryWithDownloadOperationFactory:lensContentDataFetcher:lensDownloadTracker:lensIconRepository:lensPreferences:fetchTypeProvider:resourceResolver:lensDataConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126bbae0;
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  uVar2 = param_7;
  func_0x000107c5c734(param_7);
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  uVar3 = uVar2;
  func_0x000107c4ada0(uVar2);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  func_0x000107c47ff8(0x40f5180000000000,puVar1,param_2,uVar3,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126bbae8;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127264e4;
    func_0x000107c61148();
  }
  lVar5 = lVar17;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000100ba133c();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c4b518();
  func_0x000107c61180();
  lVar9 = param_1;
  func_0x00010074c930();
  func_0x000107c61180();
  lVar10 = lVar9;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127264f0;
    func_0x000107c61148();
  }
  lVar11 = lVar18;
  func_0x000107c4d598();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_1127264a4;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c4fb14();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  FUN_100bac034();
  func_0x000107c61180();
  lVar16 = param_1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c46874(puVar4,param_2,lVar6,param_5,puVar1,param_4,param_3,lVar8,param_6,lVar10,
                      lVar12,lVar15,param_8,lVar16,param_9,param_10);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100ba45dc; end: 100ba45e7; -[SCSCMemoriesNavigationServicesSaberServiceProvider setMemUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba45dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fabbd8;
  func_0x000107c61428(param_1 + _DAT_112fabbd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba45e8; end: 100ba461b; -[SCSCMemoriesNavigationServicesSaberServiceProvider __safeProvide] */

void FUN_100ba45e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ba461c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100ba461c; end: 100ba4703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba461c(void)

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
    func_0x000107c4cac8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100ba4760();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fab198);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fabbe0);
      *(long *)(unaff_x20 + _DAT_112fabbe0) = lVar3;
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



/* Entry: 100ba4704; end: 100ba470f; -[SCSCMemoriesNavigationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4704(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fabbd0;
  func_0x000107c61428(param_1 + _DAT_112fabbd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4710; end: 100ba4753;  */

void FUN_100ba4710(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ba4754; end: 100ba475f; -[SCSCMemoriesNavigationServicesSaberServiceProvider memUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fabbd8;
  func_0x000107c61428(param_1 + _DAT_112fabbd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4760; end: 100ba47db;  */

void FUN_100ba4760(undefined8 param_1)

{
  if (lRam0000000112faa860 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e789f9c);
  return;
}



/* Entry: 100ba47dc; end: 100ba488f; -[SCLensCacheClearTracker initWithPreferencesStorage:currentDateProvider:cooldownTimeInterval:] */

undefined1 *
FUN_100ba47dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112705ae0;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba4890; end: 100ba48cf;  */

void FUN_100ba4890(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c248();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba48d0; end: 100ba496f; -[SCLensDataLoggerServiceProvider _redownloadLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba48d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + _DAT_112726554;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4b1a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126bbb78;
  func_0x000107c610f4(PTR_PTR_1126bbb78);
  func_0x000107c46b6c();
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100ba4970; end: 100ba497b; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint setMemoriesNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4970(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24878;
  func_0x000107c61428(param_1 + _DAT_112f24878,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba497c; end: 100ba4987; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba497c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24880;
  func_0x000107c61428(param_1 + _DAT_112f24880,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba4988; end: 100ba49af; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint begin] */

void FUN_100ba4988(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ba49b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ba49b0; end: 100ba4c2b;  */

/* WARNING: Possible PIC construction at 0x000100ba4b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba4b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba4b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba4bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba4c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba4be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba4c08) */
/* WARNING: Removing unreachable block (ram,0x000100ba4bf8) */
/* WARNING: Removing unreachable block (ram,0x000100ba4b84) */
/* WARNING: Removing unreachable block (ram,0x000100ba4b74) */
/* WARNING: Removing unreachable block (ram,0x000100ba4b64) */
/* WARNING: Removing unreachable block (ram,0x000100ba4be8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba49b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c4c144();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4cc60();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar4;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4cc00();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar4;
        }
        else {
          func_0x000107c3fa0c();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_100ba4cac(0);
            func_0x000107c613fc();
            lVar4 = *(long *)(lVar2 + _DAT_112ff3e68);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar4 != 0) {
              func_0x000107c4d524(lVar3);
              func_0x000107c61180();
              func_0x000107c569ec(lVar4);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar3);
            }
            uVar7 = *(undefined8 *)(lVar1 + _DAT_1130352c0);
            puVar5 = &UNK_1105e1270;
            func_0x000107c613fc(&UNK_1105e1270,0x18,7);
            *(long *)(puVar5 + 0x10) = lVar2;
            pcStack_70 = FUN_100ba5028;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            pcStack_80 = FUN_100ba4fb0;
            puStack_78 = &UNK_1105e1288;
            puStack_68 = puVar5;
            func_0x000107c60bc4(&puStack_90);
            puVar5 = puStack_68;
            func_0x000107c61174(uVar7);
            func_0x000107c61174(lVar2);
            func_0x000107c61574(puVar5);
            func_0x000107c5dc64(uVar7);
            func_0x000107c60bd0(ppuVar6);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100ba4c2c; end: 100ba4c37; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4c2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24860;
  func_0x000107c61428(param_1 + _DAT_112f24860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4c38; end: 100ba4c7b;  */

void FUN_100ba4c38(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ba4c7c; end: 100ba4c87; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4c7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24868;
  func_0x000107c61428(param_1 + _DAT_112f24868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4c88; end: 100ba4c93; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint memoriesSaveDismissServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4c88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24870;
  func_0x000107c61428(param_1 + _DAT_112f24870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4c94; end: 100ba4c9f; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint memoriesNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4c94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24878;
  func_0x000107c61428(param_1 + _DAT_112f24878,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4ca0; end: 100ba4cab; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4ca0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f24880;
  func_0x000107c61428(param_1 + _DAT_112f24880,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba4cac; end: 100ba4ceb;  */

void FUN_100ba4cac(void)

{
  func_0x000107c61168(&PTR_PTR_112f246c0);
  return;
}



/* Entry: 100ba4cec; end: 100ba4dcb;  */

void FUN_100ba4cec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100ba4ccc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100ba4dcc; end: 100ba4deb; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl init] */

void FUN_100ba4dcc(void)

{
  func_0x000100ba4d1c();
  return;
}



/* Entry: 100ba4dec; end: 100ba4e0b;  */

void FUN_100ba4dec(void)

{
  func_0x000107c61168(&PTR_PTR_1128aa130);
  return;
}



/* Entry: 100ba4e0c; end: 100ba4ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4e0c(void)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f245c0,0);
  lVar1 = unaff_x20 + _DAT_112f245a8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f245a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f245c8,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f245b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f245b8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ba4ebc; end: 100ba4edb; -[_TtC30MemoriesPreviewSaveDismissImpl34MemoriesPreviewSaveDismissAnimator init] */

void FUN_100ba4ebc(void)

{
  FUN_100ba4e0c();
  return;
}



/* Entry: 100ba4edc; end: 100ba4f67; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl setNavigationService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f24650);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f24650))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 100ba4f68; end: 100ba4f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba4f68(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f245b8);
  *(undefined8 *)(unaff_x20 + _DAT_112f245b8) = param_1;
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_1);
  return;
}



/* Entry: 100ba4f9c; end: 100ba4faf;  */

void FUN_100ba4f9c(long param_1,long param_2)

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



/* Entry: 100ba4fb0; end: 100ba5027;  */

/* WARNING: Possible PIC construction at 0x000100ba500c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba5010) */

void FUN_100ba4fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100ba5028; end: 100ba502f;  */

/* WARNING: Possible PIC construction at 0x000100ba5124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba5134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba5128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5028(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113035438);
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff3e68);
    func_0x000107c615f0(uVar2);
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar1 = &UNK_1105e11b0;
      func_0x000107c613fc(&UNK_1105e11b0,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,uVar2);
      puStack_40 = &UNK_102e927fc;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100f11710;
      puStack_48 = &UNK_1105e11c8;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c59c1c(lVar3);
      func_0x000107c61170(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 100ba5030; end: 100ba516b;  */

/* WARNING: Possible PIC construction at 0x000100ba5124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba5134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba5128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5030(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113035438);
    lVar3 = *(long *)(param_3 + _DAT_112ff3e68);
    func_0x000107c615f0(uVar2);
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar1 = &UNK_1105e11b0;
      func_0x000107c613fc(&UNK_1105e11b0,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,uVar2);
      puStack_40 = &UNK_102e927fc;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100f11710;
      puStack_48 = &UNK_1105e11c8;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c59c1c(lVar3);
      func_0x000107c61170(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 100ba516c; end: 100ba518f;  */

void FUN_100ba516c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ba5190; end: 100ba51a7;  */

void FUN_100ba5190(long param_1,long param_2)

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



/* Entry: 100ba51a8; end: 100ba526b; -[_TtC30MemoriesPreviewSaveDismissImpl30MemoriesPreviewSaveDismissImpl setTargetViewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba51a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_1105e1118;
    func_0x000107c613fc(&UNK_1105e1118,0x18,7);
    *(long *)(puVar3 + 0x10) = param_3;
    puVar4 = &UNK_102e9256c;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f24650);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f24650))[1];
  func_0x000107c614f0(uVar2);
  pcVar5 = *(code **)(lVar1 + 0x10);
  func_0x000107c61174(param_1);
  (*pcVar5)(puVar4,puVar3,uVar2,lVar1);
  FUN_100ba52d8(puVar4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ba526c; end: 100ba528f;  */

void FUN_100ba526c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ba5290; end: 100ba529f;  */

void FUN_100ba5290(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100ba52a0; end: 100ba52d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba52a0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f245b0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = param_1;
  plVar1[1] = param_2;
  FUN_100ba5290();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 100ba52d8; end: 100ba52ef;  */

void FUN_100ba52d8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100ba52f0; end: 100ba5313;  */

void FUN_100ba52f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ba5314; end: 100ba5373;  */

void FUN_100ba5314(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5fe10(param_2,PTR___ss11AnyHashableVN_11034e448,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100ba5374; end: 100ba53bb;  */

void FUN_100ba5374(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fe08(param_1,PTR___ss11AnyHashableVN_11034e448,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ba53bc; end: 100ba53c7;  */

void FUN_100ba53bc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  pcVar4 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar14 + 0x10,auStack_78,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  if (lVar14 != 0) {
    func_0x000107c61574();
    puVar13 = (ulong *)(param_1 + 0x38);
    uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if (-uVar16 < 0x40) {
      uVar12 = ~(-1L << (-uVar16 & 0x3f));
    }
    uVar12 = uVar12 & *puVar13;
    func_0x000107c61434(param_1);
    puVar2 = PTR___ss11AnyHashableVN_11034e448;
    lVar14 = 0;
    lVar15 = lVar14;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while( true ) {
      while (uVar12 != 0) {
        uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 - 1 & uVar12;
        FUN_1007bbd18(*(long *)(param_1 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                      lVar14 * 0xa00,&uStack_a0);
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        uVar6 = 0x112ef3e30;
        FUN_1000285a8(0x112ef3e30,&UNK_10db22950);
        plVar7 = &lStack_a8;
        func_0x000107c6147c(plVar7,&uStack_d0,puVar2,uVar6,6);
        lVar3 = lStack_a8;
        lVar15 = lVar14;
        if ((((ulong)plVar7 & 1) != 0) && (lStack_a8 != 0)) {
          puVar9 = puVar10;
          func_0x000107c61550();
          if (((int)puVar9 == 0) ||
             (((long)puVar10 < 0 || (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_1007588a8(0,puVar8 + 1,1,puVar10);
          }
          uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar11 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_1007588a8(puVar10,uVar1 + 1,1,puVar9);
            uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
          *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar3;
        }
      }
      bVar5 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba5608);
        (*pcVar4)();
      }
      if ((long)(0x3f - uVar16 >> 6) <= lVar14) break;
      uVar12 = puVar13[lVar14];
    }
    FUN_100ba5608(param_1,puVar13,~uVar16,lVar15,0);
    (*pcVar4)(puVar10);
    func_0x000107c6142c(puVar10);
  }
  return;
}



/* Entry: 100ba53c8; end: 100ba5607;  */

void FUN_100ba53c8(long param_1,long param_2,code *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61574();
    puVar13 = (ulong *)(param_1 + 0x38);
    uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if (-uVar16 < 0x40) {
      uVar12 = ~(-1L << (-uVar16 & 0x3f));
    }
    uVar12 = uVar12 & *puVar13;
    func_0x000107c61434(param_1);
    puVar2 = PTR___ss11AnyHashableVN_11034e448;
    lVar14 = 0;
    lVar15 = lVar14;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while( true ) {
      while (uVar12 != 0) {
        uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 - 1 & uVar12;
        FUN_1007bbd18(*(long *)(param_1 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
                      lVar14 * 0xa00,&uStack_a0);
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        uVar6 = 0x112ef3e30;
        FUN_1000285a8(0x112ef3e30,&UNK_10db22950);
        plVar7 = &lStack_a8;
        func_0x000107c6147c(plVar7,&uStack_d0,puVar2,uVar6,6);
        lVar3 = lStack_a8;
        lVar15 = lVar14;
        if ((((ulong)plVar7 & 1) != 0) && (lStack_a8 != 0)) {
          puVar9 = puVar10;
          func_0x000107c61550();
          if (((int)puVar9 == 0) ||
             (((long)puVar10 < 0 || (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_1007588a8(0,puVar8 + 1,1,puVar10);
          }
          uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar11 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
            FUN_1007588a8(puVar10,uVar1 + 1,1,puVar9);
            uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
          *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar3;
        }
      }
      bVar5 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba5608);
        (*pcVar4)();
      }
      if ((long)(0x3f - uVar16 >> 6) <= lVar14) break;
      uVar12 = puVar13[lVar14];
    }
    FUN_100ba5608(param_1,puVar13,~uVar16,lVar15,0);
    (*param_3)(puVar10);
    func_0x000107c6142c(puVar10);
  }
  return;
}



/* Entry: 100ba5608; end: 100ba561f;  */

void FUN_100ba5608(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100ba5620; end: 100ba566f;  */

void FUN_100ba5620(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ba5670; end: 100ba56db; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5670(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5a6f0,0);
  *(undefined8 *)(param_1 + _DAT_112e5a6f8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5a700) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ba56dc; end: 100ba5787; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100ba56dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ba5788(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ba5788; end: 100ba591f;  */

void FUN_100ba5788(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f9bef0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f064110,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ProfileHeaderButtonScopeGraphBridge/SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba5920);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c578c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ba5920; end: 100ba5977; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a6f0;
  func_0x000107c61428(param_1 + _DAT_112e5a6f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba5978; end: 100ba59db; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint setProfileHeaderButtonScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a6f8;
  func_0x000107c61428(param_1 + _DAT_112e5a6f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ba59dc; end: 100ba5a03; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100ba59dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ba5a04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ba5a04; end: 100ba5b37;  */

/* WARNING: Possible PIC construction at 0x000100ba5abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba5ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba5af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba5ac0) */
/* WARNING: Removing unreachable block (ram,0x000100ba5adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5a04(void)

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
  func_0x000107c4f384();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100ba5bc8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100ba5be8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba5b38);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e5a620) = lVar5;
    *(long *)(lVar4 + _DAT_112e5a628) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ba5b38; end: 100ba5b7f; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5b38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a6f0;
  func_0x000107c61428(param_1 + _DAT_112e5a6f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba5b80; end: 100ba5bc7; -[SCProfileHeaderButtonScopeGraphBridgeSaberEntryPoint profileHeaderButtonScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5b80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a6f8;
  func_0x000107c61428(param_1 + _DAT_112e5a6f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ba5bc8; end: 100ba5be7;  */

void FUN_100ba5bc8(void)

{
  func_0x000107c61168(&PTR_PTR_11281f9b0);
  return;
}



/* Entry: 100ba5be8; end: 100ba5cb7;  */

undefined8 FUN_100ba5be8(void)

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
  
  func_0x000107c61428(0x112e5a690,&uStack_40,0x20,0);
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
    FUN_10080e1a0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100ba5cb8; end: 100ba5dcf; -[SCProfileHeaderTooltipsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5cb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271990c);
  }
  func_0x000107c61174(uVar3);
  puVar2 = PTR_PTR_1126b3d20;
  func_0x000107c610f4(PTR_PTR_1126b3d20);
  func_0x000107c47170();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100ba5dd0; end: 100ba5e43; -[SCLegacyProfileTooltipsServices initWithLegacyProfileTooltipsService:] */

undefined1 * FUN_100ba5dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fab78;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba5e44; end: 100ba5ea3; -[SCSCProfileHeaderButtonScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba5e44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5a730,0);
  *(undefined8 *)(param_1 + _DAT_112e5a738) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ba5ea4; end: 100ba606f; -[SCSCProfileHeaderButtonScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100ba5ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100ba5f50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ba6070; end: 100ba60c7; -[SCSCProfileHeaderButtonScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5a730;
  func_0x000107c61428(param_1 + _DAT_112e5a730,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba60c8; end: 100ba60ef; -[SCSCProfileHeaderButtonScopedServicesSaberEntryPoint begin] */

void FUN_100ba60c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ba60f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ba60f0; end: 100ba61c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba60f0(undefined8 param_1,long param_2)

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
    FUN_100ba6210();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5a658) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba61c8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5a660);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5a738);
    *(long **)(unaff_x20 + _DAT_112e5a738) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100ba61c8; end: 100ba620f; -[SCSCProfileHeaderButtonScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba61c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5a730;
  func_0x000107c61428(param_1 + _DAT_112e5a730,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba6210; end: 100ba622f;  */

void FUN_100ba6210(void)

{
  func_0x000107c61168(&PTR_PTR_11281fa78);
  return;
}



/* Entry: 100ba6230; end: 100ba62a3; -[SCBadgeRankerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6230(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbb7a8,0);
  func_0x000107c61614(param_1 + _DAT_112fbb7b0,0);
  *(undefined8 *)(param_1 + _DAT_112fbb7b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ba62a4; end: 100ba634f; -[SCBadgeRankerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100ba62a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ba6350(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ba6350; end: 100ba64e7;  */

void FUN_100ba6350(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e810a0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f17ef60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivActiveUserSessionScopeGraphBridge/SCBadgeRankerServicesSaberServiceProvider.swift"
                            ,0x56,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba64e8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ba64e8; end: 100ba64f3; -[SCBadgeRankerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba64e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb7a8;
  func_0x000107c61428(param_1 + _DAT_112fbb7a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba64f4; end: 100ba6547;  */

void FUN_100ba64f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba6548; end: 100ba6553; -[SCBadgeRankerServicesSaberServiceProvider setActivActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbb7b0;
  func_0x000107c61428(param_1 + _DAT_112fbb7b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba6554; end: 100ba6587; -[SCBadgeRankerServicesSaberServiceProvider __safeProvide] */

void FUN_100ba6554(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ba6588();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100ba6588; end: 100ba666f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6588(void)

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
    func_0x000107c3d018();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100ba66cc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fbb6a8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fbb7b8);
      *(long *)(unaff_x20 + _DAT_112fbb7b8) = lVar3;
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



/* Entry: 100ba6670; end: 100ba667b; -[SCBadgeRankerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6670(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb7a8;
  func_0x000107c61428(param_1 + _DAT_112fbb7a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba667c; end: 100ba66bf;  */

void FUN_100ba667c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ba66c0; end: 100ba66cb; -[SCBadgeRankerServicesSaberServiceProvider activActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba66c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbb7b0;
  func_0x000107c61428(param_1 + _DAT_112fbb7b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba66cc; end: 100ba6747;  */

void FUN_100ba66cc(undefined8 param_1)

{
  if (lRam0000000112fbb380 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e793c38);
  return;
}



/* Entry: 100ba6748; end: 100ba69d7; -[SCFriendsFeedBadgeProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100ba67d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba67e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba67f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba6838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba6848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba68dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba68ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba6928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba6938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba6978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba69a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba69b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba69ac) */
/* WARNING: Removing unreachable block (ram,0x000100ba697c) */
/* WARNING: Removing unreachable block (ram,0x000100ba693c) */
/* WARNING: Removing unreachable block (ram,0x000100ba692c) */
/* WARNING: Removing unreachable block (ram,0x000100ba68f0) */
/* WARNING: Removing unreachable block (ram,0x000100ba68e0) */
/* WARNING: Removing unreachable block (ram,0x000100ba684c) */
/* WARNING: Removing unreachable block (ram,0x000100ba6940) */
/* WARNING: Removing unreachable block (ram,0x000100ba694c) */
/* WARNING: Removing unreachable block (ram,0x000100ba6850) */
/* WARNING: Removing unreachable block (ram,0x000100ba683c) */
/* WARNING: Removing unreachable block (ram,0x000100ba67fc) */
/* WARNING: Removing unreachable block (ram,0x000100ba67ec) */
/* WARNING: Removing unreachable block (ram,0x000100ba67dc) */
/* WARNING: Removing unreachable block (ram,0x000100ba69bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6748(long param_1)

{
  param_1 = param_1 + _DAT_112714ae0;
  func_0x000107c61148(param_1);
  func_0x000107c43a80();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c402cc();
  func_0x000107c61180();
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c421ac();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ba69d8; end: 100ba6a1f;  */

void FUN_100ba69d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b784();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba6a20; end: 100ba708b; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba6a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  
  lVar33 = (long)_DAT_112749300;
  func_0x000107c61174(param_3);
  lVar33 = param_1 + lVar33;
  func_0x000107c61148();
  lVar1 = lVar33;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110927828);
  func_0x000107c61180();
  lVar34 = (long)_DAT_112749304;
  lVar33 = param_1 + lVar34;
  func_0x000107c61148();
  lVar3 = lVar33;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar4 = param_1;
  func_0x000107c3b798(param_1,param_2,puVar2);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c3b79c();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c3c11c();
  func_0x000107c61180();
  lVar33 = param_1 + _DAT_112749308;
  func_0x000107c61148();
  lVar7 = lVar33;
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar8 = param_1;
  func_0x000107c3c170();
  func_0x000107c61180();
  lVar33 = param_1 + _DAT_11274930c;
  func_0x000107c61148();
  lVar9 = lVar33;
  func_0x000107c4e754();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar10 = param_1;
  func_0x000107c3acec();
  func_0x000107c61180();
  lVar35 = (long)_DAT_1127492dc;
  lVar33 = param_1 + lVar35;
  func_0x000107c61148();
  lVar11 = lVar33;
  func_0x000107c443dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar35 = param_1 + lVar35;
  func_0x000107c61148();
  lVar12 = lVar35;
  func_0x000107c43ac0();
  func_0x000107c61180();
  func_0x000107c61170(lVar35);
  lVar33 = param_1 + _DAT_112749310;
  func_0x000107c61148();
  lVar13 = lVar33;
  func_0x000107c5db24();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar36 = (long)_DAT_112749314;
  lVar33 = param_1 + lVar36;
  func_0x000107c61148();
  lVar14 = lVar33;
  func_0x000107c412dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_112749318;
  func_0x000107c61148();
  lVar15 = lVar33;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + lVar36;
  func_0x000107c61148();
  lVar16 = lVar33;
  func_0x000107c43a84();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11274931c;
  func_0x000107c61148();
  lVar17 = lVar33;
  func_0x000107c3f874();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar34 = param_1 + lVar34;
  func_0x000107c61148();
  lVar18 = lVar34;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar34);
  lVar33 = param_1 + _DAT_112749320;
  func_0x000107c61148();
  lVar35 = lVar33;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar19 = lVar35;
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_112749324;
  func_0x000107c61148();
  lVar35 = lVar33;
  func_0x000107c406a0();
  func_0x000107c61180();
  lVar20 = lVar35;
  func_0x000107c3cfbc();
  func_0x000107c61180();
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar33);
  puVar21 = PTR_PTR_1126cb1a8;
  func_0x000107c610f4();
  lVar33 = param_1 + _DAT_112749328;
  func_0x000107c61148();
  lVar22 = lVar33;
  func_0x000107c4fe50();
  func_0x000107c61180();
  lVar35 = param_1 + _DAT_11274932c;
  func_0x000107c61148();
  lVar23 = lVar35;
  func_0x000107c51714();
  func_0x000107c61180();
  uVar32 = *(undefined8 *)(param_1 + _DAT_1127492e0);
  lVar34 = param_1 + _DAT_112749330;
  func_0x000107c61148();
  lVar24 = lVar34;
  func_0x000107c5c030();
  func_0x000107c61180();
  lVar25 = param_1 + _DAT_112749390;
  func_0x000107c61148();
  lVar26 = lVar25;
  func_0x000107c4e288();
  func_0x000107c61180();
  lVar27 = param_1 + _DAT_112749334;
  func_0x000107c61148();
  lVar28 = lVar27;
  func_0x000107c4ac3c();
  func_0x000107c61180();
  lVar29 = param_1 + _DAT_112749338;
  func_0x000107c61148();
  lVar30 = lVar29;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  lVar36 = param_1 + lVar36;
  func_0x000107c61148();
  lVar31 = lVar36;
  func_0x000107c4d490();
  func_0x000107c61180();
  func_0x000107c46640(puVar21,param_2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar22,lVar23,lVar8,lVar9,lVar10
                      ,lVar16,lVar11,lVar12,uVar32,lVar13,lVar1,lVar24,lVar14,lVar15,lVar26,lVar28,
                      lVar30,lVar17,lVar18,param_3,lVar19,lVar20,lVar31);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar33);
  func_0x000107c3d650(lVar6,param_2,puVar21);
  param_1 = param_1 + _DAT_11274933c;
  func_0x000107c61148();
  lVar35 = param_1;
  func_0x000107c43aac();
  func_0x000107c61180();
  lVar33 = lVar35;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar35);
  func_0x000107c61170(param_1);
  func_0x000107c3d650(lVar33,param_2,puVar21);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 100ba708c; end: 100ba7307; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedNativeDataProviderWithGraphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba708c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = (long)_DAT_112749318;
  func_0x000107c61174(param_3);
  lVar9 = param_1 + lVar9;
  func_0x000107c61148();
  lVar10 = lVar9;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar1 = lVar10;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  lVar9 = param_1 + _DAT_112749340;
  func_0x000107c61148();
  lVar2 = lVar9;
  func_0x000107c408d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar10 = (long)_DAT_112749314;
  lVar9 = param_1 + lVar10;
  func_0x000107c61148();
  lVar3 = lVar9;
  func_0x000107c43a84();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar10 = param_1 + lVar10;
  func_0x000107c61148(lVar10);
  lVar4 = lVar10;
  func_0x000107c4d490();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  lVar9 = param_1 + _DAT_1127492dc;
  func_0x000107c61148(lVar9);
  lVar10 = lVar9;
  func_0x000107c443dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f380b73);
  func_0x000107c61180();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2cf96b);
  func_0x000107c61180();
  func_0x000107c45454(puVar5,param_2,puVar6,0x15,0,0xb,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126cb1b0;
  func_0x000107c610f4();
  param_1 = param_1 + _DAT_112749344;
  func_0x000107c61148(param_1);
  lVar9 = param_1;
  func_0x000107c5cf7c();
  func_0x000107c61180();
  lVar8 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c46a70(puVar6,param_2,lVar3,param_3,lVar10,lVar4,lVar2,lVar8,puVar5,lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100ba7308; end: 100ba7777; -[SCFriendsFeedNativeDataProvider initWithFriendsFeedEntryStore:friendsFeedGraphene:ghostToFeedLogger:nativeSessionManagerFuture:crashLogger:translator:performer:userId:] */

undefined8
FUN_100ba7308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  uVar1 = param_3;
  func_0x000100ba7410(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 100ba7778; end: 100ba7787;  */

undefined1  [16] FUN_100ba7778(void)

{
  return ZEXT816(0x1105cc9f8);
}



/* Entry: 100ba7788; end: 100ba77a3;  */

void FUN_100ba7788(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return;
}



/* Entry: 100ba77a4; end: 100ba7983; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedNativeMultirecipientDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba77a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112749314;
  lVar1 = param_1 + lVar8;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c43a84();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749318;
  func_0x000107c61148(lVar1);
  lVar3 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
  lVar8 = param_1 + lVar8;
  func_0x000107c61148(lVar8);
  lVar1 = lVar8;
  func_0x000107c4d490();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f380b93);
  func_0x000107c61180();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2cf96b);
  func_0x000107c61180();
  func_0x000107c45454(puVar5,param_2,puVar6,0x15,0,0xb,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126cb1b8;
  func_0x000107c610f4(PTR_PTR_1126cb1b8);
  param_1 = param_1 + _DAT_112749344;
  func_0x000107c61148(param_1);
  lVar8 = param_1;
  func_0x000107c5cf7c();
  func_0x000107c61180();
  lVar3 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c46a74(puVar6,param_2,lVar2,lVar1,lVar3,puVar5,lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100ba7984; end: 100ba7a37; -[SCFriendsFeedNativeMultiRecipientDataProvider initWithFriendsFeedEntryStore:nativeSessionManagerFuture:translator:performer:userId:] */

undefined8
FUN_100ba7984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_7);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  uVar1 = param_3;
  FUN_100ba7a38(param_3,param_4,param_5,param_6,param_7,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 100ba7a38; end: 100ba7c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba7a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f144b0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f144b8;
  FUN_1000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  uVar3 = 0;
  FUN_10095c380();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f144c0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100ba7658();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112f144c8;
  FUN_100ba7c24();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112f144d0;
  uVar3 = 0x112f143c8;
  FUN_1000285a8(0x112f143c8,&UNK_10db494d8);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f144d8) = param_1;
  FUN_1000285a8(0x112d655b0,&UNK_10d92a3c0);
  func_0x000107c61174(param_1);
  FUN_100759c94(param_2,0);
  uVar3 = 0x112d655b8;
  FUN_1000285a8(0x112d655b8,&UNK_10db95230);
  uVar6 = 0;
  func_0x000100759f5c(0,1,FUN_100ba7d1c,0,uVar3);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f144e0) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112f144e8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f144f0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f144f8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}


