/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f1a804; end: 107f1a827; -[SCMemoriesBackupBitrateResult copyWithZone:] */

undefined8 FUN_107f1a804(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f1a828; end: 107f1a887; -[SCMemoriesBackupBitrateResult hash] */

long * FUN_107f1a828(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  plVar2 = &lStack_28;
  func_0x000100505190(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar4 = (long *)0x1;
  }
  else {
    plVar4 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar4 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar4);
      if ((((ulong)plVar3 & 1) == 0) || (plVar2[1] != param_3[1])) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(ulong)(plVar2[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 107f1a888; end: 107f1a91f; -[SCMemoriesBackupBitrateResult isEqual:] */

bool FUN_107f1a888(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f1a920; end: 107f1a927; -[SCMemoriesBackupBitrateResult status] */

undefined8 FUN_107f1a920(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f1a928; end: 107f1a92f; -[SCMemoriesBackupBitrateResult targetBitrate] */

undefined8 FUN_107f1a928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f1a930; end: 107f1a9b7;  */

void FUN_107f1a930(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107f1a9b8; end: 107f1adab; -[SCMemoriesSearchServiceProvider _createMemoriesSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1a9b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_1127716cc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar26;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar26);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107f1adac;
  puStack_78 = &UNK_110974680;
  puVar2 = PTR_PTR_1126ae720;
  lStack_70 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d85c8;
  _objc_alloc();
  lVar26 = param_1;
  FUN_107f1adb4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar26;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_107f1adb4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000107f1add8();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x000107f1adfc();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x000107f1ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x000107f1ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf0ab80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11277170c;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar21;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112771710;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar22;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_1127716ec;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar23;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_1127716f0;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar24;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_1127716f4;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar25;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112771720;
    _objc_loadWeakRetained();
  }
  lVar20 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008920(puVar3,param_2,lVar4,lVar6,lVar8,lVar10,puVar2,lVar12,lVar14,lVar15,lVar16,
                      lVar17,lVar18,lVar19,lVar20);
  _objc_release(lVar20);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar25);
  _objc_release(lVar18);
  _objc_release(lVar24);
  _objc_release(lVar17);
  _objc_release(lVar23);
  _objc_release(lVar16);
  _objc_release(lVar22);
  _objc_release(lVar15);
  _objc_release(lVar21);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar26);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f1adac; end: 107f1adb3;  */

void FUN_107f1adac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_requestManager_11262b160);
  return;
}



/* Entry: 107f1adb4; end: 107f1ae43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1adb4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127716d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f1ae44; end: 107f1b333; -[SCMemoriesSearchServiceProvider _createSearchIndexerWithMemoriesSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1ae44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
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
  
  puVar1 = PTR_PTR_1126d85d0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  FUN_107f1adb4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_1127716d0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar28;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_1127716e4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar29;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000107f1add8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_107f1adb4();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000107f1adfc();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_1127716e0;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar30;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_112771704;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar31;
  func_0x00010bf06440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_112771708;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar32;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_1127716c8;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar33;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000107f1ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000107f1ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf0ab80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf39940();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_1127716f8;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar34;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_1127716fc;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar35;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_112771700;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar36;
  func_0x00010c0ca040();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf9f1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bf9f1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010bf9f280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008840(puVar1,param_2,lVar3,lVar4,lVar5,lVar7,param_3,lVar9,lVar11,lVar12,lVar13,
                      lVar14,lVar15,lVar17,lVar19,lVar21,lVar22,lVar23,lVar24,lVar26,lVar27);
  _objc_release(param_3);
  _objc_release(lVar27);
  _objc_release(param_1);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar36);
  _objc_release(lVar23);
  _objc_release(lVar35);
  _objc_release(lVar22);
  _objc_release(lVar34);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar33);
  _objc_release(lVar14);
  _objc_release(lVar32);
  _objc_release(lVar13);
  _objc_release(lVar31);
  _objc_release(lVar12);
  _objc_release(lVar30);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar29);
  _objc_release(lVar4);
  _objc_release(lVar28);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f1b334; end: 107f1b433; -[SCMemoriesSearchServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b334(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_1127716c0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06f880();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  lVar3 = (long)_DAT_1127716c4;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06f880();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  puStack_38 = PTR_PTR_1126fbae0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f1b434; end: 107f1b453; -[SCMemoriesSearchServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b434(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112771714);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f1b454; end: 107f1b467; -[SCMemoriesSearchServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b454(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112771714,param_3);
  return;
}



/* Entry: 107f1b468; end: 107f1b487; -[SCMemoriesSearchServiceProvider faceTaggingDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b468(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112771718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f1b488; end: 107f1b49b; -[SCMemoriesSearchServiceProvider setFaceTaggingDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b488(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112771718,param_3);
  return;
}



/* Entry: 107f1b49c; end: 107f1b4bb; -[SCMemoriesSearchServiceProvider faceTaggingPermissionsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b49c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277171c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f1b4bc; end: 107f1b4cf; -[SCMemoriesSearchServiceProvider setFaceTaggingPermissionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277171c,param_3);
  return;
}



/* Entry: 107f1b4d0; end: 107f1b61b; -[SCMemoriesSearchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f1b4d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112771720);
  _objc_destroyWeak(param_1 + _DAT_11277171c);
  _objc_destroyWeak(param_1 + _DAT_112771718);
  _objc_destroyWeak(param_1 + _DAT_112771714);
  _objc_destroyWeak(param_1 + _DAT_112771710);
  _objc_destroyWeak(param_1 + _DAT_11277170c);
  _objc_destroyWeak(param_1 + _DAT_112771708);
  _objc_destroyWeak(param_1 + _DAT_112771704);
  _objc_destroyWeak(param_1 + _DAT_112771700);
  _objc_destroyWeak(param_1 + _DAT_1127716fc);
  _objc_destroyWeak(param_1 + _DAT_1127716f8);
  _objc_destroyWeak(param_1 + _DAT_1127716f4);
  _objc_destroyWeak(param_1 + _DAT_1127716f0);
  _objc_destroyWeak(param_1 + _DAT_1127716ec);
  _objc_destroyWeak(param_1 + _DAT_1127716e8);
  _objc_destroyWeak(param_1 + _DAT_1127716e4);
  _objc_destroyWeak(param_1 + _DAT_1127716e0);
  _objc_destroyWeak(param_1 + _DAT_1127716dc);
  _objc_destroyWeak(param_1 + _DAT_1127716d8);
  _objc_destroyWeak(param_1 + _DAT_1127716d4);
  _objc_destroyWeak(param_1 + _DAT_1127716d0);
  _objc_destroyWeak(param_1 + _DAT_1127716cc);
  _objc_destroyWeak(param_1 + _DAT_1127716c8);
  _objc_destroyWeak(param_1 + _DAT_1127716c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127716c0);
  return;
}



/* Entry: 107f1b61c; end: 107f1b68f; -[SCGalleryDatetimeIndexer initWithEncryptedDatabase:] */

undefined1 * FUN_107f1b61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbae8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f1b690; end: 107f1b70f; -[SCGalleryDatetimeIndexer dateStringForSnapCreationDate:] */

void FUN_107f1b690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  func_0x00010c189b60(lVar1,param_2,&PTR____CFConstantStringClassReference_110e126d8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25d400(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f1b710; end: 107f1bc2b; -[SCGalleryDatetimeIndexer resultsForSnap:] */

void FUN_107f1b710(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar10);
    puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
    func_0x00010c026a60();
    func_0x00010c1bf3e0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar1);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar10);
  }
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c26fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d480();
  _objc_release(lVar2);
  func_0x00010c215860(*(undefined8 *)(param_1 + 0x10));
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c189b60(*(undefined8 *)(param_1 + 0x10));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25d400(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(uVar10);
  func_0x00010c189b60(*(undefined8 *)(param_1 + 0x10));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25d400(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(uVar10);
  func_0x00010c189b60(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  uVar5 = uVar4;
  func_0x00010c0720c0();
  if (((uVar5 & 1) != 0) || (uVar5 = uVar4, func_0x00010c0720c0(), (int)uVar5 != 0)) {
    func_0x00010befa120(puVar3);
  }
  func_0x00010c189b60(*(undefined8 *)(param_1 + 0x10));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25d400(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  lVar2 = param_1;
  func_0x00010becbf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar10);
  lVar2 = param_3;
  func_0x00010bfd89e0();
  if ((int)lVar2 != 0) {
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_107f1bc2c;
    uStack_100 = 0x107f1bc3c;
    uStack_f8 = 0;
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135bc0(uVar10);
    _objc_release(lVar2);
    _objc_release(uVar10);
    func_0x00010bf51c80(puStack_118[5]);
    lVar2 = param_1;
    func_0x00010be9ca60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
  }
  puVar6 = PTR_PTR_1126d85d8;
  func_0x00010bfe3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189b60(*(undefined8 *)(param_1 + 0x10));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25d400(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar8);
        }
        func_0x00010befa120(puVar3);
        puVar11 = puVar11 + 1;
      } while (puVar7 != puVar11);
      puVar7 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
  }
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 107f1bc2c; end: 107f1bc43;  */

void FUN_107f1bc2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f1bc44; end: 107f1bc7b;  */

void FUN_107f1bc44(long param_1,undefined8 param_2)

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



/* Entry: 107f1bc7c; end: 107f1bfbf; -[SCGalleryDatetimeIndexer _seasonNamesForDate:isInNorthernHemisphere:] */

undefined ** FUN_107f1bc7c(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf44640(uVar2,param_2,0x1c,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c2bedc0();
  func_0x00010c1c8fc0(uVar2,param_2,1);
  func_0x00010c189d40(uVar2,param_2,1);
  func_0x00010c2278a0(uVar2,param_2,uVar8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf650e0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fc0(uVar2,param_2,3);
  func_0x00010c189d40(uVar2,param_2,0x15);
  func_0x00010c2278a0(uVar2,param_2,uVar8);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf650e0(uVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fc0(uVar2,param_2,6);
  func_0x00010c189d40(uVar2,param_2,0x15);
  func_0x00010c2278a0(uVar2,param_2,uVar8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf650e0(uVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fc0(uVar2,param_2,9);
  func_0x00010c189d40(uVar2,param_2,0x17);
  func_0x00010c2278a0(uVar2,param_2,uVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf650e0(uVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fc0(uVar2,param_2,0xc);
  func_0x00010c189d40(uVar2,param_2,0x16);
  func_0x00010c2278a0(uVar2,param_2,uVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf650e0(uVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fc0(uVar2,param_2,0xc);
  func_0x00010c189d40(uVar2,param_2,0x1f);
  func_0x00010c2278a0(uVar2,param_2,uVar8);
  func_0x00010c1a9320(uVar2,param_2,0x17);
  func_0x00010c1c8500(uVar2,param_2,0x3b);
  func_0x00010c1f8e00(uVar2,param_2,0x3b);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf650e0(uVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010be3f780(param_1,param_2,param_3,uVar3,uVar4);
  if (param_4 == 0) {
    if (((uVar9 & 1) != 0) ||
       (uVar9 = param_1, func_0x00010be3f780(param_1,param_2,param_3,uVar7,uVar8), (uVar9 & 1) != 0)
       ) {
      ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111181d60;
      goto LAB_107f1bf60;
    }
    uVar9 = param_1;
    func_0x00010be3f780(param_1,param_2,param_3,uVar4,uVar5);
    if ((uVar9 & 1) != 0) {
      ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111181d78;
      goto LAB_107f1bf60;
    }
    func_0x00010be3f780(param_1,param_2,param_3,uVar5,uVar6);
    iVar1 = (int)param_1;
    ppuVar10 = &PTR__OBJC_CLASS___NSConstantArray_111181da8;
    ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111181d90;
  }
  else {
    if (((uVar9 & 1) != 0) ||
       (uVar9 = param_1, func_0x00010be3f780(param_1,param_2,param_3,uVar7,uVar8), (uVar9 & 1) != 0)
       ) {
      ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111181d00;
      goto LAB_107f1bf60;
    }
    uVar9 = param_1;
    func_0x00010be3f780(param_1,param_2,param_3,uVar4,uVar5);
    if ((uVar9 & 1) != 0) {
      ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111181d18;
      goto LAB_107f1bf60;
    }
    func_0x00010be3f780(param_1,param_2,param_3,uVar5,uVar6);
    iVar1 = (int)param_1;
    ppuVar10 = &PTR__OBJC_CLASS___NSConstantArray_111181d48;
    ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111181d30;
  }
  if (iVar1 == 0) {
    ppuVar11 = ppuVar10;
  }
LAB_107f1bf60:
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return ppuVar11;
}



/* Entry: 107f1bfc0; end: 107f1c067; -[SCGalleryDatetimeIndexer _isDate:betweenStartDate:endDate:] */

bool FUN_107f1bfc0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf433a0(param_3,param_2,param_4);
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_4;
    func_0x00010bf433a0(param_4,param_2,param_3);
    if (lVar2 == -1) {
      lVar2 = param_3;
      func_0x00010bf433a0(param_3,param_2,param_5);
      bVar1 = lVar2 == -1;
    }
    else {
      bVar1 = false;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f1c068; end: 107f1c19b; -[SCGalleryDatetimeIndexer _timeOfDayForHour:] */

void FUN_107f1c068(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 4U < 8) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec57d8;
LAB_107f1c0a4:
    func_0x00010befa120(puVar1,param_2,ppuVar3);
    if (param_3 - 1U < 6) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ec58b8;
    }
    else {
LAB_107f1c150:
      if (0xffffffffffffffea < param_3 - 0x16U) goto LAB_107f1c16c;
LAB_107f1c15c:
      ppuVar3 = &PTR____CFConstantStringClassReference_110ec58d8;
    }
  }
  else if (param_3 == 0xc) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec57f8;
  }
  else if (param_3 - 0xdU < 4) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec5818;
  }
  else {
    if (1 < param_3 - 0x11U) {
      if (param_3 < 0x13) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ec5898;
        goto LAB_107f1c0a4;
      }
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec5858);
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec5878);
      if (0xffffffffffffffec < param_3 - 0x17U) goto LAB_107f1c150;
      func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec5898);
      goto LAB_107f1c15c;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110ec5838;
  }
  func_0x00010befa120(puVar1,param_2,ppuVar3);
LAB_107f1c16c:
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f1c19c; end: 107f1c1a3; -[SCGalleryDatetimeIndexer shouldBlockUpload] */

undefined8 FUN_107f1c19c(void)

{
  return 0;
}



/* Entry: 107f1c1a4; end: 107f1c1f7; +[SCGalleryDatetimeIndexer holidayMap] */

void FUN_107f1c1a4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728498 != -1) {
    func_0x00010002a2fc(0x113728498,&PTR___NSConcreteGlobalBlock_110a13510);
  }
  uVar1 = uRam0000000113728490;
  _objc_retain(uRam0000000113728490);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f1c1f8; end: 107f1c30f;  */

void FUN_107f1c1f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  uVar1 = puRam0000000113728490;
  puRam0000000113728490 = PTR____NSDictionary0__struct_11034ab58;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc2ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lStack_48 = 0;
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar4,2,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar6 == 0) {
    lStack_50 = 0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,1,&lStack_50)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lStack_50;
    _objc_retain(lStack_50);
    puVar2 = puRam0000000113728490;
    puRam0000000113728490 = puVar5;
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(lVar6);
  return;
}



/* Entry: 107f1c310; end: 107f1c363; +[SCGalleryDatetimeIndexer timeParserDateFormatter] */

void FUN_107f1c310(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137284a0 != -1) {
    func_0x00010002a2fc(0x1137284a0,&PTR___NSConcreteGlobalBlock_110a13530);
  }
  uVar1 = uRam00000001137284a8;
  _objc_retain(uRam00000001137284a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f1c364; end: 107f1c3df;  */

void FUN_107f1c364(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  uVar1 = puRam00000001137284a8;
  puRam00000001137284a8 = puVar2;
  _objc_release(uVar1);
  puVar2 = puRam00000001137284a8;
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c189b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puRam00000001137284a8,PTR_s_setDateFormat__1126400f8,
             &PTR____CFConstantStringClassReference_110ec5918);
  return;
}



/* Entry: 107f1c3e0; end: 107f1c41b; -[SCGalleryDatetimeIndexer .cxx_destruct] */

void FUN_107f1c3e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f1c41c; end: 107f1c4cf; -[SCGalleryGeolocationIndexer initWithPerformer:] */

undefined1 * FUN_107f1c41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbaf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___CLGeocoder_1126c1820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f1c4d0; end: 107f1c65b; -[SCGalleryGeolocationIndexer geoTagsForLocation:queue:completionHandler:] */

void FUN_107f1c4d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_107f49238(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107f1c65c;
  puStack_90 = &UNK_110857fd0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_a8;
  uStack_78 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  func_0x00010c0f7fc0(uVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f1c65c; end: 107f1c717;  */

void FUN_107f1c65c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107f1c718;
    puStack_60 = &UNK_11086f388;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar2;
    _objc_retain(uVar4);
    lStack_50 = lVar3;
    uStack_48 = uVar4;
    func_0x00010c140060(uVar5,param_2,uVar1,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 107f1c718; end: 107f1c8e3;  */

void FUN_107f1c718(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be1c780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be36b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x107f1c8fc;
    puStack_b8 = &UNK_1108465d0;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_a0 = 0;
    uStack_b0 = uVar2;
    uStack_a8 = uVar3;
    uStack_98 = uVar5;
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010007380c(uVar4,&puStack_d0);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_98);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107f1c8e4;
    puStack_78 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_68 = uVar3;
    _objc_retain(param_3);
    lStack_70 = param_3;
    func_0x00010007380c(uVar2,&puStack_90);
    _objc_release(lStack_70);
    param_2 = uStack_68;
  }
  _objc_release(param_2);
  func_0x00010c0f7fc0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  _objc_release(param_3);
  return;
}



/* Entry: 107f1c8e4; end: 107f1c923;  */

void FUN_107f1c8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f1c8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f1c924; end: 107f1caaf; -[SCGalleryGeolocationIndexer addressTitleForLocation:queue:completionHandler:] */

void FUN_107f1c924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_107f49238(param_3);
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107f1cab0;
  puStack_90 = &UNK_110857fd0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_a8;
  uStack_78 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  func_0x00010c0f7fc0(uVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f1cab0; end: 107f1cb6b;  */

void FUN_107f1cab0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107f1cb6c;
    puStack_60 = &UNK_11086f388;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar2;
    _objc_retain(uVar4);
    lStack_50 = lVar3;
    uStack_48 = uVar4;
    func_0x00010c140060(uVar5,param_2,uVar1,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 107f1cb6c; end: 107f1ccff;  */

void FUN_107f1cb6c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 == 0) {
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bdc9260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x107f1cd14;
    puStack_a0 = &UNK_11084a9e8;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uStack_90 = 0;
    uStack_98 = uVar2;
    uStack_88 = uVar4;
    _objc_retain(uVar2);
    func_0x00010007380c(uVar3,&puStack_b8);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_88);
    _objc_release(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107f1cd00;
    puStack_68 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    _objc_retain(param_3);
    lStack_60 = param_3;
    func_0x00010007380c(uVar2,&puStack_80);
    _objc_release(lStack_60);
    param_2 = uStack_58;
  }
  _objc_release(param_2);
  func_0x00010c0f7fc0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  _objc_release(param_3);
  return;
}



/* Entry: 107f1cd00; end: 107f1cd3b;  */

void FUN_107f1cd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f1cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f1cd3c; end: 107f1cd9f; -[SCGalleryGeolocationIndexer _dequeueGeoRequestIfNecessary] */

void FUN_107f1cd3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 107f1cda0; end: 107f1cdf7; -[SCGalleryGeolocationIndexer _enqueueGeoRequestIfNecessary:] */

void FUN_107f1cda0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retainBlock(param_3);
    func_0x00010c066b00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000107f1cdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 107f1cdf8; end: 107f1d0ef; -[SCGalleryGeolocationIndexer _geoTagsFromPlacemark:] */

void FUN_107f1cdf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar2 = param_3;
  func_0x00010bf53220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf53220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010befdc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010befdc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d23d8;
    func_0x00010c28fc20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010befa120(puVar1,param_2,lVar2);
    }
    else {
      puVar4 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c25e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c25e360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c09e300(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c25e6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c25e6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c26d3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c26d3c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c105600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c105600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c065320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c065320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar3 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f1d0f0; end: 107f1d193; -[SCGalleryGeolocationIndexer _iconicPlaceNameForLocation:] */

void FUN_107f1d0f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c09e300(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c25e6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = lVar2;
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010c25e6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107f1d194; end: 107f1d337; -[SCGalleryGeolocationIndexer _addressTitleFromPlacemark:] */

void FUN_107f1d194(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c09e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c25e360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c25e6a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = param_3;
        func_0x00010c25e6a0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c25e360();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c09e300();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010befdc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar3 = param_3;
    func_0x00010bf53220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010bf53220();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010befdc80();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar4,param_2,lVar2);
  }
  if (lVar1 != 0) {
    func_0x00010befa120(puVar4,param_2,lVar1);
  }
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar4;
    func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f1d338; end: 107f1d38b; +[SCGalleryGeolocationIndexer usStateFullNameMap] */

void FUN_107f1d338(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137284b8 != -1) {
    func_0x00010002a2fc(0x1137284b8,&PTR___NSConcreteGlobalBlock_110a13550);
  }
  uVar1 = uRam00000001137284b0;
  _objc_retain(uRam00000001137284b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f1d38c; end: 107f1d3a3;  */

void FUN_107f1d38c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137284b0;
  ppuRam00000001137284b0 = &PTR__OBJC_CLASS___NSConstantDictionary_111174d10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f1d3a4; end: 107f1d3ab; -[SCGalleryGeolocationIndexer shouldBlockUpload] */

undefined8 FUN_107f1d3a4(void)

{
  return 0;
}



/* Entry: 107f1d3ac; end: 107f1d3e7; -[SCGalleryGeolocationIndexer .cxx_destruct] */

void FUN_107f1d3ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f1d3e8; end: 107f1d8db; -[SCGalleryMetadataIndexer resultsForSnap:dataObjectContext:] */

void FUN_107f1d3e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar2 = param_3;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
LAB_107f1d534:
    uStack_70 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uStack_70 == 0) goto LAB_107f1d534;
    uVar2 = uStack_70;
    func_0x00010b5f7138();
    if ((int)uVar2 != 0x73) {
      uVar2 = uStack_70;
      func_0x00010b5f7310();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 != 0) {
        func_0x00010befa120(puVar1);
      }
      uVar3 = uStack_70;
      func_0x00010b5f723c(uStack_70);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  puVar4 = PTR_PTR_1126bc7b8;
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010be70520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010befa160(puVar1);
  puVar6 = puVar4;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c08fa60();
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar10 != (undefined *)0x0) {
    func_0x00010befa120(puVar1);
  }
  puVar6 = puVar4;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c25dde0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = puVar4;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar12 != (undefined *)0x0) goto LAB_107f1d6e0;
  }
  else {
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
LAB_107f1d6e0:
    func_0x00010befa120(puVar1);
  }
  puVar6 = puVar4;
  func_0x00010c0ef4a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be70540(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010befa160(puVar1);
  uVar2 = param_3;
  func_0x00010b5fa088();
  switch(uVar2) {
  case 0:
  case 3:
  case 4:
  case 7:
  case 9:
    break;
  case 1:
    break;
  case 2:
  case 5:
  case 6:
  case 8:
  case 10:
    func_0x00010befa120(puVar1);
    break;
  case 0xb:
  case 0xc:
    break;
  default:
    goto LAB_107f1d7a4;
  }
  func_0x00010befa120(puVar1);
LAB_107f1d7a4:
  puVar6 = puVar4;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf10220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar6);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010befa120(puVar1);
  }
  puVar6 = puVar4;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar4;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c111620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar9 == (undefined *)0x0) goto LAB_107f1d868;
  }
  else {
    _objc_release();
    _objc_release(puVar6);
  }
  func_0x00010befa120(puVar1);
