/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b9eba0; end: 100b9ed37;  */

void FUN_100b9eba0(long param_1,long param_2,long param_3)

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
                            "LensUserSessionScopeGraphBridge/SCSCLensProcessingSharedServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9ed38);
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



/* Entry: 100b9ed38; end: 100b9ed43; -[SCSCLensProcessingSharedServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ed38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113028f28;
  func_0x000107c61428(param_1 + _DAT_113028f28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ed44; end: 100b9ed97;  */

void FUN_100b9ed44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9ed98; end: 100b9eda3; -[SCSCLensProcessingSharedServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ed98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113028f30;
  func_0x000107c61428(param_1 + _DAT_113028f30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9eda4; end: 100b9edc3;  */

void FUN_100b9eda4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0620);
  return;
}



/* Entry: 100b9edc4; end: 100b9edd7;  */

void FUN_100b9edc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b9edd8; end: 100b9ee23;  */

void FUN_100b9edd8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b9ee24; end: 100b9ee57; -[SCSCLensProcessingSharedServicesSaberServiceProvider __safeProvide] */

void FUN_100b9ee24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b9ee58();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9ee58; end: 100b9ef3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ee58(void)

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
      FUN_100b9f680();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026778);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113028f38);
      *(long *)(unaff_x20 + _DAT_113028f38) = lVar3;
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



/* Entry: 100b9ef40; end: 100b9ef4b; -[SCSCLensProcessingSharedServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9ef40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113028f28;
  func_0x000107c61428(param_1 + _DAT_113028f28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9ef4c; end: 100b9ef8f;  */

void FUN_100b9ef4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9ef90; end: 100b9f673; -[SCLensDataProviderV2 initWithLensDataFetcher:lensDataPrefetcher:adaptiveLensFetcher:metadataStore:sortStrategy:lensThumbnailLogger:lensRemovalManager:prefetchFiltersFactory:configuration:lensDataConfigProvider:lensUserProvider:lensCarouselStudySettings:lensContentCacheProvider:] */

