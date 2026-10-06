/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c70d10; end: 102c70dc3;  */

/* WARNING: Possible PIC construction at 0x000102c70d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c70d68) */

void FUN_102c70d10(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x18) != 0) {
    func_0x0001042d3794(0);
    func_0x000107c30adc(param_2);
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c70dc4; end: 102c70e9b;  */

/* WARNING: Possible PIC construction at 0x000102c70e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c70e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c70e20) */

void FUN_102c70dc4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    param_1 = 2;
    FUN_102c78e9c(2,0,0);
    func_0x000107c5cd64(uVar1);
  }
  else {
    func_0x0001042d3794(0);
    func_0x000107c30adc(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c70e9c; end: 102c7100b;  */

code * FUN_102c70e9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  
  puVar4 = &UNK_1105b9d08;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1105b9d08,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1105b9d30;
  func_0x000107c613fc(&UNK_1105b9d30,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_1105b9d08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = &UNK_1105b9d58;
  func_0x000107c613fc(&UNK_1105b9d58,0x20,7);
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c613fc(&UNK_1105b9d08,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar3 = &UNK_1105b9d80;
  func_0x000107c613fc(&UNK_1105b9d80,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x0001041a64f4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar5 = FUN_102c7100c;
  func_0x0001041a6258(FUN_102c7100c,puVar2,0x102c71014,puVar1,FUN_102c71048,puVar3);
  func_0x0001041c57dc(0);
  pcVar6 = pcVar5;
  func_0x0001041c4ecc(pcVar5);
  func_0x000107c61170(pcVar5);
  return pcVar6;
}



/* Entry: 102c7100c; end: 102c7101b;  */

void FUN_102c7100c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x18);
    func_0x000107c615f0(lVar5);
    func_0x000107c61574(lVar2);
    if (lVar5 != 0) {
      lVar2 = lVar1;
      func_0x000107c30af8(lVar1);
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c30adc();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar4);
      }
      func_0x000107c30afc(lVar1);
      func_0x000107c4dc34(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102c7101c; end: 102c71047;  */

void FUN_102c7101c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c71048; end: 102c7104f;  */

void FUN_102c71048(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_102c70c18(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102c71050; end: 102c733c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c71050(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  code *pcVar22;
  code *pcVar23;
  long alStack_440 [2];
  char *pcStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long lStack_418;
  long lStack_410;
  code *pcStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long *plStack_390;
  long lStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 auStack_2e8 [3];
  long lStack_2d0;
  undefined **ppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long alStack_2b0 [3];
  long lStack_298;
  undefined **ppuStack_290;
  undefined1 auStack_288 [552];
  
  uStack_3c0 = param_14;
  uStack_3d8 = param_13;
  uStack_3e0 = param_15;
  lStack_328 = param_9;
  lStack_338 = param_10;
  lStack_330 = param_12;
  lStack_310 = param_11;
  lStack_3b8 = param_4;
  lStack_3b0 = param_5;
  lStack_3a8 = param_6;
  lStack_3a0 = param_3;
  lStack_340 = param_2;
  uStack_320 = param_7;
  lStack_300 = param_8;
  func_0x000107c613fc();
  uVar21 = *(undefined8 *)(param_4 + _DAT_113043d30);
  uVar13 = *(undefined8 *)(param_5 + _DAT_11306ce28);
  uVar17 = *(undefined8 *)(param_6 + _DAT_113010a90);
  uVar19 = *(undefined8 *)(param_3 + _DAT_113078b50);
  puVar1 = PTR_PTR_1126aeea8;
  uStack_3d0 = uVar21;
  lStack_398 = unaff_x20;
  uStack_358 = uVar19;
  uStack_308 = uVar17;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar21);
  func_0x000107c61174();
  func_0x000107c6157c(uVar17);
  func_0x000107c615f0(uVar19);
  func_0x000107c453e4();
  lVar2 = 0;
  func_0x000102c6a824();
  func_0x000107c613fc();
  *(undefined **)(lVar2 + 0x10) = puVar1;
  puVar1 = &UNK_1105b9db0;
  func_0x000107c613fc(&UNK_1105b9db0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar13;
  func_0x0001000285a8(0x112f05f90,&UNK_10db39f10);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar23 = FUN_102c733c4;
  uStack_3c8 = uVar13;
  func_0x0001000bdd8c(FUN_102c733c4,puVar1);
  lVar3 = 0;
  func_0x000102c6ed5c();
  func_0x000107c613fc();
  uVar20 = *(undefined8 *)(param_1 + _DAT_113068ff8);
  lStack_348 = _DAT_11304a478;
  uVar15 = *(undefined8 *)(param_8 + _DAT_11304a478);
  pcStack_3e8 = (char *)_DAT_113069010;
  uVar21 = *(undefined8 *)(param_1 + _DAT_113069010);
  *(code **)(lVar3 + 0x10) = pcVar23;
  *(long *)(lVar3 + 0x18) = lVar2;
  lStack_368 = _DAT_11308d048;
  uVar18 = *(undefined8 *)(param_11 + _DAT_11308d048);
  lVar4 = 0;
  lStack_350 = lVar2;
  func_0x000102c6f7cc();
  lStack_360 = lVar4;
  func_0x000107c613fc();
  uVar17 = uStack_308;
  *(undefined8 *)(lVar4 + 0x10) = uVar20;
  *(undefined8 *)(lVar4 + 0x18) = uStack_308;
  *(long *)(lVar4 + 0x20) = lVar3;
  *(undefined8 *)(lVar4 + 0x28) = uVar15;
  *(undefined8 *)(lVar4 + 0x30) = uVar21;
  *(undefined8 *)(lVar4 + 0x38) = uVar18;
  uVar13 = 0x112f06bf8;
  lStack_370 = lVar4;
  func_0x0001000285a8(0x112f06bf8,&UNK_10db3ac80);
  uVar19 = *(undefined8 *)(param_1 + _DAT_113068fe8);
  lStack_378 = uVar13;
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(lVar2);
  func_0x000107c615f0(uVar20);
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(uVar15);
  func_0x000107c61174(uVar21);
  func_0x000107c6157c(uVar18);
  func_0x000107c3d320();
  func_0x000107c61180();
  uVar13 = uVar19;
  func_0x0001000b637c();
  func_0x000107c61170(uVar19);
  lVar2 = 0x112f06c00;
  func_0x0001000285a8(0x112f06c00,&UNK_10db3a480);
  lStack_400 = lVar2;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 0x10;
  *(undefined8 *)(lVar2 + 0x10) = 8;
  puStack_3f0 = (undefined8 *)(lVar2 + 0x20);
  *puStack_3f0 = 2;
  lVar5 = 0;
  func_0x000102c6bbd4();
  lVar4 = lVar5;
  pcStack_408 = (code *)lVar5;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar3;
  *(long *)(lVar2 + 0x40) = lVar5;
  *(undefined ***)(lVar2 + 0x48) = &PTR_DAT_1105b97a0;
  *(long *)(lVar2 + 0x28) = lVar4;
  *(undefined8 *)(lVar2 + 0x50) = 1;
  uVar17 = *(undefined8 *)(lStack_310 + lStack_368);
  lVar5 = 0;
  func_0x000102c78b24();
  lVar4 = lVar5;
  lStack_410 = lVar5;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar3;
  *(long *)(lVar4 + 0x18) = lVar3;
  *(undefined8 *)(lVar4 + 0x20) = uVar17;
  *(long *)(lVar2 + 0x70) = lVar5;
  *(undefined ***)(lVar2 + 0x78) = &PTR_DAT_1105ba478;
  *(long *)(lVar2 + 0x58) = lVar4;
  *(undefined8 *)(lVar2 + 0x80) = 6;
  lVar4 = _DAT_113068ff0;
  uVar19 = *(undefined8 *)(param_1 + _DAT_113068ff0);
  lStack_378 = _DAT_113068ff0;
  lVar6 = 0;
  func_0x000102c78938();
  lVar5 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar19;
  *(long *)(lVar2 + 0xa0) = lVar6;
  *(undefined ***)(lVar2 + 0xa8) = &PTR_DAT_1105ba418;
  *(long *)(lVar2 + 0x88) = lVar5;
  *(undefined8 *)(lVar2 + 0xb0) = 5;
  lVar6 = 0;
  func_0x000102c6ba04();
  lVar5 = lVar6;
  func_0x000107c613fc();
  *(long *)(lVar5 + 0x10) = lVar3;
  *(long *)(lVar2 + 0xd0) = lVar6;
  *(undefined ***)(lVar2 + 0xd8) = &PTR_DAT_1105b96f0;
  *(long *)(lVar2 + 0xb8) = lVar5;
  *(undefined8 *)(lVar2 + 0xe0) = 4;
  lVar6 = 0;
  lStack_318 = lVar3;
  FUN_102c7957c();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar19);
  func_0x000107c61580(lVar3,4);
  func_0x000107c6157c(uVar17);
  func_0x000107c453e4();
  uVar19 = *(undefined8 *)(param_1 + lVar4);
  lStack_388 = param_1;
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  lVar5 = lStack_340;
  lVar4 = _DAT_113091b70;
  plVar16 = *(long **)(lStack_340 + _DAT_113091b70);
  func_0x000107c615f0(uVar19);
  uStack_380 = uVar13;
  func_0x000107c6157c(uVar13);
  func_0x000107c419f0();
  func_0x000107c61180();
  plVar11 = plVar16;
  func_0x0001000b637c();
  plStack_390 = plVar11;
  func_0x000107c61170(plVar16);
  plVar16 = *(long **)(lVar5 + lVar4);
  func_0x000107c41b80();
  func_0x000107c61180();
  plVar11 = plVar16;
  func_0x0001000b637c();
  plStack_420 = plVar11;
  func_0x000107c61170(plVar16);
  lStack_3f8 = _DAT_113068fd8;
  uVar17 = *(undefined8 *)(param_1 + _DAT_113068fd8);
  func_0x000107c615f0(uVar17);
  pcVar9 = 
  "init(callStatusObserver:adTrackerHelper:adLifecycleEventObservableV2:didBecomeActiveObservable:didEnterBackgroundObservable:adPlaybackUIProvider:mainQueuePerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar4 = 0;
  func_0x000102c6b6b8();
  lStack_418 = lVar4;
  func_0x000107c613fc();
  *(undefined1 *)(lVar4 + 0x38) = 0;
  func_0x0001000c6560(0);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + 0x50) = uVar13;
  *(long *)(lVar4 + 0x10) = lVar6;
  *(undefined ***)(lVar4 + 0x18) = &PTR_DAT_1105ba5b8;
  *(undefined8 *)(lVar4 + 0x20) = uVar19;
  *(undefined8 *)(lVar4 + 0x28) = uVar17;
  *(char **)(lVar4 + 0x30) = pcVar9;
  uVar13 = *(undefined8 *)(lVar6 + _DAT_112f06f90);
  puVar1 = &UNK_1105b9dd8;
  alStack_440[1] = uVar19;
  pcStack_430 = pcVar9;
  uStack_428 = uVar17;
  func_0x000107c613fc(&UNK_1105b9dd8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar4);
  func_0x000107c615f0(uVar19);
  func_0x000107c615f0(uVar17);
  func_0x000107c61174();
  alStack_440[0] = lVar6;
  func_0x000107c615f0(pcVar9);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(lVar4);
  pcVar23 = FUN_102c733f4;
  puVar8 = puVar1;
  func_0x0001000b6504(FUN_102c733f4);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(puVar1);
  func_0x000107c614f0(pcVar23);
  uVar13 = *(undefined8 *)(lVar4 + 0x50);
  pcVar22 = *(code **)(puVar8 + 0x10);
  func_0x000107c6157c(uVar13);
  (*pcVar22)();
  func_0x000107c615e8(pcVar23);
  func_0x000107c61574(uVar13);
  uVar17 = uStack_380;
  func_0x000107c6157c(uStack_380);
  pcVar23 = FUN_102c6b3f0;
  func_0x0001000c0ebc(FUN_102c6b3f0,0);
  uVar13 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  pcVar22 = FUN_102c6b420;
  func_0x0001000bfde0(FUN_102c6b420,0,uVar13);
  func_0x000107c61574();
  func_0x000100dd41f8();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar22);
  puVar1 = &UNK_1105b9dd8;
  func_0x000107c613fc(&UNK_1105b9dd8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar4);
  uVar13 = 0x102c733fc;
  puVar8 = puVar1;
  (**(code **)(*(long *)pcVar23 + 0x60))();
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(puVar1);
  func_0x000107c614f0(uVar13);
  uVar19 = *(undefined8 *)(lVar4 + 0x50);
  pcVar23 = *(code **)(puVar8 + 0x10);
  func_0x000107c6157c(uVar19);
  (*pcVar23)();
  func_0x000107c61574(uVar17);
  func_0x000107c615e8(uVar13);
  func_0x000107c61574(uVar19);
  puVar1 = &UNK_1105b9dd8;
  puVar8 = puVar1;
  func_0x000107c613fc(&UNK_1105b9dd8,0x18,7);
  func_0x000107c61644(puVar8 + 0x10,lVar4);
  uVar13 = 0x102c73404;
  puVar12 = puVar8;
  (**(code **)(*plStack_390 + 0x60))();
  func_0x000107c61574(puVar8);
  func_0x000107c614f0();
  uVar19 = *(undefined8 *)(lVar4 + 0x50);
  pcVar23 = *(code **)(puVar12 + 0x10);
  func_0x000107c6157c(uVar19);
  (*pcVar23)();
  func_0x000107c615e8(uVar13);
  func_0x000107c61574(uVar19);
  func_0x000107c613fc(&UNK_1105b9dd8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar4);
  func_0x000107c61574(lVar4);
  plVar11 = plStack_420;
  uVar13 = 0x102c7340c;
  puVar8 = puVar1;
  (**(code **)(*plStack_420 + 0x60))(0x102c7340c);
  func_0x000107c61574(puVar1);
  func_0x000107c614f0(uVar13);
  uVar19 = *(undefined8 *)(lVar4 + 0x50);
  pcVar23 = *(code **)(puVar8 + 0x10);
  func_0x000107c6157c(uVar19);
  (*pcVar23)();
  func_0x000107c61170(alStack_440[0]);
  func_0x000107c615e8(alStack_440[1]);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(plStack_390);
  func_0x000107c61574(plVar11);
  func_0x000107c615e8(uStack_428);
  func_0x000107c615e8(pcStack_430);
  func_0x000107c615e8(uVar13);
  func_0x000107c61574(uVar19);
  *(long *)(lVar2 + 0x100) = lStack_418;
  *(undefined ***)(lVar2 + 0x108) = &PTR_DAT_1105b9640;
  *(long *)(lVar2 + 0xe8) = lVar4;
  *(undefined8 *)(lVar2 + 0x110) = 3;
  lVar7 = lStack_400;
  func_0x000107c61534(lStack_400,auStack_288);
  pcVar23 = pcStack_408;
  *(undefined8 *)(lVar7 + 0x18) = 4;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(undefined8 *)(lVar7 + 0x20) = 2;
  pcVar22 = pcStack_408;
  func_0x000107c613fc(pcStack_408,0x18,7);
  lVar6 = lStack_310;
  lVar3 = lStack_318;
  lVar5 = lStack_368;
  lVar4 = lStack_410;
  *(long *)((long)pcVar22 + 0x10) = lStack_318;
  *(code **)(lVar7 + 0x40) = pcVar23;
  *(code **)(lVar7 + 0x28) = pcVar22;
  *(undefined ***)(lVar7 + 0x48) = &PTR_DAT_1105b97a0;
  *(undefined8 *)(lVar7 + 0x50) = 1;
  uVar13 = *(undefined8 *)(lStack_310 + lStack_368);
  lVar10 = lStack_410;
  func_0x000107c613fc(lStack_410,0x28,7);
  *(long *)(lVar10 + 0x10) = lVar3;
  *(long *)(lVar10 + 0x18) = lVar3;
  *(undefined8 *)(lVar10 + 0x20) = uVar13;
  *(long *)(lVar7 + 0x70) = lVar4;
  *(undefined ***)(lVar7 + 0x78) = &PTR_DAT_1105ba478;
  *(long *)(lVar7 + 0x58) = lVar10;
  func_0x000107c61580(lVar3,3);
  lVar4 = lStack_370;
  func_0x000107c6157c(lStack_370);
  func_0x000107c6157c(uVar13);
  lVar10 = lVar7;
  FUN_102c73684();
  lStack_410 = lVar10;
  func_0x000107c61588(lVar7);
  uVar13 = 0x112f06c08;
  func_0x0001000285a8(0x112f06c08,&UNK_10db3a488);
  lStack_418 = uVar13;
  func_0x000107c61408((undefined8 *)(lVar7 + 0x20),2,uVar13);
  uVar17 = *(undefined8 *)(lStack_388 + lStack_378);
  uVar21 = *(undefined8 *)(lStack_300 + lStack_348);
  uVar19 = *(undefined8 *)(lVar6 + lVar5);
  puVar1 = &UNK_1105b9e00;
  puVar8 = puVar1;
  uStack_428 = uVar21;
  plStack_420 = (long *)uVar17;
  lStack_368 = uVar19;
  func_0x000107c613fc(&UNK_1105b9e00,0x18,7);
  uVar13 = uStack_358;
  func_0x000107c61614(puVar8 + 0x10,uStack_358);
  func_0x000107c613fc(&UNK_1105b9e00,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar13);
  func_0x000107c615f0(uVar17);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar1);
  func_0x000107c61580(lVar3,3);
  uVar13 = uStack_308;
  func_0x000107c6157c(uStack_308);
  pcVar9 = 
  "init(externalPresenter:fallbackTypeToFallbackInteractionHandlers:webViewEventTracker:deepLinkEventTracker:lifecycleEventTracker:adCrashLogger:trackerHelper:adConfigProvider:webBrowsingConfigProvider:pauseForAttachmentAction:dismissOperaAction:mainQueuePerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar5 = lStack_360;
  lStack_298 = lStack_360;
  ppuStack_290 = &PTR_DAT_1105b9b80;
  alStack_2b0[0] = lVar4;
  lVar10 = 0;
  func_0x000102c6cab0();
  lVar6 = lVar10;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_2b0,lVar5);
  lStack_400 = *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plStack_390 = (long *)(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)alStack_440 - (long)plStack_390);
  pcStack_408 = *(code **)(extraout_x8 + 0x10);
  (*pcStack_408)(puVar14);
  lVar3 = lStack_318;
  uVar17 = *puVar14;
  *(long *)(lVar6 + 0x28) = lVar5;
  *(undefined8 *)(lVar6 + 0x10) = uVar17;
  *(undefined1 *)(lVar6 + 0xa8) = 0;
  *(undefined ***)(lVar6 + 0x30) = &PTR_DAT_1105b9b80;
  *(long *)(lVar6 + 0x38) = lStack_410;
  *(long *)(lVar6 + 0x40) = lStack_318;
  *(long *)(lVar6 + 0x48) = lStack_318;
  *(long *)(lVar6 + 0x50) = lStack_318;
  *(undefined8 *)(lVar6 + 0x58) = uVar13;
  *(long **)(lVar6 + 0x60) = plStack_420;
  *(undefined8 *)(lVar6 + 0x68) = uStack_428;
  *(long *)(lVar6 + 0x70) = lStack_368;
  *(code **)(lVar6 + 0x78) = FUN_102c737ac;
  *(undefined **)(lVar6 + 0x80) = puVar8;
  *(undefined8 *)(lVar6 + 0x88) = 0x102c737b4;
  *(undefined **)(lVar6 + 0x90) = puVar1;
  *(char **)(lVar6 + 0x98) = pcVar9;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  func_0x0001000834e4(alStack_2b0);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar1);
  lVar5 = lStack_378;
  lVar4 = lStack_388;
  *(long *)(lVar2 + 0x130) = lVar10;
  *(undefined ***)(lVar2 + 0x138) = &PTR_DAT_1105b99f8;
  *(long *)(lVar2 + 0x118) = lVar6;
  *(undefined8 *)(lVar2 + 0x140) = 7;
  uVar13 = *(undefined8 *)(lStack_388 + lStack_378);
  lVar10 = 0;
  FUN_102c781c0();
  lVar6 = lVar10;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f06e00) = uVar13;
  *(long *)(lVar6 + _DAT_112f06e08) = lStack_350;
  puVar1 = PTR_s_init_1125d9248;
  lStack_2c0 = lVar6;
  lStack_2b8 = lVar10;
  func_0x000107c6157c(lStack_350);
  func_0x000107c615f0(uVar13);
  plVar11 = &lStack_2c0;
  func_0x000107c61154(plVar11,puVar1);
  *(long *)(lVar2 + 0x160) = lVar10;
  *(undefined ***)(lVar2 + 0x168) = &PTR_DAT_1105ba318;
  *(long **)(lVar2 + 0x148) = plVar11;
  *(undefined8 *)(lVar2 + 0x170) = 8;
  uVar13 = *(undefined8 *)(lVar4 + lVar5);
  uVar17 = *(undefined8 *)(lStack_338 + _DAT_11308b850);
  lVar10 = 0;
  func_0x000102c708c8();
  lVar6 = lVar10;
  func_0x000107c613fc();
  *(long *)(lVar6 + 0x10) = lVar3;
  *(undefined8 *)(lVar6 + 0x18) = uVar13;
  *(long *)(lVar6 + 0x20) = lVar3;
  *(undefined8 *)(lVar6 + 0x28) = uVar17;
  *(long *)(lVar2 + 400) = lVar10;
  *(undefined ***)(lVar2 + 0x198) = &PTR_DAT_1105b9ca0;
  *(long *)(lVar2 + 0x178) = lVar6;
  func_0x000107c615f0(uVar13);
  func_0x000107c61174(uVar17);
  func_0x000107c61580(lVar3,2);
  lVar6 = lVar2;
  FUN_102c73684();
  lStack_410 = lVar6;
  func_0x000107c61588(lVar2);
  func_0x000107c61408(puStack_3f0,8,lStack_418);
  puVar1 = &UNK_1105b9e28;
  func_0x000107c613fc(&UNK_1105b9e28,0x28,7);
  uVar17 = uStack_3e0;
  *(long *)(puVar1 + 0x10) = lVar4;
  *(long *)(puVar1 + 0x18) = lVar3;
  *(undefined8 *)(puVar1 + 0x20) = uStack_3e0;
  func_0x0001000285a8(0x112f06c10,&UNK_10db3a490);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar3);
  lVar2 = lVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x102c737bc;
  lStack_368 = uVar17;
  func_0x0001000bdd8c(0x102c737bc,puVar1);
  uVar19 = *(undefined8 *)(lStack_300 + lStack_348);
  uVar17 = *(undefined8 *)(lStack_300 + _DAT_11304a480);
  uVar21 = *(undefined8 *)(lVar2 + _DAT_113068fd0);
  uVar18 = *(undefined8 *)(lVar4 + lStack_3f8);
  uVar20 = *(undefined8 *)(lStack_330 + _DAT_112f0dfa8);
  uVar15 = *(undefined8 *)(lVar4 + lVar5);
  lStack_418 = uVar19;
  lStack_3f8 = uVar20;
  puStack_3f0 = (undefined8 *)lVar2;
  uStack_3e0 = uVar13;
  lStack_348 = uVar15;
  func_0x0001000285a8(0x112d6e3a8,&UNK_10d930310);
  func_0x000107c615f0(uVar15);
  func_0x000107c6157c(uVar19);
  func_0x000107c61174();
  plStack_420 = (long *)uVar17;
  func_0x000107c615f0(uVar21);
  func_0x000107c615f0(uVar18);
  func_0x000107c6157c(uVar20);
  uVar13 = uStack_320;
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar17 = uVar13;
  func_0x0001000bda74();
  uStack_428 = uVar17;
  func_0x000107c61170(uVar13);
  lVar5 = lStack_318;
  uVar15 = *(undefined8 *)(lStack_328 + _DAT_112f089c0);
  uVar13 = *(undefined8 *)(lVar4 + (long)pcStack_3e8);
  lStack_378 = *(undefined8 *)(lVar2 + _DAT_113069008);
  func_0x000107c6157c(lStack_318);
  func_0x000107c61174();
  func_0x000107c6157c(uVar15);
  func_0x000107c61174();
  pcVar9 = 
  "init(adConfigProviderLegacy:adConfigProvider:adConfigProviderObjc:adCrashLogger:adDataSource:adPlaybackUIProvider:adLifecycleObservableV2:playbackEventStream:adTrackerHelper:applicationPreferences:attachmentHandlerScopeExposer:attachmentHandlerScopeBuilder:attachmentTypeToAttachmentHandlerMap:externalPresenter:lifecycleEventTracker:mainQueuePerformer:timeProvider:commercePdpAttachmentPresenter:arExperienceAdPlaybackDataProvider:adPlaybackConfig:broadcastViewLocation:)"
  ;
  lStack_388 = uVar13;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126aeea8;
  pcStack_3e8 = pcVar9;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = lStack_360;
  lStack_298 = lStack_360;
  ppuStack_290 = &PTR_DAT_1105b9b80;
  alStack_2b0[0] = lStack_370;
  lVar3 = 0;
  pcStack_430 = puVar1;
  FUN_102c747b0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_2b0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar14 - (long)plStack_390);
  (*pcStack_408)(puVar14);
  auStack_2e8[0] = *puVar14;
  lStack_2d0 = lVar2;
  ppuStack_2c8 = &PTR_DAT_1105b9b80;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06d70);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06d78);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06d80);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06d88);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06d90);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06d98);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06da0);
  *puVar14 = 0;
  puVar14[1] = 0;
  lVar2 = _DAT_112f06da8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102c73874(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e02f90,&UNK_10d9d5580);
  *(undefined **)(lVar4 + lVar2) = puVar1;
  puVar14 = (undefined8 *)(lVar4 + _DAT_112f06db0);
  *puVar14 = 0;
  puVar14[1] = 0;
  lVar2 = _DAT_112f06db8;
  uVar19 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  uVar17 = uStack_380;
  uVar13 = uStack_3d8;
  *(undefined8 *)(lVar4 + lVar2) = uVar19;
  *(undefined8 *)(lVar4 + _DAT_112f06cc8) = uStack_3d0;
  *(long *)(lVar4 + _DAT_112f06cd0) = lStack_418;
  *(long **)(lVar4 + _DAT_112f06cd8) = plStack_420;
  *(undefined8 *)(lVar4 + _DAT_112f06ce0) = uStack_308;
  *(undefined8 *)(lVar4 + _DAT_112f06ce8) = uVar21;
  *(undefined8 *)(lVar4 + _DAT_112f06cf0) = uVar18;
  *(undefined8 *)(lVar4 + _DAT_112f06cf8) = uStack_380;
  *(long *)(lVar4 + _DAT_112f06d00) = lStack_3f8;
  *(long *)(lVar4 + _DAT_112f06d08) = lStack_348;
  *(undefined8 *)(lVar4 + _DAT_112f06d10) = uStack_428;
  *(undefined8 *)(lVar4 + _DAT_112f06d18) = uStack_3c0;
  *(undefined8 *)(lVar4 + _DAT_112f06d20) = uStack_3d8;
  *(long *)(lVar4 + _DAT_112f06d28) = lStack_410;
  FUN_102c737c8(auStack_2e8,lVar4 + _DAT_112f06d30);
  *(long *)(lVar4 + _DAT_112f06d38) = lVar5;
  *(char **)(lVar4 + _DAT_112f06d40) = pcStack_3e8;
  *(char **)(lVar4 + _DAT_112f06d48) = pcStack_430;
  *(undefined8 *)(lVar4 + _DAT_112f06d50) = uStack_3e0;
  *(long *)(lVar4 + _DAT_112f06d60) = lStack_388;
  *(undefined8 *)(lVar4 + _DAT_112f06d58) = uVar15;
  *(long *)(lVar4 + _DAT_112f06d68) = lStack_378;
  plVar11 = &lStack_2f8;
  lStack_2f8 = lVar4;
  lStack_2f0 = lVar3;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_2e8);
  func_0x0001000834e4(alStack_2b0);
  func_0x000107c61170(lStack_340);
  func_0x000107c61170(lStack_338);
  func_0x000107c61170(lStack_300);
  func_0x000107c61170(puStack_3f0);
  func_0x000107c61170(lStack_330);
  func_0x000107c61170(lStack_328);
  func_0x000107c61170(uStack_320);
  func_0x000107c61170(uStack_3c8);
  func_0x000107c61574(lStack_350);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(uVar17);
  func_0x000107c615e8(uStack_358);
  func_0x000107c61170(lStack_368);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lStack_3b8);
  func_0x000107c61170(lStack_3b0);
  func_0x000107c61170(lStack_3a8);
  func_0x000107c61170(lStack_3a0);
  func_0x000107c61170(lStack_310);
  *(long **)(lStack_398 + 0x10) = plVar11;
  return;
}



