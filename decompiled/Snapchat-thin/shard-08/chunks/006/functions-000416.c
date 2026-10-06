/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10637b320; end: 10637b463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637b320(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127464a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637b464; end: 10637b683; -[SCAdPlaybackServiceProvider _adLogger] */

void FUN_10637b464(ulong param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = param_1;
  FUN_10637b684();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar6);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    FUN_10637b684(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bfb2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar10 = 0;
  }
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010637b17c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126ca060;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126c5568;
  }
  puVar6 = *ppuVar1;
  _objc_alloc(puVar6);
  uVar2 = param_1;
  func_0x00010637b20c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010637b6a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010637b6cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010637b3d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5580(puVar6);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10637b684; end: 10637b6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637b684(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127464dc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637b6f0; end: 10637bccb; -[SCAdPlaybackServiceProvider _adTrackerHelperWithViewLocation:unskippableAdManager:adPodManager:showcaseInteractionHistoryTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637b6f0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
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
  long lVar21;
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
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_4);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca068;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010637b110();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0x27) {
    func_0x00010637b134(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bef4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ed00(puVar2);
    lVar5 = param_1;
    lVar7 = param_4;
  }
  else {
    lVar5 = param_1;
    func_0x00010637bd00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bef5fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010637b158();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010637b17c();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar36 = 0;
    }
    else {
      lVar36 = param_1 + _DAT_11274649c;
      _objc_loadWeakRetained();
    }
    lVar11 = lVar36;
    func_0x00010bef3220();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010637b6a8();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar37 = 0;
    }
    else {
      lVar37 = param_1 + _DAT_11274641c;
      _objc_loadWeakRetained();
    }
    lVar14 = lVar37;
    func_0x00010c292f40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010637b6cc();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010637b134();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c098e80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010637b134();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010bef4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1;
    func_0x00010637b368();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010bef4760();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1;
    func_0x00010637b368();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010bef2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1;
    func_0x00010637b368();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar25;
    func_0x00010bef33a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1;
    func_0x00010637b368();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar27;
    func_0x00010c23dc00();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_1;
    func_0x00010bf05380();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = lVar29;
    func_0x00010bf053a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar38 = 0;
    }
    else {
      lVar38 = param_1 + _DAT_11274645c;
      _objc_loadWeakRetained();
    }
    lVar31 = lVar38;
    func_0x00010c0ccee0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = param_1;
    func_0x00010637b3b0();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = lVar32;
    func_0x00010bef2160();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar39 = 0;
    }
    else {
      lVar39 = param_1 + _DAT_1127464e4;
      _objc_loadWeakRetained();
    }
    lVar34 = lVar39;
    func_0x00010bf2cf40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010637b1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_1;
    func_0x00010c14c340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05eda0(puVar2);
    _objc_release(param_4);
    _objc_release(lVar35);
    _objc_release(param_1);
    _objc_release(lVar34);
    _objc_release(lVar39);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar38);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar37);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar36);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10637bccc; end: 10637bd23;  */

void FUN_10637bccc(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637bd24; end: 10637cd3f; -[SCAdPlaybackServiceProvider _dataSourceDependenciesWithStorySessionId:initialAd:navigationStyle:viewLocation:p2pDataSource:showcaseInteractionHistoryTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637bd24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
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
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  undefined8 uVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lStack_230;
  long lStack_1d0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ca070;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ca078;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010637b158(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar87 = lVar3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_10637cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar87);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126ca080;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010637b6cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar87 = lVar3;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0187e0();
  _objc_release(lVar87);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc5a40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ca098;
  _objc_alloc();
  lVar87 = param_1;
  func_0x00010637b158();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar87;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010637b17c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar89 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1;
  func_0x00010637b1e8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar90;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010637b6cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02eba0();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar87);
  puVar14 = PTR_PTR_1126ca0a0;
  _objc_alloc();
  lVar87 = param_1;
  func_0x00010bdc5580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010637b6cc();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar89 = param_1;
  func_0x00010637b3f8();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = lVar89;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010637b440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010637b158();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010637b17c();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  FUN_10637cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bef25a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c067400();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  FUN_10637cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bef3620();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bef39e0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x00010637cfb0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c2527c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar79 = 0;
  }
  else {
    lVar79 = param_1 + _DAT_1127463f0;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar79;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010c2782c0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  FUN_10637cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010bef6440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar80 = 0;
  }
  else {
    lVar80 = param_1 + _DAT_1127463fc;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar80;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar81 = 0;
  }
  else {
    lVar81 = param_1 + _DAT_112746480;
    _objc_loadWeakRetained();
  }
  lVar36 = lVar81;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  FUN_10637cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010bf4c820();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  FUN_10637cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = lVar39;
  func_0x00010c11a960();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  FUN_10637cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1;
  func_0x00010637b41c();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = lVar43;
  func_0x00010befe120();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar82 = 0;
  }
  else {
    lVar82 = param_1 + _DAT_112746498;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar82;
  func_0x00010c11aa00();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010637bd00();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010bef5fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1;
  func_0x00010637b320();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar48;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_1d0 = 0;
  }
  else {
    lStack_1d0 = param_1 + _DAT_112746420;
    _objc_loadWeakRetained();
  }
  lVar50 = param_1;
  func_0x00010637b110();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1;
  FUN_10637cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010bef3560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar83 = 0;
  }
  else {
    lVar83 = param_1 + _DAT_112746400;
    _objc_loadWeakRetained();
  }
  lVar54 = lVar83;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar84 = 0;
  }
  else {
    lVar84 = param_1 + _DAT_1127464b0;
    _objc_loadWeakRetained();
  }
  lVar56 = lVar84;
  func_0x00010c108380();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1;
  FUN_10637cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010bef6460();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1;
  FUN_10637cf8c();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar59;
  func_0x00010bef6420();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = lVar61;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1;
  func_0x00010637b20c();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = lVar63;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar85 = 0;
  }
  else {
    lVar85 = param_1 + _DAT_1127464c0;
    _objc_loadWeakRetained();
  }
  lVar65 = lVar85;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1;
  func_0x00010637b3d4();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = lVar66;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1;
  func_0x00010637b3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar68;
  func_0x00010bef2160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_230 = 0;
    lVar86 = 0;
  }
  else {
    lStack_230 = param_1 + _DAT_1127464d8;
    _objc_loadWeakRetained();
    lVar86 = param_1 + _DAT_112746490;
    _objc_loadWeakRetained();
  }
  lVar70 = lVar86;
  func_0x00010befe040();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1;
  func_0x00010637b344();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = lVar71;
  func_0x00010c108d60();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = lVar73;
  func_0x00010c069380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar88 = 0;
  }
  else {
    lVar88 = param_1 + _DAT_1127464ec;
    _objc_loadWeakRetained();
  }
  lVar75 = lVar88;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1;
  func_0x00010637cfb0();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = lVar76;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031e60();
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar88);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar86);
  _objc_release(lStack_230);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar85);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar84);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar83);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lStack_1d0);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar82);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar81);
  _objc_release(lVar35);
  _objc_release(lVar80);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar79);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar87);
  if (param_1 == 0) {
    lVar87 = 0;
  }
  else {
    lVar87 = param_1 + _DAT_1127464b4;
    _objc_loadWeakRetained(lVar87);
  }
  lVar4 = lVar87;
  func_0x00010bf81860(lVar87);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0120(puVar14);
  _objc_release(lVar4);
  _objc_release(lVar87);
  if (param_1 == 0) {
    lVar87 = 0;
  }
  else {
    lVar87 = param_1 + _DAT_112746454;
    _objc_loadWeakRetained(lVar87);
  }
  lVar4 = lVar87;
  func_0x00010c0ed000(lVar87);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6340(puVar14);
  _objc_release(lVar4);
  _objc_release(lVar87);
  lVar87 = param_1 + _DAT_1127463b8;
  _objc_loadWeakRetained();
  lVar4 = lVar87;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar89 = lVar5;
  func_0x00010bf922e0();
  if ((int)lVar89 == 0) {
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    lVar90 = (long)_DAT_1127463bc;
    lVar89 = *(long *)(param_1 + lVar90);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar87);
    if (lVar89 != 0) goto LAB_10637cbe0;
    lVar87 = param_1 + _DAT_1127463ec;
    _objc_loadWeakRetained();
    lVar4 = lVar87;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar89 = lVar5;
    func_0x00010bf1f480();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar87);
    lVar87 = param_1;
    if ((int)lVar89 == 0) {
      func_0x00010beead60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar78 = *(undefined8 *)(param_1 + lVar90);
      *(long *)(param_1 + lVar90) = lVar87;
      _objc_release(uVar78);
      func_0x00010bf17a60(lVar87);
    }
    else {
      func_0x00010bec9220();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar78 = *(undefined8 *)(param_1 + lVar90);
      *(long *)(param_1 + lVar90) = lVar87;
      _objc_release(uVar78);
      func_0x00010bf17a60(lVar87);
    }
  }
  _objc_release(lVar87);