LAB_107f1d868:
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f1d8dc; end: 107f1da8b; -[SCGalleryMetadataIndexer _parseSnapStickers:] */

undefined * FUN_107f1d8dc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  double dVar15;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
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
  ppuVar3 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_3;
  func_0x00010bf529e0();
  if (ppuVar13 != (undefined **)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    ppuVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    if (ppuVar3 != (undefined **)0x0) {
      lVar12 = *plStack_120;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          lVar11 = *(long *)(lStack_128 + (long)ppuVar13 * 8);
          lVar4 = lVar11;
          func_0x00010bf8e2c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            func_0x00010bf8e2c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_2,lVar11);
            _objc_release(lVar11);
            func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110e88d38);
          }
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar3 != ppuVar13);
        ppuVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e6a4d8;
    func_0x00010befa120(puVar2);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar3;
  func_0x00010c2a04a0();
  if ((((ppuVar13 == (undefined **)0x0) &&
       (ppuVar13 = ppuVar3, func_0x00010bfedcc0(), ppuVar13 == (undefined **)0x0)) &&
      (ppuVar13 = ppuVar3, func_0x00010c249dc0(), ppuVar13 == (undefined **)0x0)) &&
     (ppuVar13 = ppuVar3, func_0x00010c140160(), ((ulong)ppuVar13 & 1) == 0)) {
    ppuVar13 = ppuVar3;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar13 != (undefined **)0x0) ||
       (ppuVar6 = ppuVar3, func_0x00010c297cc0(), (int)ppuVar6 != 0)) {
      _objc_release(ppuVar13);
      goto LAB_107f1db40;
    }
    ppuVar13 = ppuVar3;
    func_0x00010c25bfc0();
    if (((ulong)ppuVar13 & 1) != 0) goto LAB_107f1db40;
  }
  else {
LAB_107f1db40:
    ppuVar13 = ppuVar3;
    func_0x00010c2a04a0();
    if (ppuVar13 == (undefined **)0x43b981ab) {
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec6598);
    }
    ppuVar13 = ppuVar3;
    func_0x00010bfedcc0();
    if (ppuVar13 != (undefined **)0x0) {
      dVar15 = 0.0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      ppuVar13 = ppuVar3;
      func_0x00010bfedce0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar13;
      func_0x00010bf52a60();
      if (ppuVar6 != (undefined **)0x0) {
        lVar12 = *plStack_260;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            if (*plStack_260 != lVar12) {
              _objc_enumerationMutation(ppuVar13);
            }
            ppuVar9 = *(undefined ***)(lStack_268 + (long)ppuVar14 * 8);
            ppuVar7 = ppuVar9;
            func_0x00010c27dde0();
            ppuVar8 = ppuVar3;
            func_0x00010bfedcc0();
            if (ppuVar7 == ppuVar8) {
              _objc_retain(ppuVar9);
              goto LAB_107f1dc2c;
            }
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          } while (ppuVar6 != ppuVar14);
          ppuVar6 = ppuVar13;
          func_0x00010bf52a60(ppuVar13,param_2,&uStack_270,auStack_228,0x10);
        } while (ppuVar6 != (undefined **)0x0);
      }
      ppuVar9 = (undefined **)0x0;