/* Entry: 102c733c4; end: 102c733f3;  */

void FUN_102c733c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c733f4; end: 102c73413;  */

void FUN_102c733f4(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    pcVar4 = *(code **)(lVar2 + 0x40);
    if (pcVar4 == (code *)0x0) {
      func_0x000107c61574();
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
      func_0x000102c6b9d0(pcVar4,uVar3);
      func_0x000107c61574(lVar2);
      (*pcVar4)(uVar1);
      func_0x000102c6b9b8(pcVar4,uVar3);
    }
  }
  return;
}



/* Entry: 102c73414; end: 102c73497;  */

void FUN_102c73414(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c5df08();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    if (lVar1 != 0) {
      func_0x000107c57278(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102c73498; end: 102c7350b;  */

void FUN_102c73498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5dec4();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    if (lVar1 != 0) {
      func_0x000107c42008(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102c7350c; end: 102c735cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7350c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar6 = *(undefined8 *)(param_2 + _DAT_113068fd8);
  lVar3 = 0;
  FUN_102c6c048();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f067d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112f067c0) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f067c8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112f067d0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  *param_1 = plVar5;
  return;
}



/* Entry: 102c735d0; end: 102c73613;  */

void FUN_102c735d0(void)

{
  FUN_102c73e54();
  return;
}



/* Entry: 102c73614; end: 102c73637;  */

void FUN_102c73614(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c73638; end: 102c73683;  */

void FUN_102c73638(void)

{
  FUN_102c73e54();
  return;
}



/* Entry: 102c73684; end: 102c737ab;  */

undefined * FUN_102c73684(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f06cb8,&UNK_10db3a500);
    puVar3 = puVar6;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      uVar5 = 0;
      FUN_102c73a80(param_1,&uStack_90,0x112f06c08,&UNK_10db3a488);
      uVar1 = uStack_90;
      uVar4 = uStack_90;
      func_0x000101c785a8();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c737a8);
        (*pcVar2)();
      }
      uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_102c6ea90(auStack_88,*(long *)(puVar3 + 0x38) + uVar4 * 0x28);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c737ac);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar6 = puVar6 + -1;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 102c737ac; end: 102c737c7;  */

void FUN_102c737ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5df08();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c57278(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102c737c8; end: 102c7380b;  */

long FUN_102c737c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c7380c; end: 102c7385f;  */

void FUN_102c7380c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c73860; end: 102c73873;  */

undefined * FUN_102c73860(long param_1)

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
    func_0x0001000285a8(0x112f05f00,&UNK_10db3a4f0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c73968);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c7396c);
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



/* Entry: 102c73874; end: 102c73a7f;  */

undefined * FUN_102c73874(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c73968);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c7396c);
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