undefined8 *
FUN_100b9ef90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_80 = PTR_PTR_112700de8;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 0x18) = 0;
    func_0x000107c61174(param_11);
    uVar3 = puVar2[2];
    puVar2[2] = param_11;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar2[3];
    puVar2[3] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[4];
    puVar2[4] = param_5;
    func_0x000107c61170(uVar3);
    uVar3 = param_12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar4 = puVar2[0x12];
    puVar2[0x12] = uVar3;
    func_0x000107c61170(uVar4);
    *(bool *)((long)puVar2 + 0xc5) = param_5 != 0;
    if (param_5 == 0) {
      uVar1 = 0;
      *(undefined1 *)((long)puVar2 + 0xc6) = 0;
    }
    else {
      uVar1 = (undefined1)puVar2[0x12];
      func_0x000107c3d178();
      *(undefined1 *)((long)puVar2 + 0xc6) = uVar1;
      if (*(char *)((long)puVar2 + 0xc5) == '\x01') {
        uVar1 = (undefined1)puVar2[0x12];
        func_0x000107c4e3c8();
      }
      else {
        uVar1 = 0;
      }
    }
    *(undefined1 *)((long)puVar2 + 199) = uVar1;
    puVar5 = PTR_PTR_1126ddd10;
    func_0x000107c610f4();
    puVar6 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    uVar4 = puVar2[4];
    func_0x000107c4335c(uVar4);
    func_0x000107c61180();
    func_0x000107c47258();
    uVar11 = puVar2[8];
    puVar2[8] = puVar5;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    puVar5 = PTR_PTR_1126ddd18;
    func_0x000107c61160();
    uVar4 = puVar2[10];
    puVar2[10] = puVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = puVar2[5];
    puVar2[5] = param_6;
    func_0x000107c61170(uVar4);
    puVar6 = PTR_PTR_1126ae720;
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_1091e0880;
    puStack_98 = &UNK_110ae08d8;
    func_0x000107c61174(param_6);
    uStack_90 = param_6;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar2[6];
    puVar2[6] = puVar6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = puVar2[7];
    puVar2[7] = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_15);
    uVar4 = puVar2[0x11];
    puVar2[0x11] = param_15;
    func_0x000107c61170(uVar4);
    uVar4 = param_10;
    func_0x000107c4e3c4();
    func_0x000107c61180();
    uVar11 = puVar2[0xb];
    puVar2[0xb] = uVar4;
    func_0x000107c61170(uVar11);
    uVar4 = param_10;
    func_0x000107c3d174();
    func_0x000107c61180();
    uVar11 = puVar2[0xc];
    puVar2[0xc] = uVar4;
    func_0x000107c61170(uVar11);
    uVar4 = param_10;
    func_0x000107c3e440();
    func_0x000107c61180();
    uVar11 = puVar2[0xd];
    puVar2[0xd] = uVar4;
    func_0x000107c61170(uVar11);
    func_0x000107c61174(param_9);
    uVar4 = puVar2[0xe];
    puVar2[0xe] = param_9;
    func_0x000107c61170(uVar4);
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = puVar2[0xf];
    puVar2[0xf] = puVar6;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_13);
    uVar4 = puVar2[0x13];
    puVar2[0x13] = param_13;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_14);
    uVar4 = puVar2[0x14];
    puVar2[0x14] = param_14;
    func_0x000107c61170(uVar4);
    puVar2[0x17] = 0;
    puVar6 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = puVar2[0x15];
    puVar2[0x15] = puVar6;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_b8,puVar2);
    uVar7 = puVar2[0xe];
    func_0x000107c5006c(uVar7);
    func_0x000107c61180();
    uVar4 = uVar7;
    FUN_100078e94();
    func_0x000107c61180();
    uVar11 = uVar7;
    func_0x000107c4da88(uVar7);
    func_0x000107c61180();
    puStack_e0 = puVar5;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_100c70580;
    puStack_c8 = &UNK_11086a720;
    func_0x000107c6111c(auStack_c0,auStack_b8);
    uVar8 = uVar11;
    func_0x000107c5c320(uVar11);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c3c67c(puVar2);
    if ((*(byte *)((long)puVar2 + 199) & 1) == 0) {
      func_0x000107c61174(PTR___dispatch_main_q_11034be20);
      puVar6 = PTR_PTR_1126b6ae8;
      func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
      func_0x000107c61180();
      puVar5 = PTR_PTR_1126ae960;
      puVar9 = PTR_PTR_1126cd588;
      func_0x000107c4b044(PTR_PTR_1126cd588);
      func_0x000107c61180();
      func_0x000107c4adb8(puVar5);
      func_0x000107c61180();
      puVar10 = PTR_PTR_1126ae970;
      func_0x000107c5d9b8(PTR_PTR_1126ae970);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_e8,auStack_b8);
      func_0x000107c5e08c(puVar6);
      func_0x000107c611b0();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c61120(auStack_e8);
      func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    }
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100b9f674; end: 100b9f67f; -[SCSCLensProcessingSharedServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9f674(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113028f30;
  func_0x000107c61428(param_1 + _DAT_113028f30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9f680; end: 100b9f6b7;  */

void FUN_100b9f680(undefined8 param_1)

{
  if (lRam00000001130250c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cfc64);
  return;
}



/* Entry: 100b9f6b8; end: 100b9f707; -[SCLensDataConfigProvider activePrefetchTurnedOff] */

undefined8 FUN_100b9f6b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100b9f708; end: 100b9f74b;  */

void FUN_100b9f708(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 100b9f74c; end: 100b9f7bf; -[SCSCLensProcessingCarouselServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9f74c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8ab8,0);
  func_0x000107c61614(param_1 + _DAT_112ef8ac0,0);
  *(undefined8 *)(param_1 + _DAT_112ef8ac8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b9f7c0; end: 100b9f80f; -[SCLensDataConfigProvider passivePrefetchTurnedOff] */

undefined8 FUN_100b9f7c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100b9f810; end: 100b9f8bb; -[SCSCLensProcessingCarouselServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b9f810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9f8bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9f8bc; end: 100b9fa53;  */

void FUN_100b9f8bc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCSCLensProcessingCarouselServicesSaberServiceProvider.swift"
                            ,0x57,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9fa54);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b9fa54; end: 100b9fa5f; -[SCSCLensProcessingCarouselServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9fa54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8ab8;
  func_0x000107c61428(param_1 + _DAT_112ef8ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9fa60; end: 100b9fab3;  */

void FUN_100b9fa60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9fab4; end: 100b9faeb; -[_TtC34AdaptiveLensFetchingImplementation19AdaptiveLensFetcher fetchingNotifier] */

void FUN_100b9fab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100b9faec();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9faec; end: 100b9fd43;  */

void FUN_100b9faec(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puVar3 = &UNK_10d9b0f38;
  func_0x000107c614e0();
  uVar9 = *(ulong *)(unaff_x20 + 0x50);
  if (uVar9 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar8 = uVar9;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c61574();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100b9fff8(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9fd44);
      (*pcVar2)();
    }
    if ((uVar9 & 0xc000000000000001) == 0) {
      puVar11 = (ulong *)(uVar9 + 0x20);
      do {
        puVar5 = puStack_58;
        uVar9 = *puVar11;
        uStack_78 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&puStack_70,&uStack_78,puVar3);
        func_0x000107c61574(uVar9);
        uVar1 = uStack_68;
        puVar7 = puStack_70;
        uVar9 = *(ulong *)(puVar5 + 0x10);
        puStack_58 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
          FUN_100b9fff8(1 < *(ulong *)(puVar5 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puStack_58 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puStack_58 + uVar9 * 0x10 + 0x28) = uVar1;
        *(undefined **)(puStack_58 + uVar9 * 0x10 + 0x20) = puVar7;
        uVar8 = uVar8 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar8 != 0);
    }
    else {
      uVar10 = 0;
      do {
        puVar5 = puStack_58;
        uVar4 = uVar10;
        func_0x0001019c2438(uVar10,uVar9);
        uStack_78 = uVar4;
        func_0x000107c614bc(&puStack_70,&uStack_78,puVar3);
        func_0x000107c615e8(uVar4);
        uVar1 = uStack_68;
        puVar7 = puStack_70;
        uVar4 = *(ulong *)(puVar5 + 0x10);
        puStack_58 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
          FUN_100b9fff8(1 < *(ulong *)(puVar5 + 0x18),uVar4 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar4 + 1;
        *(undefined8 *)(puStack_58 + uVar4 * 0x10 + 0x28) = uVar1;
        *(undefined **)(puStack_58 + uVar4 * 0x10 + 0x20) = puVar7;
      } while (uVar8 != uVar10);
    }
    puVar7 = puStack_58;
    func_0x000107c61574();
  }
  FUN_100ba0190();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(unaff_x20 + 0xb8);
  func_0x000107c6157c();
  puVar5 = puVar7;
  FUN_100ba01a4(puVar7);
  func_0x000107c6142c(puVar7);
  puStack_70 = puVar3;
  func_0x000100ba04d0(puVar5);
  puVar3 = puStack_70;
  lVar6 = 0;
  FUN_100ba08d8();
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar3;
  return;
}



/* Entry: 100b9fd44; end: 100b9fd4f; -[SCSCLensProcessingCarouselServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9fd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8ac0;
  func_0x000107c61428(param_1 + _DAT_112ef8ac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9fd50; end: 100b9fd83; -[SCSCLensProcessingCarouselServicesSaberServiceProvider __safeProvide] */

void FUN_100b9fd50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b9fd84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b9fd84; end: 100b9fe6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9fd84(void)

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
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      func_0x000100ba0014();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112ef8658);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef8ac8);
      *(long *)(unaff_x20 + _DAT_112ef8ac8) = lVar3;
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



/* Entry: 100b9fe6c; end: 100b9fe77; -[SCSCLensProcessingCarouselServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9fe6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8ab8;
  func_0x000107c61428(param_1 + _DAT_112ef8ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9fe78; end: 100b9febb;  */

void FUN_100b9fe78(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9febc; end: 100b9fec7; -[SCSCLensProcessingCarouselServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9febc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8ac0;
  func_0x000107c61428(param_1 + _DAT_112ef8ac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9fec8; end: 100b9fff7;  */

undefined * FUN_100b9fec8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9fff8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112de6290;
    FUN_1000285a8(0x112de6290,&UNK_10d9b0dc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112de6298;
    FUN_1000285a8(0x112de6298,&UNK_10d9b0dc8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100b9fff8; end: 100ba008f;  */

void FUN_100b9fff8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b9fec8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100ba0090; end: 100ba00af;  */

void FUN_100ba0090(void)

{
  FUN_1000d224c();
  return;
}



/* Entry: 100ba00b0; end: 100ba00b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba00b0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = 0;
  FUN_100ba00b8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112de6c98;
  uVar5 = 0x112de6c90;
  FUN_1000285a8(0x112de6c90,&UNK_10d9b19b0);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112de6ca0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_1104267f8;
  return;
}



/* Entry: 100ba00b8; end: 100ba00d7;  */

void FUN_100ba00b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef578);
  return;
}



/* Entry: 100ba00d8; end: 100ba018f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba00d8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar3 = 0;
  FUN_100ba00b8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112de6c98;
  uVar5 = 0x112de6c90;
  FUN_1000285a8(0x112de6c90,&UNK_10d9b19b0);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112de6ca0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar6;
  param_1[1] = &PTR_DAT_1104267f8;
  return;
}



/* Entry: 100ba0190; end: 100ba01a3;  */

void FUN_100ba0190(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6700 == (undefined *)0x0 || ((ulong)puRam0000000112de6700 & 1) != 0) {
    puVar1 = &UNK_10e88c1c4;
    func_0x000107c61518(&UNK_10e88c1c4,0x28,0,0);
    puRam0000000112de6700 = puVar1;
  }
  return;
}



/* Entry: 100ba01a4; end: 100ba02cf;  */

undefined * FUN_100ba01a4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    FUN_100ba0400(0,lVar5,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar2 = puStack_68;
      uStack_78 = puVar6[1];
      uStack_80 = *puVar6;
      func_0x000107c615f0(uStack_80);
      uVar3 = 0x112de6298;
      FUN_1000285a8(0x112de6298,&UNK_10d9b0dc8);
      uVar4 = 0x112de6288;
      FUN_1000285a8(0x112de6288,&UNK_10d9b0f70);
      func_0x000107c6147c(&uStack_70,&uStack_80,uVar3,uVar4,7);
      uVar3 = uStack_70;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_100ba0400(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 8 + 0x20) = uVar3;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 2;
    } while (lVar5 != 0);
  }
  return puStack_68;
}



/* Entry: 100ba02d0; end: 100ba03ff;  */

undefined * FUN_100ba02d0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba0400);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_100ba0190();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112de6288;
    FUN_1000285a8(0x112de6288,&UNK_10d9b0f70);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100ba0400; end: 100ba041b;  */

void FUN_100ba0400(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100ba02d0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100ba041c; end: 100ba06f3;  */

void FUN_100ba041c(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  (*param_3)();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100ba06f4; end: 100ba0773;  */

undefined * FUN_100ba06f4(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100ba0774; end: 100ba08d7;  */

ulong FUN_100ba0774(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba08d8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba08cc);
        (*pcVar1)();
      }
      uVar3 = 0x112de6288;
      FUN_1000285a8(0x112de6288,&UNK_10d9b0f70);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba08d0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba08d4);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          func_0x0001019c2294(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 100ba08d8; end: 100ba08f7;  */

void FUN_100ba08d8(void)

{
  func_0x000107c61168(&PTR_PTR_112de6518);
  return;
}



/* Entry: 100ba08f8; end: 100ba0b7f; -[SCLensDataFetchingMediator initWithLensDataFetcher:lensDataPrefetcher:lensThumbnailLogger:appLifecycleManager:downloadableLensesCached:lensDataFetchingNotifier:ignoreReachabilityStatus:delegate:] */

undefined1 *
FUN_100ba08f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             byte param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112705a48;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x71) = param_7;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x80),param_11);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    func_0x000107c61170(uVar2);
    if ((param_9 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      func_0x000107c61180();
      func_0x000107c3d7bc();
      func_0x000107c61170(puVar3);
    }
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d67c();
    func_0x000107c61170(uVar2);
    func_0x000107c3c9c0(puVar1);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba0b80; end: 100ba0bc7;  */

void FUN_100ba0b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ef5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100ba0bc8; end: 100ba0da7;  */

void FUN_100ba0bc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar6 = param_1 + 0x60;
  func_0x000107c61148(lVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar10 = lVar6;
  func_0x000107c3b2a4(lVar6,param_2,uVar7,uVar1,uVar8,uVar2,uVar4,uVar3,uVar5,uVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 100ba0da8; end: 100ba11e7; -[SCLensProcessingSharedDependencyProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100ba0e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba0fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba1024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba1034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba105c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba10a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba10f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba1100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba1180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba1190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ba11a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba1194) */
/* WARNING: Removing unreachable block (ram,0x000100ba1184) */
/* WARNING: Removing unreachable block (ram,0x000100ba10f4) */
/* WARNING: Removing unreachable block (ram,0x000100ba10a4) */
/* WARNING: Removing unreachable block (ram,0x000100ba1060) */
/* WARNING: Removing unreachable block (ram,0x000100ba1104) */
/* WARNING: Removing unreachable block (ram,0x000100ba106c) */
/* WARNING: Removing unreachable block (ram,0x000100ba1038) */
/* WARNING: Removing unreachable block (ram,0x000100ba1028) */
/* WARNING: Removing unreachable block (ram,0x000100ba0fd8) */
/* WARNING: Removing unreachable block (ram,0x000100ba0f98) */
/* WARNING: Removing unreachable block (ram,0x000100ba0f60) */
/* WARNING: Removing unreachable block (ram,0x000100ba0f30) */
/* WARNING: Removing unreachable block (ram,0x000100ba0f4c) */
/* WARNING: Removing unreachable block (ram,0x000100ba0f04) */
/* WARNING: Removing unreachable block (ram,0x000100ba0ef4) */
/* WARNING: Removing unreachable block (ram,0x000100ba0eac) */
/* WARNING: Removing unreachable block (ram,0x000100ba0e9c) */
/* WARNING: Removing unreachable block (ram,0x000100ba0e40) */
/* WARNING: Removing unreachable block (ram,0x000100ba11c0) */
/* WARNING: Removing unreachable block (ram,0x000100ba0e4c) */
/* WARNING: Removing unreachable block (ram,0x000100ba11e0) */
/* WARNING: Removing unreachable block (ram,0x000100ba0e50) */
/* WARNING: Removing unreachable block (ram,0x000100ba0e64) */
/* WARNING: Removing unreachable block (ram,0x000100ba0e30) */
/* WARNING: Removing unreachable block (ram,0x000100ba11a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba0da8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112779c40;
    func_0x000107c61148(param_1);
  }
  func_0x000107c4129c(param_1);
  func_0x000107c61180();
  func_0x000107c40534();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b3770;
  func_0x000107c4eb74(PTR_PTR_1126b3770);
  func_0x000107c61180();
  func_0x000107c49d0c(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100ba11e8; end: 100ba1227;  */

void FUN_100ba11e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b29c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba1228; end: 100ba130b; -[SCLensContentEntryPoint _createLensBitmojiListManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba1228(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bbac0;
  func_0x000107c610f4(PTR_PTR_1126bbac0);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127264a8;
    func_0x000107c61148(lVar5);
  }
  lVar2 = lVar5;
  func_0x000107c5da60(lVar5);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c503b4();
  func_0x000107c61180();
  func_0x000100ba133c(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c4b518();
  func_0x000107c61180();
  func_0x000107c48398(puVar1,param_2,lVar3,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100ba130c; end: 100ba135f; +[SCViewfinderDataSourceContext postCapture] */

void FUN_100ba130c(void)

{
  func_0x000107c5fadc(0x5041435f54534f50,0xec00000045525554);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba1360; end: 100ba14df; -[SCLensBitmojiListManager initWithRequestManager:lensUserProvider:] */

undefined1 *
FUN_100ba1360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1127058d8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    func_0x000107c60f64();
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba14e0; end: 100ba14fb;  */

void FUN_100ba14e0(void)

{
  func_0x000107c61160(PTR_PTR_1126bb9b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba14fc; end: 100ba1573; -[SCLensExternalCompositeDataFetcher init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100ba14fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705a00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278d04c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278d04c) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278d050) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ba1574; end: 100ba163b;  */

void FUN_100ba1574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126bb9d8;
  func_0x000107c610f4(PTR_PTR_1126bb9d8);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c477cc(puVar3,param_2,uVar7,uVar2,uVar1,uVar4);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126bb9e0;
  func_0x000107c610f4(PTR_PTR_1126bb9e0);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  func_0x000107c473e4(puVar5,param_2,puVar3,uVar7,puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100ba163c; end: 100ba1643;  */

void FUN_100ba163c(void)

{
  if (lRam000000011307dad0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e80b640);
  return;
}



/* Entry: 100ba1644; end: 100ba167b;  */

void FUN_100ba1644(undefined8 param_1)

{
  if (lRam000000011307dad0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e80b640);
  return;
}



/* Entry: 100ba167c; end: 100ba1703;  */

void FUN_100ba167c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  puStack_38 = puStack_48;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd06e08;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 100ba1704; end: 100ba177f; -[SCDeviceDependentAssetEndpointClient initWithMetadataService:requestModifier:countryCodeProvider:performerProvider:] */

void FUN_100ba1704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_100ba1780(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 100ba1780; end: 100ba1957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100ba1780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  puVar5 = auStack_70;
  func_0x000107c614f0();
  if (lRam000000011307da78 != -1) {
    func_0x000107c61568(0x11307da78,FUN_100ba1958);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = lVar1;
  FUN_100028790();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11307da80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307da88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307da90) = param_3;
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(unaff_x20 + _DAT_11307da98,lVar2,lVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f201d70);
  uVar4 = param_4;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_11307daa0) = uVar4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c614f0();
  func_0x000107c61464();
  return puVar5;
}



/* Entry: 100ba1958; end: 100ba1a3b;  */

void FUN_100ba1958(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  func_0x000100028750();
  lVar2 = lVar3;
  FUN_100028790(lVar3,0x113813780);
  func_0x000107c5edd0(puVar5,0xd00000000000001c,0x800000010f201df0);
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar6 + 0x20))(lVar2,puVar5,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba1a3c);
  (*pcVar1)();
}



/* Entry: 100ba1a3c; end: 100ba1a9b; -[SCCachingDeviceDependentAssetURLResolver initWithLensResourceResolver:lensDataConfig:timeProvider:] */

void FUN_100ba1a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_100ba1a9c(param_3,param_4,param_5);
  return;
}



/* Entry: 100ba1a9c; end: 100ba1ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba1a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_11307d8a0;
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c539f8();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_11307d8a8;
  lVar3 = 0;
  FUN_100ba1ba4();
  func_0x000107c613fc();
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100ba1bc4();
  *(undefined **)(lVar3 + 0x18) = puVar2;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11307d8b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307d8b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307d8c0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ba1ba4; end: 100ba1bc3;  */

void FUN_100ba1ba4(void)

{
  func_0x000107c61168(&PTR_PTR_11307d9f0);
  return;
}



/* Entry: 100ba1bc4; end: 100ba1cbf;  */

undefined * FUN_100ba1bc4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000285a8(0x11307da68,&UNK_10dd06dc8);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1cbc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1cc0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100ba1cc0; end: 100ba226b; -[SCLensContentEntryPoint _downloadOperationFactoryWithBitmojiListManager:externalDataFetcher:lensContentDataFetcher:lensIconRepository:lensPreferences:lensDownloadLogger:lensResourceDownloadLogger:resourceResolver:deviceDependentAssetAnalyticsReporter:endpointResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba1cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  puVar1 = PTR_PTR_1126bbaf0;
  func_0x000107c61174();
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127264b0;
    func_0x000107c61148(lVar20);
  }
  lVar2 = lVar20;
  func_0x000107c4ec80(lVar20);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  func_0x000107c492e8(puVar1,param_2,lVar3,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar20);
  puVar4 = PTR_PTR_1126bbaf8;
  func_0x000107c610f4();
  func_0x000107c473f0();
  puVar5 = PTR_PTR_1126bbb00;
  func_0x000107c610f4();
  puVar6 = PTR_PTR_1126bbb08;
  func_0x000107c610f4(PTR_PTR_1126bbb08);
  lVar20 = param_1;
  func_0x00010074c930(param_1);
  func_0x000107c61180();
  lVar2 = lVar20;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar3 = param_1;
  FUN_100ba23ec(param_1);
  func_0x000107c61180();
  lVar7 = lVar3;
  func_0x000107c4b3b0();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c45e08(puVar6,param_2,lVar2,lVar8);
  func_0x000107c45948(puVar5,param_2,puVar6,1,param_11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar20);
  puVar6 = PTR_PTR_1126bbb00;
  func_0x000107c610f4();
  func_0x000107c45948();
  func_0x000107c61170(param_12);
  lVar20 = param_1;
  FUN_1003c8e00();
  func_0x000107c61180();
  lVar2 = lVar20;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  puVar9 = PTR_PTR_1126bbb10;
  func_0x000107c610f4();
  func_0x000107c45e8c();
  puVar10 = PTR_PTR_1126bbb18;
  func_0x000107c610f4();
  lVar20 = param_1;
  FUN_100ba26d4(param_1);
  func_0x000107c61180();
  lVar3 = lVar20;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c460a4(puVar10,param_2,lVar3,lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar20);
  puVar11 = PTR_PTR_1126bbb20;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_1127264dc;
    func_0x000107c61148();
  }
  lVar3 = lVar20;
  func_0x000107c45070();
  func_0x000107c61180();
  lVar7 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000107c3af10();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112726494;
    func_0x000107c61148();
  }
  lVar12 = lVar21;
  func_0x000107c4b32c();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar14 = param_1;
  func_0x000100ba133c();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c4b518();
  func_0x000107c61180();
  FUN_100ba23ec();
  func_0x000107c61180();
  lVar16 = param_1;
  func_0x000107c4b3b0();
  func_0x000107c61180();
  lVar17 = lVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar18 = param_9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_9);
  lVar19 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c46090(puVar11,param_2,param_5,lVar7,param_3,lVar8,param_4,puVar4,lVar13,lVar15,
                      param_8,lVar17,uVar18,puVar9,param_6,puVar10,param_10,lVar19,param_11);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 100ba226c; end: 100ba230f; -[SCLensSynchronousSecurity initWithUserPreferences:timeProvider:] */

undefined1 *
FUN_100ba226c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a360;
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



/* Entry: 100ba2310; end: 100ba23eb; -[SCLensSecurity initWithLensSecurity:] */

undefined1 * FUN_100ba2310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270a350;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba23ec; end: 100ba240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba23ec(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba2410; end: 100ba24fb; -[SCLensCofBasedRemoteAssetsLensResourceResolver initWithCircumstanceEngine:lensRemoteAssetLogger:] */

undefined1 *
FUN_100ba2410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705ac0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined ***)((long)puVar1 + 0x18) = &PTR__OBJC_CLASS___NSConstantDictionary_111175530;
    func_0x000107c61170(uVar2);
    if (lRam00000001137f4020 != -1) {
      FUN_10002a2fc(0x1137f4020,&PTR___NSConcreteGlobalBlock_110cb96e8);
    }
    *(undefined1 *)((long)puVar1 + 0x20) = uRam00000001137f4018;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba24fc; end: 100ba255b;  */

/* WARNING: Possible PIC construction at 0x000100ba2548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba254c) */

void FUN_100ba24fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c3e148();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40404();
  uRam00000001137f4018 = SUB81(puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100ba255c; end: 100ba2607; -[SCLensDeviceDependentAssetReportingResolver initWithBaseResolver:source:reporter:] */

undefined1 *
FUN_100ba255c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112705ad0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba2608; end: 100ba26d3; -[SCLensDeviceDependentAssetDecisionResolver initWithCofResolver:endpointResolver:lensDataConfig:] */

undefined1 *
FUN_100ba2608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112705ac8;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba26d4; end: 100ba26f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba26d4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba26f8; end: 100ba27c7; -[SCLensBlobDataContentManagerFetcher initWithContentDelivery:lensDataConfig:] */

undefined1 *
FUN_100ba26f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1127058f8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bba88;
    func_0x000107c610f4();
    puVar3 = PTR_PTR_1126bb998;
    func_0x000107c61160(PTR_PTR_1126bb998);
    func_0x000107c460a8();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba27c8; end: 100ba2887; -[SCLensContentManagerFetcher initWithContentDelivery:lensDataConfig:lensContentResultsCache:] */

undefined1 *
FUN_100ba27c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112705918;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba2888; end: 100ba28c7;  */

void FUN_100ba2888(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3af1c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba28c8; end: 100ba29f7; -[SCBitmojiFetchServicesEntryPoint _bitmojiManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba28c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b8328;
  func_0x000107c610f4(PTR_PTR_1126b8328);
  param_1 = param_1 + _DAT_112722844;
  func_0x000107c61148(param_1);
  lVar3 = param_1;
  func_0x000107c40454();
  func_0x000107c61180();
  func_0x000107c45980(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100ba29f8; end: 100ba29ff; -[SCBitmojiFlatlandContentServices contentFetcher] */

undefined8 FUN_100ba29f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100ba2a00; end: 100ba2aa3; -[SCBitmojiManager initWithBitmoji3DFetcher:circumstanceEngine:] */

undefined1 *
FUN_100ba2a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9e68;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba2aa4; end: 100ba2d67; -[SCLensContentEntryPoint _bitmojiAssetDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba2aa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bba98;
  func_0x000107c610f4();
  puVar2 = PTR_PTR_1126b7f68;
  func_0x000107c5a9bc(PTR_PTR_1126b7f68);
  func_0x000107c61180();
  func_0x000107c48380(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126bb998;
  func_0x000107c61160();
  puVar3 = PTR_PTR_1126bba88;
  func_0x000107c610f4();
  lVar4 = param_1;
  FUN_100ba26d4(param_1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c40430();
  func_0x000107c61180();
  lVar12 = param_1;
  FUN_1003c8e00(param_1);
  func_0x000107c61180();
  lVar6 = lVar12;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c460a8(puVar3,param_2,lVar5,lVar6,puVar2);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar7 = PTR_PTR_1126bba80;
  func_0x000107c610f4();
  lVar4 = param_1;
  func_0x00010074c930(param_1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0(puVar7,param_2,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar8 = PTR_PTR_1126bbb28;
  func_0x000107c610f4(PTR_PTR_1126bbb28);
  lVar4 = param_1;
  func_0x00010074c90c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c444a4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127264e8;
    func_0x000107c61148(lVar12);
  }
  lVar6 = lVar12;
  func_0x000107c3e9cc(lVar12);
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c4afec(puVar7);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126bb9c8;
  func_0x000107c61160(PTR_PTR_1126bb9c8);
  func_0x00010074c930();
  func_0x000107c61180();
  lVar11 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c460d8(puVar8,param_2,puVar3,puVar1,lVar5,lVar6,puVar9,puVar10,lVar11);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100ba2d68; end: 100ba2ddb; -[SCLensDataFetchRanker initWithRequestManager:] */

undefined1 * FUN_100ba2d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705a10;
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



/* Entry: 100ba2ddc; end: 100ba2e27; -[SCLensDataFetcherConfigProvider initWithCircumstanceEngine:] */

long FUN_100ba2ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100ba2e28; end: 100ba2e3b; -[SCLensDataFetcherConfigProvider lensContentTTLDate] */

void FUN_100ba2e28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf65610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4143c68000000000,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSinceNow__1125b6f28);
  return;
}



/* Entry: 100ba2e3c; end: 100ba2eaf; -[SCGrapheneLensContentDeliveryMetric2 init] */

undefined1 * FUN_100ba2e3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127064a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ba2eb0; end: 100ba30b7; -[SCLensBitmojiAssetDataContentManagerFetcher initWithContentManagerFetcher:fetchRanker:grapheneRegistry:bitmojiGLBFetcher:ttlDate:grapheneV2Logger:circumstanceEngine:] */

undefined1 *
FUN_100ba2eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1127058f0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = param_5;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4afc8();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba30b8; end: 100ba3107; -[SCAdPersistedDataProvider setAdvertiserId:] */

/* WARNING: Possible PIC construction at 0x000100ba30f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ba30f8) */

void FUN_100ba30b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c52570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ba3108; end: 100ba3303; -[SCGrapheneRegistry lensContentDeliveryGraphene] */

void FUN_100ba3108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100ba3190;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f4030 != -1) {
    FUN_10002a2fc(0x1137f4030,&puStack_48);
  }
  uVar1 = uRam00000001137f4028;
  func_0x000107c61174(uRam00000001137f4028);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100ba3304; end: 100ba3323; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint init] */

void FUN_100ba3304(void)

{
  func_0x000100ba3254();
  return;
}



/* Entry: 100ba3324; end: 100ba332f; -[SCLensDataFetcherConfigProvider .cxx_destruct] */

void FUN_100ba3324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100ba3330; end: 100ba334b;  */

void FUN_100ba3330(void)

{
  func_0x000107c61160(PTR_PTR_1126dda28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba334c; end: 100ba33f3; -[SCLegacyLensPreferences init] */

undefined1 * FUN_100ba334c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705ab8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    FUN_100088750();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    FUN_1000f746c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100ba33f4; end: 100ba349f; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint setValue:forIvarName:] */

void FUN_100ba33f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ba34a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ba34a0; end: 100ba3783;  */

void FUN_100ba34a0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0x656d61436e69616d;
    if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
       (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561a0();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0eed630)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010f1129d0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c565b8();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10c5e10)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001a,0x800000010ef3a1f0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "MemoriesPreviewSaveDismissImpl/SCMemoriesPreviewSaveDismissServicesCameraEntryPoint.swift"
                                    ,0x59,2,0x39,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba3784);
                (*pcVar1)();
              }
            }
            FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53414();
            goto LAB_100ba3530;
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56584();
      }
    }
  }
LAB_100ba3530:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ba3784; end: 100ba378f; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba3784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24860;
  func_0x000107c61428(param_1 + _DAT_112f24860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba3790; end: 100ba37e3;  */

void FUN_100ba3790(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba37e4; end: 100ba37ef; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba37e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24868;
  func_0x000107c61428(param_1 + _DAT_112f24868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba37f0; end: 100ba37fb; -[SCMemoriesPreviewSaveDismissServicesCameraEntryPoint setMemoriesSaveDismissServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba37f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f24870;
  func_0x000107c61428(param_1 + _DAT_112f24870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ba37fc; end: 100ba3bbb; -[SCLensDownloadOperationFactory initWithContentDataFetcher:bitmojiImageFetcher:lensBitmojiListManager:bitmojiAssetDataFetcher:externalLensDataFetcher:signatureValidator:lensPreferences:lensUserProvider:lensDownloadLogger:lensRemoteAssetLogger:lensResourceDownloadLogger:assetLensResourceResolver:lensIconRepository:contentManagerBlobDataFetcher:resourceResolver:lensDataConfigProvider:deviceDependentAssetAnalyticsReporter:] */

undefined8 *
FUN_100ba37fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
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
  puStack_70 = PTR_PTR_1127059a0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = puVar2[9];
    puVar2[9] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_8;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_9;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_10);
    uVar3 = puVar2[1];
    puVar2[1] = param_10;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_11);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_11;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_12);
    uVar3 = puVar2[2];
    puVar2[2] = param_12;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_13);
    uVar3 = puVar2[3];
    puVar2[3] = param_13;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_14);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_14;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_15);
    uVar3 = puVar2[4];
    puVar2[4] = param_15;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_16);
    uVar3 = puVar2[10];
    puVar2[10] = param_16;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_17);
    uVar3 = puVar2[5];
    puVar2[5] = param_17;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_18);
    uVar3 = puVar2[6];
    puVar2[6] = param_18;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_19);
    uVar3 = puVar2[7];
    puVar2[7] = param_19;
    func_0x000107c61170(uVar3);
    uVar1 = (undefined1)puVar2[6];
    func_0x000107c4afd0();
    *(undefined1 *)(puVar2 + 8) = uVar1;
  }
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
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100ba3bbc; end: 100ba3bd7; -[SCLensDataConfigProvider lensContentFallbackMigrationEnabled] */

bool FUN_100ba3bbc(long param_1)

{
  func_0x000107c4afd4();
  return param_1 != 0;
}