LAB_107f1dc2c:
      _objc_release(ppuVar13);
      ppuVar13 = ppuVar9;
      func_0x00010c27dde0();
      ppuVar6 = ppuVar9;
      if (ppuVar13 == (undefined **)0x73b7c3d4) {
        func_0x00010c2a2c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec65b8);
        ppuVar13 = ppuVar6;
        func_0x00010bf9fa60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar13;
        func_0x00010c067ec0();
        _objc_release(ppuVar13);
        uVar10 = (uint)ppuVar14;
        if ((int)uVar10 < 0x56) {
          if ((int)uVar10 < 0x47) {
            if ((int)uVar10 < 0x20) {
              ppuVar13 = &PTR____CFConstantStringClassReference_110ec65f8;
            }
            else {
              if (0x22 < uVar10) goto LAB_107f1de3c;
              ppuVar13 = &PTR____CFConstantStringClassReference_110ec6618;
            }
          }
          else {
            ppuVar13 = &PTR____CFConstantStringClassReference_110e43578;
          }
        }
        else {
          ppuVar13 = &PTR____CFConstantStringClassReference_110ec65d8;
        }
        goto LAB_107f1de34;
      }
      ppuVar13 = ppuVar9;
      func_0x00010c27dde0();
      if (ppuVar13 == (undefined **)0x4b70827) {
        func_0x00010c249ca0(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec6638);
        ppuVar13 = ppuVar6;
        func_0x00010c249ca0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(ppuVar13);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110e29f18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        if (dVar15 <= 50.0) {
          bVar1 = false;
          if ((0.1 < dVar15) && (bVar1 = false, !NAN(dVar15))) {
            bVar1 = dVar15 < 5.0;
          }
          if (bVar1) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110ec6678;
            goto LAB_107f1de34;
          }
        }
        else {
          ppuVar13 = &PTR____CFConstantStringClassReference_110ec6658;
LAB_107f1de34:
          func_0x00010befa120(puVar2,param_2,ppuVar13);
        }