/* Entry: 102c73a80; end: 102c73ac7;  */

undefined8 FUN_102c73a80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102c73ac8; end: 102c73b83;  */

void FUN_102c73ac8(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    pcVar4 = *(code **)(lVar2 + 0x40);
    if (pcVar4 == (code *)0x0) {
      func_0x000107c61574();
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
      func_0x000102c6b9d0(pcVar4,uVar3);
      func_0x000107c61574(lVar2);
      (*pcVar4)(uVar1);
      func_0x000102c6b9b8(pcVar4,uVar3);
    }
  }
  return;
}



/* Entry: 102c73b84; end: 102c73c2f;  */

void FUN_102c73b84(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c73c30; end: 102c73e13;  */

void FUN_102c73c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102c73e14; end: 102c73e53;  */

void FUN_102c73e14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f06cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3a590;
  func_0x000107c61520(&UNK_10db3a590,&UNK_1105b9f30);
  puRam0000000112f06cc0 = puVar1;
  return;
}



/* Entry: 102c73e54; end: 102c7409b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c73e54(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112f06cf8);
  if (lVar8 != 0) {
    plVar9 = *(long **)(unaff_x20 + _DAT_112f06d40);
    func_0x000107c6157c(lVar8);
    plVar1 = plVar9;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar9);
    puVar2 = &UNK_1105b9fb0;
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar3 = 0x102c76898;
    puVar7 = puVar2;
    (**(code **)(*plVar1 + 0x60))(0x102c76898);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    uVar4 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f06db8),uVar4,puVar7);
    func_0x000107c61574(lVar8);
    func_0x000107c615e8(uVar3);
  }
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  uVar3 = 0x112f06de8;
  func_0x0001000285a8(0x112f06de8,&UNK_10db3a620);
  pcVar5 = FUN_102c743c0;
  func_0x0001000d5158(FUN_102c743c0,0,uVar3);
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(auStack_78);
  pcVar6 = FUN_102c7441c;
  func_0x0001000bfde0(FUN_102c7441c,0,&UNK_1105c3720);
  func_0x000107c61574(pcVar5);
  plVar1 = (long *)0x102c74420;
  func_0x0001000c0ebc(0x102c74420,0);
  func_0x000107c61574(pcVar6);
  puVar2 = &UNK_1105b9fb0;
  func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar5 = FUN_102c76890;
  puVar7 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c76890);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f06db8),pcVar6,puVar7);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 102c7409c; end: 102c7416b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7409c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar3 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uVar2 = 0;
  func_0x00010403c628(0xd000000000000032,0x800000010f1044c0,uVar3,uStack_38);
  func_0x000107c615e8(uStack_40);
  if ((uVar2 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f06db0);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c6142c(uVar3);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06d18);
  lVar4 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 102c7416c; end: 102c741c7;  */

void FUN_102c7416c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c741c8(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c741c8; end: 102c743bf;  */

/* WARNING: Possible PIC construction at 0x000102c74230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7425c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c7437c) */
/* WARNING: Removing unreachable block (ram,0x000102c74260) */
/* WARNING: Removing unreachable block (ram,0x000102c74234) */
/* WARNING: Removing unreachable block (ram,0x000102c74238) */
/* WARNING: Removing unreachable block (ram,0x000102c743a4) */
/* WARNING: Removing unreachable block (ram,0x000102c743a8) */
/* WARNING: Removing unreachable block (ram,0x000102c74244) */
/* WARNING: Removing unreachable block (ram,0x000102c7438c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c741c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_11308c0c0);
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000d224c(&uStack_48);
    FUN_102c780bc(0,0x112dcf430,&PTR_PTR_1126b3e90);
    lVar1 = 0x1a;
    func_0x000103dec308(0x1a);
    func_0x000107c602fc(0x46);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c614f0();
    uVar2 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    func_0x000107c5fb78(0xd000000000000043,0x800000010f104500);
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fadc(0xd000000000000033,0x800000010f104550);
    func_0x000107c3e1fc(uStack_48);
    func_0x000107c615e8(uStack_48);
  }
  else {
    func_0x000107c3d368(*(undefined8 *)(unaff_x20 + _DAT_112f06ce8));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102c743c0; end: 102c7441b;  */

void FUN_102c743c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  FUN_102d2468c(param_1,&UNK_1105c3720,uVar1,&UNK_1105c3720,uVar2,&PTR_DAT_1105c32d0,param_2);
  return;
}