LAB_10637cbe0:
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10637cd40; end: 10637cd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637cd40(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274648c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637cd64; end: 10637cdd7;  */

void FUN_10637cd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae888;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0522e0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10637cdd8; end: 10637cf8b;  */

void FUN_10637cdd8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010637b17c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1f480();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  ppuVar1 = &PTR_PTR_1126ca088;
  if ((int)lVar6 == 0) {
    ppuVar1 = &PTR_PTR_1126ca090;
  }
  puVar7 = *ppuVar1;
  _objc_alloc(puVar7);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010637b158();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  FUN_10637cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0d1b40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0d1b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1220(puVar7,param_2,lVar5,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10637cf8c; end: 10637cfd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637cf8c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112746414);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637cfd4; end: 10637d26b; -[SCAdPlaybackServiceProvider _swiftWebviewPerformanceMetricsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637cfd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + _DAT_1127463c0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar6 = PTR_PTR_1126ca0a8;
  _objc_alloc(PTR_PTR_1126ca0a8);
  lVar1 = param_1 + _DAT_1127463c4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bef33a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127463c8;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff18c0(puVar6,param_2,lVar3,lVar7,puVar5,lVar4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126ca0b0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127463cc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018700(puVar8,param_2,lVar2,lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf19120(puVar8,param_2,puVar6);
  puVar9 = PTR_PTR_1126ca0b8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127463d0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf215a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010637b1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9760(puVar9,param_2,lVar2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf19120(puVar9,param_2,puVar6);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127463d4);
  *(undefined **)(param_1 + _DAT_1127463d4) = puVar8;
  _objc_retain(puVar8);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127463d8);
  *(undefined **)(param_1 + _DAT_1127463d8) = puVar9;
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10637d26c; end: 10637d503; -[SCAdPlaybackServiceProvider _webviewPerformanceMetricsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637d26c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + _DAT_1127463c0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar6 = PTR_PTR_1126ca0c0;
  _objc_alloc(PTR_PTR_1126ca0c0);
  lVar1 = param_1 + _DAT_1127463c4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bef33a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127463c8;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff18c0(puVar6,param_2,lVar3,lVar7,puVar5,lVar4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126ca0c8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127463cc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018700(puVar8,param_2,lVar2,lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf19120(puVar8,param_2,puVar6);
  puVar9 = PTR_PTR_1126ca0d0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127463d0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf215a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010637b1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9760(puVar9,param_2,lVar2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf19120(puVar9,param_2,puVar6);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127463d4);
  *(undefined **)(param_1 + _DAT_1127463d4) = puVar8;
  _objc_retain(puVar8);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127463d8);
  *(undefined **)(param_1 + _DAT_1127463d8) = puVar9;
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10637d504; end: 10637d523; -[SCAdPlaybackServiceProvider appImpressionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637d504(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112746408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637d524; end: 10637d537; -[SCAdPlaybackServiceProvider setAppImpressionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637d524(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112746408,param_3);
  return;
}



/* Entry: 10637d538; end: 10637d967; -[SCAdPlaybackServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637d538(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112746508,0);
  _objc_storeStrong(param_1 + _DAT_112746504,0);
  _objc_destroyWeak(param_1 + _DAT_112746500);
  _objc_destroyWeak(param_1 + _DAT_1127464fc);
  _objc_destroyWeak(param_1 + _DAT_1127464f8);
  _objc_destroyWeak(param_1 + _DAT_1127464f4);
  _objc_destroyWeak(param_1 + _DAT_1127464f0);
  _objc_destroyWeak(param_1 + _DAT_1127464ec);
  _objc_destroyWeak(param_1 + _DAT_1127464e8);
  _objc_destroyWeak(param_1 + _DAT_1127464e4);
  _objc_destroyWeak(param_1 + _DAT_1127464e0);
  _objc_destroyWeak(param_1 + _DAT_1127464dc);
  _objc_destroyWeak(param_1 + _DAT_1127464d8);
  _objc_destroyWeak(param_1 + _DAT_1127464d4);
  _objc_destroyWeak(param_1 + _DAT_1127464d0);
  _objc_destroyWeak(param_1 + _DAT_1127464cc);
  _objc_destroyWeak(param_1 + _DAT_1127464c8);
  _objc_destroyWeak(param_1 + _DAT_1127464c4);
  _objc_destroyWeak(param_1 + _DAT_1127464c0);
  _objc_destroyWeak(param_1 + _DAT_1127464bc);
  _objc_destroyWeak(param_1 + _DAT_1127464b8);
  _objc_destroyWeak(param_1 + _DAT_1127464b4);
  _objc_destroyWeak(param_1 + _DAT_1127464b0);
  _objc_destroyWeak(param_1 + _DAT_1127464ac);
  _objc_destroyWeak(param_1 + _DAT_1127464a8);
  _objc_destroyWeak(param_1 + _DAT_1127464a4);
  _objc_destroyWeak(param_1 + _DAT_1127464a0);
  _objc_destroyWeak(param_1 + _DAT_11274649c);
  _objc_destroyWeak(param_1 + _DAT_112746498);
  _objc_destroyWeak(param_1 + _DAT_112746494);
  _objc_destroyWeak(param_1 + _DAT_112746490);
  _objc_destroyWeak(param_1 + _DAT_1127463c4);
  _objc_destroyWeak(param_1 + _DAT_11274648c);
  _objc_destroyWeak(param_1 + _DAT_112746488);
  _objc_destroyWeak(param_1 + _DAT_112746484);
  _objc_destroyWeak(param_1 + _DAT_112746480);
  _objc_destroyWeak(param_1 + _DAT_11274647c);
  _objc_destroyWeak(param_1 + _DAT_112746478);
  _objc_destroyWeak(param_1 + _DAT_112746474);
  _objc_destroyWeak(param_1 + _DAT_112746470);
  _objc_destroyWeak(param_1 + _DAT_11274646c);
  _objc_destroyWeak(param_1 + _DAT_112746468);
  _objc_destroyWeak(param_1 + _DAT_112746464);
  _objc_destroyWeak(param_1 + _DAT_112746460);
  _objc_destroyWeak(param_1 + _DAT_11274645c);
  _objc_destroyWeak(param_1 + _DAT_112746458);
  _objc_destroyWeak(param_1 + _DAT_112746454);
  _objc_destroyWeak(param_1 + _DAT_112746450);
  _objc_destroyWeak(param_1 + _DAT_11274644c);
  _objc_destroyWeak(param_1 + _DAT_112746448);
  _objc_destroyWeak(param_1 + _DAT_112746444);
  _objc_destroyWeak(param_1 + _DAT_112746440);
  _objc_destroyWeak(param_1 + _DAT_11274643c);
  _objc_destroyWeak(param_1 + _DAT_1127463d0);
  _objc_destroyWeak(param_1 + _DAT_112746438);
  _objc_destroyWeak(param_1 + _DAT_112746434);
  _objc_destroyWeak(param_1 + _DAT_112746430);
  _objc_destroyWeak(param_1 + _DAT_11274642c);
  _objc_destroyWeak(param_1 + _DAT_112746428);
  _objc_destroyWeak(param_1 + _DAT_112746424);
  _objc_destroyWeak(param_1 + _DAT_112746420);
  _objc_destroyWeak(param_1 + _DAT_1127463c0);
  _objc_destroyWeak(param_1 + _DAT_11274641c);
  _objc_destroyWeak(param_1 + _DAT_112746418);
  _objc_destroyWeak(param_1 + _DAT_112746414);
  _objc_destroyWeak(param_1 + _DAT_112746410);
  _objc_destroyWeak(param_1 + _DAT_11274640c);
  _objc_destroyWeak(param_1 + _DAT_112746408);
  _objc_destroyWeak(param_1 + _DAT_112746404);
  _objc_destroyWeak(param_1 + _DAT_112746400);
  _objc_destroyWeak(param_1 + _DAT_1127463cc);
  _objc_destroyWeak(param_1 + _DAT_1127463fc);
  _objc_destroyWeak(param_1 + _DAT_1127463f8);
  _objc_destroyWeak(param_1 + _DAT_1127463f4);
  _objc_destroyWeak(param_1 + _DAT_1127463f0);
  _objc_destroyWeak(param_1 + _DAT_1127463c8);
  _objc_destroyWeak(param_1 + _DAT_1127463ec);
  _objc_destroyWeak(param_1 + _DAT_1127463e8);
  _objc_destroyWeak(param_1 + _DAT_1127463b8);
  _objc_destroyWeak(param_1 + _DAT_1127463e4);
  _objc_destroyWeak(param_1 + _DAT_1127463e0);
  _objc_destroyWeak(param_1 + _DAT_1127463dc);
  _objc_storeStrong(param_1 + _DAT_1127463d8,0);
  _objc_storeStrong(param_1 + _DAT_1127463d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127463bc,0);
  return;
}



/* Entry: 10637d968; end: 10637e617; -[SCAdPluginProvider initWithUserSession:adOperationalLoggingServices:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:streamingMediaFetcher:adReportEventTrackerProvider:skAdNetwork:appImpressionTracker:liveLensPreviewLauncher:cameraHardwareServicesAPI:lensLogger:lensDataFetcher:lensDataPrefetcher:circumstanceEngine:messagingExperimentService:friendsFeedLifecyleListener:notificationManager:showcaseLayerVCProvider:valdiRuntimeProvider:sessionViewingHistory:showcaseInteractionHistoryTracker:adEOVTimerProvider:audioSession:locationProvider:userLocationPermissionsManager:networkingClient:dataSourceDependencyBuilderBlock:snapcodeMetadataProvider:memoryPressureState:applicationLifecycleEvents:boostCoordinator:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:skOverlayPreloader:skOverlayLifecycleTracker:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:adTrackFunnelEventTracker:trackSeqNumProvider:adBrowserLifecycleService:adCrashLogger:applicationPreferences:playbackSessionObservableRepository:attachmentPreloader:sharingPresenterProvider:imageSourceProvider:imageFetchingService:lensMetadataStoreProvider:storiesConfigProvider:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:adWebviewOperationEventRepository:clearConversationActionHandler:adOperaLayerFactoryProvider:userAdIdProvider:deckHierarchyFactory:userPreferences:browserPrivacyConsentInfoManager:localNotificationScheduler:userInfoAdapter:appStartExperimentReader:webViewRetainer:] */

undefined8 *
FUN_10637d968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  puStack_70 = PTR_PTR_1126f1090;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_26;
    _objc_release(uVar2);
    uVar2 = param_30;
    _objc_retainBlock();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_69;
    _objc_release(uVar2);
  }
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10637e618; end: 10637e6d3; -[SCAdPluginProvider createAdPluginWithViewLocation:storySessionId:navigationStyle:] */

void FUN_10637e618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f100();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdea620(param_1,param_2,param_3,param_5,param_4,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdcf5a0(param_1);
    param_1 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637e6d4; end: 10637e7bf; -[SCAdPluginProvider createDiscoverAdPluginWithViewLocation:storySessionId:navigationStyle:initialAd:p2pDataSource:] */

void FUN_10637e6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f100();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdea620(param_1,param_2,param_3,param_5,param_4,0,param_7,param_6,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdcf5a0(param_1);
    param_1 = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637e7c0; end: 10637e87b; -[SCAdPluginProvider createStoryAdPluginWithViewLocation:storySessionId:navigationStyle:] */

void FUN_10637e7c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f100();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdea620(param_1,param_2,param_3,param_5,param_4,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdcf5a0(param_1);
    param_1 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637e87c; end: 10637e933; -[SCAdPluginProvider createMapAdPluginWithStorySessionId:navigationStyle:] */

void FUN_10637e87c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f100();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdea620(param_1,param_2,0x15,param_4,param_3,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdcf5a0(param_1);
    param_1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637e934; end: 10637ea3f; -[SCAdPluginProvider createAdChatFeedPluginWithDataModel:viewLocation:navigationStyle:userId:] */

void FUN_10637e934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  pcVar4 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_6);
  _objc_retain(param_3);
  (*pcVar4)(lVar2,0,0,param_5,param_4,0,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ca0d8;
  _objc_alloc(PTR_PTR_1126ca0d8);
  func_0x00010c00b6e0();
  _objc_release(param_6);
  func_0x00010bdea600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637ea40; end: 10637ea47; -[SCAdPluginProvider createAPAdPluginWithDataModel:navigationStyle:] */

undefined8 FUN_10637ea40(void)

{
  return 0;
}



/* Entry: 10637ea48; end: 10637eb13; -[SCAdPluginProvider createPublisherStoriesDeeplinkAdPluginWithStorySessionId:deepLinkId:navigationStyle:] */

void FUN_10637ea48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f100();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdea620(param_1,param_2,0x48,param_5,param_3,param_4,0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdcf5a0(param_1);
    param_1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637eb14; end: 10637eb4f; -[SCAdPluginProvider createStoriesAdPluginWithViewLocation:storySessionId:deepLinkId:navigationStyle:initialAd:p2pDataSource:] */

void FUN_10637eb14(void)

{
  func_0x00010bdea620();
  return;
}



/* Entry: 10637eb50; end: 10637eba7; -[SCAdPluginProvider createAdCameraPluginWithViewLocation:] */

void FUN_10637eb50(void)

{
  _objc_alloc(PTR_PTR_1126ca0e0);
  func_0x00010c05ed20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637eba8; end: 10637ebfb; -[SCAdPluginProvider layerViewControllerFactoryPlugin] */

void FUN_10637eba8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57bc0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10637ebfc; end: 10637ed07; -[SCAdPluginProvider webBrowserLayerViewControllerFactoryPlugin] */

void FUN_10637ebfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_PTR_1126ca0e8;
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar5);
  _objc_alloc(puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  uVar6 = *(undefined8 *)(param_1 + 0x1c8);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x1e8);
  uVar9 = *(undefined8 *)(param_1 + 0x168);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10637ed08;
  puStack_70 = &UNK_11090d930;
  puVar4 = PTR_PTR_1126ae720;
  uStack_68 = uVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062ca0(puVar3,param_2,uVar1,uVar2,uVar6,uVar7,uVar8,uVar9,puVar4,
                      *(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x220));
  _objc_release(puVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10637ed08; end: 10637ed2f;  */

void FUN_10637ed08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10637ed30; end: 10637ee3b; -[SCAdPluginProvider _createAdPluginWithViewLocation:navigationStyle:storySessionId:deepLinkId:p2pDataSource:initialAd:groupAdDataSource:] */

void FUN_10637ed30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  pcVar1 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  (*pcVar1)(lVar2,param_5,param_8,param_4,param_3,param_7,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdea600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10637ee3c; end: 10637f11f; -[SCAdPluginProvider _createAdPluginWithDeepLinkId:p2pDataSource:initialAd:groupAdDataSource:dependencies:] */

void FUN_10637ee3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10637f120;
  puStack_90 = &UNK_11091f668;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  ppuVar1 = &PTR_PTR_1126ca0f0;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126ca0f8;
  }
  puVar6 = *ppuVar1;
  _objc_alloc(puVar6);
  func_0x00010c009b80();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10637f120; end: 10637f19f;  */

void FUN_10637f120(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08c5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10637f1a0; end: 10637f217; -[SCAdPluginProvider _assertDeprecatedApiUsageDetected] */

void FUN_10637f1a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3e90;
  func_0x00010befdec0(PTR_PTR_1126b3e90,param_2,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ada0(uVar1,param_2,0,puVar2,&PTR____CFConstantStringClassReference_110e4c698,
                      &PTR____CFConstantStringClassReference_110e4c6b8,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10637f218; end: 10637f55f; -[SCAdPluginProvider .cxx_destruct] */

void FUN_10637f218(long param_1)

{
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10637f560; end: 10637f70f; -[SCCameraProductLayerFactory initWithUserSession:viewLocation:liveLensPreviewLauncher:cameraHardwareServicesAPI:lensLogger:lensDataFetcher:lensDataPrefetcher:snapcodeMetadataProvider:lensMetadataStoreProvider:] */

undefined1 *
FUN_10637f560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f1098;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10637f710; end: 10637f77f; -[SCCameraProductLayerFactory supportedLayers] */

void FUN_10637f710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_20;
  long lStack_18;
  
  ppuVar3 = &puStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bdd80;
  _objc_opt_class();
  uVar4 = 1;
  puStack_20 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(uVar4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puVar1 = PTR_PTR_1126bdd80;
    _objc_retain(ppuVar3);
    _objc_opt_class(puVar1);
    puVar2 = (undefined1 *)ppuVar3;
    func_0x00010c077980(ppuVar3,param_2,puVar1);
    _objc_release(ppuVar3);
    if ((int)puVar2 != 0) {
      _objc_alloc(PTR_PTR_1126ca100);
      func_0x00010c001ae0();
    }
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637f780; end: 10637f897; -[SCCameraProductLayerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_10637f780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126bdd80;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar1 = param_3;
  func_0x00010c077980(param_3,param_2,puVar2);
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ca100;
    _objc_alloc(PTR_PTR_1126ca100);
    func_0x00010c001ae0();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10637f898; end: 10637f90f; -[SCCameraProductLayerFactory .cxx_destruct] */

void FUN_10637f898(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10637f910; end: 10637fb23; -[SCOperaCameraLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:userSession:viewLocation:lensLogger:liveLensPreviewLauncher:cameraHardwareServicesAPI:lensDataFetcher:lensDataPrefetcher:snapcodeMetadataProvider:lensMetadataStoreProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10637f910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f10a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112746640;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112746644) = param_8;
    lVar5 = (long)_DAT_112746648;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274664c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112746650;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112746654;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112746658;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274665c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf68fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746660);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112746660) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 10637fb24; end: 10637fcaf; -[SCOperaCameraLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637fb24(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar7 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar7);
  if (uVar3 == 0) {
    lVar8 = (long)_DAT_112746664;
  }
  else {
    uVar7 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = uVar4;
      func_0x00010c14f6c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_112746664;
      lVar5 = *(long *)(param_1 + lVar8);
      func_0x00010c0dff20(lVar5,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        func_0x00010c1d0560(puVar1,param_2,lVar5,uVar2);
      }
      _objc_release(lVar5);
      _objc_release(uVar2);
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
      uVar2 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      _objc_release(uVar2);
    } while (uVar7 < uVar4);
  }
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10637fcb0; end: 10637fcff; -[SCOperaCameraLayerViewController loadView] */

void FUN_10637fcb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10637fd00; end: 10637fd07; -[SCOperaCameraLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_10637fd00(void)

{
  return 0;
}



/* Entry: 10637fd08; end: 10637fe0b; -[SCOperaCameraLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637fd08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f10a0;
  lStack_30 = param_2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  lVar1 = param_2 + _DAT_112746668;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c139020(param_2);
    func_0x00010c1beaa0(param_2);
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + _DAT_11274666c) = param_1;
    func_0x00010c163740(param_2);
    _objc_initWeak(auStack_38,param_2);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c11c040(param_2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10637fe0c; end: 10637fe3f;  */

void FUN_10637fe0c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10637fe40; end: 10637fec3; -[SCOperaCameraLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637fe40(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112746648;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217620();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217640();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746664);
  *(undefined8 *)(param_1 + _DAT_112746664) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10637fec4; end: 10637ff9f; -[SCOperaCameraLayerViewController setAdIdAdRequestClientIdForLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637fec4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112746648;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217620();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217640();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10637ffa0; end: 10638030f; -[SCOperaCameraLayerViewController pushCameraVCWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10637ffa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ca108;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112746648);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0237c0();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112746670);
  *(undefined **)(param_1 + _DAT_112746670) = puVar1;
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  func_0x00010c243420();
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  func_0x00010c1eb2c0();
  func_0x00010c1d86a0(puVar1);
  func_0x00010c182d40(puVar1);
  func_0x00010c1afa00(puVar1);
  lVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c232fe0();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    func_0x00010c165640(puVar1);
    func_0x00010c1eb300(puVar1);
    func_0x00010c1eb2e0(puVar1);
    puVar5 = puVar1;
    func_0x00010c1eb220(puVar1);
    func_0x000108f580b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080(puVar1);
    _objc_release(puVar5);
  }
  lVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c233000();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    func_0x00010c165660(puVar1);
    func_0x00010c1eb300(puVar1);
    func_0x00010c1eb2e0(puVar1);
    puVar5 = puVar1;
    func_0x00010c1eb220(puVar1);
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080(puVar1);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126ca110;
  _objc_alloc(PTR_PTR_1126ca110);
  puVar6 = puVar1;
  func_0x00010c271a20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c039380(puVar5);
  _objc_release(puVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11274664c);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c08c080(uVar7);
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106380310; end: 1063803bb;  */

void FUN_106380310(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca118;
  _objc_opt_class(PTR_PTR_1126ca118);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_1063803a0;
    pcVar6 = *(code **)(lVar4 + 0x10);
    uVar5 = 0;
  }
  else {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bea54e0();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_1063803a0;
    pcVar6 = *(code **)(lVar4 + 0x10);
    uVar5 = 1;
  }
  (*pcVar6)(lVar4,uVar5);
LAB_1063803a0:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063803bc; end: 10638062b; -[SCOperaCameraLayerViewController _loadLenses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1063803bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [128];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + _DAT_112746674) = 0;
  func_0x00010bf3b7e0(*(undefined8 *)(param_1 + _DAT_112746670));
  if (*(char *)(param_1 + _DAT_112746678) == '\x01') {
    lVar4 = param_1;
    func_0x00010bfc70c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d640(param_1,param_2,lVar4);
    _objc_release(lVar4);
    *(undefined1 *)(param_1 + _DAT_11274667c) = 1;
    lVar4 = (long)_DAT_112746684;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112746680);
    _objc_retain(uVar6);
    puVar1 = *(undefined **)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return puVar1;
    }
  }
  else {
    puVar1 = PTR_PTR_1126b0820;
    _objc_opt_new();
    func_0x00010c2b2880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa840(puVar1,param_2,&PTR____CFConstantStringClassReference_110f776f8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d640(param_1,param_2,puVar3);
    _objc_release(puVar3);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar4 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_e0,0x10);
    if (lVar4 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010c14ed60(param_1,param_2,*(undefined8 *)(lStack_118 + lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_e0,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return puVar1;
    }
  }
  ___stack_chk_fail();
  if (*(ulong *)(puVar1 + _DAT_112746644) < 0x23 &&
      (1L << (*(ulong *)(puVar1 + _DAT_112746644) & 0x3f) & 0x400010020U) != 0) {
    return (undefined *)0x6;
  }
  return (undefined *)0x7;
}



/* Entry: 10638062c; end: 10638066b; -[SCOperaCameraLayerViewController snapSourceForCurrentViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10638062c(long param_1)

{
  if (*(ulong *)(param_1 + _DAT_112746644) < 0x23 &&
      (1L << (*(ulong *)(param_1 + _DAT_112746644) & 0x3f) & 0x400010020U) != 0) {
    return 6;
  }
  return 7;
}



/* Entry: 10638066c; end: 1063806af; -[SCOperaCameraLayerViewController captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_10638066c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063806b0; end: 106380957; -[SCOperaCameraLayerViewController scanLensIfNecessaryWithLensItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063806b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar8 = *(long *)(param_1 + _DAT_112746664);
  uVar7 = param_3;
  func_0x00010c14f6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  if (lVar8 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112746680);
    *(undefined **)(param_1 + _DAT_112746680) = puVar6;
    _objc_release(uVar7);
    puVar6 = PTR_PTR_1126b3230;
    _objc_alloc(PTR_PTR_1126b3230);
    uVar7 = param_3;
    func_0x00010c14f6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c14f6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c05fa40(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274665c);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0cc3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c297260(uVar7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar7);
  }
  else {
    lVar8 = *(long *)(param_1 + _DAT_112746674) + 1;
    *(long *)(param_1 + _DAT_112746674) = lVar8;
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar8 != lVar3) goto LAB_10638091c;
    lVar8 = param_1;
    func_0x00010bfc70c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d640(param_1);
    _objc_release(lVar8);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + _DAT_112746684);
    *(undefined **)(param_1 + _DAT_112746684) = puVar4;
  }
  _objc_release(puVar6);
LAB_10638091c:
  _objc_release(param_3);
  return;
}



/* Entry: 106380958; end: 1063809eb;  */

void FUN_106380958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be2b540(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063809ec; end: 106380bc7; -[SCOperaCameraLayerViewController _handleLensSnapcodeMetadata:error:forLensItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063809ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c25d140(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_88,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112746660);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0952c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_5);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106380bc8;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    lVar1 = lStack_58;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106380bc8; end: 106380bdb;  */

void FUN_106380bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleLens_error_forLensItem__112568658,0,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106380bdc; end: 106380d9f;  */

void FUN_106380bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106380da0;
  uStack_60 = 0x106380db0;
  uStack_58 = 0;
  puStack_e0 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_106380da0;
  uStack_90 = 0x106380db0;
  uStack_88 = 0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106380db8;
  puStack_c0 = &UNK_11091f728;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x106380df0;
  puStack_e8 = &UNK_11091f758;
  puStack_b8 = &uStack_80;
  puStack_a8 = puStack_e0;
  puStack_78 = &uStack_80;
  func_0x00010c0c0760(param_2);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x106380e28;
  puStack_128 = &UNK_110843420;
  _objc_copyWeak(auStack_108,param_1 + 0x28);
  puStack_110 = &uStack_80;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_120 = param_3;
  _objc_retain(uVar2);
  uStack_118 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_140);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_destroyWeak(auStack_108);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106380da0; end: 106380db7;  */

void FUN_106380da0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106380db8; end: 106380e67;  */

void FUN_106380db8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106380e68; end: 106381003; -[SCOperaCameraLayerViewController _handleLens:error:forLensItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106380e68(long param_1,undefined8 param_2,long param_3,long param_4,undefined **param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar6 = PTR_PTR_1126afca8;
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_106380f1c;
    uVar7 = *(undefined8 *)(param_1 + _DAT_112746664);
    ppuVar1 = param_5;
    func_0x00010c14f6c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar7);
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc34d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar6);
  }
  _objc_release(ppuVar1);
LAB_106380f1c:
  lVar5 = *(long *)(param_1 + _DAT_112746674) + 1;
  *(long *)(param_1 + _DAT_112746674) = lVar5;
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == lVar4) {
    lVar5 = param_1;
    func_0x00010bfc70c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27d640(param_1);
    _objc_release(lVar5);
    *(undefined1 *)(param_1 + _DAT_11274667c) = 1;
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112746684);
    *(undefined **)(param_1 + _DAT_112746684) = puVar6;
    _objc_release(uVar7);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106381004; end: 10638119f; -[SCOperaCameraLayerViewController getLensesToPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381004(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        lVar7 = *(long *)(param_1 + _DAT_112746664);
        func_0x00010c14f6c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar7 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar7);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar1 + _DAT_112746668,puVar6);
  return;
}



/* Entry: 1063811a0; end: 1063811b3; -[SCOperaCameraLayerViewController _setLiveLensPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063811a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112746668,param_3);
  return;
}



/* Entry: 1063811b4; end: 10638139f; -[SCOperaCameraLayerViewController turnOnLenses:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063811b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112746670);
    lVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010c2873a0(uVar6);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1bf8;
    func_0x00010bef0200();
    func_0x00010c0b7de0();
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112746688);
    *(undefined **)(param_1 + _DAT_112746688) = puVar3;
    _objc_release(uVar6);
    param_1 = param_1 + _DAT_112746668;
    _objc_loadWeakRetained();
    lVar4 = param_1;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(lVar1);
    puStack_60 = puVar2;
    _objc_retain(param_1);
    lVar5 = lVar4;
    func_0x00010c25ff60(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1063813a0; end: 10638149b;  */

void FUN_1063813a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c15c0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10638149c; end: 1063814a3;  */

void FUN_10638149c(void)

{
  return;
}



/* Entry: 1063814a4; end: 1063814db;  */

void FUN_1063814a4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063814dc; end: 1063814e3;  */

void FUN_1063814dc(void)

{
  return;
}



/* Entry: 1063814e4; end: 10638154b; -[SCOperaCameraLayerViewController _configureCameraWithLens:devicePosition:liveLensPreviewScope:] */

void FUN_1063814e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bde4c40(param_1,param_2,param_4);
  func_0x00010bde4cc0(param_1,param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10638154c; end: 1063815fb; -[SCOperaCameraLayerViewController _configureCameraDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10638154c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746650);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afed0;
  func_0x00010c0db140(PTR_PTR_1126afed0);
  puVar4 = &UNK_10f378fc7;
  uVar5 = 0x1bd;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cd00(uVar1,param_2,param_3,puVar2,&PTR___NSConcreteGlobalBlock_11091f868,puVar3,
                      in_x6,in_x7,puVar4,uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063815fc; end: 1063815ff;  */

void FUN_1063815fc(void)

{
  return;
}



/* Entry: 106381600; end: 10638174f; -[SCOperaCameraLayerViewController _configureCameraForLensWithLens:liveLensPreviewScope:] */

void FUN_106381600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b1c00;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b1c08;
  func_0x00010beffb20(PTR_PTR_1126b1c08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2e20(puVar1,param_2,0,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b00f8;
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c159160(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0240;
  _objc_alloc(PTR_PTR_1126b0240);
  func_0x00010bff0c60();
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010c090c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0080();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106381750; end: 106381a67; -[SCOperaCameraLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381750(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [128];
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + _DAT_112746684) == *(long *)(param_2 + _DAT_112746680)) {
    dVar17 = 0.0;
    dVar15 = param_1;
  }
  else if (*(long *)(param_2 + _DAT_112746684) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
    dVar15 = 0.0;
    dVar17 = param_1;
    if (param_1 < 0.0) {
      dVar17 = 0.0;
    }
  }
  else {
    func_0x00010c26f380();
    dVar15 = param_1;
    dVar17 = param_1;
  }
  _CACurrentMediaTime();
  dVar16 = *(double *)(param_2 + _DAT_11274666c);
  puVar1 = PTR_PTR_1126ca120;
  func_0x00010c094ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c0 = puVar1;
  puStack_b8 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                      *(undefined1 *)(param_2 + _DAT_112746678));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ca120;
  puStack_98 = puVar2;
  func_0x00010c094bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar1;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                      *(undefined1 *)(param_2 + _DAT_11274667c));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9ab0;
  puStack_90 = puVar14;
  func_0x00010c0f2320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar3;
  func_0x00010c0df720(dVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2348;
  puStack_88 = puVar4;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar5;
  func_0x00010c0df720((dVar15 - dVar16) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_98,&puStack_b8,4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puStack_c0);
  lVar13 = (long)_DAT_112746648;
  lVar9 = *(long *)(param_2 + lVar13);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar9);
  puVar1 = (undefined *)0x0;
  if (lVar10 != 0) {
    lVar10 = *(long *)(param_2 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar10;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ca120;
    func_0x00010c096b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_3,lVar9,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar9);
    _objc_release(lVar10);
  }
  puVar2 = puVar8;
  func_0x00010bf51e00();
  puVar7 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_106381a68;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puVar11 = puVar7;
  puStack_120 = puVar6;
  puStack_118 = puVar5;
  puStack_110 = puVar4;
  puStack_108 = puVar3;
  puStack_100 = puVar14;
  lStack_f8 = lVar13;
  puStack_f0 = puVar1;
  puStack_e8 = puVar8;
  lStack_e0 = lVar9;
  puStack_d8 = puVar2;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar2 = puVar1;
  func_0x00010bf52a60(puVar1,param_3,&uStack_1f0,auStack_1a8,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar10 = *plStack_1e0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(puVar1);
        }
        uVar12 = *(undefined8 *)(lStack_1e8 + (long)puVar14 * 8);
        lVar9 = *(long *)(puVar7 + _DAT_112746664);
        func_0x00010c14f6c0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(lVar9,param_3,uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar12);
        if (lVar9 == 0) {
          _objc_release();
          goto LAB_106381ba8;
        }
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_3,&uStack_1f0,auStack_1a8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  puVar7[_DAT_112746678] = 1;
LAB_106381ba8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(puVar1 + _DAT_112746680);
  *(undefined8 *)(puVar1 + _DAT_112746680) = 0;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(puVar1 + _DAT_112746684);
  *(undefined8 *)(puVar1 + _DAT_112746684) = 0;
  _objc_release(uVar12);
  puVar1[_DAT_112746678] = 0;
  puVar1[_DAT_11274667c] = 0;
  *(undefined8 *)(puVar1 + _DAT_112746674) = 0;
  *(undefined8 *)(puVar1 + _DAT_11274666c) = 0;
  return;
}



/* Entry: 106381a68; end: 106381be3; -[SCOperaCameraLayerViewController setLoadedOnEntryIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381a68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        lVar4 = *(long *)(param_1 + _DAT_112746664);
        func_0x00010c14f6c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(lVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar3);
        if (lVar4 == 0) {
          _objc_release();
          goto LAB_106381ba8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  *(undefined1 *)(param_1 + _DAT_112746678) = 1;
LAB_106381ba8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112746680);
  *(undefined8 *)(lVar2 + _DAT_112746680) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112746684);
  *(undefined8 *)(lVar2 + _DAT_112746684) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(lVar2 + _DAT_112746678) = 0;
  *(undefined1 *)(lVar2 + _DAT_11274667c) = 0;
  *(undefined8 *)(lVar2 + _DAT_112746674) = 0;
  *(undefined8 *)(lVar2 + _DAT_11274666c) = 0;
  return;
}



/* Entry: 106381be4; end: 106381c47; -[SCOperaCameraLayerViewController resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381be4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746680);
  *(undefined8 *)(param_1 + _DAT_112746680) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112746684);
  *(undefined8 *)(param_1 + _DAT_112746684) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112746678) = 0;
  *(undefined1 *)(param_1 + _DAT_11274667c) = 0;
  *(undefined8 *)(param_1 + _DAT_112746674) = 0;
  *(undefined8 *)(param_1 + _DAT_11274666c) = 0;
  return;
}



/* Entry: 106381c48; end: 106381c4f; -[SCOperaCameraLayerViewController pageViewName] */

undefined8 FUN_106381c48(void)

{
  return 0xab;
}



/* Entry: 106381c50; end: 106381c63; -[SCOperaCameraLayerViewController dismissCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112746668,0);
  return;
}



/* Entry: 106381c64; end: 106381c73; -[SCOperaCameraLayerViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106381c64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112746640);
}



/* Entry: 106381c74; end: 106381cb3; -[SCOperaCameraLayerViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112746640;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106381cb4; end: 106381daf; -[SCOperaCameraLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106381cb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112746640,0);
  _objc_storeStrong(param_1 + _DAT_112746660,0);
  _objc_storeStrong(param_1 + _DAT_11274665c,0);
  _objc_storeStrong(param_1 + _DAT_112746658,0);
  _objc_storeStrong(param_1 + _DAT_112746654,0);
  _objc_storeStrong(param_1 + _DAT_112746688,0);
  _objc_storeStrong(param_1 + _DAT_112746650,0);
  _objc_destroyWeak(param_1 + _DAT_112746668);
  _objc_storeStrong(param_1 + _DAT_11274664c,0);
  _objc_storeStrong(param_1 + _DAT_112746664,0);
  _objc_storeStrong(param_1 + _DAT_112746684,0);
  _objc_storeStrong(param_1 + _DAT_112746680,0);
  _objc_storeStrong(param_1 + _DAT_112746648,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112746670,0);
  return;
}



/* Entry: 106381db0; end: 106381f5f; -[SCOperaPlaylistCameraPlugin initWithUserSession:viewLocation:liveLensPreviewLauncher:cameraHardwareServicesAPI:lensLogger:lensDataFetcher:lensDataPrefetcher:snapcodeMetadataProvider:lensMetadataStoreProvider:] */

undefined1 *
FUN_106381db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f10a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106381f60; end: 106381f67; -[SCOperaPlaylistCameraPlugin playlistDataSource] */

undefined8 FUN_106381f60(void)

{
  return 0;
}



/* Entry: 106381f68; end: 106381f6b; -[SCOperaPlaylistCameraPlugin setPlaylistItemController:] */

void FUN_106381f68(void)

{
  return;
}



/* Entry: 106381f6c; end: 106382037; -[SCOperaPlaylistCameraPlugin addEventListenersWithEventAnnouncing:] */

undefined ** FUN_106381f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuStack_40;
  long lStack_38;
  
  ppuVar1 = (undefined **)PTR_PTR_1126b2338;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_40 = ppuVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e4c6f8;
}



/* Entry: 106382038; end: 106382043; -[SCOperaPlaylistCameraPlugin type] */

undefined ** FUN_106382038(void)

{
  return &PTR____CFConstantStringClassReference_110e4c6f8;
}



/* Entry: 106382044; end: 106382177; -[SCOperaPlaylistCameraPlugin updateOperaConfiguration:] */

void FUN_106382044(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf61820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126ca128;
  _objc_alloc(PTR_PTR_1126ca128);
  func_0x00010c05ed20();
  func_0x00010befa120(puVar1,param_2,puVar3);
  puVar4 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aba40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106382178; end: 1063821cb; -[SCOperaPlaylistCameraPlugin operaViewDidSendEvent:page:params:] */

void FUN_106382178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2338;
  _objc_retain(param_3);
  func_0x00010c0c6900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063821cc; end: 106382243; -[SCOperaPlaylistCameraPlugin .cxx_destruct] */

void FUN_1063821cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106382244; end: 1063822ab; +[SCSnapcodePayloadUnlockableLens descriptor] */

void FUN_106382244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112adcef0,
                        &PTR____CFConstantStringClassReference_110e4c718,&PTR_DAT_11314d258,
                        &PTR_s_lensId_11314d270,2,0x18,0x1c);
    puRam00000001136c3858 = puVar1;
  }
  return;
}



/* Entry: 1063822ac; end: 10638330b; -[SCOperaPlaylistAdPlugin initWithDeepLinkId:groupAdDataSource:adNetwork:appImpressionTracker:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:streamingMediaFetcher:adOperationalLoggingServices:adReportEventTrackerProvider:circumstanceEngine:notificationManager:sessionViewingHistory:adEOVTimerProvider:audioSession:dataSourceDependencies:memoryPressureState:applicationLifecycleEvents:boostCoordinator:layerViewControllerFactory:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:skOverlayPreloader:skOverlayLifecycleTracker:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:adTrackFunnelEventTracker:trackSeqNumProvider:adBrowserLifecycleService:applicationPreferences:playbackSessionObservableRepository:attachmentPreloader:sharingPresenterProvider:imageSourceProvider:imageFetchingService:storiesConfigProvider:webBrowserLayerViewControllerFactory:adWebviewOperationEventRepository:userAdIdProvider:deckHierarchyFactory:userPreferences:browserPrivacyConsentInfoManager:localNotificationScheduler:userInfoAdapter:appStartExperimentReader:] */

long FUN_1063822ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  long param_49,undefined8 param_50)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_36);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_50);
  uVar32 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_50;
  _objc_retain(param_48);
  _objc_retain(param_47);
  _objc_retain(param_46);
  _objc_retain(param_45);
  _objc_retain(param_44);
  _objc_retain(param_43);
  _objc_retain(param_42);
  _objc_retain(param_41);
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_17);
  _objc_retain(param_14);
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_release(uVar32);
  lVar33 = *(long *)(param_1 + 0x118);
  _objc_retain(param_49);
  if (((param_49 != 0) && (lVar33 != 0)) &&
     (func_0x00010bf1f440(lVar33,param_2,&PTR____CFConstantStringClassReference_110ddd1f8,0,0),
     puVar5 = PTR_PTR_1126aeec0, puVar3 = PTR_PTR_1126ae960, (int)lVar33 != 0)) {
    puVar2 = PTR_PTR_1126b8dd8;
    func_0x00010bf27620(PTR_PTR_1126b8dd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef22a0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae970;
    func_0x00010c292920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106384ba4;
    puStack_78 = &UNK_110841f20;
    _objc_retain(param_49);
    lStack_70 = param_49;
    func_0x00010bf6f500(puVar5,param_2,puVar3,puVar4,0,&puStack_90);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lStack_70);
  }
  _objc_release(param_49);
  puVar3 = PTR_PTR_1126ca130;
  _objc_alloc();
  func_0x00010c00b620();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126ca138;
  _objc_alloc();
  uVar32 = param_18;
  func_0x00010bef6000(param_18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff15a0(puVar5,param_2,puVar3,uVar32,0);
  _objc_release(uVar32);
  puVar2 = PTR_PTR_1126ca140;
  _objc_alloc();
  func_0x00010c022220();
  uVar32 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar2;
  _objc_release(uVar32);
  puVar2 = PTR_PTR_1126ca148;
  _objc_alloc();
  uVar32 = param_18;
  func_0x00010c29d360(param_18);
  uVar29 = param_18;
  func_0x00010bef2040(param_18);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_18;
  func_0x00010bef6000(param_18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1620(puVar2,param_2,puVar3,uVar32,uVar29,uVar6,param_38);
  _objc_release(param_38);
  _objc_release(uVar6);
  _objc_release(uVar29);
  puVar4 = PTR_PTR_1126ca150;
  _objc_alloc();
  uVar32 = param_11;
  func_0x00010c23d860(param_11);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_18;
  func_0x00010c29d360(param_18);
  func_0x00010bff1100(puVar4,param_2,param_7,puVar3,uVar32,param_6,uVar29);
  _objc_release(uVar32);
  puVar7 = PTR_PTR_1126ca158;
  _objc_alloc_init();
  uVar32 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar7;
  _objc_release(uVar32);
  puVar7 = PTR_PTR_1126ca160;
  _objc_alloc();
  func_0x00010bff1460();
  puVar8 = PTR_PTR_1126ca168;
  _objc_alloc();
  uVar32 = param_18;
  func_0x00010bef6000(param_18);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  uVar37 = *(undefined8 *)(param_1 + 0x18);
  uVar29 = param_18;
  func_0x00010c0ea840();
  uVar6 = param_18;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar6;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_18;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1520(puVar8,param_2,puVar3,param_7,param_8,param_33,uVar32,puVar9,param_20,uVar37,
                      uVar29,uVar6,uVar34,uVar35,*(undefined8 *)(param_1 + 0xf0));
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(uVar32);
  puVar9 = PTR_PTR_1126ae820;
  _objc_opt_new();
  func_0x00010c0d9840();
  puVar10 = PTR_PTR_1126ca170;
  _objc_alloc();
  uVar32 = param_18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_18;
  func_0x00010c29d360();
  uVar6 = param_18;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_18;
  func_0x00010bef6000();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_18;
  func_0x00010c282860();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_18;
  func_0x00010c0ea840();
  uVar11 = param_18;
  func_0x00010bef2040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_18;
  func_0x00010c2782c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_18;
  func_0x00010c118160();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_18;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_18;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_11;
  func_0x00010c23d860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_18;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cf20(puVar10,param_2,uVar32,puVar3,uVar29,uVar6,param_3,uVar34,uVar35,uVar37,uVar11
                      ,uVar12,uVar13,uVar14,param_7,param_8,param_16,uVar15,param_13,param_19,puVar9
                      ,uVar16,uVar17,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x18)
                      ,param_15);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar6);
  _objc_release(uVar32);
  uVar32 = param_8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar32;
  func_0x00010bf1f480();
  _objc_release(uVar32);
  ppuVar1 = &PTR_PTR_1126ca178;
  if ((int)uVar29 == 0) {
    ppuVar1 = &PTR_PTR_1126ca180;
  }
  puVar18 = *ppuVar1;
  _objc_alloc();
  uVar32 = param_18;
  func_0x00010bef6000(param_18);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + 0x18);
  uVar35 = *(undefined8 *)(param_1 + 0xf0);
  uVar29 = param_18;
  func_0x00010c0ea840();
  uVar6 = param_18;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff14a0(puVar18,param_2,puVar3,param_7,param_8,uVar32,uVar34,uVar35,puVar2,puVar7,
                      puVar4,param_33,param_36,param_20,puVar8,param_32,uVar29,uVar6,puVar10);
  uVar29 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar18;
  _objc_release(uVar29);
  _objc_release(uVar6);
  _objc_release(uVar32);
  puVar18 = PTR_PTR_1126ca188;
  _objc_alloc();
  uVar32 = param_18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_18;
  func_0x00010c29d360();
  uVar6 = param_18;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_18;
  func_0x00010bef6000();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = param_18;
  func_0x00010c282860();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_18;
  func_0x00010c0ea840();
  uVar11 = param_18;
  func_0x00010bef2040();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_18;
  func_0x00010bf9be80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_11;
  func_0x00010c23d860();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_11;
  func_0x00010c2782c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_18;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_18;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_18;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_18;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_18;
  func_0x00010c293260();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_18;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_11;
  func_0x00010c069380();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_18;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_18;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + 0xf0);
  uVar31 = *(undefined8 *)(param_1 + 0x18);
  uVar36 = *(undefined8 *)(param_1 + 0x40);
  uVar25 = param_18;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_18;
  func_0x00010c0feea0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_18;
  func_0x00010c1181e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_18;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cf00(puVar18,param_2,uVar32,puVar3,puVar10,uVar29,uVar6,param_3,uVar34,uVar35,
                      uVar37,uVar11,uVar12,uVar13,uVar14,uVar15,param_8,param_12,uVar16,uVar17,
                      uVar19,param_10,uVar20,param_14,uVar21,param_5,param_6,param_13,param_16,
                      param_15,param_17,uVar22,param_19,puVar9,param_20,param_21,uVar23,param_27,
                      param_28,uVar24,param_34,uVar30,puVar2,puVar4,uVar31,puVar7,uVar36,param_35,
                      param_37,param_39,param_40,param_41,uVar25,uVar26,uVar27,uVar28,param_48);
  _objc_release(param_48);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_37);
  _objc_release(param_35);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_21);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar6);
  _objc_release(uVar32);
  uVar32 = param_18;
  func_0x00010c29d360();
  uVar29 = param_18;
  func_0x00010bef6000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1580(param_1,param_2,puVar3,puVar18,puVar8,param_29,param_30,param_31,uVar32,
                      param_7,param_8,param_9,param_22,param_23,param_24,param_25,param_26,param_34,
                      param_32,uVar29,param_36,param_33,param_42,param_43,param_44,param_45,param_46
                      ,param_13,param_47);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_34);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_9);
  _objc_release(uVar29);
  if (param_1 != 0) {
    _objc_retain(puVar10);
    uVar32 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar10;
    _objc_release(uVar32);
  }
  _objc_release(puVar18);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10638330c; end: 1063838db; -[SCOperaPlaylistAdPlugin initWithAdDataSource:adSession:operaAdapter:adTrackEventRepository:adTrackEventRepositoryV2:adWebviewConfigRepository:viewLocation:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:layerViewControllerFactory:sendToScopeLauncher:conversationDestinationParser:textSender:notificationPool:adBrowserLifecycleService:adTrackFunnelEventTracker:adTrackerHelper:playbackSessionObservableRepository:trackSeqNumProvider:webBrowserLayerViewControllerFactory:adWebviewOperationEventRepository:userAdIdProvider:deckHierarchyFactory:userPreferences:circumstanceEngine:browserPrivacyConsentInfoManager:] */

undefined8 *
FUN_10638330c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126f10b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar1[10] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    puVar1[10] = param_9;
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[7];
    puVar1[7] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[9];
    puVar1[9] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0x15]);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_27;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_28);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x21];
    puVar1[0x21] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_29;
    _objc_release(uVar2);
    _objc_release(param_28);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063838dc; end: 106383903;  */