LAB_107f1de3c:
        _objc_release(ppuVar6);
      }
      else {
        ppuVar13 = ppuVar9;
        func_0x00010c27dde0();
        if (ppuVar13 == (undefined **)0x1fe7ae) {
          ppuVar13 = ppuVar9;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar13;
          func_0x00010c27dde0();
          _objc_release(ppuVar13);
          if (ppuVar6 == (undefined **)0x274acd) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110ec6698;
          }
          else {
            ppuVar13 = &PTR____CFConstantStringClassReference_110ec66b8;
          }
LAB_107f1de8c:
          func_0x00010befa120(puVar2,param_2,ppuVar13);
        }
        else {
          ppuVar13 = ppuVar9;
          func_0x00010c27dde0();
          if (ppuVar13 == (undefined **)0xffffffffa8093aa2) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110ec66d8;
            goto LAB_107f1de8c;
          }
          ppuVar13 = ppuVar9;
          func_0x00010c27dde0();
          if (ppuVar13 == (undefined **)0x170d39ed) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110ec66f8;
            goto LAB_107f1de8c;
          }
          ppuVar13 = ppuVar9;
          func_0x00010c27dde0();
          if (ppuVar13 == (undefined **)0x4dc724f) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110ec6718;
            goto LAB_107f1de8c;
          }
        }
      }
      _objc_release(ppuVar9);
    }
    ppuVar13 = ppuVar3;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar13 = ppuVar3;
      func_0x00010bfc1340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar13;
      func_0x00010bf529e0();
      _objc_release(ppuVar13);
      if (ppuVar6 != (undefined **)0x0) goto LAB_107f1dee0;
    }
    else {
      _objc_release();
LAB_107f1dee0:
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec6738);
    }
    func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a498);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    return (undefined *)0x0;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 107f1da8c; end: 107f1df6f; -[SCGalleryMetadataIndexer _parseSnapFilter:] */

undefined * FUN_107f1da8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2a04a0();
  if ((((uVar3 == 0) && (uVar3 = param_3, func_0x00010bfedcc0(), uVar3 == 0)) &&
      (uVar3 = param_3, func_0x00010c249dc0(), uVar3 == 0)) &&
     (uVar3 = param_3, func_0x00010c140160(), (uVar3 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 == 0) && (uVar4 = param_3, func_0x00010c297cc0(), (int)uVar4 == 0)) {
      uVar3 = param_3;
      func_0x00010c25bfc0();
      if ((uVar3 & 1) == 0) goto LAB_107f1df00;
    }
    else {
      _objc_release(uVar3);
    }
  }
  uVar3 = param_3;
  func_0x00010c2a04a0();
  if (uVar3 == 0x43b981ab) {
    func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec6598);
  }
  uVar3 = param_3;
  func_0x00010bfedcc0();
  if (uVar3 != 0) {
    dVar13 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uVar3 = param_3;
    func_0x00010bfedce0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar11 = *plStack_130;
      do {
        uVar12 = 0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(uVar3);
          }
          uVar9 = *(ulong *)(lStack_138 + uVar12 * 8);
          uVar5 = uVar9;
          func_0x00010c27dde0();
          uVar6 = param_3;
          func_0x00010bfedcc0();
          if (uVar5 == uVar6) {
            _objc_retain(uVar9);
            goto LAB_107f1dc2c;
          }
          uVar12 = uVar12 + 1;
        } while (uVar4 != uVar12);
        uVar4 = uVar3;
        func_0x00010bf52a60(uVar3,param_2,&uStack_140,auStack_f8,0x10);
      } while (uVar4 != 0);
    }
    uVar9 = 0;
LAB_107f1dc2c:
    _objc_release(uVar3);
    uVar3 = uVar9;
    func_0x00010c27dde0();
    uVar4 = uVar9;
    if (uVar3 == 0x73b7c3d4) {
      func_0x00010c2a2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec65b8);
      uVar3 = uVar4;
      func_0x00010bf9fa60();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x00010c067ec0();
      _objc_release(uVar3);
      uVar10 = (uint)uVar12;
      if ((int)uVar10 < 0x56) {
        if ((int)uVar10 < 0x47) {
          if ((int)uVar10 < 0x20) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110ec65f8;
          }
          else {
            if (0x22 < uVar10) goto LAB_107f1de3c;
            ppuVar8 = &PTR____CFConstantStringClassReference_110ec6618;
          }
        }
        else {
          ppuVar8 = &PTR____CFConstantStringClassReference_110e43578;
        }
      }
      else {
        ppuVar8 = &PTR____CFConstantStringClassReference_110ec65d8;
      }
      goto LAB_107f1de34;
    }
    uVar3 = uVar9;
    func_0x00010c27dde0();
    if (uVar3 == 0x4b70827) {
      func_0x00010c249ca0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec6638);
      uVar3 = uVar4;
      func_0x00010c249ca0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar3);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e29f18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar7);
      _objc_release(puVar7);
      if (dVar13 <= 50.0) {
        bVar1 = false;
        if ((0.1 < dVar13) && (bVar1 = false, !NAN(dVar13))) {
          bVar1 = dVar13 < 5.0;
        }
        if (bVar1) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110ec6678;
          goto LAB_107f1de34;
        }
      }
      else {
        ppuVar8 = &PTR____CFConstantStringClassReference_110ec6658;
LAB_107f1de34:
        func_0x00010befa120(puVar2,param_2,ppuVar8);
      }
LAB_107f1de3c:
      _objc_release(uVar4);
    }
    else {
      uVar3 = uVar9;
      func_0x00010c27dde0();
      if (uVar3 == 0x1fe7ae) {
        uVar3 = uVar9;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c27dde0();
        _objc_release(uVar3);
        if (uVar4 == 0x274acd) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110ec6698;
        }
        else {
          ppuVar8 = &PTR____CFConstantStringClassReference_110ec66b8;
        }
LAB_107f1de8c:
        func_0x00010befa120(puVar2,param_2,ppuVar8);
      }
      else {
        uVar3 = uVar9;
        func_0x00010c27dde0();
        if (uVar3 == 0xffffffffa8093aa2) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110ec66d8;
          goto LAB_107f1de8c;
        }
        uVar3 = uVar9;
        func_0x00010c27dde0();
        if (uVar3 == 0x170d39ed) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110ec66f8;
          goto LAB_107f1de8c;
        }
        uVar3 = uVar9;
        func_0x00010c27dde0();
        if (uVar3 == 0x4dc724f) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110ec6718;
          goto LAB_107f1de8c;
        }
      }
    }
    _objc_release(uVar9);
  }
  uVar3 = param_3;
  func_0x00010bfc1320();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar4 != 0) goto LAB_107f1dee0;
  }
  else {
    _objc_release();
LAB_107f1dee0:
    func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110ec6738);
  }
  func_0x00010befa120(puVar2,param_2,&PTR____CFConstantStringClassReference_110e6a498);
LAB_107f1df00:
  puVar7 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 107f1df70; end: 107f1df77; -[SCGalleryMetadataIndexer shouldBlockUpload] */

undefined8 FUN_107f1df70(void)

{
  return 0;
}



/* Entry: 107f1df78; end: 107f1e2c3; -[SCGallerySearchDataSynchronizer initWithMemoriesSearchDatabase:searchIndexer:cloudSync:profile:keyService:dataObjectContext:docObjectContext:circumstanceEngine:snapInfoFetcher:grapheneRegistry:] */

undefined8 *
FUN_107f1df78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126fbaf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bf788;
    _objc_alloc();
    func_0x00010c017ba0();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x000108ec1ed4();
    puVar1[0x13] = uVar2;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000108ec1e98(param_10);
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(0x41d9648020000000);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 107f1e2c4; end: 107f1e2cb; -[SCGallerySearchDataSynchronizer dedicatedQueue] */

void FUN_107f1e2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 107f1e2cc; end: 107f1e35f; -[SCGallerySearchDataSynchronizer runWithServiceTerm:] */

void FUN_107f1e2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      func_0x00010becef40(param_1,param_2,1,param_3);
    }
    else if (lVar1 == 1) {
      func_0x00010be14560(param_1,param_2,param_3);
    }
  }
  else if (lVar1 == 2) {
    func_0x00010be11d40(param_1,param_2,param_3);
  }
  else if (lVar1 == 3) {
    func_0x00010be38f40(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f1e360; end: 107f1e46b; -[SCGallerySearchDataSynchronizer _fullySyncedNotifier:] */

void FUN_107f1e360(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c3c40;
  func_0x00010c14fbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3c30;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dcd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c3c38;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be19df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x4020000000000000);
  return;
}



/* Entry: 107f1e46c; end: 107f1e473; -[SCGallerySearchDataSynchronizer defaultImmediateNotifier] */

void FUN_107f1e46c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be19df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4020000000000000,param_1,PTR_s__fullySyncedNotifier__112564118);
  return;
}



/* Entry: 107f1e474; end: 107f1e47f; -[SCGallerySearchDataSynchronizer defaultLongRunningNotifier] */

void FUN_107f1e474(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be19df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x407e000000000000,param_1,PTR_s__fullySyncedNotifier__112564118);
  return;
}



/* Entry: 107f1e480; end: 107f1e50f; -[SCGallerySearchDataSynchronizer _transitToState:serviceTerm:] */