/* Entry: 102c7441c; end: 102c74427;  */

void FUN_102c7441c(void)

{
  return;
}



/* Entry: 102c74428; end: 102c74537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c74428(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f06d18;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + _DAT_112f06d18);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      pcVar6 = *(code **)(param_2 + _DAT_112f06d90);
      if (pcVar6 != (code *)0x0) {
        uVar5 = ((undefined8 *)(param_2 + _DAT_112f06d90))[1];
        func_0x000107c6157c(uVar5);
        (*pcVar6)(lVar3);
        func_0x000100d21108(pcVar6,uVar5);
      }
      uVar4 = *(undefined8 *)(param_2 + lVar2);
      func_0x000107c61174(uVar4);
      uVar5 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(lVar3);
      puVar1 = (undefined8 *)(param_2 + _DAT_112f06db0);
      uVar5 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar5);
    }
  }
  return;
}



/* Entry: 102c74538; end: 102c74597; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow init] */

void FUN_102c74538(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdAttachmentInteractionWorkflow",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c74564);
  (*pcVar1)();
}



/* Entry: 102c74598; end: 102c747af; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c745b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c745e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c746c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c74648) */
/* WARNING: Removing unreachable block (ram,0x000102c74618) */
/* WARNING: Removing unreachable block (ram,0x000102c745e8) */
/* WARNING: Removing unreachable block (ram,0x000102c745b8) */
/* WARNING: Removing unreachable block (ram,0x000102c746c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c74598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f06cc8));
  return;
}



/* Entry: 102c747b0; end: 102c747cf;  */

void FUN_102c747b0(void)

{
  func_0x000107c61168(&PTR_PTR_11289a818);
  return;
}



/* Entry: 102c747d0; end: 102c74dcb;  */

/* WARNING: Possible PIC construction at 0x000102c76bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7744c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7746c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c775e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7793c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c776d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c771d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c772f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7732c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c770ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c749b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c74b28) */
/* WARNING: Removing unreachable block (ram,0x000102c749bc) */
/* WARNING: Removing unreachable block (ram,0x000102c74b30) */
/* WARNING: Removing unreachable block (ram,0x000102c74b00) */
/* WARNING: Removing unreachable block (ram,0x000102c74b8c) */
/* WARNING: Removing unreachable block (ram,0x000102c74aec) */
/* WARNING: Removing unreachable block (ram,0x000102c74b54) */
/* WARNING: Removing unreachable block (ram,0x000102c74af0) */
/* WARNING: Removing unreachable block (ram,0x000102c74abc) */
/* WARNING: Removing unreachable block (ram,0x000102c74ac0) */
/* WARNING: Removing unreachable block (ram,0x000102c74ac4) */
/* WARNING: Removing unreachable block (ram,0x000102c74af8) */
/* WARNING: Removing unreachable block (ram,0x000102c74ac8) */
/* WARNING: Removing unreachable block (ram,0x000102c74908) */
/* WARNING: Removing unreachable block (ram,0x000102c76d44) */
/* WARNING: Removing unreachable block (ram,0x000102c76d10) */
/* WARNING: Removing unreachable block (ram,0x000102c770f0) */
/* WARNING: Removing unreachable block (ram,0x000102c77330) */
/* WARNING: Removing unreachable block (ram,0x000102c773b8) */
/* WARNING: Removing unreachable block (ram,0x000102c772f4) */
/* WARNING: Removing unreachable block (ram,0x000102c77218) */
/* WARNING: Removing unreachable block (ram,0x000102c76d54) */
/* WARNING: Removing unreachable block (ram,0x000102c771dc) */
/* WARNING: Removing unreachable block (ram,0x000102c77138) */
/* WARNING: Removing unreachable block (ram,0x000102c77768) */
/* WARNING: Removing unreachable block (ram,0x000102c77750) */
/* WARNING: Removing unreachable block (ram,0x000102c7770c) */
/* WARNING: Removing unreachable block (ram,0x000102c776dc) */
/* WARNING: Removing unreachable block (ram,0x000102c77b18) */
/* WARNING: Removing unreachable block (ram,0x000102c77adc) */
/* WARNING: Removing unreachable block (ram,0x000102c77aac) */
/* WARNING: Removing unreachable block (ram,0x000102c7797c) */
/* WARNING: Removing unreachable block (ram,0x000102c77bb8) */
/* WARNING: Removing unreachable block (ram,0x000102c77940) */
/* WARNING: Removing unreachable block (ram,0x000102c775e8) */
/* WARNING: Removing unreachable block (ram,0x000102c77660) */
/* WARNING: Removing unreachable block (ram,0x000102c775f0) */
/* WARNING: Removing unreachable block (ram,0x000102c777d0) */
/* WARNING: Removing unreachable block (ram,0x000102c77644) */
/* WARNING: Removing unreachable block (ram,0x000102c777dc) */
/* WARNING: Removing unreachable block (ram,0x000102c77650) */
/* WARNING: Removing unreachable block (ram,0x000102c777e4) */
/* WARNING: Removing unreachable block (ram,0x000102c77818) */
/* WARNING: Removing unreachable block (ram,0x000102c7781c) */
/* WARNING: Removing unreachable block (ram,0x000102c77bc8) */
/* WARNING: Removing unreachable block (ram,0x000102c77c40) */
/* WARNING: Removing unreachable block (ram,0x000102c77c34) */
/* WARNING: Removing unreachable block (ram,0x000102c77c44) */
/* WARNING: Removing unreachable block (ram,0x000102c77850) */
/* WARNING: Removing unreachable block (ram,0x000102c77860) */
/* WARNING: Removing unreachable block (ram,0x000102c778a0) */
/* WARNING: Removing unreachable block (ram,0x000102c77a48) */
/* WARNING: Removing unreachable block (ram,0x000102c778a8) */
/* WARNING: Removing unreachable block (ram,0x000102c77470) */
/* WARNING: Removing unreachable block (ram,0x000102c774bc) */
/* WARNING: Removing unreachable block (ram,0x000102c77500) */
/* WARNING: Removing unreachable block (ram,0x000102c774ec) */
/* WARNING: Removing unreachable block (ram,0x000102c77508) */
/* WARNING: Removing unreachable block (ram,0x000102c77578) */
/* WARNING: Removing unreachable block (ram,0x000102c775c0) */
/* WARNING: Removing unreachable block (ram,0x000102c77598) */
/* WARNING: Removing unreachable block (ram,0x000102c775c8) */
/* WARNING: Removing unreachable block (ram,0x000102c77538) */
/* WARNING: Removing unreachable block (ram,0x000102c7756c) */
/* WARNING: Removing unreachable block (ram,0x000102c774ac) */
/* WARNING: Removing unreachable block (ram,0x000102c774b0) */
/* WARNING: Removing unreachable block (ram,0x000102c76d9c) */
/* WARNING: Removing unreachable block (ram,0x000102c7709c) */
/* WARNING: Removing unreachable block (ram,0x000102c76da0) */
/* WARNING: Removing unreachable block (ram,0x000102c76db8) */
/* WARNING: Removing unreachable block (ram,0x000102c76f44) */
/* WARNING: Removing unreachable block (ram,0x000102c76f54) */
/* WARNING: Removing unreachable block (ram,0x000102c76f5c) */
/* WARNING: Removing unreachable block (ram,0x000102c76fd0) */
/* WARNING: Removing unreachable block (ram,0x000102c77050) */
/* WARNING: Removing unreachable block (ram,0x000102c77048) */
/* WARNING: Removing unreachable block (ram,0x000102c77080) */
/* WARNING: Removing unreachable block (ram,0x000102c770a0) */
/* WARNING: Removing unreachable block (ram,0x000102c770b8) */
/* WARNING: Removing unreachable block (ram,0x000102c770e4) */
/* WARNING: Removing unreachable block (ram,0x000102c770d4) */
/* WARNING: Removing unreachable block (ram,0x000102c770f8) */
/* WARNING: Removing unreachable block (ram,0x000102c7710c) */
/* WARNING: Removing unreachable block (ram,0x000102c77114) */
/* WARNING: Removing unreachable block (ram,0x000102c7722c) */
/* WARNING: Removing unreachable block (ram,0x000102c7724c) */
/* WARNING: Removing unreachable block (ram,0x000102c77130) */
/* WARNING: Removing unreachable block (ram,0x000102c770e0) */
/* WARNING: Removing unreachable block (ram,0x000102c773d0) */
/* WARNING: Removing unreachable block (ram,0x000102c773e8) */
/* WARNING: Removing unreachable block (ram,0x000102c7743c) */
/* WARNING: Removing unreachable block (ram,0x000102c77450) */
/* WARNING: Removing unreachable block (ram,0x000102c77458) */
/* WARNING: Removing unreachable block (ram,0x000102c77410) */
/* WARNING: Removing unreachable block (ram,0x000102c77444) */
/* WARNING: Removing unreachable block (ram,0x000102c77428) */
/* WARNING: Removing unreachable block (ram,0x000102c77448) */
/* WARNING: Removing unreachable block (ram,0x000102c76f84) */
/* WARNING: Removing unreachable block (ram,0x000102c76fb4) */
/* WARNING: Removing unreachable block (ram,0x000102c76f98) */
/* WARNING: Removing unreachable block (ram,0x000102c76fbc) */
/* WARNING: Removing unreachable block (ram,0x000102c76e00) */
/* WARNING: Removing unreachable block (ram,0x000102c76c4c) */
/* WARNING: Removing unreachable block (ram,0x000102c76c64) */
/* WARNING: Removing unreachable block (ram,0x000102c76bf4) */
/* WARNING: Removing unreachable block (ram,0x000102c76e04) */
/* WARNING: Removing unreachable block (ram,0x000102c77e70) */
/* WARNING: Removing unreachable block (ram,0x000102c77eb4) */
/* WARNING: Removing unreachable block (ram,0x000102c77e80) */
/* WARNING: Removing unreachable block (ram,0x000102c77eb8) */
/* WARNING: Removing unreachable block (ram,0x000102c77e98) */
/* WARNING: Removing unreachable block (ram,0x000102c77ebc) */
/* WARNING: Removing unreachable block (ram,0x000102c77ea4) */
/* WARNING: Removing unreachable block (ram,0x000102c76e1c) */
/* WARNING: Removing unreachable block (ram,0x000102c76e20) */
/* WARNING: Removing unreachable block (ram,0x000102c74a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c747d0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [8];
  undefined8 auStack_a0 [4];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar8 = *(long *)(param_1 + _DAT_11308c0c0);
  uVar9 = *(ulong *)(param_1 + _DAT_11308c0c8);
  uVar7 = uVar9;
  uVar10 = param_2;
  func_0x000107c30b1c();
  if ((int)uVar7 != 3) {
    uVar7 = uVar9;
    func_0x000107c30b1c();
    if ((int)uVar7 == 1) {
      func_0x000107c30ae8();
      func_0x000107c61180();
      if (lVar8 != 0) {
        uVar7 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(lVar8);
        lVar8 = _DAT_112f06da8;
        func_0x000107c61428(unaff_x20 + _DAT_112f06da8,auStack_78,0,0);
        uVar10 = *(ulong *)(unaff_x20 + lVar8);
        bVar2 = *(byte *)(uVar10 + 0x20);
        func_0x000107c61434(uVar10);
        lVar8 = uVar10 + 0x40;
        func_0x000107c60268(lVar8,~(-1L << ((ulong)bVar2 & 0x3f)));
        if (lVar8 != 1L << ((ulong)*(byte *)(uVar10 + 0x20) & 0x3f)) {
          uVar7 = (ulong)*(uint *)(uVar10 + 0x24);
          FUN_102c77e74();
          func_0x000107c61434(uVar7);
          uVar7 = uVar10;
        }
        goto code_r0x000107c6142c;
      }
    }
    else {
      uVar7 = uVar9;
      func_0x000107c30b1c();
      if ((int)uVar7 == 0xe) {
        func_0x000107c30ae8();
        func_0x000107c61180();
        if (lVar8 != 0) {
          lVar6 = lVar8;
          uVar7 = uVar10;
          func_0x000107c5faec();
          func_0x000107c61170(lVar8);
          func_0x000107c30b40();
          func_0x000107c61180();
          lVar8 = _DAT_112f06da8;
          func_0x000107c61428(unaff_x20 + _DAT_112f06da8,auStack_78,0x21,0);
          if (uVar9 == 0) {
            func_0x000101e05980(lVar6,uVar7);
          }
          else {
            uVar4 = *(undefined8 *)(unaff_x20 + lVar8);
            func_0x000107c61558(uVar4);
            auStack_a0[0] = *(undefined8 *)(unaff_x20 + lVar8);
            *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
            func_0x000101ceaca8(uVar9,lVar6,uVar7,uVar4);
          }
          goto code_r0x000107c6142c;
        }
      }
      else {
        uVar7 = uVar9;
        func_0x000107c30b1c();
        if (((int)uVar7 == 9) && (func_0x000107c30b28(), (int)uVar9 != 0)) {
          uVar7 = *(ulong *)(unaff_x20 + _DAT_112f06d28);
          FUN_102c70510();
          if (*(long *)(uVar7 + 0x10) != 0) {
            func_0x000107c61434(uVar7);
            func_0x000101c785a8(uVar9);
            if ((uVar10 & 1) != 0) {
              FUN_102c77ec0(*(long *)(uVar7 + 0x38) + uVar9 * 0x28,auStack_a0);
              goto code_r0x000107c6142c;
            }
            func_0x000107c6142c(uVar7);
          }
        }
      }
    }
    return;
  }
  uVar7 = uVar9;
  func_0x000107c30b38();
  func_0x000107c30b2c(uVar9);
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = lVar8;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x0001000d224c(auStack_a8);
    func_0x000107c30ae4(lVar8);
    func_0x000107c61180();
    FUN_102c780bc(0,0x112dcf430,&PTR_PTR_1126b3e90);
    func_0x000103dec308(0x1b);
    uStack_100 = 0;
    uStack_f8 = 0xe000000000000000;
    func_0x000107c602fc(0x4e);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c614f0(unaff_x20);
    uVar7 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
  }
  else {
    func_0x000107c5faec();
    uVar10 = uVar7;
    func_0x000107c61170(lVar6);
    lVar6 = lVar8;
    func_0x000107c30b14();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar6 = lVar8;
      func_0x000107c30b14();
      func_0x000107c61180();
      if (lVar6 == 0) {
        func_0x0001000d224c(&uStack_100);
        uVar3 = uStack_f8;
        uVar4 = uStack_100;
        uVar5 = uStack_100;
        func_0x000107c614f0(uStack_100);
        uVar10 = 0;
        func_0x00010403c628(0xd000000000000032,0x800000010f1044c0,uVar5,uVar3);
        func_0x000107c615e8(uVar4);
        if ((uVar10 & 1) != 0) {
          lVar6 = *(long *)(unaff_x20 + _DAT_112f06d18);
          func_0x000107c5194c();
          func_0x000107c61180();
          if ((lVar6 != 0) &&
             (func_0x000107c61170(), *(long *)(unaff_x20 + _DAT_112f06db0 + 8) == 0))
          goto code_r0x000107c6142c;
        }
        func_0x000107c30ae8(lVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c30afc(lVar8);
        func_0x0001042d3794(0);
        puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_113068f40) + _DAT_11308f130);
        uVar4 = *puVar1;
        uVar7 = puVar1[1];
        func_0x000107c61434(uVar7);
        func_0x0001042d0624(uVar4,uVar7,lVar8);
      }
      else {
        lVar8 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        if ((lVar8 != -0x2fffffffffffffdf) || (uVar10 != 0x800000010efbc4a0)) {
          func_0x000107c605b8(lVar8,uVar10,0xd000000000000021,0x800000010efbc4a0,0);
          uVar7 = uVar10;
        }
      }
    }
    else {
      lVar8 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      if ((lVar8 != -0x2fffffffffffffe0) || (uVar10 != 0x800000010f103ae0)) {
        func_0x000107c605b8(lVar8,uVar10,0xd000000000000020,0x800000010f103ae0,0);
        uVar7 = uVar10;
      }
    }
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 102c74dcc; end: 102c74e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c74dcc(ulong param_1,char param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == '\x01' || (param_1 & 0xfffffffe) != 0x10) {
    uVar2 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_30);
    uVar1 = uStack_30;
    func_0x000107c614f0(uStack_30);
    uVar2 = 0x33;
    func_0x00010403c628(0xd000000000000033,0x800000010f104030,uVar1,uStack_28);
    func_0x000107c615e8(uStack_30);
  }
  return uVar2 & 1;
}



/* Entry: 102c74e5c; end: 102c75263;  */

