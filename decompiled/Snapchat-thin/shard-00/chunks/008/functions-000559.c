/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100aadc7c; end: 100aadc8b; -[SCStoriesSummaryInfo hasAddedFriendFromStorySuggestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100aadc7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278fd60);
}



/* Entry: 100aadc8c; end: 100aadc9b; -[SCStoriesSummaryInfo placeTagVenueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100aadc8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd64);
}



/* Entry: 100aadc9c; end: 100aade7b;  */

long * FUN_100aadc9c(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                    long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                    undefined1 param_12,long param_13,long param_14,long param_15,long param_16,
                    long param_17,long param_18,undefined1 param_19,undefined4 param_20,
                    long param_21)

{
  long *plVar1;
  long lVar2;
  long lStack_a0;
  undefined *puStack_98;
  
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_21);
  plVar1 = (long *)0x0;
  if (param_6 != 0) {
    puStack_98 = PTR_PTR_1126fcb60;
    plVar1 = &lStack_a0;
    lStack_a0 = param_6;
    func_0x000107c61154(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = param_7;
      func_0x000107c61174(param_8);
      lVar2 = plVar1[4];
      plVar1[4] = param_8;
      func_0x000107c61170(lVar2);
      plVar1[5] = param_9;
      func_0x000107c61174(param_10);
      lVar2 = plVar1[6];
      plVar1[6] = param_10;
      func_0x000107c61170(lVar2);
      plVar1[7] = param_1;
      plVar1[8] = param_11;
      *(undefined1 *)((long)plVar1 + 0x14) = param_12;
      plVar1[9] = param_2;
      plVar1[10] = param_3;
      plVar1[0xb] = param_4;
      plVar1[0xc] = param_13;
      plVar1[0xd] = param_14;
      func_0x000107c61174(param_15);
      lVar2 = plVar1[0xe];
      plVar1[0xe] = param_15;
      func_0x000107c61170(lVar2);
      plVar1[0xf] = param_16;
      plVar1[0x10] = param_17;
      plVar1[0x11] = param_18;
      *(undefined4 *)(plVar1 + 3) = param_5;
      *(undefined1 *)((long)plVar1 + 0x15) = param_19;
      func_0x000107c61174(param_21);
      lVar2 = plVar1[0x12];
      plVar1[0x12] = param_21;
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  return plVar1;
}



/* Entry: 100aade7c; end: 100aade87; -[SCStoriesSummaryInfoChangeRequest table] */

undefined * FUN_100aade7c(void)

{
  return &UNK_10f4a25af;
}



/* Entry: 100aade88; end: 100aadf9b; -[SCStoriesSummaryInfoChangeRequest createTableWithSQLite:] */

void FUN_100aade88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df341ef,0x86,&uStack_28,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_28);
    func_0x000107c61388(uStack_28);
  }
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df34275,0x82,&uStack_30,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_30);
    func_0x000107c61388(uStack_30);
    uVar1 = param_3;
    func_0x000107c613a0(param_3,&UNK_10df342f7,0x9e,&uStack_38,0);
    if ((int)uVar1 == 0) {
      func_0x000107c613a8(uStack_38);
      func_0x000107c61388(uStack_38);
    }
  }
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10df34395,0x8b,&uStack_30,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_30);
    func_0x000107c61388(uStack_30);
    func_0x000107c613a0(param_3,&UNK_10df34420,0xb0,&uStack_38,0);
    if ((int)param_3 == 0) {
      func_0x000107c613a8(uStack_38);
      func_0x000107c61388(uStack_38);
    }
  }
  return;
}



/* Entry: 100aadf9c; end: 100aae003; -[SCDocObjectSnapchattersUserInfoRepository deltaFriendToken] */

void FUN_100aadf9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41788();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5cb78();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100aae004; end: 100aae037;  */

void FUN_100aae004(void)