void FUN_107f1e480(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_3 - 1U < 3) {
    *(long *)(param_1 + 0x50) = param_3;
    param_1 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) goto LAB_107f1e4fc;
    *(undefined8 *)(param_1 + 0x50) = 0;
    func_0x00010bf69ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf95760(param_4,param_2,param_1);
  _objc_release(param_1);
LAB_107f1e4fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f1e510; end: 107f1e7fb; -[SCGallerySearchDataSynchronizer _fetchSnapsWithServiceTerm:] */

void FUN_107f1e510(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_680 [8];
  undefined1 auStack_678 [8];
  undefined8 uStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  code *pcStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_4c0;
  undefined **ppuStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  undefined *puStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  code *pcStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined1 auStack_370 [8];
  long lStack_368;
  undefined1 uStack_360;
  undefined1 auStack_358 [8];
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_288;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010c0bc420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126af4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = param_3;
  if (lVar18 == 0) {
    func_0x00010bfa9820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa9160();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar4);
  puVar6 = puVar4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar18 = *plStack_1a0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar18) {
          _objc_enumerationMutation(puVar4);
        }
        puVar7 = PTR_PTR_1126af4d0;
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7380();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(puVar7);
        puVar8 = puVar7;
        func_0x00010bf52a60();
        if (puVar8 != (undefined *)0x0) {
          lVar1 = *plStack_1e0;
          do {
            puVar16 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar1) {
                _objc_enumerationMutation(puVar7);
              }
              func_0x00010befa120(puVar5);
              puVar16 = puVar16 + 1;
            } while (puVar8 != puVar16);
            puVar8 = puVar7;
            func_0x00010bf52a60();
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puVar7);
        _objc_release(puVar7);
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar6);
      puVar6 = puVar4;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar6 = puVar5;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar6;
  _objc_release(uVar2);
  lVar18 = lStack_1f8;
  uVar2 = 2;
  func_0x00010becef40(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_107f1e7fc;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_450 = uVar2;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000108ec1e5c(*(undefined8 *)(lVar18 + 0x68));
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_438 = puVar4;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_430 = puVar5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(lVar18 + 0x48) = 0;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_448 = puVar5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lVar17 = *(long *)(lVar18 + 0x40);
  puStack_440 = puVar6;
  _objc_retain(lVar17);
  lVar11 = lVar17;
  func_0x00010bf52a60();
  lVar1 = 0;
  if (lVar11 != 0) {
    lVar14 = *plStack_340;
    do {
      lVar15 = 0;
      do {
        if (*plStack_340 != lVar14) {
          _objc_enumerationMutation(lVar17);
        }
        uVar19 = *(ulong *)(lStack_348 + lVar15 * 8);
        uVar12 = uVar19;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar12 != 0) {
          uVar12 = uVar19;
          func_0x00010c241220(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_440);
          _objc_release(uVar12);
        }
        uVar12 = uVar19;
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar12;
        func_0x00010bf433a0();
        if ((uVar9 == 1) && (uVar9 = uVar19, func_0x00010c080ca0(), (uVar9 & 1) == 0)) {
          uVar9 = uVar19;
          func_0x00010b5fa088();
          func_0x00010b5fa4c8();
          _objc_release(uVar12);
          lVar1 = lVar1 + (uVar9 & 0xffffffff);
        }
        else {
          _objc_release(uVar12);
        }
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar19;
        func_0x00010bf433a0();
        _objc_release(uVar19);
        puVar5 = puStack_430;
        if (uVar12 != 1) {
          puVar5 = puVar4;
        }
        func_0x00010befa120(puVar5);
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
      lVar11 = lVar17;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(lVar17);
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  _dispatch_group_create();
  _objc_initWeak(auStack_358,lVar18);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3a0 = 0xc2000000;
  pcStack_398 = FUN_107f1ed1c;
  puStack_390 = &UNK_110958808;
  _objc_copyWeak(auStack_370,auStack_358);
  puVar6 = puStack_440;
  _objc_retain(puStack_440);
  puVar13 = puStack_430;
  puStack_388 = puVar6;
  uStack_360 = 0;
  _objc_retain(puStack_430);
  puVar6 = puStack_448;
  puStack_380 = puVar13;
  _objc_retain(puStack_448);
  puStack_378 = puVar6;
  ppuVar10 = &puStack_3a8;
  lStack_368 = lVar1;
  _objc_retainBlock();
  _dispatch_group_enter(puVar8);
  (*(code *)ppuVar10[2])(ppuVar10);
  _dispatch_group_leave(puVar8);
  _dispatch_group_enter(puVar8);
  uVar2 = *(undefined8 *)(lVar18 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar18 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_3f0 = puVar5;
  uStack_3e8 = 0xc2000000;
  pcStack_3e0 = FUN_107f1f384;
  puStack_3d8 = &UNK_110a135a0;
  _objc_retain(puVar7);
  puStack_3d0 = puVar7;
  lStack_3c8 = lVar18;
  _objc_retain(puVar4);
  puVar6 = puStack_448;
  puStack_3c0 = puVar4;
  _objc_retain(puStack_448);
  puStack_3b8 = puVar6;
  _objc_retain(puVar8);
  puStack_3b0 = puVar8;
  func_0x00010bfa4c80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(lVar18 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_428 = puVar5;
  uStack_420 = 0xc2000000;
  pcStack_418 = FUN_107f1f600;
  puStack_410 = &UNK_110848218;
  _objc_copyWeak(auStack_3f8,auStack_358);
  puVar5 = puStack_448;
  puStack_408 = puStack_448;
  uStack_400 = uStack_450;
  _objc_retain();
  _objc_retain(puVar5);
  func_0x000100bc0718(puVar8,uVar2,&puStack_428);
  _objc_release(uVar2);
  _objc_release(uStack_400);
  _objc_release(puStack_408);
  _objc_destroyWeak(auStack_3f8);
  _objc_release(puStack_3b0);
  _objc_release(puStack_3b8);
  _objc_release(puStack_3c0);
  _objc_release(puStack_3d0);
  _objc_release(ppuVar10);
  _objc_release(puStack_378);
  _objc_release(puStack_380);
  _objc_release(puStack_388);
  _objc_release(uStack_450);
  _objc_release(puStack_448);
  _objc_destroyWeak(auStack_370);
  _objc_destroyWeak(auStack_358);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puStack_440);
  _objc_release(puVar4);
  _objc_release(puStack_430);
  puVar6 = puStack_438;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_370);
  _objc_destroyWeak(auStack_358);
  puVar13 = puVar6;
  __Unwind_Resume();
  puStack_470 = puVar5;
  pcStack_458 = FUN_107f1ed1c;
  lStack_4c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar13 + 0x38;
  ppuStack_4b0 = ppuVar10;
  puStack_4a8 = puVar8;
  uStack_4a0 = uVar3;
  lStack_498 = lVar18;
  puStack_490 = puVar7;
  lStack_488 = lVar1;
  uStack_480 = uVar2;
  puStack_478 = puVar4;
  puStack_468 = puVar6;
  ppuStack_460 = &puStack_210;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined *)0x0) {
    puStack_668 = &uStack_670;
    uStack_670 = 0;
    uStack_660 = 0x3032000000;
    pcStack_658 = FUN_107f1f274;
    uStack_650 = 0x107f1f284;
    uStack_648 = 0;
    _objc_initWeak(auStack_678);
    uVar2 = *(undefined8 *)(puVar5 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_680,auStack_678);
    func_0x00010c0f8240(uVar2);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = puStack_668[5];
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar11);
    lVar18 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        uVar12 = *(ulong *)(puVar13 + 0x20);
        func_0x00010bf4b900();
        if ((uVar12 & 1) == 0) {
          func_0x00010befa120(puVar4);
        }
        lVar17 = lVar17 + 1;
      } while (lVar18 != lVar17);
      lVar18 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    uVar2 = *(undefined8 *)(puVar5 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c900();
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar11);
    lVar18 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        uVar2 = puStack_668[5];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010be43d40();
        if ((int)puVar7 != 0) {
          uVar3 = uVar2;
          func_0x00010c270fc0();
          if ((int)uVar3 != 0) {
            func_0x00010c271080();
          }
          func_0x00010befa120(puVar6);
        }
        _objc_release(uVar2);
        lVar17 = lVar17 + 1;
      } while (lVar18 != lVar17);
      lVar18 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    lVar17 = *(long *)(puVar13 + 0x28);
    _objc_retain(lVar17);
    lVar18 = lVar17;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar17);
        }
        uVar19 = *(ulong *)(lVar14 * 8);
        uVar12 = uVar19;
        func_0x00010c080ca0();
        if ((uVar12 & 1) == 0) {
          func_0x00010b5fa088(uVar19);
          func_0x00010b5fa4c8();
        }
        uVar12 = uVar19;
        func_0x00010c241220(uVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf4b900();
        if ((((ulong)puVar7 & 1) == 0) && (uVar9 = uVar19, func_0x00010b5f8c08(), (uVar9 & 1) == 0))
        {
          func_0x00010c080ca0();
          _objc_release(uVar12);
          if ((uVar19 & 1) == 0) {
            func_0x00010befa120(*(undefined8 *)(puVar13 + 0x30));
          }
        }
        else {
          _objc_release(uVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar18 != lVar14);
      lVar18 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
    func_0x00010be56240(puVar5);
    func_0x00010be56240(puVar5);
    _objc_release(puVar6);
    _objc_release(lVar11);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_680);
    _objc_destroyWeak(auStack_678);
    __Block_object_dispose(&uStack_670,8);
    _objc_release(uStack_648);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_680);
  _objc_destroyWeak(auStack_678);
  lVar18 = 8;
  __Block_object_dispose(&uStack_670);
  __Unwind_Resume();
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 107f1e7fc; end: 107f1ed1b; -[SCGallerySearchDataSynchronizer _fetchIndexedSnapsWithServiceTerm:] */