/* WARNING: Possible PIC construction at 0x000102c74f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c75224) */
/* WARNING: Removing unreachable block (ram,0x000102c75034) */
/* WARNING: Removing unreachable block (ram,0x000102c750e4) */
/* WARNING: Removing unreachable block (ram,0x000102c75070) */
/* WARNING: Removing unreachable block (ram,0x000102c750fc) */
/* WARNING: Removing unreachable block (ram,0x000102c74fec) */
/* WARNING: Removing unreachable block (ram,0x000102c74fdc) */
/* WARNING: Removing unreachable block (ram,0x000102c74fc4) */
/* WARNING: Removing unreachable block (ram,0x000102c74f1c) */
/* WARNING: Removing unreachable block (ram,0x000102c75234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c74e5c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f06d38);
    FUN_102c78680(0,0,1);
    func_0x000107c5cdc0(uVar3);
  }
  else {
    func_0x000107c61174();
    FUN_102c6b278();
    puVar1 = &UNK_1105ba0c8;
    func_0x000107c613fc(&UNK_1105ba0c8,0x18,7);
    func_0x000102c79dc0();
    *(long *)(puVar1 + 0x10) = param_1;
    lVar2 = param_1;
    func_0x000104191a9c();
    if ((int)lVar2 == 8) {
      func_0x000107c61174(param_1);
      func_0x000102c7a448(0xd000000000000013,0x800000010efbcc50);
    }
    else {
      func_0x000107c30af8(param_1);
      func_0x000107c61180();
      func_0x000107c61174(param_1);
      puVar1 = PTR_PTR_1126b8fa8;
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      param_1 = -0x2fffffffffffffee;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
      func_0x000107c30b18(puVar1,param_1,4,0xffffffffffffffff,0xffffffffffffffff,0,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c75264; end: 102c75443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c75264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_58;
  
  if (param_1 != 0) {
    func_0x000107c614b0();
    func_0x0001000d224c(&uStack_58);
    func_0x000107c30ae4(param_2);
    func_0x000107c61180();
    FUN_102c780bc(0,0x112dcf430,&PTR_PTR_1126b3e90);
    uVar1 = 0x21;
    func_0x000103dec308(0x21);
    func_0x000107c602fc(0x48);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c614f0();
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0xd000000000000045,0x800000010f104850);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    uVar2 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f1048a0);
    func_0x000107c3e1fc(uStack_58);
    func_0x000107c615e8(uStack_58);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f06d38);
    func_0x000107c614b0(param_1);
    lVar3 = param_1;
    FUN_102c78680(param_1,0,1);
    func_0x000107c5cdc0(uVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c614ac(param_1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 102c75444; end: 102c75607;  */