void FUN_1063838dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106383904; end: 106383b9f; -[SCOperaPlaylistAdPlugin beginObservationWithAdUnifiedEventObservableBus:] */

void FUN_106383904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef3260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1639c0(*(undefined8 *)(param_1 + 0x128),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bef1bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163000(*(undefined8 *)(param_1 + 0x128),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bef1b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162fe0(*(undefined8 *)(param_1 + 0x128),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bef2700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163420(*(undefined8 *)(param_1 + 0x128),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bef2720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163440(*(undefined8 *)(param_1 + 0x128),param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bf18580(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18580();
  _objc_release(uVar1);
  func_0x00010bf18580(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010bf18580(*(undefined8 *)(param_1 + 0x130),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18580();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18580();
  _objc_release(uVar1);
  func_0x00010bf18580(*(undefined8 *)(param_1 + 200),param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18580(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18580(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf90840();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18520(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106383ba0; end: 106383c1b; -[SCOperaPlaylistAdPlugin setEventListener:] */

void FUN_106383ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1 + 0xe0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    param_1 = param_1 + 0xe0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c197660(param_3,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106383c1c; end: 106383c23; -[SCOperaPlaylistAdPlugin setAdPlaybackConfig:] */

void FUN_106383c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c163e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x130),PTR_s_setAdPlaybackConfig__1126369a8);
  return;
}



/* Entry: 106383c24; end: 106383c2b; -[SCOperaPlaylistAdPlugin markAsCollectionViewAutoPlaySession] */

void FUN_106383c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_markAsCollectionViewAutoPlay_11260c630);
  return;
}



/* Entry: 106383c2c; end: 106383c87; -[SCOperaPlaylistAdPlugin setPlaylistItemController:] */

void FUN_106383c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xd8,param_3);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 8));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x130));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106383c88; end: 106383d57; -[SCOperaPlaylistAdPlugin setOperaControlling:] */

void FUN_106383c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0688c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d54a0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x130));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 8));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x128));
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0eb3e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd800(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + 0xe8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106383d58; end: 106383d7f; -[SCOperaPlaylistAdPlugin playlistDataSource] */

void FUN_106383d58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106383d80; end: 106383df7; -[SCOperaPlaylistAdPlugin updateOperaDependencies:] */

void FUN_106383d80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abe20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc3e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x100));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106383df8; end: 106383fb3; -[SCOperaPlaylistAdPlugin updateOperaConfiguration:] */

void FUN_106383df8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_3;
  func_0x00010bf61820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf61820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,lVar3);
    _objc_release(lVar3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0xc0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aba40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((*(ulong *)(param_1 + 0x50) < 0x28) &&
     ((1L << (*(ulong *)(param_1 + 0x50) & 0x3f) & 0x8050000800U) != 0)) {
    func_0x00010c2b5ea0(puVar4,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0f2240();
    if (lVar3 == 0) {
      func_0x00010c2b5480(puVar4,param_2,0xab);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  func_0x00010c2ad100(puVar4,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106383fb4; end: 106384003; -[SCOperaPlaylistAdPlugin didFinishOperaConfigurationSetup:] */

void FUN_106383fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1d5360(uVar1,param_2,param_3);
  func_0x00010c1d5360(*(undefined8 *)(param_1 + 0x130),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106384004; end: 1063840b3; -[SCOperaPlaylistAdPlugin addEventListenersWithEventAnnouncing:] */

void FUN_106384004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xe0,param_3);
  lVar2 = *(long *)(param_1 + 0x128);
  if (lVar2 != 0) {
    func_0x00010c127820(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18cc0();
    _objc_release(uVar1);
  }
  func_0x00010c197660(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c197680(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