void FUN_107f1e7fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_480 [8];
  undefined1 auStack_478 [8];
  undefined8 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_2c0;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined1 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_250 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000108ec1e5c(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_238 = puVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_230 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_248 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar16 = *(long *)(param_1 + 0x40);
  puStack_240 = puVar3;
  _objc_retain(lVar16);
  lVar4 = lVar16;
  func_0x00010bf52a60();
  lVar15 = 0;
  if (lVar4 != 0) {
    lVar13 = *plStack_140;
    do {
      lVar14 = 0;
      do {
        if (*plStack_140 != lVar13) {
          _objc_enumerationMutation(lVar16);
        }
        uVar17 = *(ulong *)(lStack_148 + lVar14 * 8);
        uVar12 = uVar17;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar12 != 0) {
          uVar12 = uVar17;
          func_0x00010c241220(uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_240);
          _objc_release(uVar12);
        }
        uVar12 = uVar17;
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar12;
        func_0x00010bf433a0();
        if ((uVar5 == 1) && (uVar5 = uVar17, func_0x00010c080ca0(), (uVar5 & 1) == 0)) {
          uVar5 = uVar17;
          func_0x00010b5fa088();
          func_0x00010b5fa4c8();
          _objc_release(uVar12);
          lVar15 = lVar15 + (uVar5 & 0xffffffff);
        }
        else {
          _objc_release(uVar12);
        }
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar17;
        func_0x00010bf433a0();
        _objc_release(uVar17);
        puVar2 = puStack_230;
        if (uVar12 != 1) {
          puVar2 = puVar1;
        }
        func_0x00010befa120(puVar2);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar16;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar16);
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _dispatch_group_create();
  _objc_initWeak(auStack_158,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_107f1ed1c;
  puStack_190 = &UNK_110958808;
  _objc_copyWeak(auStack_170,auStack_158);
  puVar3 = puStack_240;
  _objc_retain(puStack_240);
  puVar11 = puStack_230;
  puStack_188 = puVar3;
  uStack_160 = 0;
  _objc_retain(puStack_230);
  puVar3 = puStack_248;
  puStack_180 = puVar11;
  _objc_retain(puStack_248);
  puStack_178 = puVar3;
  ppuVar8 = &puStack_1a8;
  lStack_168 = lVar15;
  _objc_retainBlock();
  _dispatch_group_enter(puVar7);
  (*(code *)ppuVar8[2])(ppuVar8);
  _dispatch_group_leave(puVar7);
  _dispatch_group_enter(puVar7);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar2;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_107f1f384;
  puStack_1d8 = &UNK_110a135a0;
  _objc_retain(puVar6);
  puStack_1d0 = puVar6;
  lStack_1c8 = param_1;
  _objc_retain(puVar1);
  puVar3 = puStack_248;
  puStack_1c0 = puVar1;
  _objc_retain(puStack_248);
  puStack_1b8 = puVar3;
  _objc_retain(puVar7);
  puStack_1b0 = puVar7;
  func_0x00010bfa4c80(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar2;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_107f1f600;
  puStack_210 = &UNK_110848218;
  _objc_copyWeak(auStack_1f8,auStack_158);
  puVar2 = puStack_248;
  puStack_208 = puStack_248;
  uStack_200 = uStack_250;
  _objc_retain();
  _objc_retain(puVar2);
  func_0x000100bc0718(puVar7,uVar9,&puStack_228);
  _objc_release(uVar9);
  _objc_release(uStack_200);
  _objc_release(puStack_208);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1d0);
  _objc_release(ppuVar8);
  _objc_release(puStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(uStack_250);
  _objc_release(puStack_248);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puStack_240);
  _objc_release(puVar1);
  _objc_release(puStack_230);
  puVar3 = puStack_238;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_158);
  puVar11 = puVar3;
  __Unwind_Resume();
  puStack_270 = puVar2;
  pcStack_258 = FUN_107f1ed1c;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar11 + 0x38;
  ppuStack_2b0 = ppuVar8;
  puStack_2a8 = puVar7;
  uStack_2a0 = uVar10;
  lStack_298 = param_1;
  puStack_290 = puVar6;
  lStack_288 = lVar15;
  uStack_280 = uVar9;
  puStack_278 = puVar1;
  puStack_268 = puVar3;
  puStack_260 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    puStack_468 = &uStack_470;
    uStack_470 = 0;
    uStack_460 = 0x3032000000;
    pcStack_458 = FUN_107f1f274;
    uStack_450 = 0x107f1f284;
    uStack_448 = 0;
    _objc_initWeak(auStack_478);
    uVar9 = *(undefined8 *)(puVar2 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_480,auStack_478);
    func_0x00010c0f8240(uVar9);
    _objc_release(uVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = puStack_468[5];
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar16);
    lVar15 = lVar16;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar16);
        }
        uVar12 = *(ulong *)(puVar11 + 0x20);
        func_0x00010bf4b900();
        if ((uVar12 & 1) == 0) {
          func_0x00010befa120(puVar1);
        }
        lVar13 = lVar13 + 1;
      } while (lVar15 != lVar13);
      lVar15 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    uVar9 = *(undefined8 *)(puVar2 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c900();
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar16);
    lVar15 = lVar16;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar16);
        }
        uVar9 = puStack_468[5];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010be43d40();
        if ((int)puVar6 != 0) {
          uVar10 = uVar9;
          func_0x00010c270fc0();
          if ((int)uVar10 != 0) {
            func_0x00010c271080();
          }
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar9);
        lVar13 = lVar13 + 1;
      } while (lVar15 != lVar13);
      lVar15 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    lVar13 = *(long *)(puVar11 + 0x28);
    _objc_retain(lVar13);
    lVar15 = lVar13;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar13);
        }
        uVar17 = *(ulong *)(lVar14 * 8);
        uVar12 = uVar17;
        func_0x00010c080ca0();
        if ((uVar12 & 1) == 0) {
          func_0x00010b5fa088(uVar17);
          func_0x00010b5fa4c8();
        }
        uVar12 = uVar17;
        func_0x00010c241220(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf4b900();
        if ((((ulong)puVar6 & 1) == 0) && (uVar5 = uVar17, func_0x00010b5f8c08(), (uVar5 & 1) == 0))
        {
          func_0x00010c080ca0();
          _objc_release(uVar12);
          if ((uVar17 & 1) == 0) {
            func_0x00010befa120(*(undefined8 *)(puVar11 + 0x30));
          }
        }
        else {
          _objc_release(uVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      lVar15 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    func_0x00010be56240(puVar2);
    func_0x00010be56240(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar16);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_480);
    _objc_destroyWeak(auStack_478);
    __Block_object_dispose(&uStack_470,8);
    _objc_release(uStack_448);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_480);
  _objc_destroyWeak(auStack_478);
  lVar15 = 8;
  __Block_object_dispose(&uStack_470);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = 0;
  return;
}



/* Entry: 107f1ed1c; end: 107f1f273;  */

void FUN_107f1ed1c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puStack_218 = &uStack_220;
    uStack_220 = 0;
    uStack_210 = 0x3032000000;
    pcStack_208 = FUN_107f1f274;
    uStack_200 = 0x107f1f284;
    uStack_1f8 = 0;
    _objc_initWeak(auStack_228);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_230,auStack_228);
    func_0x00010c0f8240(uVar3);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = puStack_218[5];
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar5);
    lVar11 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf4b900();
        if ((uVar6 & 1) == 0) {
          func_0x00010befa120(puVar4);
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c900();
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar5);
    lVar11 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = puStack_218[5];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar2;
        func_0x00010be43d40();
        if ((int)lVar13 != 0) {
          uVar8 = uVar3;
          func_0x00010c270fc0();
          if ((int)uVar8 != 0) {
            func_0x00010c271080();
          }
          func_0x00010befa120(puVar7);
        }
        _objc_release(uVar3);
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    lVar12 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar12);
    lVar11 = lVar12;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar12);
        }
        uVar14 = *(ulong *)(lVar13 * 8);
        uVar6 = uVar14;
        func_0x00010c080ca0();
        if ((uVar6 & 1) == 0) {
          func_0x00010b5fa088(uVar14);
          func_0x00010b5fa4c8();
        }
        uVar6 = uVar14;
        func_0x00010c241220(uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf4b900();
        if ((((ulong)puVar9 & 1) == 0) &&
           (uVar10 = uVar14, func_0x00010b5f8c08(), (uVar10 & 1) == 0)) {
          func_0x00010c080ca0();
          _objc_release(uVar6);
          if ((uVar14 & 1) == 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
          }
        }
        else {
          _objc_release(uVar6);
        }
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      lVar11 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
    func_0x00010be56240(lVar2);
    func_0x00010be56240(lVar2);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_228);
    __Block_object_dispose(&uStack_220,8);
    _objc_release(uStack_1f8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_228);
  lVar11 = 8;
  __Block_object_dispose(&uStack_220);
  __Unwind_Resume();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 107f1f274; end: 107f1f28b;  */