/* WARNING: Possible PIC construction at 0x000102c754d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7551c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c75548) */
/* WARNING: Removing unreachable block (ram,0x000102c7554c) */
/* WARNING: Removing unreachable block (ram,0x000102c75534) */
/* WARNING: Removing unreachable block (ram,0x000102c755f4) */
/* WARNING: Removing unreachable block (ram,0x000102c75538) */
/* WARNING: Removing unreachable block (ram,0x000102c75520) */
/* WARNING: Removing unreachable block (ram,0x000102c75524) */
/* WARNING: Removing unreachable block (ram,0x000102c754d4) */
/* WARNING: Removing unreachable block (ram,0x000102c754e0) */
/* WARNING: Removing unreachable block (ram,0x000102c754f8) */
/* WARNING: Removing unreachable block (ram,0x000102c755cc) */
/* WARNING: Removing unreachable block (ram,0x000102c755d4) */
/* WARNING: Removing unreachable block (ram,0x000102c75504) */
/* WARNING: Removing unreachable block (ram,0x000102c7556c) */
/* WARNING: Removing unreachable block (ram,0x000102c75550) */
/* WARNING: Removing unreachable block (ram,0x000102c75574) */
/* WARNING: Removing unreachable block (ram,0x000102c755b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c75444(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 uStack_31;
  
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 8))
            (&uStack_31,&UNK_1105ba300,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c5d17c(*(undefined8 *)(unaff_x20 + _DAT_112f06cf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102c75608; end: 102c75c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c75608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char acStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar12 = *(undefined8 *)(param_1 + _DAT_112f06d20);
    uVar2 = uVar12;
    func_0x000107c614f0(uVar12);
    func_0x000107c615f0(uVar12);
    lVar3 = param_1;
    func_0x000107c61174();
    uVar4 = param_2;
    func_0x00010418bbbc(param_2,param_3,param_4,param_1,(param_5 ^ 0xffffffff) & 1,uVar2);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(lVar3);
    puVar7 = &UNK_1105b9fb0;
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1105ba140;
    func_0x000107c613fc(&UNK_1105ba140,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(long *)(puVar6 + 0x20) = param_6;
    puVar11 = (undefined8 *)(lVar3 + _DAT_112f06d70);
    uVar2 = *puVar11;
    uVar12 = puVar11[1];
    *puVar11 = FUN_102c77fe8;
    puVar11[1] = puVar6;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(param_6);
    func_0x000100d21108(uVar2,uVar12);
    func_0x000107c61574(puVar5);
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1105ba168;
    func_0x000107c613fc(&UNK_1105ba168,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(long *)(puVar6 + 0x20) = param_6;
    puVar11 = (undefined8 *)(lVar3 + _DAT_112f06d78);
    uVar2 = *puVar11;
    uVar12 = puVar11[1];
    *puVar11 = FUN_102c77ff4;
    puVar11[1] = puVar6;
    func_0x000107c61174();
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(puVar5);
    func_0x000100d21108(uVar2,uVar12);
    func_0x000107c61574(puVar5);
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1105ba190;
    func_0x000107c613fc(&UNK_1105ba190,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(long *)(puVar6 + 0x20) = param_6;
    puVar11 = (undefined8 *)(lVar3 + _DAT_112f06d80);
    uVar2 = *puVar11;
    uVar12 = puVar11[1];
    *puVar11 = 0x102c78018;
    puVar11[1] = puVar6;
    func_0x000107c61174();
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(puVar5);
    func_0x000100d21108(uVar2,uVar12);
    func_0x000107c61574(puVar5);
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1105ba1b8;
    func_0x000107c613fc(&UNK_1105ba1b8,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(long *)(puVar6 + 0x20) = param_6;
    puVar11 = (undefined8 *)(lVar3 + _DAT_112f06d88);
    uVar2 = *puVar11;
    uVar12 = puVar11[1];
    *puVar11 = FUN_102c7803c;
    puVar11[1] = puVar6;
    func_0x000107c61174();
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(puVar5);
    func_0x000100d21108(uVar2,uVar12);
    func_0x000107c61574(puVar5);
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1105ba1e0;
    func_0x000107c613fc(&UNK_1105ba1e0,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(long *)(puVar6 + 0x20) = param_6;
    puVar11 = (undefined8 *)(lVar3 + _DAT_112f06d90);
    uVar2 = *puVar11;
    uVar12 = puVar11[1];
    *puVar11 = FUN_102c78048;
    puVar11[1] = puVar6;
    func_0x000107c61174();
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(puVar5);
    func_0x000100d21108(uVar2,uVar12);
    func_0x000107c61574(puVar5);
    func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar3);
    puVar6 = &UNK_1105ba208;
    func_0x000107c613fc(&UNK_1105ba208,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = puVar7;
    *(long *)(puVar6 + 0x20) = param_6;
    puVar11 = (undefined8 *)(lVar3 + _DAT_112f06d98);
    uVar2 = *puVar11;
    uVar12 = puVar11[1];
    *puVar11 = FUN_102c780a0;
    puVar11[1] = puVar6;
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(puVar7);
    func_0x000100d21108(uVar2,uVar12);
    func_0x000107c61574(puVar7);
    func_0x0001000d224c(&uStack_90);
    uVar2 = uStack_90;
    func_0x000107c614f0(uStack_90);
    (**(code **)(lStack_88 + 8))
              (acStack_a8,&UNK_1105ba220,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lStack_88);
    func_0x000107c615e8(uStack_90);
    if (acStack_a8[0] == '\x01') {
      puVar7 = &UNK_1105b9fb0;
      func_0x000107c613fc(&UNK_1105b9fb0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar3);
      func_0x000107c61170(lVar3);
      puVar6 = &UNK_1105ba248;
      func_0x000107c613fc(&UNK_1105ba248,0x38,7);
      *(undefined8 *)(puVar6 + 0x10) = param_2;
      *(undefined **)(puVar6 + 0x18) = puVar7;
      *(undefined8 *)(puVar6 + 0x20) = param_7;
      *(undefined8 *)(puVar6 + 0x28) = param_8;
      *(undefined8 *)(puVar6 + 0x30) = param_9;
      puVar11 = (undefined8 *)(lVar3 + _DAT_112f06da0);
      uVar2 = *puVar11;
      uVar12 = puVar11[1];
      *puVar11 = 0x102c780ac;
      puVar11[1] = puVar6;
      func_0x000107c61174(param_2);
      func_0x000107c6157c(puVar7);
      func_0x000107c61174(param_7);
      func_0x000107c61174(param_9);
      func_0x000100d21108(uVar2,uVar12);
      func_0x000107c61574(puVar7);
    }
    else {
      func_0x000107c61170(lVar3);
    }
    puVar11 = &uStack_90;
    func_0x000107c61428(param_6 + 0x10,puVar11,0,0);
    lVar8 = *(long *)(param_6 + 0x10);
    func_0x000107c30ae8();
    func_0x000107c61180();
    if (lVar8 == 0) {
      lVar9 = 0;
      puVar11 = (undefined8 *)0x0;
    }
    else {
      lVar9 = lVar8;
      func_0x000107c5faec();
      func_0x000107c61170(lVar8);
    }
    plVar1 = (long *)(lVar3 + _DAT_112f06db0);
    lVar8 = plVar1[1];
    *plVar1 = lVar9;
    plVar1[1] = (long)puVar11;
    func_0x000107c6142c(lVar8);
    func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112f06d18));
    uVar2 = *(undefined8 *)(param_10 + 0x18);
    lVar8 = *(long *)(param_10 + 0x20);
    func_0x0001000a8868(param_10,uVar2);
    func_0x000107c61428(param_6 + 0x10,acStack_a8,0,0);
    uVar12 = *(undefined8 *)(param_6 + 0x10);
    pcVar10 = *(code **)(lVar8 + 0x18);
    func_0x000107c61174(uVar12);
    (*pcVar10)(param_2,uVar12,uVar2,lVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 102c75c28; end: 102c76443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c75c28(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = 0;
  FUN_102c780bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(param_2,param_1,uVar1);
  if ((param_2 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
      uVar1 = *(undefined8 *)(param_4 + 0x10);
      func_0x000107c61174(uVar1);
      func_0x000104191a9c();
      func_0x000102c74ba0(auStack_c0);
      func_0x000107c61170(param_3);
      if (lStack_a8 == 0) {
        func_0x000107c61170(uVar1);
        func_0x000102c77f04(auStack_c0);
      }
      else {
        FUN_102c6ea90(auStack_c0,auStack_98);
        func_0x0001000a8868(auStack_98,uStack_80);
        (**(code **)(lStack_78 + 0x40))(param_1,uVar1,uStack_80,lStack_78);
        func_0x000107c61170(uVar1);
        func_0x0001000834e4(auStack_98);
      }
    }
  }
  return;
}



/* Entry: 102c76444; end: 102c765af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar4 = uStack_60;
  func_0x000107c614f0(uStack_60);
  uVar2 = 0;
  func_0x00010403c628(0xd000000000000032,0x800000010f1044c0,uVar4,uStack_58);
  func_0x000107c615e8(uStack_60);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f06d18);
  lVar3 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if ((uVar2 & 1) == 0) {
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      func_0x000107c4ffe8(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8();
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f06db0);
      uVar4 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c6142c(uVar4);
      FUN_102c768a0(param_1,param_2,param_3);
    }
  }
  else {
    if (lVar3 == 0 || lVar3 == param_1) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f06db0);
      uVar4 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c6142c(uVar4);
      if (lVar3 == 0) {
        return;
      }
    }
    if (lVar3 == param_1) {
      func_0x000107c4ffe8(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    FUN_102c768a0(param_1,param_2,param_3);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102c765b0; end: 102c766fb;  */

/* WARNING: Removing unreachable block (ram,0x000102c76670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c765b0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(param_2 + _DAT_113067d28);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + _DAT_113813190);
    func_0x000107c61174();
    if (iVar1 == 1) {
      func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      param_1 = lVar2;
      if (param_3 != 0) {
        func_0x0001000a8868(param_3 + _DAT_112f06d30,
                            *(undefined8 *)(param_3 + _DAT_112f06d30 + 0x18));
        FUN_102c6fae0(param_4,param_6);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar2);
        return;
      }
      goto LAB_102c766dc;
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_112f06d38);
  FUN_102c78680(param_1,0,1);
  func_0x000107c5cdc0(uVar3);
  func_0x000107c61170(param_3);
LAB_102c766dc:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c766fc; end: 102c76707; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow adAttachmentHandlerDidPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c766fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f06d70);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f06d70))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c76708; end: 102c76713; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow adAttachmentHandlerViewWillFullyAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76708(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f06d78);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f06d78))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c76714; end: 102c7671f; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow adAttachmentHandlerViewDidFullyAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76714(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f06d80);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f06d80))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c76720; end: 102c7672b; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow adAttachmentHandlerViewWillFullyDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76720(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f06d88);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f06d88))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c7672c; end: 102c76737; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow adAttachmentHandlerViewDidFullyDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7672c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f06d90);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f06d90))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c76738; end: 102c767d3;  */

void FUN_102c76738(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + *param_4);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + *param_4))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c767d4; end: 102c7688f; -[_TtC24AdPlaybackImplementation31AdAttachmentInteractionWorkflow adAttachmentHandlerDidComplete:result:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c767d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f06d98);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f06d98))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100d210f8(pcVar1,uVar2);
  (*pcVar1)(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c76890; end: 102c7689f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76890(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  code *pcVar7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f06d18;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f06d18);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      pcVar7 = *(code **)(lVar3 + _DAT_112f06d90);
      if (pcVar7 != (code *)0x0) {
        uVar6 = ((undefined8 *)(lVar3 + _DAT_112f06d90))[1];
        func_0x000107c6157c(uVar6);
        (*pcVar7)(lVar4);
        func_0x000100d21108(pcVar7,uVar6);
      }
      uVar5 = *(undefined8 *)(lVar3 + lVar2);
      func_0x000107c61174(uVar5);
      uVar6 = uVar5;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(lVar4);
      puVar1 = (undefined8 *)(lVar3 + _DAT_112f06db0);
      uVar6 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(uVar6);
    }
  }
  return;
}



/* Entry: 102c768a0; end: 102c76a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c768a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000104191a9c();
  func_0x000102c74ba0(&puStack_b8);
  if (puStack_a0 == (undefined *)0x0) {
    func_0x000102c77f04(&puStack_b8);
  }
  else {
    FUN_102c6ea90(&puStack_b8,auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x48))(param_1,param_2,param_3,uStack_70,lStack_68);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_102c76a70;
    puStack_90 = (undefined *)0x0;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x102456760;
    puStack_a0 = &UNK_1105ba260;
    ppuVar2 = &puStack_b8;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_90);
    puVar3 = &UNK_1105ba298;
    func_0x000107c613fc(&UNK_1105ba298,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar4 = &UNK_1105ba2c0;
    func_0x000107c613fc(&UNK_1105ba2c0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_102c780fc;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_98 = (code *)0x102c78124;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100e27b38;
    puStack_a0 = &UNK_1105ba2d8;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c4c754(param_2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar2);
    func_0x0001000834e4(auStack_88);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 102c76a70; end: 102c76a73;  */

void FUN_102c76a70(void)

{
  return;
}



/* Entry: 102c76a74; end: 102c76b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76a74(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_2 + _DAT_112f06da0);
  if (pcVar2 == (code *)0x0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f06d38);
    FUN_102c78680(param_1,0,1);
    func_0x000107c5cdc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  uVar1 = ((undefined8 *)(param_2 + _DAT_112f06da0))[1];
  func_0x000107c6157c(uVar1);
  (*pcVar2)(param_1);
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar1);
    return;
  }
  return;
}



/* Entry: 102c76b0c; end: 102c77e73;  */