{
  func_0x000107c610f4(PTR_PTR_1126db138);
  func_0x000107c46624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aae038; end: 100aae143; -[SCSnapchattersDeltaSyncMetadataObserver initWithDocObjectContext:deltaSyncMetadataType:] */

undefined8 *
FUN_100aae038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_1126fdcf8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc0000000;
    pcStack_68 = FUN_100aaea94;
    puStack_60 = &UNK_110ab7560;
    ppuVar2 = &puStack_78;
    uStack_58 = param_4;
    func_0x000107c61184(ppuVar2);
    puVar3 = PTR_PTR_1126c0ae8;
    func_0x000107c610f4();
    uVar4 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    func_0x000107c46664();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(ppuVar2);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100aae144; end: 100aae1c3; -[SCSCLegacyMediaServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae144(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fce660,0);
  func_0x000107c61614(param_1 + _DAT_112fce668,0);
  *(undefined8 *)(param_1 + _DAT_112fce670) = 0;
  *(undefined8 *)(param_1 + _DAT_112fce678) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100aae1c4; end: 100aae26f; -[SCSCLegacyMediaServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100aae1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100aae270(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100aae270; end: 100aae473;  */

void FUN_100aae270(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000002b;
    if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0e75510)) ||
       (func_0x000107c605b8(0xd00000000000002b,0x800000010f18aaf0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c563c0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0e75460)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f18aba0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "MeActiveUserSessionScopeGraphBridge/SCSCLegacyMediaServicesSaberEntryPoint.swift"
                              ,0x50,2,0x3d,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100aae474);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c583e0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100aae474; end: 100aae47f; -[SCSCLegacyMediaServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce660;
  func_0x000107c61428(param_1 + _DAT_112fce660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aae480; end: 100aae4d3;  */

void FUN_100aae480(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aae4d4; end: 100aae5a7; -[SCDocObjectObserver initWithDocObjectContext:observerCallBackQueue:fetchBlock:] */

undefined1 *
FUN_100aae4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126fdf48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100aae5a8; end: 100aae5b3; -[SCSCLegacyMediaServicesSaberEntryPoint setMeActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce668;
  func_0x000107c61428(param_1 + _DAT_112fce668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100aae5b4; end: 100aae617; -[SCSCLegacyMediaServicesSaberEntryPoint setSCLegacyMediaServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fce670;
  func_0x000107c61428(param_1 + _DAT_112fce670,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100aae618; end: 100aae677; -[SCSnapchattersDeltaSyncMetadataObserver deltaSyncMetadata] */

void FUN_100aae618(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000107c5dc0c();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126db130;
  func_0x000107c61158(PTR_PTR_1126db130);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100aae678; end: 100aae69f; -[SCSCLegacyMediaServicesSaberEntryPoint begin] */

void FUN_100aae678(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100aae6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100aae6a0; end: 100aae823;  */

/* WARNING: Possible PIC construction at 0x000100aae7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aae7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100aae7cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100aae7a4) */
/* WARNING: Removing unreachable block (ram,0x000100aae7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae6a0(void)

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
    func_0x000107c4c910();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e38();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100aaea74();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fce530);
        *(undefined8 *)(lVar2 + _DAT_112fcd7b0) = uVar6;
        *(long *)(lVar2 + _DAT_112fcd7b8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fcd7b8);
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



/* Entry: 100aae824; end: 100aae82f; -[SCSCLegacyMediaServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce660;
  func_0x000107c61428(param_1 + _DAT_112fce660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aae830; end: 100aae873;  */

void FUN_100aae830(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100aae874; end: 100aae87f; -[SCSCLegacyMediaServicesSaberEntryPoint meActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce668;
  func_0x000107c61428(param_1 + _DAT_112fce668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aae880; end: 100aae8c7; -[SCSCLegacyMediaServicesSaberEntryPoint sCLegacyMediaServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aae880(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fce670;
  func_0x000107c61428(param_1 + _DAT_112fce670,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100aae8c8; end: 100aaea73; -[SCDocObjectObserver value] */

void FUN_100aae8c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c611ec(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_1 + 8));
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    func_0x000107c61170(uVar1);
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c61144(auStack_48,param_1);
      uVar1 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) == 0) {
        puVar4 = auStack_78;
        func_0x000107c6111c(puVar4,auStack_48);
        func_0x000107c5d378();
        func_0x000107c61180();
      }
      else {
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        puStack_60 = &UNK_100c549f8;
        puStack_58 = &UNK_110abf2f8;
        puVar4 = auStack_50;
        func_0x000107c6111c(puVar4,auStack_48);
        func_0x000107c4da1c();
        func_0x000107c61180();
      }
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      func_0x000107c61170(uVar2);
      func_0x000107c61120(puVar4);
      func_0x000107c61120(auStack_48);
      lVar3 = *(long *)(param_1 + 0x20);
    }
  }
  func_0x000107c61174(lVar3);
  func_0x000107c611f0(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100aaea74; end: 100aaea93;  */

void FUN_100aaea74(void)

{
  func_0x000107c61168(&PTR_PTR_112915610);
  return;
}



/* Entry: 100aaea94; end: 100aaeaa3;  */

void FUN_100aaea94(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126db130);
  if (param_2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_2);
  }
  puVar3 = &uStack_101;
  FUN_100aaf838();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8710;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110ab86b0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  uStack_148 = uVar1;
  puStack_c8 = puVar3;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar2 = plStack_98;
  ppuStack_100 = &PTR_DAT_110ab86b0;
  plStack_98 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  plVar2 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8710;
  plStack_110 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  puVar5 = puVar4;
  func_0x000107c43638(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100aaeaa4; end: 100aaecbb;  */

void FUN_100aaeaa4(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126db130);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_100aaf838();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8710;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110ab86b0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_110ab86b0;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8710;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  puVar4 = puVar3;
  func_0x000107c43638(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100aaecbc; end: 100aaf38f; -[SCStoriesSummaryInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_100aaecbc(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  double dVar14;
  undefined8 uVar15;
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar7 = param_2;
  if (iVar3 == 1) {
    FUN_100aaf390(param_2);
    func_0x000107c61180();
    lVar8 = param_5;
    FUN_100aaf438(param_5,puVar7);
    FUN_1001ce6fc(param_5,lVar8,0,0);
    puVar13 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x000107c421f0();
    func_0x000107c61180();
    puVar9 = puVar11;
    func_0x000107c41220();
    func_0x0001050da3a4();
    func_0x000107c61170(puVar11);
    lVar8 = param_4;
    FUN_1001b9e08(param_4,&UNK_10f4a27b1);
    if (lVar8 == 0) goto LAB_100aaf2e4;
    func_0x000107c61324(lVar8,1,*(undefined8 *)(param_5 + 0x30),
                        (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                        *(int *)(param_5 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    func_0x000107c61338(lVar8,2,puVar2 + 1,*puVar2,0);
    func_0x000107c613a8();
    if ((int)lVar8 != 0x65) goto LAB_100aaf2e4;
    uVar12 = *(undefined8 *)(param_4 + 0x58);
    func_0x000107c61394();
    if (((ulong)puVar9 & 1) != 0) {
      lVar8 = param_4;
      FUN_1001b9e08(param_4,&UNK_10f4a25c6);
      func_0x000107c6132c();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar10 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)((long)piVar1 + uVar10) != '\0';
      }
      func_0x000107c6132c(lVar8,2,bVar5);
      func_0x000107c613a8();
      if ((int)lVar8 != 0x65) goto LAB_100aaf2e4;
    }
    if (((uint)puVar9 >> 8 & 1) != 0) {
      FUN_1001b9e08(param_4,&UNK_10f4a262d);
      func_0x000107c6132c();
      uVar15 = 0;
      if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar10 != 0)) {
        uVar15 = *(undefined8 *)((long)piVar1 + uVar10);
      }
      func_0x000107c61328(uVar15,param_4,2);
      func_0x000107c613a8();
      if ((int)param_4 != 0x65) goto LAB_100aaf2e4;
    }
    *(undefined8 *)(param_2 + 8) = uVar12;
    func_0x000107c57f38(puVar7);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126d5360);
    func_0x000107c5a210(puVar11);
LAB_100aaf2bc:
    func_0x000107c61170(puVar11);
    func_0x000107c61174(puVar7);
    puVar11 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar8 = param_4;
        FUN_1001b9e08(param_4,&UNK_10f4a26e5);
        if (lVar8 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)lVar8 == 0x65) {
            lVar8 = param_4;
            FUN_1001b9e08(param_4,&UNK_10f4a2717);
            if (lVar8 != 0) {
              func_0x000107c6132c();
              func_0x000107c613a8();
              if ((int)lVar8 != 0x65) goto LAB_100aaee20;
            }
            FUN_1001b9e08(param_4,&UNK_10f4a2761);
            if (param_4 != 0) {
              func_0x000107c6132c();
              func_0x000107c613a8();
              if ((int)param_4 != 0x65) goto LAB_100aaee20;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126d5360);
            func_0x000107c5a210(puVar7);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_100aaf2f0;
          }
        }
      }
LAB_100aaee20:
      puVar11 = (undefined *)0x0;
      goto LAB_100aaf2f0;
    }
    FUN_100aaf390();
    func_0x000107c61180();
    lVar8 = param_5;
    FUN_100aaf438(param_5,puVar7);
    FUN_1001ce6fc(param_5,lVar8,0,0);
    puVar13 = *(uint **)(param_5 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_2 + 8);
    func_0x000107c61174(puVar7);
    lVar8 = param_4;
    FUN_1001b9e08(param_4,&UNK_10f4a27f1);
    if (lVar8 != 0) {
      func_0x000107c61324(lVar8,1,*(undefined8 *)(param_5 + 0x30),
                          (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                          *(int *)(param_5 + 0x28),0);
      func_0x000107c6132c(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      func_0x000107c61338(lVar8,3,puVar2 + 1,*puVar2,0);
      func_0x000107c613a8();
      if ((int)lVar8 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x000107c421f0();
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126d5360);
        puVar9 = puVar11;
        func_0x000107c4d9b8();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        puVar11 = puVar9;
        func_0x000107c44c00();
        puVar6 = puVar7;
        func_0x000107c44c00();
        if ((int)puVar11 == (int)puVar6) {
LAB_100aaf1fc:
          func_0x000107c4d124(puVar9);
          dVar14 = param_1;
          func_0x000107c4d124(puVar7);
          if (param_1 != dVar14) {
            FUN_1001b9e08(param_4,&UNK_10f4a28a2);
            uVar15 = 0;
            if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar10 != 0)) {
              uVar15 = *(undefined8 *)((long)piVar1 + uVar10);
            }
            func_0x000107c61328(uVar15,param_4,1);
            func_0x000107c6132c(param_4,2,uVar12);
            func_0x000107c613a8();
            if ((int)param_4 != 0x65) goto LAB_100aaf2d4;
          }
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar7);
          puVar11 = PTR_PTR_1126b04a8;
          func_0x000107c421f0(PTR_PTR_1126b04a8);
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126d5360);
          func_0x000107c5a210(puVar11);
          goto LAB_100aaf2bc;
        }
        lVar8 = param_4;
        FUN_1001b9e08(param_4,&UNK_10f4a283b);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
           (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar10 == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)((long)piVar1 + uVar10) != '\0';
        }
        func_0x000107c6132c(lVar8,1,bVar5);
        func_0x000107c6132c(lVar8,2,uVar12);
        func_0x000107c613a8();
        if ((int)lVar8 == 0x65) goto LAB_100aaf1fc;
LAB_100aaf2d4:
        func_0x000107c61170(puVar9);
      }
    }
    func_0x000107c61170(puVar7);
LAB_100aaf2e4:
    puVar11 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar7);
LAB_100aaf2f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 100aaf390; end: 100aaf437;  */

void FUN_100aaf390(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d5360;
    func_0x000107c610f4(PTR_PTR_1126d5360);
    func_0x000107c48a9c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined4 *)(param_1 + 0x18));
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100aaf438; end: 100aaf837;  */

ulong FUN_100aaf438(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_b0;
  
  func_0x000107c61174(param_3);
  uVar4 = param_3;
  func_0x000107c5c910();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uStack_b0 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x000107c5c910(param_3);
    func_0x000107c61180();
    uStack_b0 = param_2;
    FUN_100aaf8f0(param_2,uVar5);
    func_0x000107c61170(uVar5);
    uStack_b0 = uStack_b0 & 0xffffffff;
  }
  func_0x000107c61170(uVar4);
  uVar4 = param_3;
  func_0x000107c5bfec();
  func_0x000107c61180();
  uVar5 = param_2;
  FUN_100ab0940(param_2,uVar4);
  uVar6 = param_3;
  func_0x000107c5d0f0();
  func_0x000107c42bcc(param_3);
  uVar7 = param_3;
  uVar19 = param_1;
  func_0x000107c4d8c0();
  uVar8 = param_3;
  func_0x000107c44c00();
  func_0x000107c4d124(param_3);
  uVar20 = uVar19;
  func_0x000107c4d128(param_3);
  uVar21 = uVar20;
  func_0x000107c4d130(param_3);
  uVar9 = param_3;
  uVar22 = uVar21;
  func_0x000107c5bfc8(param_3);
  uVar10 = param_3;
  func_0x000107c4d8e8(param_3);
  uVar11 = param_3;
  func_0x000107c3f53c(param_3);
  func_0x000107c61180();
  uVar12 = param_2;
  FUN_100ab0940(param_2,uVar11);
  uVar13 = param_3;
  func_0x000107c40550(param_3);
  uVar14 = param_3;
  func_0x000107c40554(param_3);
  uVar15 = param_3;
  func_0x000107c5bff0(param_3);
  func_0x000107c519c8(param_3);
  uVar16 = param_3;
  func_0x000107c446f8();
  uVar17 = param_3;
  func_0x000107c4e7f0(param_3);
  func_0x000107c61180();
  uVar18 = param_2;
  FUN_100ab0940(param_2,uVar17);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce170(param_2,0x20,uVar15,0);
  func_0x0001001ce1c8(param_2,0x1e,uVar14,0);
  func_0x0001001ce1c8(param_2,0x1c,uVar13,0);
  func_0x0001001ce1c8(param_2,0x18,uVar10,0);
  func_0x0001001ce1c8(param_2,0x16,uVar9,0);
  func_0x0001001ce11c(uVar21,0,param_2,0x14);
  func_0x0001001ce11c(uVar20,0,param_2,0x12);
  func_0x0001001ce11c(uVar19,0,param_2,0x10);
  func_0x0001001ce1c8(param_2,0xc,uVar7,0);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x0001001ce1c8(param_2,6,uVar6 & 0xffffffff,0);
  FUN_1001ce2e4(param_2,0x26,uVar18 & 0xffffffff);
  FUN_1001ce290(uVar22,0,param_2,0x22);
  FUN_1001ce2e4(param_2,0x1a,uVar12 & 0xffffffff);
  FUN_100ab133c(param_2,8,uStack_b0);
  FUN_1001ce2e4(param_2,4,uVar5 & 0xffffffff);
  FUN_100ab13ac(param_2,0x24,uVar16 & 0xffffffff,0);
  FUN_100ab13ac(param_2,0xe,uVar8 & 0xffffffff,0);
  FUN_1001ce548(param_2,(iVar1 - iVar2) + iVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_3);
  return param_2;
}



/* Entry: 100aaf838; end: 100aaf8ef;  */

undefined8 FUN_100aaf838(void)

{
  int iVar1;
  
  if ((bRam00000001138298c0 & 1) == 0) {
    iVar1 = 0x138298c0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113829858 = 0xe;
      puRam0000000113829860 = &UNK_10f50cf18;
      uRam0000000113829868 = 0x10001;
      pcRam0000000113829870 = FUN_100ab2358;
      puRam0000000113829878 = &UNK_108c3ab80;
      ppuRam0000000113829850 = &PTR_DAT_110ab8710;
      uRam0000000113829890 = 0;
      uRam0000000113829888 = 0;
      uRam00000001138298a0 = 0;
      uRam0000000113829898 = 0;
      uRam00000001138298b0 = 0;
      uRam00000001138298a8 = 0;
      uRam00000001138298b8 = 0;
      func_0x000107c60e34(&DAT_108c10ae0,0x113829850,0x100000000);
      func_0x000107c60e4c(0x1138298c0);
    }
  }
  return 0x113829850;
}



/* Entry: 100aaf8f0; end: 100aafc9f;  */

ulong FUN_100aaf8f0(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  func_0x000107c61174(param_2);
  lVar4 = param_2;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  uVar5 = param_1;
  FUN_100ab0480(param_1,lVar4);
  lVar6 = param_2;
  func_0x000107c4a804();
  func_0x000107c61180();
  uVar7 = param_1;
  FUN_100ab0480(param_1,lVar6);
  lVar8 = param_2;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  uVar9 = param_1;
  FUN_100ab0480(param_1,lVar8);
  lVar10 = param_2;
  func_0x000107c4e0a8();
  func_0x000107c61180();
  uVar11 = param_1;
  FUN_100ab0480(param_1,lVar10);
  lVar12 = param_2;
  func_0x000107c4a980();
  func_0x000107c61180();
  uVar13 = param_1;
  FUN_100ab0480(param_1,lVar12);
  lVar14 = param_2;
  func_0x000107c3fb8c();
  func_0x000107c61180();
  uVar15 = param_1;
  FUN_100ab0480(param_1,lVar14);
  lVar16 = param_2;
  func_0x000107c40488();
  func_0x000107c61180();
  func_0x000107c61174();
  if (lVar16 == 0) {
    uVar21 = 0;
  }
  else {
    lVar17 = lVar16;
    func_0x000107c61178(lVar16);
    func_0x000107c3eea8();
    lVar18 = lVar16;
    func_0x000107c4adac(lVar16);
    uVar21 = param_1;
    FUN_1001d1030(param_1,lVar17,lVar18);
  }
  func_0x000107c61170(lVar16);
  lVar17 = param_2;
  func_0x000107c40490(param_2);
  func_0x000107c61180();
  uVar19 = param_1;
  FUN_100ab0480(param_1,lVar17);
  lVar18 = param_2;
  func_0x000107c4048c(param_2);
  func_0x000107c61180();
  uVar20 = param_1;
  FUN_100ab0480(param_1,lVar18);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_1001ce2e4(param_1,0x14,uVar20 & 0xffffffff);
  FUN_1001ce2e4(param_1,0x12,uVar19 & 0xffffffff);
  FUN_1001ce220(param_1,0x10,uVar21 & 0xffffffff);
  FUN_1001ce2e4(param_1,0xe,uVar15 & 0xffffffff);
  FUN_1001ce2e4(param_1,0xc,uVar13 & 0xffffffff);
  FUN_1001ce2e4(param_1,10,uVar11 & 0xffffffff);
  FUN_1001ce2e4(param_1,8,uVar9 & 0xffffffff);
  FUN_1001ce2e4(param_1,6,uVar7 & 0xffffffff);
  FUN_1001ce2e4(param_1,4,uVar5 & 0xffffffff);
  FUN_1001ce548(param_1,(iVar1 - iVar2) + iVar3);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100aafca0; end: 100aafcab; +[SCSnapchattersDeltaSyncMetadata table] */

undefined * FUN_100aafca0(void)

{
  return &UNK_10f50cf1d;
}



/* Entry: 100aafcac; end: 100aafd33;  */

void FUN_100aafcac(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100aafd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100aafd34; end: 100aafdbb;  */

void FUN_100aafd34(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100aafda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100aafdbc; end: 100ab0477;  */

void FUN_100aafdbc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000100ab041c;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000100ab043c;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000100ab043c;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000100ab03b0:
                    /* WARNING: Could not recover jumptable at 0x000100ab03d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000100ab03b0;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000100ab043c;
    }
    goto code_r0x000100ab0430;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000100ab0430;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000100ab043c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x000100ab043c;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_100ab044c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000100ab041c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000100ab0430:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000100ab043c:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_100ab044c:
  return;
}



/* Entry: 100ab0478; end: 100ab047f; -[SCStoriesThumbnailMedia key] */

undefined8 FUN_100ab0478(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100ab0480; end: 100ab05af;  */

undefined8 FUN_100ab0480(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  func_0x000107c61174(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_100ab0560;
  }
  pcVar1 = param_2;
  func_0x000107c60858(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c613d0(pcVar1);
    FUN_1001cde08(param_1,pcVar1,pcVar2);
    goto LAB_100ab0560;
  }
  pcVar1 = param_2;
  func_0x000107c412d4();
  func_0x000107c61180();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x000107c412d8();
    func_0x000107c61180();
    if (pcVar1 != (char *)0x0) goto LAB_100ab0520;
    param_1 = 0;
  }
  else {
LAB_100ab0520:
    pcVar3 = pcVar1;
    func_0x000107c61178();
    func_0x000107c3eea8();
    pcVar4 = pcVar1;
    func_0x000107c4adac(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    FUN_1001cde08(param_1,pcVar2,pcVar4);
  }
  func_0x000107c61170(pcVar1);
LAB_100ab0560:
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100ab05b0; end: 100ab05bf; -[SCStoriesThumbnailMedia iv] */

undefined8 FUN_100ab05b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100ab05c0; end: 100ab0613;  */

void FUN_100ab05c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ab0614; end: 100ab061f;  */

void FUN_100ab0614(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10029d3d4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100ab06d0(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ab0620; end: 100ab06cf;  */

void FUN_100ab0620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10029d3d4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100ab06d0(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100ab06d0; end: 100ab0907;  */

void FUN_100ab06d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9270;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
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
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f00cf70);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab0908);
  (*pcVar1)();
}



/* Entry: 100ab0908; end: 100ab090f; -[SCStoriesThumbnailMedia url] */

undefined8 FUN_100ab0908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100ab0910; end: 100ab0917; -[SCStoriesThumbnailMedia originalMediaId] */

undefined8 FUN_100ab0910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100ab0918; end: 100ab091f; -[SCStoriesThumbnailMedia largeThumbnailUrl] */

undefined8 FUN_100ab0918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100ab0920; end: 100ab0927; -[SCStoriesThumbnailMedia clientId] */

undefined8 FUN_100ab0920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100ab0928; end: 100ab092f; -[SCStoriesThumbnailMedia contentObject] */

undefined8 FUN_100ab0928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100ab0930; end: 100ab0937; -[SCStoriesThumbnailMedia contentObjectKey] */

undefined8 FUN_100ab0930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100ab0938; end: 100ab093f; -[SCStoriesThumbnailMedia contentObjectIv] */

undefined8 FUN_100ab0938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100ab0940; end: 100ab0a6f;  */

undefined8 FUN_100ab0940(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  func_0x000107c61174(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_100ab0a20;
  }
  pcVar1 = param_2;
  func_0x000107c60858(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c613d0(pcVar1);
    FUN_1001cde08(param_1,pcVar1,pcVar2);
    goto LAB_100ab0a20;
  }
  pcVar1 = param_2;
  func_0x000107c412d4();
  func_0x000107c61180();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x000107c412d8();
    func_0x000107c61180();
    if (pcVar1 != (char *)0x0) goto LAB_100ab09e0;
    param_1 = 0;
  }
  else {
LAB_100ab09e0:
    pcVar3 = pcVar1;
    func_0x000107c61178();
    func_0x000107c3eea8();
    pcVar4 = pcVar1;
    func_0x000107c4adac(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    FUN_1001cde08(param_1,pcVar2,pcVar4);
  }
  func_0x000107c61170(pcVar1);
LAB_100ab0a20:
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100ab0a70; end: 100ab0aef; -[SCLegacyMediaEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100ab0aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab0aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab0a70(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf428;
  func_0x000107c610fc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272acd0);
  *(undefined **)(param_1 + _DAT_11272acd0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100ab0af0; end: 100ab11ab;  */

void FUN_100ab0af0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000100ab1150;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000100ab1170;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000100ab1170;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000100ab10e4:
                    /* WARNING: Could not recover jumptable at 0x000100ab1108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000100ab10e4;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000100ab1170;
    }
    goto code_r0x000100ab1164;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000100ab1164;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000100ab1170;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x000100ab1170;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_100ab1180;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000100ab1150:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000100ab1164:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000100ab1170:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_100ab1180:
  return;
}



/* Entry: 100ab11ac; end: 100ab126b;  */

int FUN_100ab11ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_1001ce088(param_1,8);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 8) {
    FUN_1001cde7c(param_1,8);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined8 *)(lVar1 + -8);
  *puVar2 = param_2;
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 100ab126c; end: 100ab133b;  */

int FUN_100ab126c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_1001ce088(param_2,8);
  lVar1 = *(long *)(param_2 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_2 + 0x38)) < 8) {
    FUN_1001cde7c(param_2,8);
    lVar1 = *(long *)(param_2 + 0x30);
  }
  puVar2 = (undefined8 *)(lVar1 + -8);
  *puVar2 = param_1;
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  return (*(int *)(param_2 + 0x20) - (int)puVar2) + *(int *)(param_2 + 0x28);
}



/* Entry: 100ab133c; end: 100ab13ab;  */

void FUN_100ab133c(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  FUN_1001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  FUN_1001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 100ab13ac; end: 100ab1467;  */

void FUN_100ab13ac(ulong param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (((int)param_3 == param_4) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_1;
  func_0x000100ab1404(param_1,param_3);
  puVar3 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar3) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar3 = *(ulong **)(param_1 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar1 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar1;
  return;
}



/* Entry: 100ab1468; end: 100ab16d7; -[SCMediaCache init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100ab1468(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ea9f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    func_0x000107c56bf0(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    func_0x000107c529cc(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x000107c61180();
    func_0x000107c559cc(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    func_0x000107c5a7dc(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ace8);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ace8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c53fcc(puVar1);
    func_0x000107c4b758(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    if (lRam00000001136c0e68 != -1) {
      FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
    }
    func_0x000107c409e0(puVar2);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lRam00000001136c0e68 != -1) {
      FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
    }
    func_0x000107c43474(puVar2);
    func_0x000107c61180();
    func_0x000107c3d85c();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ab16d8; end: 100ab1717; -[SCMediaCache setObjectsToKeys:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab16d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272acec;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ab1718; end: 100ab1757; -[SCMediaCache setAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab1718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272acf0;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ab1758; end: 100ab1797; -[SCMediaCache setKeysBeingWrittenToDisk:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab1758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272acf4;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ab1798; end: 100ab17d7; -[SCMediaCache setWrittenToDiskCallbacks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab1798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272acf8;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ab17d8; end: 100ab1dcf; -[SCMediaCache loadPersistentMedia] */

void FUN_100ab17d8(undefined **param_1,undefined **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  if (lRam00000001136c0e68 != -1) {
    param_2 = &PTR___NSConcreteGlobalBlock_1108b8450;
    FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
  }
  ppuVar10 = ppuRam00000001136c0e60;
  lStack_f8 = 0;
  func_0x000107c61174(ppuRam00000001136c0e60);
  puVar7 = puVar6;
  ppuVar12 = ppuVar10;
  func_0x000107c40528();
  func_0x000107c61180();
  lVar5 = lStack_f8;
  func_0x000107c61174();
  func_0x000107c61170(ppuVar10);
  if (lVar5 == 0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110e08b98;
    puVar8 = puVar7;
    func_0x000107c40404();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if ((int)puVar8 == 0) {
      func_0x000107c3fa5c(param_1);
    }
    else {
      if (lRam00000001136c0e68 != -1) {
        param_2 = &PTR___NSConcreteGlobalBlock_1108b8450;
        FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
      }
      ppuVar9 = ppuRam00000001136c0e60;
      func_0x000107c5c168();
      func_0x000107c61180();
      ppuVar12 = ppuVar9;
      func_0x000107c4199c();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar9);
      if (ppuVar10 == (undefined **)0x0) {
        func_0x000107c3fa5c(param_1);
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c3e15c();
        func_0x000107c61180();
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        puStack_140 = (undefined *)0x0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        func_0x000107c61174(puVar7);
        ppuVar12 = &puStack_140;
        puVar11 = puVar7;
        func_0x000107c4080c();
        if (puVar11 != (undefined *)0x0) {
          lVar18 = *plStack_130;
          do {
            puVar19 = (undefined *)0x0;
            do {
              if (*plStack_130 != lVar18) {
                func_0x000107c61128(puVar7);
              }
              uVar21 = *(ulong *)(lStack_138 + (long)puVar19 * 8);
              ppuVar12 = ppuVar10;
              func_0x000107c4d9e8();
              func_0x000107c61180();
              func_0x000107c61170();
              if (ppuVar12 == (undefined **)0x0) {
                uVar16 = uVar21;
                func_0x000107c49d0c();
                lVar4 = lRam00000001136c0e68;
                if ((uVar16 & 1) == 0) {
                  func_0x000107c61174(uVar21);
                  if (lVar4 != -1) {
                    param_2 = &PTR___NSConcreteGlobalBlock_1108b8450;
                    FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
                  }
                  ppuVar12 = ppuRam00000001136c0e60;
                  func_0x000107c5c168();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar21);
                  func_0x000107c3d798(puVar8);
                  goto LAB_100ab1c08;
                }
              }
              else {
                ppuVar12 = ppuVar10;
                func_0x000107c4d9e8();
                func_0x000107c61180();
                ppuVar9 = ppuVar12;
                func_0x000107c4d9e8();
                func_0x000107c61180();
                ppuVar13 = ppuVar9;
                func_0x000107c3ebcc();
                func_0x000107c61170(ppuVar9);
                if ((int)ppuVar13 == 0) {
                  ppuVar9 = (undefined **)PTR_PTR_1126bf438;
                  func_0x000107c610f4(PTR_PTR_1126bf438);
                  func_0x000107c4705c();
                  lVar4 = lRam00000001136c0e68;
                  func_0x000107c61174(uVar21);
                  if (lVar4 != -1) {
                    param_2 = &PTR___NSConcreteGlobalBlock_1108b8450;
                    FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
                  }
                  ppuVar13 = ppuRam00000001136c0e60;
                  func_0x000107c5c168(ppuRam00000001136c0e60);
                  func_0x000107c61180();
                  func_0x000107c61170(uVar21);
                  func_0x000107c549a8(ppuVar9);
                  func_0x000107c61170(ppuVar13);
                  func_0x000107c61174(param_1);
                  func_0x000107c611a4(param_1);
                  ppuVar13 = param_1;
                  func_0x000107c3e37c(param_1);
                  func_0x000107c61180();
                  func_0x000107c56bd8();
                  func_0x000107c61170(ppuVar13);
                  func_0x000107c611a8(param_1);
                  ppuVar13 = param_1;
                }
                else {
                  ppuVar9 = ppuVar12;
                  func_0x000107c4d9e8(ppuVar12);
                  func_0x000107c61180();
                  ppuVar13 = ppuVar12;
                  func_0x000107c4d9e8();
                  func_0x000107c61180();
                  puVar14 = PTR_PTR_1126bf438;
                  func_0x000107c610f4(PTR_PTR_1126bf438);
                  func_0x000107c4705c();
                  if (ppuVar13 != (undefined **)0x0) {
                    func_0x000107c53450(puVar14);
                  }
                  lVar4 = lRam00000001136c0e68;
                  func_0x000107c61174(uVar21);
                  if (lVar4 != -1) {
                    param_2 = &PTR___NSConcreteGlobalBlock_1108b8450;
                    FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
                  }
                  ppuVar15 = ppuRam00000001136c0e60;
                  func_0x000107c5c168(ppuRam00000001136c0e60);
                  func_0x000107c61180();
                  func_0x000107c61170(uVar21);
                  func_0x000107c549a8(puVar14);
                  func_0x000107c61170(ppuVar15);
                  func_0x000107c61174(param_1);
                  func_0x000107c611a4(param_1);
                  ppuVar15 = param_1;
                  func_0x000107c3e37c(param_1);
                  func_0x000107c61180();
                  func_0x000107c56bd8();
                  func_0x000107c61170(ppuVar15);
                  func_0x000107c611a8(param_1);
                  func_0x000107c61170(param_1);
                  func_0x000107c61170(puVar14);
                }
                func_0x000107c61170(ppuVar13);
                func_0x000107c61170(ppuVar9);
LAB_100ab1c08:
                func_0x000107c61170(ppuVar12);
              }
              puVar19 = puVar19 + 1;
            } while (puVar11 != puVar19);
            ppuVar12 = &puStack_140;
            puVar11 = puVar7;
            func_0x000107c4080c();
          } while (puVar11 != (undefined *)0x0);
        }
        func_0x000107c61170(puVar7);
        puVar11 = puVar8;
        func_0x000107c40808();
        if (puVar11 != (undefined *)0x0) {
          puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_168 = 0xc2000000;
          puStack_160 = &UNK_10585afd8;
          puStack_158 = &UNK_110841f80;
          func_0x000107c61174(puVar8);
          puStack_150 = puVar8;
          func_0x000107c61174(puVar6);
          ppuVar12 = &puStack_170;
          puStack_148 = puVar6;
          func_0x000107c50970(param_1);
          func_0x000107c61170(puStack_148);
          func_0x000107c61170(puStack_150);
        }
        func_0x000107c61170(puVar8);
      }
      func_0x000107c61170(ppuVar10);
    }
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(param_1);
  func_0x000107c60bd8();
  if ((puVar6[0x1b] & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(puVar6 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar17 = *(long **)(puVar6 + 0x38);
      if ((plVar17 != (long *)0x0) && ((*(byte *)((long)plVar17 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar17 + 0x20))(plVar17,param_2,ppuVar12);
      }
      puVar1 = *(undefined4 **)(puVar6 + 0x50);
      for (puVar20 = *(undefined4 **)(puVar6 + 0x48); puVar20 != puVar1; puVar20 = puVar20 + 1) {
        uVar3 = *puVar20;
        iVar2 = *(int *)ppuVar12;
        *(int *)ppuVar12 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *(int *)ppuVar12;
      *(int *)ppuVar12 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,puVar6[0x30]);
      return;
    }
  }
  plVar17 = *(long **)(puVar6 + 0x38);
  if ((plVar17 != (long *)0x0) && ((*(byte *)((long)plVar17 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar17 + 0x20))(plVar17,param_2,ppuVar12);
  }
  plVar17 = *(long **)(puVar6 + 0x40);
  if ((plVar17 != (long *)0x0) && ((*(byte *)((long)plVar17 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100ab1ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar17 + 0x20))(plVar17,param_2,ppuVar12);
    return;
  }
  return;
}



/* Entry: 100ab1dd0; end: 100ab1f03;  */

void FUN_100ab1dd0(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100ab1ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100ab1f04; end: 100ab2037;  */

void FUN_100ab1f04(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100ab202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100ab2038; end: 100ab209b;  */

/* WARNING: Possible PIC construction at 0x000100ab2080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab2084) */

void FUN_100ab2038(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1000f73a0();
  func_0x000107c61180();
  func_0x000107c5c168();
  func_0x000107c61180();
  func_0x000107c40794();
  uVar1 = uRam00000001136c0e60;
  uRam00000001136c0e60 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ab209c; end: 100ab22a7;  */

uint FUN_100ab209c(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  func_0x000107c61174(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        func_0x000107c61174(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        func_0x000107c61170(param_3);
        goto LAB_100ab2280;
      }
      goto LAB_100ab21cc;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_100ab2280;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_100ab2280;
    }
LAB_100ab21cc:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_100ab2280;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_100ab2280:
  func_0x000107c61170(param_3);
  return uVar11 & 1;
}



/* Entry: 100ab22a8; end: 100ab2357;  */

ulong FUN_100ab22a8(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100ab2358; end: 100ab238f;  */

undefined4 FUN_100ab2358(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 100ab2390; end: 100ab24cf; +[SCSnapchattersDeltaSyncMetadata immutableObjectParse:bufferSize:] */

void FUN_100ab2390(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126db130;
  func_0x000107c610f4(PTR_PTR_1126db130);
  lVar6 = (long)*piVar1;
  puVar7 = (ushort *)((long)piVar1 - lVar6);
  uVar3 = *puVar7;
  if (uVar3 < 5) {
    uVar9 = 0;
  }
  else {
    if ((ulong)puVar7[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + (ulong)puVar7[2]);
    }
    if (6 < uVar3) {
      if ((ulong)puVar7[3] == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + (ulong)puVar7[3]);
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        func_0x000107c61180();
        lVar6 = (long)*piVar1;
        uVar3 = *(ushort *)((long)piVar1 - lVar6);
      }
      if (uVar3 < 9) {
        uVar5 = 0;
        uVar11 = 0;
      }
      else {
        uVar8 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar6));
        if (uVar8 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)((long)piVar1 + uVar8);
        }
        uVar11 = 0;
        if ((10 < uVar3) &&
           (uVar8 = (ulong)*(ushort *)((long)piVar1 + (10 - lVar6)), uVar11 = 0, uVar8 != 0)) {
          uVar11 = *(undefined8 *)((long)piVar1 + uVar8);
        }
      }
      goto LAB_100ab2440;
    }
  }
  puVar10 = (undefined *)0x0;
  uVar5 = 0;
  uVar11 = 0;
LAB_100ab2440:
  func_0x000107c48ef8(uVar11,puVar4,param_2,uVar9,puVar10,uVar5);
  func_0x000107c61170(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100ab24d0; end: 100ab258f; -[SCSnapchattersDeltaSyncMetadata initWithType:token:version:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100ab24d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1127074f8;
  uStack_60 = param_2;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127911e4) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127911e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911e8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911ec) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127911f0) = param_1;
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100ab2590; end: 100ab280b;  */

undefined8 * FUN_100ab2590(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  func_0x000107c60e20();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_DAT_110ab86b0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        func_0x000107c2a788(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_DAT_110ab86b0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_DAT_110ab86b0;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_100ab26b8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_100ab26b8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_100ab26b8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_DAT_110ab86b0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 100ab280c; end: 100ab2847;  */

undefined8 FUN_100ab280c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100ab2848(uVar1,param_1);
  return uVar1;
}



/* Entry: 100ab2848; end: 100ab29f3;  */

void FUN_100ab2848(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000107c2a780(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000107c2a77c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100ab2934:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x000107c2a784(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100ab2934;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110ab8710;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100ab29f4; end: 100ab2acf;  */

/* WARNING: Possible PIC construction at 0x000100ab2a50: Changing call to branch */

void FUN_100ab29f4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_DAT_110ab8710;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[10] = puVar2;
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100ab2ad0; end: 100ab2ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab2ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c50940();
    uVar5 = param_2;
    func_0x000107c61158();
    uVar6 = uVar5;
    func_0x000107c5c688();
    plVar1 = (long *)(param_1 + _DAT_11278eb34);
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar7 = PTR_PTR_1126e03b0;
    func_0x000107c610f4(PTR_PTR_1126e03b0);
    FUN_100ab2ccc();
    func_0x000107c61144(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + _DAT_11278eb04);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_100ab3ad8;
    puStack_b0 = &UNK_110d25928;
    func_0x000107c6111c(auStack_90,auStack_68);
    func_0x000107c61174(param_2);
    uStack_a8 = param_2;
    uStack_88 = uVar5;
    uStack_80 = uVar4;
    uStack_78 = uVar6;
    lStack_70 = lVar9;
    func_0x000107c61174(param_3);
    uStack_a0 = param_3;
    func_0x000107c61174(param_4);
    uStack_98 = param_4;
    FUN_10007380c(uVar8,&puStack_c8);
    func_0x000107c61170(uStack_98);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100ab2ca4; end: 100ab2ccb; -[SCSQLiteDocObjectContext observe:callbackQueue:changeHandler:] */

void FUN_100ab2ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100ab2ad0(param_1,param_3,param_4,param_5);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab2ccc; end: 100ab2d73;  */

undefined1 *
FUN_100ab2ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  func_0x000107c61174(param_5);
  puVar2 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1127065e8;
    lStack_50 = param_1;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar2 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      func_0x000107c611a0((undefined1 *)((long)plVar1 + 0x20),param_5);
    }
  }
  func_0x000107c61170(param_5);
  return puVar2;
}



/* Entry: 100ab2d74; end: 100ab2d83; -[SCSnapchattersDeltaSyncMetadata token] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab2d74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127911e8);
}



/* Entry: 100ab2d84; end: 100ab2deb; -[SCDocObjectSnapchattersUserInfoRepository deltaIncomingFriendToken] */

void FUN_100ab2d84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41788();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5cb78();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100ab2dec; end: 100ab2e1f;  */

void FUN_100ab2dec(void)

{
  func_0x000107c610f4(PTR_PTR_1126db138);
  func_0x000107c46624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ab2e20; end: 100ab2e67; -[SCStoriesSummaryInfoChangeRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab2e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab2e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab2e3c) */
/* WARNING: Removing unreachable block (ram,0x000100ab2e54) */

void FUN_100ab2e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x90,0);
  return;
}



/* Entry: 100ab2e68; end: 100ab2f3f; -[SCMediaCache clear] */

void FUN_100ab2e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100ab30c4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x000107c5096c(param_1,param_2,&puStack_48);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c4fe7c(param_1);
  uVar1 = param_1;
  func_0x000107c3e37c(param_1);
  func_0x000107c61180();
  func_0x000107c4fe7c();
  func_0x000107c61170(uVar1);
  uVar1 = param_1;
  func_0x000107c4da00(param_1);
  func_0x000107c61180();
  func_0x000107c4fe7c();
  func_0x000107c61170(uVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ab2f40; end: 100ab2f93; -[SCMediaCache runAsynchronouslyOnACacheQueue:] */

/* WARNING: Possible PIC construction at 0x000100ab2f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab2f84) */

void FUN_100ab2f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf428;
  func_0x000107c61174(param_3);
  func_0x000107c3dd4c(puVar1);
  func_0x000107c61180();
  func_0x000107c4e524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ab2f94; end: 100ab2fd3; +[SCMediaCache anyCachePerformer] */

void FUN_100ab2f94(void)

{
  if (lRam00000001136c0e40 != -1) {
    FUN_10002a2fc(0x1136c0e40,&PTR___NSConcreteGlobalBlock_1108b83b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf04a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001136c0e48,PTR_s_anyObject_11259ec30);
  return;
}



/* Entry: 100ab2fd4; end: 100ab30a3;  */

void FUN_100ab2fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c520a4();
  func_0x000107c61180();
  uVar1 = puRam00000001136c0e48;
  puRam00000001136c0e48 = puVar2;
  func_0x000107c61170(uVar1);
  iVar4 = 5;
  do {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4(PTR_PTR_1126ae790);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f302da1);
    func_0x000107c61180();
    func_0x000107c470d0(puVar2,param_2,puVar3,0x15,0,5);
    func_0x000107c61170(puVar3);
    func_0x000107c3d798(puRam00000001136c0e48,param_2,puVar2);
    func_0x000107c61170(puVar2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* Entry: 100ab30a4; end: 100ab30b3; -[SCMediaCache attributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab30a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272acf0);
}



/* Entry: 100ab30b4; end: 100ab30c3; -[SCMediaCache objectsToKeys] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab30b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272acec);
}



/* Entry: 100ab30c4; end: 100ab325f;  */

/* WARNING: Possible PIC construction at 0x000100ab3284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab3288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab30c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  if (lRam00000001136c0e68 != -1) {
    FUN_10002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
  }
  uVar2 = uRam00000001136c0e60;
  func_0x000107c61174(uRam00000001136c0e60);
  puVar4 = puVar3;
  func_0x000107c40528();
  func_0x000107c61180();
  func_0x000107c61174(0);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar4);
  puVar5 = puVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(puVar4);
      }
      func_0x000107c4ff88(*(undefined8 *)(param_1 + 0x20));
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar7);
    puVar5 = puVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(0);
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + _DAT_11278fc64,0);
    return;
  }
  return;
}



/* Entry: 100ab3260; end: 100ab329f; -[SCStoriesFriendMergedStoryPlaybackSequence .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab3284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab3288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ab3260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fc64,0);
  return;
}



/* Entry: 100ab32a0; end: 100ab344f; -[SCStoriesSnapPlaybackInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab32b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab32d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab32e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab33a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab33c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab33d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab33f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab3424) */
/* WARNING: Removing unreachable block (ram,0x000100ab340c) */
/* WARNING: Removing unreachable block (ram,0x000100ab33f4) */
/* WARNING: Removing unreachable block (ram,0x000100ab33dc) */
/* WARNING: Removing unreachable block (ram,0x000100ab33c4) */
/* WARNING: Removing unreachable block (ram,0x000100ab33ac) */
/* WARNING: Removing unreachable block (ram,0x000100ab3394) */
/* WARNING: Removing unreachable block (ram,0x000100ab337c) */
/* WARNING: Removing unreachable block (ram,0x000100ab3364) */
/* WARNING: Removing unreachable block (ram,0x000100ab334c) */
/* WARNING: Removing unreachable block (ram,0x000100ab3334) */
/* WARNING: Removing unreachable block (ram,0x000100ab331c) */
/* WARNING: Removing unreachable block (ram,0x000100ab3304) */
/* WARNING: Removing unreachable block (ram,0x000100ab32ec) */
/* WARNING: Removing unreachable block (ram,0x000100ab32d4) */
/* WARNING: Removing unreachable block (ram,0x000100ab32bc) */
/* WARNING: Removing unreachable block (ram,0x000100ab343c) */

void FUN_100ab32a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x130,0);
  return;
}



/* Entry: 100ab3450; end: 100ab3497; -[SCStoriesSnapAdInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab3468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab346c) */
/* WARNING: Removing unreachable block (ram,0x000100ab3484) */

void FUN_100ab3450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100ab3498; end: 100ab34d3; -[SCStoriesSnapRenderInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab34b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab34b4) */

void FUN_100ab3498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100ab34d4; end: 100ab3503; -[SCStoriesSnapCaptureInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab34ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab34f0) */

void FUN_100ab34d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100ab3504; end: 100ab357b; -[SCStoriesSnapMedia .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab351c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab354c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab3550) */
/* WARNING: Removing unreachable block (ram,0x000100ab3538) */
/* WARNING: Removing unreachable block (ram,0x000100ab3520) */
/* WARNING: Removing unreachable block (ram,0x000100ab3568) */

void FUN_100ab3504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 100ab357c; end: 100ab35cf; -[SCStoriesSnapIdentifiers .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab3594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab35ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab3598) */
/* WARNING: Removing unreachable block (ram,0x000100ab35b0) */

void FUN_100ab357c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100ab35d0; end: 100ab362f; -[SCStoriesSnapAttributes .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ab35e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ab3618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ab3604) */
/* WARNING: Removing unreachable block (ram,0x000100ab35ec) */
/* WARNING: Removing unreachable block (ram,0x000100ab361c) */

void FUN_100ab35d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 100ab3630; end: 100ab365f;  */

void FUN_100ab3630(void)

{
  undefined8 *in_x9;
  undefined8 *in_stack_00000008;
  
  *in_stack_00000008 = *in_x9;
  *in_x9 = in_stack_00000008;
  return;
}



/* Entry: 100ab3660; end: 100ab36a7;  */

void FUN_100ab3660(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100ab36a8; end: 100ab36b7;  */

void FUN_100ab36a8(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar5 = param_1;
  FUN_100ab36b8();
  func_0x000107c61180();
  func_0x000107c61428(lVar3 + 0x10,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x10) = lVar5;
  func_0x000107c61170(uVar2);
  if ((bVar1 & 1) != 0) {
    func_0x000105b3ebe4();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      uVar2 = 0;
      func_0x000100bf9c98(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      lVar5 = param_1;
      func_0x000107c5fc54(param_1,uVar2);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61428(lVar4 + 0x10,auStack_70,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    *(long *)(lVar4 + 0x10) = lVar5;
    func_0x000107c6142c(uVar2);
  }
  return;
}