void FUN_107f1f274(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f1f28c; end: 107f1f34b;  */

void FUN_107f1f28c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107f1f34c;
    puStack_40 = &UNK_1108a5f78;
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa4ca0(uVar2,param_2,uVar3,&puStack_58);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107f1f34c; end: 107f1f383;  */

void FUN_107f1f34c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f1f384; end: 107f1f5ff;  */

void FUN_107f1f384(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf4b900();
      if ((uVar5 & 1) == 0) {
        func_0x00010befa120(puVar2);
      }
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c900();
  _objc_release(uVar6);
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      uVar6 = *(undefined8 *)(lVar12 * 8);
      func_0x00010c241220(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf4b900();
      _objc_release(uVar6);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
      }
      lVar12 = lVar12 + 1;
    } while (lVar4 != lVar12);
    lVar4 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x38) = uVar6;
    _objc_release(uVar10);
    func_0x00010bf529e0();
    func_0x00010becef40(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107f1f600; end: 107f1f667;  */

void FUN_107f1f600(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    lVar3 = *(long *)(lVar1 + 0x38);
    func_0x00010bf529e0();
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = 3;
    }
    func_0x00010becef40(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f1f668; end: 107f1f837; -[SCGallerySearchDataSynchronizer _indexSnapWithServiceTerm:] */

void FUN_107f1f668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0dfd40(uVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107f1f838;
  puStack_50 = &UNK_110842e18;
  ppuVar2 = &puStack_68;
  lStack_48 = param_1;
  _objc_retainBlock();
  uVar3 = uVar1;
  func_0x00010c080ca0();
  uVar6 = *(long *)(param_1 + 0x48) + 1;
  *(ulong *)(param_1 + 0x48) = uVar6;
  puVar4 = PTR_PTR_1126bc7b8;
  if ((int)uVar3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160(puVar4,param_2,uVar1,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (puVar4 == (undefined *)0x0) {
      lVar5 = param_1;
      func_0x00010beb3ba0(param_1,param_2,uVar1);
      if ((int)lVar5 != 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0xa0),param_2,uVar1);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecbe0();
      _objc_release(uVar3);
    }
    uVar6 = *(ulong *)(param_1 + 0xa0);
    func_0x00010bf529e0();
    if (0x32 < uVar6) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    uVar6 = *(ulong *)(param_1 + 0x48);
  }
  uVar7 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (uVar6 < uVar7) {
    puVar4 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(param_3,param_2,puVar4);
    _objc_release(puVar4);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
    func_0x00010becef40(param_1,param_2,0,param_3);
  }
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107f1f838; end: 107f1f99b;  */

void FUN_107f1f838(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
    func_0x00010bf51e00(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0xa0) = puVar3;
    _objc_release(uVar5);
    _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf248a0(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107f1f99c; end: 107f1fb3f;  */

undefined1 * FUN_107f1f99c(long param_1,long param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  lVar1 = param_4;
  _objc_retain(param_3);
  iVar4 = (int)lVar1;
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 == 0) && (param_1 != 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    iVar4 = (int)auStack_e8;
    lVar1 = param_4;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_4);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          func_0x00010c241220(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar6);
          if (puVar2 == (undefined1 *)0x0) {
            uVar6 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfecbe0();
            _objc_release(uVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        iVar4 = (int)auStack_e8;
        lVar1 = param_4;
        puVar3 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_4);
    puVar2 = (undefined1 *)puVar3;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((((puVar5 != (undefined1 *)0x0) &&
         (puVar5 = puVar2, func_0x00010c2a0500(), (int)puVar5 != 0)) &&
        (puVar5 = puVar2, func_0x00010c0d0100(), 2 < (int)puVar5)) &&
       ((iVar4 == 0 || (puVar5 = puVar2, func_0x00010c271040(), (int)puVar5 != 0)))) {
      puVar5 = puVar2;
      func_0x00010c271080(puVar2);
      puVar5 = (undefined1 *)(ulong)(*(long *)(param_3 + 0x98) <= (long)(int)puVar5);
      goto LAB_107f1fba4;
    }
  }
  puVar5 = (undefined1 *)0x0;
LAB_107f1fba4:
  _objc_release(puVar2);
  return puVar5;
}



/* Entry: 107f1fb40; end: 107f1fbe7; -[SCGallerySearchDataSynchronizer _isSnapIndexed:isTinyClipEmbeddingsRequired:] */

bool FUN_107f1fb40(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((((lVar1 != 0) && (lVar1 = param_3, func_0x00010c2a0500(), (int)lVar1 != 0)) &&
        (lVar1 = param_3, func_0x00010c0d0100(), 2 < (int)lVar1)) &&
       ((param_4 == 0 || (lVar1 = param_3, func_0x00010c271040(), (int)lVar1 != 0)))) {
      lVar1 = param_3;
      func_0x00010c271080(param_3);
      bVar2 = *(long *)(param_1 + 0x98) <= (long)(int)lVar1;
      goto LAB_107f1fba4;
    }
  }
  bVar2 = false;
LAB_107f1fba4:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107f1fbe8; end: 107f1fc63; -[SCGallerySearchDataSynchronizer _shouldFetchSnapDetailOnFlyWithSnap:] */

bool FUN_107f1fbe8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c080ca0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf59960(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf433a0();
    bVar1 = uVar3 == 1;
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107f1fc64; end: 107f1fd63; -[SCGallerySearchDataSynchronizer _logMobileClipLatestVersionBackfillPercentageForCofValue:totalSnapsCount:isSince2024:] */

void FUN_107f1fc64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  if (param_5 == 0) {
    func_0x00010c0cf400(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0cf3e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be21720(param_1,param_2,param_4,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f1fd64; end: 107f1fd8b; -[SCGallerySearchDataSynchronizer _getPercentageFrom:indexedSnaps:] */

double FUN_107f1fd64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  double dVar1;
  
  if (param_3 != 0) {
    dVar1 = 1.0;
    if ((double)param_4 / (double)param_3 <= 1.0) {
      dVar1 = (double)param_4 / (double)param_3;
    }
    return dVar1;
  }
  return 0.0;
}



/* Entry: 107f1fd8c; end: 107f1fe6f; -[SCGallerySearchDataSynchronizer .cxx_destruct] */

void FUN_107f1fd8c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 107f1fe70; end: 107f1ff13; -[SCGalleryIndexPending initWithSnap:fromSnap:] */

undefined1 *
FUN_107f1fe70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbb00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f1ff14; end: 107f1ffdf; -[SCGalleryIndexPending isEqualToPendingSnap:] */

undefined8 FUN_107f1ff14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c23f220(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar2;
    func_0x00010c241220(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    return uVar4;
  }
  return 0;
}



/* Entry: 107f1ffe0; end: 107f20057; -[SCGalleryIndexPending isEqual:] */

ulong FUN_107f1ffe0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d85e0;
    _objc_opt_class(PTR_PTR_1126d85e0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071fe0(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107f20058; end: 107f200b3; -[SCGalleryIndexPending hash] */

undefined8 FUN_107f20058(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107f200b4; end: 107f200bb; -[SCGalleryIndexPending snap] */

undefined8 FUN_107f200b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f200bc; end: 107f200c3; -[SCGalleryIndexPending fromSnap] */

undefined8 FUN_107f200bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f200c4; end: 107f200f3; -[SCGalleryIndexPending .cxx_destruct] */

void FUN_107f200c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f200f4; end: 107f20833; -[SCGallerySearchIndexer initWithDataObjectContext:cloudFS:encryptedContentManager:galleryEncryptedDatabase:gallerySearch:galleryProfile:memoriesSearchDatabase:networker:appTerminator:percMLModelProvider:applicationLifecycleEvents:coreConfigProvider:aserConfigProvider:circumstanceEngine:docObjectContext:cachingMediaManager:memoriesVisualTagAnalyzer:faceTaggingDataProvider:faceTaggingPermissionsManager:] */

undefined8 *
FUN_107f200f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126fbb08;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_107f20834;
    puStack_d0 = &UNK_110a13600;
    _objc_retain(param_9);
    uStack_c8 = param_9;
    _objc_retain(param_10);
    uStack_c0 = param_10;
    _objc_retain(param_3);
    uStack_b8 = param_3;
    _objc_retain(param_17);
    uStack_b0 = param_17;
    _objc_retain(param_14);
    uStack_a8 = param_14;
    _objc_retain(param_8);
    uStack_a0 = param_8;
    _objc_retain(param_20);
    uStack_98 = param_20;
    _objc_retain(param_21);
    uStack_90 = param_21;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d85f0;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000108ec1ed4();
    puVar1[0x33] = uVar5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d85f8;
    _objc_alloc();
    func_0x00010c00fcc0();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8600;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d23d8;
    _objc_alloc();
    func_0x00010c034960();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d85d8;
    _objc_alloc();
    func_0x00010c00fd00();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8608;
    _objc_alloc_init();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_f0,puVar1);
    uVar2 = puVar1[3];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f8,auStack_f0);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    uVar2 = param_14;
    func_0x00010c269d40(param_14);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec1e98();
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x32];
    puVar1[0x32] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
  }
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



/* Entry: 107f20834; end: 107f208cb;  */

void FUN_107f20834(void)

{
  _objc_alloc(PTR_PTR_1126d85e8);
  func_0x00010c02ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f208cc; end: 107f209e7; -[SCGallerySearchIndexer resumeServiceWithCloudSyncIfNeeded:] */

void FUN_107f208cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x30,param_3);
  _objc_retain();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf69da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar1);
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf69da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f209e8; end: 107f20a8f; -[SCGallerySearchIndexer suspendServiceIfNeeded] */

void FUN_107f209e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264220();
  _objc_release(puVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264220(puVar2,param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107f20a90; end: 107f20a97; -[SCGallerySearchIndexer dedicatedQueue] */

void FUN_107f20a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 107f20a98; end: 107f20be7; -[SCGallerySearchIndexer runWithServiceTerm:] */

void FUN_107f20a98(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be41400();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 < 2) {
      if (lVar3 != 0) {
        if (lVar3 != 1) goto LAB_107f20bb0;
        iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
        func_0x00010c07bc40();
        if (iVar1 == 0) {
          _objc_initWeak(auStack_38,param_1);
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          _objc_copyWeak(auStack_40,auStack_38);
          _objc_retain(param_3);
          func_0x00010c0f7fe0(0x4020000000000000,uVar4);
          _objc_release(param_3);
          _objc_destroyWeak(auStack_40);
          _objc_destroyWeak(auStack_38);
          goto LAB_107f20bb0;
        }
      }
      func_0x00010becef40(param_1);
    }
    else if (lVar3 == 2) {
      func_0x00010be38f60(param_1);
    }
    else if (lVar3 == 3) {
      func_0x00010bdc9460(param_1);
    }
  }
LAB_107f20bb0:
  _objc_release(param_3);
  return;
}



/* Entry: 107f20be8; end: 107f20c4b;  */

void FUN_107f20be8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010bf69da0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95760(uVar3,param_2,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f20c4c; end: 107f20c9b; -[SCGallerySearchIndexer defaultNotifierWithLowPowerMode] */

void FUN_107f20c4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3c30;
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dcd80(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f20c9c; end: 107f20ca7; -[SCGallerySearchIndexer defaultLongRunningNotifier] */

void FUN_107f20c9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c3c50,PTR_s_neverNotifier_112613b10);
  return;
}



/* Entry: 107f20ca8; end: 107f20d7f; -[SCGallerySearchIndexer indexGallerySnap:] */

void FUN_107f20ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f20d80; end: 107f20e37;  */

void FUN_107f20d80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126d85e0;
    _objc_alloc(PTR_PTR_1126d85e0);
    func_0x00010c046f80();
    func_0x00010befa120(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf69da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2254a0(puVar1,param_2,lVar2,param_1);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f20e38; end: 107f20f37; -[SCGallerySearchIndexer indexDuplicateSnap:fromSnap:] */

void FUN_107f20e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f20f38; end: 107f20feb;  */

void FUN_107f20f38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126d85e0;
    _objc_alloc(PTR_PTR_1126d85e0);
    func_0x00010c046f80();
    func_0x00010befa120(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf69da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2254a0(puVar1,param_2,lVar2,param_1);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f20fec; end: 107f2145f; -[SCGallerySearchIndexer insertTagsForSnapId:locationTags:timeTags:metaTags:visualTagToConfidenceMap:tagVersion:languageId:tagCluster:locationCluster:caption:creationDate:tinyClipCaptionToConfidenceMaps:tinyClipEmbeddings:tinyClipModelVersion:fromServer:shouldNotifyListener:] */

void FUN_107f20fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  char param_17)

{
  undefined8 uVar1;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
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
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  if (param_9 == (undefined *)0x0) {
    param_9 = PTR_PTR_1126d8610;
    func_0x00010c267020();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107f21460;
  puStack_108 = &UNK_110a13690;
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_retain(param_3);
  uStack_100 = param_3;
  _objc_retain(param_9);
  puStack_f8 = param_9;
  uStack_98 = param_8;
  _objc_retain(param_4);
  uStack_f0 = param_4;
  _objc_retain(param_5);
  uStack_e8 = param_5;
  _objc_retain(param_6);
  uStack_e0 = param_6;
  _objc_retain(param_7);
  uStack_d8 = param_7;
  _objc_retain(param_12);
  uStack_d0 = param_12;
  _objc_retain(param_10);
  uStack_c8 = param_10;
  _objc_retain(param_11);
  uStack_c0 = param_11;
  _objc_retain(param_13);
  uStack_b8 = param_13;
  uStack_90 = param_16;
  _objc_retain(param_14);
  uStack_b0 = param_14;
  _objc_retain(param_15);
  uStack_a8 = param_15;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  if (param_17 != '\0') {
    _objc_initWeak(auStack_128,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_140,auStack_128);
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_retain(param_10);
    uStack_138 = param_16;
    _objc_retain(param_15);
    uStack_130 = param_8;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_15);
    _objc_release(param_10);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(puStack_f8);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f21460; end: 107f21c1b;  */

void FUN_107f21460(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = param_2;
  _objc_retain(param_2);
  uVar28 = param_1 + 0x80;
  _objc_loadWeakRetained();
  if (uVar28 != 0) {
    uVar7 = uVar28;
    func_0x00010be97bc0();
    if ((uVar7 & 1) == 0) {
      param_3 = *(ulong *)(param_1 + 0x20);
      uVar7 = uVar28;
      func_0x00010bdc7a00();
      if (uVar7 == 0xffffffffffffffff) goto LAB_107f21bcc;
    }
    uVar7 = uVar28;
    func_0x00010be465c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar28;
    func_0x00010be465c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar28;
    func_0x00010be465c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0();
    ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
    if (lVar10 != 0) {
      ppuVar11 = *(undefined ***)(param_1 + 0x48);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
    }
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b080(param_2);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b080(param_2);
    _objc_release(puVar14);
    _objc_release(puVar13);
    func_0x00010be8edc0(uVar28);
    func_0x00010bee1c40(uVar28);
    func_0x00010beda280(uVar28);
    uVar15 = *(undefined8 *)(uVar28 + 8);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf51e00();
    func_0x00010befc420(uVar15);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    uVar17 = *(undefined8 *)(uVar28 + 8);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51e00(uVar15);
    func_0x00010befc420(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)(uVar28 + 8);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf51e00(uVar15);
    func_0x00010befc420(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)(uVar28 + 8);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf51e00(uVar15);
    func_0x00010befc420(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar17);
    if (*(long *)(param_1 + 0x58) != 0) {
      func_0x00010be9a0c0(uVar28);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      func_0x00010be99500(uVar28);
    }
    uVar17 = *(undefined8 *)(uVar28 + 0x90);
    func_0x00010bf65460();
    _objc_retainAutoreleasedReturnValue();
    param_3 = *(ulong *)(param_1 + 0x20);
    func_0x00010be98e80(uVar28);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (0 < *(long *)(param_1 + 0x90)) {
      uVar15 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      _objc_retain(uVar16);
      _objc_retain(puVar13);
      func_0x00010bf97e80(uVar15);
      puVar14 = PTR_PTR_1126d8620;
      _objc_alloc();
      puVar18 = puVar13;
      func_0x00010bf51e00(puVar13);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020e20();
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      uVar15 = *(undefined8 *)(uVar28 + 0x18);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0671a0();
      _objc_release(uVar15);
      puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = *(long *)(param_1 + 0x70);
      _objc_retain(lVar25);
      lVar10 = lVar25;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar10 != 0) {
        lVar27 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar25);
          }
          lVar29 = *(long *)(lVar27 * 8);
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar37 = 0;
          _objc_retain(lVar29);
          lVar21 = lVar29;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
          while (lVar21 != 0) {
            lVar26 = 0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(lVar29);
              }
              puVar19 = puVar18;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar22 = lVar29;
              func_0x00010c0e00e0(lVar29);
              _objc_retainAutoreleasedReturnValue();
              if (puVar19 == (undefined *)0x0) {
LAB_107f21aa4:
                func_0x00010c1d0640(puVar18);
              }
              else {
                func_0x00010bf885a0(lVar22);
                dVar2 = (double)CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30)))))));
                func_0x00010bf885a0(puVar19);
                bVar5 = false;
                bVar6 = false;
                bVar1 = NAN((double)CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(uVar34,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30))))))));
                if (!NAN(dVar2) && !bVar1) {
                  bVar5 = dVar2 < (double)CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(
                                                  uVar34,CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(
                                                  uVar31,uVar30)))))));
                  bVar6 = dVar2 == (double)CONCAT17(uVar37,CONCAT16(uVar36,CONCAT15(uVar35,CONCAT14(
                                                  uVar34,CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(
                                                  uVar31,uVar30)))))));
                }
                if (!bVar6 && bVar5 == (NAN(dVar2) || bVar1)) goto LAB_107f21aa4;
              }
              _objc_release(lVar22);
              _objc_release(puVar19);
              lVar26 = lVar26 + 1;
            } while (lVar21 != lVar26);
            lVar21 = lVar29;
            func_0x00010bf52a60();
          }
          _objc_release(lVar29);
          lVar27 = lVar27 + 1;
        } while (lVar27 != lVar10);
        lVar10 = lVar25;
        func_0x00010bf52a60();
      }
      _objc_release(lVar25);
      uVar15 = *(undefined8 *)(uVar28 + 0x18);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      param_3 = *(ulong *)(param_1 + 0x20);
      puVar19 = puVar18;
      func_0x00010bf51e00();
      func_0x00010c066a80(uVar15);
      _objc_release(puVar19);
      _objc_release(uVar15);
      _objc_release(puVar18);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(uVar16);
    }
    _objc_release(puVar13);
    _objc_release(uVar17);
    _objc_release(ppuVar12);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
LAB_107f21bcc:
  _objc_release(uVar28);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  uVar28 = *(ulong *)(param_2 + 0x20);
  _objc_retain(lVar23);
  func_0x00010bf529e0();
  if (param_3 < uVar28) {
    uVar17 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0dfd40(uVar17);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar17 = 0;
  }
  puVar13 = PTR_PTR_1126d8618;
  _objc_alloc(PTR_PTR_1126d8618);
  lVar24 = lVar23;
  func_0x00010bf51e00(lVar23);
  _objc_release(lVar23);
  func_0x00010bffc700(puVar13);
  _objc_release(lVar24);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0x28));
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 107f21c1c; end: 107f21ce3;  */

void FUN_107f21c1c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf529e0();
  if (param_3 < uVar4) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  puVar2 = PTR_PTR_1126d8618;
  _objc_alloc(PTR_PTR_1126d8618);
  uVar3 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(param_2);
  func_0x00010bffc700(puVar2);
  _objc_release(uVar3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