/* WARNING: Possible PIC construction at 0x000102c76bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7744c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7746c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c775e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7793c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c776d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c771d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c77214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c772f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c7732c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c770ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c76d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c76d10) */
/* WARNING: Removing unreachable block (ram,0x000102c770f0) */
/* WARNING: Removing unreachable block (ram,0x000102c77330) */
/* WARNING: Removing unreachable block (ram,0x000102c773b8) */
/* WARNING: Removing unreachable block (ram,0x000102c772f4) */
/* WARNING: Removing unreachable block (ram,0x000102c77218) */
/* WARNING: Removing unreachable block (ram,0x000102c771dc) */
/* WARNING: Removing unreachable block (ram,0x000102c77138) */
/* WARNING: Removing unreachable block (ram,0x000102c77768) */
/* WARNING: Removing unreachable block (ram,0x000102c77750) */
/* WARNING: Removing unreachable block (ram,0x000102c7770c) */
/* WARNING: Removing unreachable block (ram,0x000102c776dc) */
/* WARNING: Removing unreachable block (ram,0x000102c77b18) */
/* WARNING: Removing unreachable block (ram,0x000102c77adc) */
/* WARNING: Removing unreachable block (ram,0x000102c77aac) */
/* WARNING: Removing unreachable block (ram,0x000102c7797c) */
/* WARNING: Removing unreachable block (ram,0x000102c77bb8) */
/* WARNING: Removing unreachable block (ram,0x000102c77940) */
/* WARNING: Removing unreachable block (ram,0x000102c775e8) */
/* WARNING: Removing unreachable block (ram,0x000102c77660) */
/* WARNING: Removing unreachable block (ram,0x000102c775f0) */
/* WARNING: Removing unreachable block (ram,0x000102c777d0) */
/* WARNING: Removing unreachable block (ram,0x000102c77644) */
/* WARNING: Removing unreachable block (ram,0x000102c777dc) */
/* WARNING: Removing unreachable block (ram,0x000102c77650) */
/* WARNING: Removing unreachable block (ram,0x000102c777e4) */
/* WARNING: Removing unreachable block (ram,0x000102c77818) */
/* WARNING: Removing unreachable block (ram,0x000102c7781c) */
/* WARNING: Removing unreachable block (ram,0x000102c77bc8) */
/* WARNING: Removing unreachable block (ram,0x000102c77c40) */
/* WARNING: Removing unreachable block (ram,0x000102c77c34) */
/* WARNING: Removing unreachable block (ram,0x000102c77c44) */
/* WARNING: Removing unreachable block (ram,0x000102c77850) */
/* WARNING: Removing unreachable block (ram,0x000102c77860) */
/* WARNING: Removing unreachable block (ram,0x000102c778a0) */
/* WARNING: Removing unreachable block (ram,0x000102c77a48) */
/* WARNING: Removing unreachable block (ram,0x000102c778a8) */
/* WARNING: Removing unreachable block (ram,0x000102c77470) */
/* WARNING: Removing unreachable block (ram,0x000102c774bc) */
/* WARNING: Removing unreachable block (ram,0x000102c77500) */
/* WARNING: Removing unreachable block (ram,0x000102c774ec) */
/* WARNING: Removing unreachable block (ram,0x000102c77508) */
/* WARNING: Removing unreachable block (ram,0x000102c77578) */
/* WARNING: Removing unreachable block (ram,0x000102c775c0) */
/* WARNING: Removing unreachable block (ram,0x000102c77598) */
/* WARNING: Removing unreachable block (ram,0x000102c775c8) */
/* WARNING: Removing unreachable block (ram,0x000102c77538) */
/* WARNING: Removing unreachable block (ram,0x000102c7756c) */
/* WARNING: Removing unreachable block (ram,0x000102c774ac) */
/* WARNING: Removing unreachable block (ram,0x000102c774b0) */
/* WARNING: Removing unreachable block (ram,0x000102c7709c) */
/* WARNING: Removing unreachable block (ram,0x000102c76f44) */
/* WARNING: Removing unreachable block (ram,0x000102c76f54) */
/* WARNING: Removing unreachable block (ram,0x000102c76f5c) */
/* WARNING: Removing unreachable block (ram,0x000102c76fd0) */
/* WARNING: Removing unreachable block (ram,0x000102c77050) */
/* WARNING: Removing unreachable block (ram,0x000102c77048) */
/* WARNING: Removing unreachable block (ram,0x000102c77080) */
/* WARNING: Removing unreachable block (ram,0x000102c770a0) */
/* WARNING: Removing unreachable block (ram,0x000102c770b8) */
/* WARNING: Removing unreachable block (ram,0x000102c770e4) */
/* WARNING: Removing unreachable block (ram,0x000102c770d4) */
/* WARNING: Removing unreachable block (ram,0x000102c770f8) */
/* WARNING: Removing unreachable block (ram,0x000102c7710c) */
/* WARNING: Removing unreachable block (ram,0x000102c77114) */
/* WARNING: Removing unreachable block (ram,0x000102c7722c) */
/* WARNING: Removing unreachable block (ram,0x000102c7724c) */
/* WARNING: Removing unreachable block (ram,0x000102c77130) */
/* WARNING: Removing unreachable block (ram,0x000102c770e0) */
/* WARNING: Removing unreachable block (ram,0x000102c773d0) */
/* WARNING: Removing unreachable block (ram,0x000102c773e8) */
/* WARNING: Removing unreachable block (ram,0x000102c7743c) */
/* WARNING: Removing unreachable block (ram,0x000102c77450) */
/* WARNING: Removing unreachable block (ram,0x000102c77458) */
/* WARNING: Removing unreachable block (ram,0x000102c77410) */
/* WARNING: Removing unreachable block (ram,0x000102c77444) */
/* WARNING: Removing unreachable block (ram,0x000102c77428) */
/* WARNING: Removing unreachable block (ram,0x000102c77448) */
/* WARNING: Removing unreachable block (ram,0x000102c76f84) */
/* WARNING: Removing unreachable block (ram,0x000102c76fb4) */
/* WARNING: Removing unreachable block (ram,0x000102c76f98) */
/* WARNING: Removing unreachable block (ram,0x000102c76fbc) */
/* WARNING: Removing unreachable block (ram,0x000102c76e00) */
/* WARNING: Removing unreachable block (ram,0x000102c76c4c) */
/* WARNING: Removing unreachable block (ram,0x000102c76c64) */
/* WARNING: Removing unreachable block (ram,0x000102c76bf4) */
/* WARNING: Removing unreachable block (ram,0x000102c76e04) */
/* WARNING: Removing unreachable block (ram,0x000102c76e1c) */
/* WARNING: Removing unreachable block (ram,0x000102c76e20) */
/* WARNING: Removing unreachable block (ram,0x000102c76d44) */
/* WARNING: Removing unreachable block (ram,0x000102c76d54) */
/* WARNING: Removing unreachable block (ram,0x000102c76d9c) */
/* WARNING: Removing unreachable block (ram,0x000102c76da0) */
/* WARNING: Removing unreachable block (ram,0x000102c77e70) */
/* WARNING: Removing unreachable block (ram,0x000102c77eb4) */
/* WARNING: Removing unreachable block (ram,0x000102c77e80) */
/* WARNING: Removing unreachable block (ram,0x000102c77eb8) */
/* WARNING: Removing unreachable block (ram,0x000102c77e98) */
/* WARNING: Removing unreachable block (ram,0x000102c77ebc) */
/* WARNING: Removing unreachable block (ram,0x000102c77ea4) */
/* WARNING: Removing unreachable block (ram,0x000102c76db8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c76b0c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x0001000d224c(auStack_a8);
    func_0x000107c30ae4(param_3);
    func_0x000107c61180();
    FUN_102c780bc(0,0x112dcf430,&PTR_PTR_1126b3e90);
    func_0x000103dec308(0x1b);
    uStack_100 = 0;
    uStack_f8 = 0xe000000000000000;
    func_0x000107c602fc(0x4e);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c614f0();
    param_2 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
  }
  else {
    func_0x000107c5faec();
    lVar8 = param_2;
    func_0x000107c61170(lVar7);
    lVar7 = param_3;
    func_0x000107c30b14();
    func_0x000107c61180();
    if (lVar7 == 0) {
      lVar7 = param_3;
      func_0x000107c30b14();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x0001000d224c(&uStack_100);
        uVar3 = uStack_f8;
        uVar2 = uStack_100;
        uVar5 = uStack_100;
        func_0x000107c614f0(uStack_100);
        uVar6 = 0;
        func_0x00010403c628(0xd000000000000032,0x800000010f1044c0,uVar5,uVar3);
        func_0x000107c615e8(uVar2);
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)(unaff_x20 + _DAT_112f06d18);
          func_0x000107c5194c();
          func_0x000107c61180();
          if ((lVar7 != 0) &&
             (func_0x000107c61170(), *(long *)(unaff_x20 + _DAT_112f06db0 + 8) == 0))
          goto code_r0x000107c6142c;
        }
        func_0x000107c30ae8(param_3);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c30afc(param_3);
        func_0x0001042d3794(0);
        puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_11308f130);
        uVar2 = *puVar1;
        param_2 = puVar1[1];
        func_0x000107c61434(param_2);
        func_0x0001042d0624(uVar2,param_2,param_3);
      }
      else {
        lVar4 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
        if ((lVar4 != -0x2fffffffffffffdf) || (lVar8 != -0x7ffffffef1043b60)) {
          func_0x000107c605b8(lVar4,lVar8,0xd000000000000021,0x800000010efbc4a0,0);
          param_2 = lVar8;
        }
      }
    }
    else {
      lVar4 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      if ((lVar4 != -0x2fffffffffffffe0) || (lVar8 != -0x7ffffffef0efc520)) {
        func_0x000107c605b8(lVar4,lVar8,0xd000000000000020,0x800000010f103ae0,0);
        param_2 = lVar8;
      }
    }
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c77e74; end: 102c77ebf;  */

undefined1  [16] FUN_102c77e74(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c77eb8);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x40) >> (param_1 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_4 + 0x24) == param_2) {
      return *(undefined1 (*) [16])(*(long *)(param_4 + 0x30) + param_1 * 0x10);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c77ec0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c77ebc);
  (*pcVar1)();
}



/* Entry: 102c77ec0; end: 102c77f4b;  */

long FUN_102c77ec0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c77f4c; end: 102c77f83;  */

/* WARNING: Possible PIC construction at 0x000102c74f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c74fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c75230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c75224) */
/* WARNING: Removing unreachable block (ram,0x000102c75034) */
/* WARNING: Removing unreachable block (ram,0x000102c750e4) */
/* WARNING: Removing unreachable block (ram,0x000102c75070) */
/* WARNING: Removing unreachable block (ram,0x000102c750fc) */
/* WARNING: Removing unreachable block (ram,0x000102c74fec) */
/* WARNING: Removing unreachable block (ram,0x000102c74fdc) */
/* WARNING: Removing unreachable block (ram,0x000102c74fc4) */
/* WARNING: Removing unreachable block (ram,0x000102c74f1c) */
/* WARNING: Removing unreachable block (ram,0x000102c75234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c77f4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f06d38);
    FUN_102c78680(0,0,1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                  unaff_x20 + 0x30);
    func_0x000107c5cdc0(uVar3);
  }
  else {
    func_0x000107c61174();
    FUN_102c6b278();
    puVar1 = &UNK_1105ba0c8;
    func_0x000107c613fc(&UNK_1105ba0c8,0x18,7);
    func_0x000102c79dc0();
    *(long *)(puVar1 + 0x10) = param_1;
    lVar2 = param_1;
    func_0x000104191a9c();
    if ((int)lVar2 == 8) {
      func_0x000107c61174(param_1);
      func_0x000102c7a448(0xd000000000000013,0x800000010efbcc50);
    }
    else {
      func_0x000107c30af8(param_1);
      func_0x000107c61180();
      func_0x000107c61174(param_1);
      puVar1 = PTR_PTR_1126b8fa8;
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      param_1 = -0x2fffffffffffffee;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
      func_0x000107c30b18(puVar1,param_1,4,0xffffffffffffffff,0xffffffffffffffff,0,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c77f84; end: 102c77fa7;  */

void FUN_102c77f84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c75264(*(undefined8 *)(unaff_x20 + 0x10),param_1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c77fa8; end: 102c77faf;  */

void FUN_102c77fa8(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c77fb0; end: 102c77fe7;  */

void FUN_102c77fb0(void)

{
  long unaff_x20;
  
  FUN_102c75608(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),unaff_x20 + 0x58);
  return;
}



/* Entry: 102c77fe8; end: 102c77ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c77fe8(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_102c780bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(uVar2,param_1,uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      func_0x000107c61174(uVar1);
      func_0x000104191a9c();
      func_0x000102c74ba0(auStack_c0);
      func_0x000107c61170(lVar3);
      if (lStack_a8 == 0) {
        func_0x000107c61170(uVar1);
        func_0x000102c77f04(auStack_c0);
      }
      else {
        FUN_102c6ea90(auStack_c0,auStack_98);
        func_0x0001000a8868(auStack_98,uStack_80);
        (**(code **)(lStack_78 + 0x40))(param_1,uVar1,uStack_80,lStack_78);
        func_0x000107c61170(uVar1);
        func_0x0001000834e4(auStack_98);
      }
    }
  }
  return;
}



/* Entry: 102c77ff4; end: 102c7803b;  */

void FUN_102c77ff4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102c75eb8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),0x102c75d70);
  return;
}



/* Entry: 102c7803c; end: 102c78047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7803c(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_102c780bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(uVar2,param_1,uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      func_0x000107c61174(uVar1);
      func_0x000104191a9c();
      func_0x000102c74ba0(auStack_c0);
      if (lStack_a8 == 0) {
        func_0x000107c61170(uVar1);
        func_0x000107c61170(lVar3);
        func_0x000102c77f04(auStack_c0);
      }
      else {
        FUN_102c6ea90(auStack_c0,auStack_98);
        func_0x0001000a8868(auStack_98,uStack_80);
        (**(code **)(lStack_78 + 0x30))(param_1,uVar1,uStack_80,lStack_78);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(lVar3);
        func_0x0001000834e4(auStack_98);
      }
    }
  }
  return;
}



/* Entry: 102c78048; end: 102c7809f;  */

void FUN_102c78048(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102c75eb8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),0x102c76224);
  return;
}



/* Entry: 102c780a0; end: 102c780bb;  */

void FUN_102c780a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_102c780bc(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(uVar2,param_1,uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      func_0x000107c61174(uVar1);
      FUN_102c76444(param_1,param_2,uVar1);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 102c780bc; end: 102c780fb;  */

void FUN_102c780bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c780fc; end: 102c78127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c780fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f06da0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f06d38);
    FUN_102c78680(param_1,0,1);
    func_0x000107c5cdc0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  uVar2 = puVar1[1];
  func_0x000107c6157c(uVar2);
  (*pcVar3)(param_1);
  if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c78128; end: 102c78187; -[_TtC24AdPlaybackImplementation44AdAttachmentLeadGenerationInteractionHandler init] */

void FUN_102c78128(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdAttachmentLeadGenerationInteractionHandler",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c78154);
  (*pcVar1)();
}



/* Entry: 102c78188; end: 102c781bf; -[_TtC24AdPlaybackImplementation44AdAttachmentLeadGenerationInteractionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c781a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c781a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c78188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f06e00));
  return;
}



/* Entry: 102c781c0; end: 102c781df;  */

void FUN_102c781c0(void)

{
  func_0x000107c61168(&PTR_PTR_11289a9c8);
  return;
}



/* Entry: 102c781e0; end: 102c782c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c781e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112f06e00);
    if (lVar4 != 0) {
      func_0x0001042d3794(0);
      uVar1 = param_2;
      func_0x000107c30adc(param_2);
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      func_0x000107c30afc(param_2);
      func_0x0001042d0700(uVar2,puVar3,param_2);
      func_0x000107c6142c(puVar3);
      func_0x000107c4dc64(lVar4);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c782c8; end: 102c783a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c782c8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + _DAT_112f06e00);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      lVar1 = param_3;
      func_0x000107c30adc();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar2);
      }
      func_0x000107c30afc(param_3);
      func_0x000107c4dc60(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c783a4; end: 102c784a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c783a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  puVar2 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar2,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + _DAT_112f06e00);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      lVar1 = param_4;
      func_0x000107c30adc();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar2);
      }
      func_0x000107c30afc(param_4);
      func_0x000107c5ee20(param_1,param_2);
      func_0x000107c4dc5c(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c784a8; end: 102c784cb;  */

void FUN_102c784a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102c784cc(param_3);
  return;
}



/* Entry: 102c784cc; end: 102c7863b;  */

code * FUN_102c784cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  
  puVar4 = &UNK_1105ba380;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_1105ba380,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105ba3a8;
  func_0x000107c613fc(&UNK_1105ba3a8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_1105ba380,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = &UNK_1105ba3d0;
  func_0x000107c613fc(&UNK_1105ba3d0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c613fc(&UNK_1105ba380,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar3 = &UNK_1105ba3f8;
  func_0x000107c613fc(&UNK_1105ba3f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x0001041a86dc(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar5 = FUN_102c7863c;
  func_0x0001041a8440(FUN_102c7863c,puVar2,0x102c78644,puVar1,FUN_102c78678,puVar3);
  func_0x0001041c57dc(0);
  pcVar6 = pcVar5;
  func_0x0001041c4e88(pcVar5);
  func_0x000107c61170(pcVar5);
  return pcVar6;
}



/* Entry: 102c7863c; end: 102c7864b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7863c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = auStack_68;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112f06e00);
    if (lVar6 != 0) {
      func_0x0001042d3794(0);
      uVar2 = uVar4;
      func_0x000107c30adc(uVar4);
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      func_0x000107c30afc(uVar4);
      func_0x0001042d0700(uVar3,puVar5,uVar4);
      func_0x000107c6142c(puVar5);
      func_0x000107c4dc64(lVar6);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c7864c; end: 102c78677;  */

void FUN_102c7864c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c78678; end: 102c7867f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c78678(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar3 = auStack_68;
  func_0x000107c61428(lVar4 + 0x10,puVar3,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + _DAT_112f06e00);
    if (lVar4 != 0) {
      func_0x000107c615f0(lVar4);
      lVar2 = lVar1;
      func_0x000107c30adc();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar3);
      }
      func_0x000107c30afc(lVar1);
      func_0x000107c5ee20(param_1,param_2);
      func_0x000107c4dc5c(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c78680; end: 102c78913;  */

undefined * FUN_102c78680(long param_1,long param_2,char param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126b8fa8;
  if (param_3 == '\0') {
    func_0x000107c610f8(PTR_PTR_1126b8fa8);
    uVar1 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
    uVar5 = 4;
  }
  else {
    if (param_3 == '\x01') {
      if (param_1 == 0) {
        uVar1 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
        lVar4 = 0;
      }
      else {
        func_0x000107c614cc(param_1,auStack_38,auStack_50);
        uVar5 = uStack_48;
        lVar4 = lStack_40;
        func_0x000107c60640();
        uVar1 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
        if (lVar4 != 0) {
          func_0x000107c5fadc(uVar5,lVar4);
          goto LAB_102c787e8;
        }
      }
      uVar5 = 0;
LAB_102c787e8:
      puVar2 = PTR_PTR_1126b8fa8;
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      func_0x000107c30b18();
      func_0x000107c6142c(lVar4);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar5);
      return puVar2;
    }
    if (param_1 == 0 && param_2 == 0) {
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      uVar1 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
      uVar5 = 6;
    }
    else {
      if (param_1 == 1 && param_2 == 0) {
        func_0x000107c610f8(PTR_PTR_1126b8fa8);
        uVar1 = 0xd000000000000012;
        func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
        uVar5 = 7;
        uVar3 = 1;
        goto LAB_102c788e4;
      }
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      uVar1 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
      uVar5 = 8;
    }
  }
  uVar3 = 0;
LAB_102c788e4:
  func_0x000107c30b18(puVar2,uVar1,uVar5,0xffffffffffffffff,0xffffffffffffffff,uVar3,0,0,0);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 102c78914; end: 102c78957;  */

void FUN_102c78914(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c78958; end: 102c78aef;  */

undefined * FUN_102c78958(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_2;
  func_0x000107c30c30();
  lVar1 = unaff_x20;
  func_0x000107c30c34();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c30c38();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar6 = lVar5;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c5faec();
    lVar6 = lVar5;
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c30c3c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar5 = unaff_x20;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x20);
  }
  func_0x000107c30c40();
  func_0x000107c5fadc(param_1,param_2);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5fadc(lVar3,lVar4);
    func_0x000107c6142c(lVar4);
  }
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5fadc(lVar5,lVar6);
    func_0x000107c6142c(lVar6);
  }
  puVar2 = PTR_PTR_1126b9060;
  func_0x000107c610f8(PTR_PTR_1126b9060);
  func_0x000107c30c2c();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  return puVar2;
}



/* Entry: 102c78af0; end: 102c78b43;  */

void FUN_102c78af0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c78b44; end: 102c78d8b;  */

void FUN_102c78b44(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = 0;
    func_0x0001042bfdcc();
    func_0x0001042bd8dc();
    uVar2 = uVar1;
    func_0x000107c60118();
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = 10;
      FUN_102c78e9c(10,0,0);
      func_0x000107c5cd64(uVar4);
      func_0x000107c61574(param_2);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 102c78d8c; end: 102c78e57;  */

code * FUN_102c78d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *unaff_x20;
  puVar1 = &UNK_1105ba4e0;
  func_0x000107c613fc(&UNK_1105ba4e0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar5);
  puVar2 = &UNK_1105ba508;
  func_0x000107c613fc(&UNK_1105ba508,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x0001041b8338(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  pcVar3 = FUN_102c790f8;
  func_0x0001041b812c(FUN_102c790f8,puVar2,0,0);
  func_0x0001041c57dc(0);
  pcVar4 = pcVar3;
  func_0x0001041c4cf4(pcVar3);
  func_0x000107c61170(pcVar3);
  return pcVar4;
}



/* Entry: 102c78e58; end: 102c78e9b;  */

void FUN_102c78e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000102c78f80(param_1,param_3);
  return;
}



/* Entry: 102c78e9c; end: 102c790f7;  */

undefined * FUN_102c78e9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x0001002ed07c(0);
  uVar1 = 0;
  func_0x000107c6010c(0);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f104a50);
  uVar4 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar4 = param_2;
  }
  puVar3 = PTR_PTR_1126b9060;
  func_0x000107c610f8(PTR_PTR_1126b9060);
  func_0x000107c30c2c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  return puVar3;
}



/* Entry: 102c790f8; end: 102c79113;  */

void FUN_102c790f8(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x0001042bfdcc();
    func_0x0001042bd8dc();
    uVar3 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      uVar4 = 10;
      FUN_102c78e9c(10,0,0);
      func_0x000107c5cd64(uVar5);
      func_0x000107c61574(lVar1);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 102c79114; end: 102c793db;  */

void FUN_102c79114(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xe900000000000064;
  uVar3 = 0x657463656e6e6f63;
  if (bVar4 != 3) {
    uVar1 = 0xec00000064657463;
    uVar3 = 0x656e6e6f63736964;
  }
  uVar2 = 0x676e696d6f636e69;
  if (bVar4 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (bVar4 != 0) {
    uVar1 = 0x676e696c616964;
  }
  if (bVar4 < 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c793dc; end: 102c79487;  */

void FUN_102c793dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xe900000000000064;
  uVar3 = 0x657463656e6e6f63;
  if (bVar4 != 3) {
    uVar1 = 0xec00000064657463;
    uVar3 = 0x656e6e6f63736964;
  }
  uVar2 = 0x676e696d6f636e69;
  if (bVar4 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (bVar4 != 0) {
    uVar1 = 0x676e696c616964;
  }
  if (bVar4 < 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102c79488; end: 102c7950f; -[_TtC24AdPlaybackImplementation14AdCallObserver init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c79488(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f06f88) = 0;
  lVar1 = _DAT_112f06f90;
  uVar3 = 0x112f07068;
  func_0x0001000285a8(0x112f07068,&UNK_10db3a810);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c79510; end: 102c79543;  */

void FUN_102c79510(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c79544; end: 102c7957b; -[_TtC24AdPlaybackImplementation14AdCallObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c79544(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f06f88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f06f90));
  return;
}



/* Entry: 102c7957c; end: 102c7959b;  */

void FUN_102c7957c(void)

{
  func_0x000107c61168(&PTR_PTR_11289aa90);
  return;
}



/* Entry: 102c7959c; end: 102c7963f;  */

/* WARNING: Possible PIC construction at 0x000102c795d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c79618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c795d8) */
/* WARNING: Removing unreachable block (ram,0x000102c79630) */
/* WARNING: Removing unreachable block (ram,0x000102c795e0) */
/* WARNING: Removing unreachable block (ram,0x000102c7961c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c7959c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___CXCallObserver_1126b6e20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f06f88);
  *(undefined **)(unaff_x20 + _DAT_112f06f88) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c79640; end: 102c796e3;  */

undefined8 FUN_102c79640(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong unaff_x20;
  
  iVar3 = (int)unaff_x20;
  uVar2 = unaff_x20;
  func_0x000107c44858();
  if ((uVar2 & 1) != 0) {
    return 4;
  }
  iVar1 = iVar3;
  func_0x000107c4a150();
  if ((iVar1 != 0) && (iVar1 = iVar3, func_0x000107c447c4(), iVar1 == 0)) {
    return 1;
  }
  uVar2 = unaff_x20;
  func_0x000107c4a150();
  if ((((uVar2 & 1) == 0) && (func_0x000107c447c4(), (unaff_x20 & 1) == 0)) &&
     (iVar1 = iVar3, func_0x000107c44858(), iVar1 == 0)) {
    return 2;
  }
  iVar1 = iVar3;
  func_0x000107c447c4();
  if ((iVar1 != 0) && (func_0x000107c44858(), iVar3 == 0)) {
    return 3;
  }
  return 0;
}



/* Entry: 102c796e4; end: 102c7975f; -[_TtC24AdPlaybackImplementation14AdCallObserver callObserver:callChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c796e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c79640();
  uStack_31 = (undefined1)uVar1;
  func_0x0001002a64a8(&uStack_31);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 102c79760; end: 102c798c7;  */

int FUN_102c79760(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102c797dc;
        goto LAB_102c797c0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102c797c0:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102c797dc:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


