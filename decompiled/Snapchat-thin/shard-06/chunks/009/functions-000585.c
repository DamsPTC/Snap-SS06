/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f33edc; end: 104f33ee3; -[SCCreateChatLogger groupCreationErrorCount] */

undefined8 FUN_104f33edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104f33ee4; end: 104f33eeb; -[SCCreateChatLogger setGroupCreationErrorCount:] */

void FUN_104f33ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 104f33eec; end: 104f33ef3; -[SCCreateChatLogger selectedCellsCount] */

undefined8 FUN_104f33eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104f33ef4; end: 104f33efb; -[SCCreateChatLogger setSelectedCellsCount:] */

void FUN_104f33ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 104f33efc; end: 104f33f03; -[SCCreateChatLogger unselectedCellsCount] */

undefined8 FUN_104f33efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104f33f04; end: 104f33f0b; -[SCCreateChatLogger setUnselectedCellsCount:] */

void FUN_104f33f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 104f33f0c; end: 104f33f13; -[SCCreateChatLogger searchAttemptCount] */

undefined8 FUN_104f33f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104f33f14; end: 104f33f1b; -[SCCreateChatLogger setSearchAttemptCount:] */

void FUN_104f33f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 104f33f1c; end: 104f33f7b; -[SCCreateChatLogger .cxx_destruct] */

void FUN_104f33f1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f33f7c; end: 104f34507; -[SCCreateChatSelectionScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f33f7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined8 uVar23;
  long lVar24;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_11271751c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2870;
  _objc_alloc();
  lVar22 = (long)_DAT_112717520;
  lVar1 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c247520();
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf54da0();
  lVar6 = param_1 + _DAT_112717524;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a680();
  uVar23 = *(undefined8 *)(param_1 + _DAT_112717528);
  *(undefined **)(param_1 + _DAT_112717528) = puVar5;
  _objc_release(uVar23);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b2878;
  _objc_alloc();
  lVar1 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010c2527e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar10 = lVar6;
  func_0x00010bfce6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112717530;
  _objc_loadWeakRetained();
  lVar11 = param_1 + lVar22;
  _objc_loadWeakRetained();
  func_0x00010c247520();
  lVar12 = param_1 + _DAT_112717534;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0b4dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112717538;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271753c;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112717540;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_112717544;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057020();
  lVar24 = (long)_DAT_112717548;
  uVar23 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar5;
  _objc_release(uVar23);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar24));
  uVar23 = *(undefined8 *)(param_1 + lVar24);
  _objc_retain(uVar23);
  lVar1 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c10aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bf18480(*(undefined8 *)(param_1 + lVar24));
  }
  else {
    lVar1 = param_1 + _DAT_11271754c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar22;
    _objc_loadWeakRetained(param_1);
    lVar7 = param_1;
    func_0x00010c10aae0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c244e80(lVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar11);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(uVar23);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar3);
  return;
}



/* Entry: 104f34508; end: 104f3458b;  */

void FUN_104f34508(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f3458c; end: 104f34637; -[SCCreateChatSelectionScopeEntryPoint wantsToDismissWithNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3458c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112717528);
  _objc_retain(param_3);
  func_0x00010bf43780(uVar3,param_2,1);
  lVar4 = (long)_DAT_112717520;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf551a0(lVar2,param_2,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f34638; end: 104f346ab; -[SCCreateChatSelectionScopeEntryPoint wantsToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f34638(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112717520;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf551e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f346ac; end: 104f34733; -[SCCreateChatSelectionScopeEntryPoint didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f346ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf43780(*(undefined8 *)(param_1 + _DAT_112717528),param_2,0);
  lVar3 = (long)_DAT_112717520;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf551c0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f34734; end: 104f34963; -[SCCreateChatSelectionScopeEntryPoint _createNewGroupCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f34734(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar1 = param_1 + _DAT_11271751c;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar9 = (long)_DAT_112717534;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar1 = param_1 + _DAT_11271754c;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b2880;
  _objc_alloc(PTR_PTR_1126b2880);
  lVar1 = param_1 + _DAT_112717544;
  _objc_loadWeakRetained(lVar1);
  lVar7 = lVar1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030020(puVar6,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112717538;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b2888;
  _objc_alloc(PTR_PTR_1126b2888);
  param_1 = param_1 + _DAT_112717550;
  _objc_loadWeakRetained();
  func_0x00010c05b400(puVar8,param_2,lVar2,lVar3,lVar4,lVar5,lVar9,puVar6,1,lVar7,param_1);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104f34964; end: 104f34a37; -[SCCreateChatSelectionScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f34964(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717530);
  _objc_storeStrong(param_1 + _DAT_11271752c,0);
  _objc_destroyWeak(param_1 + _DAT_112717520);
  _objc_destroyWeak(param_1 + _DAT_112717550);
  _objc_destroyWeak(param_1 + _DAT_112717538);
  _objc_destroyWeak(param_1 + _DAT_112717540);
  _objc_destroyWeak(param_1 + _DAT_11271753c);
  _objc_destroyWeak(param_1 + _DAT_11271751c);
  _objc_destroyWeak(param_1 + _DAT_112717524);
  _objc_destroyWeak(param_1 + _DAT_112717534);
  _objc_destroyWeak(param_1 + _DAT_11271754c);
  _objc_destroyWeak(param_1 + _DAT_112717544);
  _objc_storeStrong(param_1 + _DAT_112717528,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717548,0);
  return;
}



/* Entry: 104f34a38; end: 104f34a53;  */

void FUN_104f34a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b3560;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x000108ef8240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010901d7c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01bce0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f34a54; end: 104f34d8b; -[SCCreateChatWorkflow initWithUIContainer:newChatStateObservable:newGroupButtonSelectedObservable:recipientPickerScopeExposer:recipientPickerScopeServices:source:groupCreator:groupFetcher:userId:createChatLogger:longPressDelegate:circumstanceEngine:sharingExperimentServices:featureSettingsServices:notificationPool:] */

undefined8 *
FUN_104f34a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126e51c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    puVar1[7] = param_8;
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xd) = 0;
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7e60(puVar1);
    func_0x00010bec7ea0(puVar1);
  }
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar1;
}



/* Entry: 104f34d8c; end: 104f34e5f; -[SCCreateChatWorkflow beginNewChatCreationWithSelectedItems:] */

void FUN_104f34d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be118a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f34e60; end: 104f34eb3;  */

void FUN_104f34e60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be481e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f34eb4; end: 104f3515b; -[SCCreateChatWorkflow _launchRecipientPicker:disabledItems:] */

void FUN_104f34eb4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(param_1 + 0x70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf45060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010c0825c0();
  if ((uVar10 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x60);
    func_0x00010bf1f440();
    *(char *)(param_1 + 0x68) = (char)uVar10;
    if ((uVar10 & 1) != 0) goto LAB_104f35000;
  }
  func_0x00010bf1f440();
LAB_104f35000:
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar10 = param_1;
  func_0x00010be3e020();
  if ((uVar10 & 1) == 0) {
    func_0x00010befa120(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  FUN_104f369ac(uVar4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  FUN_104f36f54();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = param_1 + 0x58;
  _objc_loadWeakRetained();
  puVar2 = puVar3;
  uVar8 = param_3;
  func_0x00010bf24020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar6);
  uVar7 = uVar11;
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain(uVar7);
    _objc_retain(puVar2);
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)(uVar1 + 0x40);
    _objc_retain(uVar7);
    _objc_retain(puVar2);
    _objc_retain(uVar8);
    _objc_retain(uVar7);
    _objc_retain(puVar2);
    _objc_retain(uVar8);
    _objc_retain(uVar8);
    _objc_retain(puVar2);
    _objc_retain(uVar7);
    func_0x00010c0bef20(uVar4);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  return;
}



/* Entry: 104f3515c; end: 104f35303; -[SCCreateChatWorkflow didConfirmWithSelectedItems:title:uiContainer:] */

void FUN_104f3515c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104f35304;
  puStack_88 = &UNK_11084c4a0;
  lStack_80 = param_1;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104f35314;
  puStack_c8 = &UNK_11084c4a0;
  lStack_c0 = param_1;
  uStack_68 = param_5;
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(param_4);
  uStack_b0 = param_4;
  _objc_retain(param_5);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x104f35324;
  puStack_108 = &UNK_11085c6d8;
  lStack_100 = param_1;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  uStack_e8 = param_5;
  uStack_a8 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0bef20(uVar2,param_2,&puStack_a0,&puStack_e0,&puStack_120);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f35304; end: 104f35337;  */

void FUN_104f35304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde6250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__confirmationPressedForNewChatWi_112557230,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104f35338; end: 104f35363; -[SCCreateChatWorkflow didDismissWithSelectedItems:title:] */

void FUN_104f35338(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f35364; end: 104f3536b; -[SCCreateChatWorkflow didReceiveSelectedItemAttributions:] */

void FUN_104f35364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_onSelectedItemAttributionsUpdate_112617328);
  return;
}



/* Entry: 104f3536c; end: 104f35377; -[SCCreateChatWorkflow didRenderSuccessfully] */

void FUN_104f3536c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setDidRenderSuccessfully__1126410f8,1);
  return;
}



/* Entry: 104f35378; end: 104f353a7; -[SCCreateChatWorkflow didUserInputTitle:] */

void FUN_104f35378(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010c18d7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setDidInputGroupName__112641018,puVar1);
  return;
}



/* Entry: 104f353a8; end: 104f353af; -[SCCreateChatWorkflow didReceiveSelectionItemToStateMap:] */

void FUN_104f353a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_onSelectionItemToStateMapUpdate__112617338);
  return;
}



/* Entry: 104f353b0; end: 104f353b7; -[SCCreateChatWorkflow didReceiveSectionIdentifierToSelectionItemsMap:] */

void FUN_104f353b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_onSectionIdentifierToSelectionIt_1126172f0);
  return;
}



/* Entry: 104f353b8; end: 104f353e3; -[SCCreateChatWorkflow didInputSearchQuery] */

void FUN_104f353b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  lVar1 = lVar2;
  func_0x00010c153380(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1f81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setSearchAttemptCount__11265ba98,lVar1 + 1);
  return;
}



/* Entry: 104f353e4; end: 104f3571f; -[SCCreateChatWorkflow _confirmationPressedForNewChatWithSelectedItems:title:uiContainer:] */

void FUN_104f353e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) goto LAB_104f356b0;
  lVar2 = param_3;
  func_0x00010bf529e0();
  lVar4 = param_3;
  if (lVar2 == 1) {
    lVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108425a5c();
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b01c0;
    if ((int)lVar3 == 0) goto LAB_104f354b0;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x000108425950();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_104f355b4:
    _objc_release(lVar2);
    _objc_release(lVar4);
    param_1 = param_1 + 0x88;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a1ae0();
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  else {
LAB_104f354b0:
    lVar2 = param_3;
    func_0x00010bf529e0();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 == 1) {
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar8);
      puStack_78 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 0;
      puStack_98 = puVar5;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x104f34a40;
      puStack_80 = &UNK_110847658;
      puStack_68 = puStack_78;
      func_0x00010c0bef20(uVar8);
      cVar1 = *(char *)(puStack_68 + 3);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uVar8);
      if (cVar1 == '\x01') {
        lVar2 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x000108425b30();
        _objc_release(lVar2);
        puVar5 = PTR_PTR_1126b01c0;
        if ((int)lVar3 != 0) {
          func_0x00010bfb1920(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar4;
          func_0x000108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfcf680(puVar5);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_104f355b4;
        }
      }
    }
    _objc_initWeak(&puStack_98,param_1);
    uVar6 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,&puStack_98);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar7 = uVar6;
    func_0x00010bf566a0();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bfce900(uVar8);
      func_0x00010c1a4700(uVar8);
    }
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(&puStack_98);
  }
LAB_104f356b0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f35720; end: 104f35767;  */

void FUN_104f35720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f280();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f35768; end: 104f358f7; -[SCCreateChatWorkflow _confirmationPressedForAddToGroupWithSelectedItems:groupId:title:uiContainer:] */

void FUN_104f35768(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010be2f280(param_1);
  }
  else {
    lVar1 = param_3;
    FUN_104f37278();
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    lStack_60 = lVar1;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010befb340(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f358f8; end: 104f359ab;  */

void FUN_104f358f8(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (func_0x00010be2f280(lVar1), param_2 != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f359ac;
    puStack_48 = &UNK_110848c48;
    lStack_40 = lVar1;
    lStack_38 = *(long *)(param_1 + 0x28);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104f359ac; end: 104f359bf;  */

void FUN_104f359ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showInvitesSentNotificationWith_11258bf80,
             1 < *(ulong *)(param_1 + 0x28));
  return;
}



/* Entry: 104f359c0; end: 104f35c37; -[SCCreateChatWorkflow didTapContactWithPhoneNumber:selectionItem:selectionTypeIdentifier:selectContactHandler:uiContainer:] */

void FUN_104f359c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long in_x5;
  undefined8 in_x6;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bfd3920();
    puVar4 = PTR_PTR_1126aed70;
    if ((int)lVar1 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_x5);
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puVar5 = PTR_PTR_1126aed70;
      ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
      param_2 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      puVar6 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      puVar7 = puVar6;
      func_0x000104f365ec();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000104f36604();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      func_0x00010bf0c980(in_x6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(in_x5);
    }
    else {
      (**(code **)(in_x5 + 0x10))(in_x5);
    }
  }
  _objc_release(lVar2);
  _objc_release(in_x6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  func_0x00010c160d00(*(undefined8 *)(in_x5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000104f35c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x5 + 0x28) + 0x10))();
  return;
}



/* Entry: 104f35c38; end: 104f35c77;  */

void FUN_104f35c38(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  func_0x00010c160d00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000104f35c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 104f35c78; end: 104f35c87;  */

void FUN_104f35c78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f35c88; end: 104f35d63; -[SCCreateChatWorkflow _subscribeToNewChatStateObservable:] */

void FUN_104f35c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f35d64; end: 104f35dab;  */

void FUN_104f35d64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f35dac; end: 104f35ddb; -[SCCreateChatWorkflow _sinkState:] */

void FUN_104f35dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f35ddc; end: 104f35eb7; -[SCCreateChatWorkflow _subscribeToNewGroupButtonSelectedObservable:] */

void FUN_104f35ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f35eb8; end: 104f35f17;  */

void FUN_104f35eb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bea36c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f35f18; end: 104f35f1f; -[SCCreateChatWorkflow _setDidSelectNewGroup:] */

void FUN_104f35f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setDidSelectNewGroup__112641148);
  return;
}



/* Entry: 104f35f20; end: 104f35fcb; -[SCCreateChatWorkflow _isAddToGroupState] */

undefined1 FUN_104f35f20(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104f35fcc;
  puStack_50 = &UNK_110842b58;
  puStack_38 = puStack_48;
  func_0x00010c0bef20(*(undefined8 *)(param_1 + 0x40),param_2,0,0,&puStack_68);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104f35fcc; end: 104f35fdf;  */

void FUN_104f35fcc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f35fe0; end: 104f361a3; -[SCCreateChatWorkflow _fetchGroupMembers:] */

void FUN_104f35fe0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104f361a4;
  uStack_60 = 0x104f361b4;
  uStack_58 = 0;
  func_0x00010c0bef20(*(undefined8 *)(param_1 + 0x40));
  lVar1 = puStack_78[5];
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(uVar3);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfc6120(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104f361a4; end: 104f361bb;  */

void FUN_104f361a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f361bc; end: 104f361f3;  */

void FUN_104f361bc(long param_1,undefined8 param_2)

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



/* Entry: 104f361f4; end: 104f362e7;  */

void FUN_104f361f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    func_0x00010c0ecc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104f362e8;
    puStack_40 = &UNK_11085c7b8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    lVar1 = param_2;
    uStack_38 = uVar3;
    func_0x0001006372a4(param_2,&puStack_58);
    _objc_release(param_2);
    lVar2 = lVar1;
    func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_11085c808);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104f362e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 104f362e8; end: 104f3638f;  */

uint FUN_104f362e8(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0720c0(param_2);
    uVar2 = (uint)lVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104f36390; end: 104f36417; -[SCCreateChatWorkflow _handleRequestToNavigationToChatForGroupId:] */

void FUN_104f36390(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010c2a1aa0(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1ae0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f36418; end: 104f364bb; -[SCCreateChatWorkflow _showInvitesSentNotificationWithMultipleSelected:] */

void FUN_104f36418(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  if (param_3 == 0) {
    func_0x000104f3661c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104f36634();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf54760(puVar3,param_2,uVar2,&PTR____CFConstantStringClassReference_110dbb838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f364bc; end: 104f364d3; -[SCCreateChatWorkflow delegate] */

void FUN_104f364bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f364d4; end: 104f364df; -[SCCreateChatWorkflow setDelegate:] */

void FUN_104f364d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 104f364e0; end: 104f365a3; -[SCCreateChatWorkflow .cxx_destruct] */

void FUN_104f364e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104f365a4; end: 104f3664b;  */

void FUN_104f365a4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad758,
                      &PTR____CFConstantStringClassReference_110dbb898,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104f3664c; end: 104f3681b;  */

void FUN_104f3664c(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x000108425fd8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 < (undefined *)0x3) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(param_3);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf4b900();
      puVar3 = puVar1;
      if ((int)puVar2 == 0) {
        func_0x00010c0d3c80(puVar1);
        func_0x00010befa120();
      }
      else {
        _objc_retain(puVar1);
      }
    }
    _objc_release(param_3);
    _objc_release(puVar1);
    lVar4 = lVar6;
    func_0x00010bfc6140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar6);
    lVar6 = lVar4;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(puVar1);
  uVar5 = param_3;
  _objc_release(param_3);
  if (lVar6 == 0) {
    func_0x000104f373fc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = 0;
  }
  puVar1 = PTR_PTR_1126b2890;
  _objc_alloc(PTR_PTR_1126b2890);
  func_0x00010c0539a0();
  _objc_release(uVar5);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f3681c; end: 104f368eb;  */

void FUN_104f3681c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  func_0x000104f3742c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000108425fd8(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010bf529e0(uVar3);
  _objc_release(uVar3);
  func_0x00010c2b06a0(puVar1,param_2,1 < uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f368ec; end: 104f369ab;  */

void FUN_104f368ec(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000104f373cc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2890;
  _objc_alloc(PTR_PTR_1126b2890);
  func_0x00010c0539a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f369ac; end: 104f36b5b;  */

void FUN_104f369ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104f36b5c;
  pcStack_70 = FUN_104f36b84;
  uStack_68 = 0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0bef20(param_1);
  uVar1 = puStack_88[5];
  _objc_retainBlock(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f36b5c; end: 104f36b83;  */

void FUN_104f36b5c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 104f36b84; end: 104f36b8b;  */

void FUN_104f36b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104f36b8c; end: 104f36c2b;  */

void FUN_104f36b8c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f36c2c;
  puStack_38 = &UNK_11085c480;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar3;
  _objc_retain(uVar4);
  uStack_28 = uVar4;
  _objc_retainBlock();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = ppuVar1;
  _objc_release(uVar3);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 104f36c2c; end: 104f36e83;  */

void FUN_104f36c2c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  uVar6 = param_2;
  func_0x00010bf529e0();
  uVar3 = 0;
  if (uVar6 == 0) {
LAB_104f36cbc:
    FUN_104f373b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_2;
    func_0x00010bf529e0();
    if (uVar3 == 1) {
      uVar3 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x000108425a5c();
      _objc_release();
      if ((int)uVar6 != 0) goto LAB_104f36cbc;
    }
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    uVar6 = param_2;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0d3c80();
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010bf4b900();
    if ((uVar6 & 1) == 0) {
      func_0x00010befa120(uVar4);
    }
    _objc_release(uVar2);
    uVar6 = uVar3;
    func_0x00010bfc6140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar6;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf529e0();
  if ((uVar6 != 0) && (uVar6 = param_2, func_0x00010bf529e0(), uVar6 == 1)) {
    uVar6 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108425a5c();
    _objc_release(uVar6);
  }
  uVar6 = param_2;
  _objc_release(param_2);
  if (uVar3 == 0) {
    func_0x000104f373fc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = 0;
  }
  puVar5 = PTR_PTR_1126b2890;
  _objc_alloc(PTR_PTR_1126b2890);
  func_0x00010c0539a0();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f36e84; end: 104f36f23;  */

void FUN_104f36e84(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f36f24;
  puStack_38 = &UNK_11085c480;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar3;
  _objc_retain(uVar4);
  uStack_28 = uVar4;
  _objc_retainBlock();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = ppuVar1;
  _objc_release(uVar3);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 104f36f24; end: 104f36f53;  */

void FUN_104f36f24(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  func_0x000108425fd8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 < (undefined *)0x3) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_retain(uVar2);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010bf4b900();
      puVar5 = puVar3;
      if ((int)puVar4 == 0) {
        func_0x00010c0d3c80(puVar3);
        func_0x00010befa120();
      }
      else {
        _objc_retain(puVar3);
      }
    }
    _objc_release(uVar2);
    _objc_release(puVar3);
    lVar6 = lVar8;
    func_0x00010bfc6140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar8);
    lVar8 = lVar6;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  _objc_release(puVar3);
  uVar7 = uVar2;
  _objc_release(uVar2);
  if (lVar8 == 0) {
    func_0x000104f373fc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = 0;
  }
  puVar3 = PTR_PTR_1126b2890;
  _objc_alloc(PTR_PTR_1126b2890);
  func_0x00010c0539a0();
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f36f54; end: 104f37063;  */

void FUN_104f36f54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104f36b5c;
  pcStack_30 = FUN_104f36b84;
  uStack_28 = 0;
  func_0x00010c0bef20(param_1);
  uVar1 = puStack_48[5];
  _objc_retainBlock(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f37064; end: 104f3707f;  */

void FUN_104f37064(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR___NSConcreteGlobalBlock_11085c878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f37080; end: 104f3714f;  */

void FUN_104f37080(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2898;
  _objc_opt_new(PTR_PTR_1126b2898);
  uVar2 = param_2;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    func_0x000104f373e4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104f37414();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2bb3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0(param_2);
  func_0x00010c2b06a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f37150; end: 104f37193;  */

void FUN_104f37150(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR___NSConcreteGlobalBlock_11085c898;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f37194; end: 104f3722f;  */

void FUN_104f37194(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x000108425a5c();
  if ((int)uVar2 == 0) {
    uVar2 = param_2;
    func_0x000108425b30();
    if ((int)uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = param_2;
      func_0x00010c0f4aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x000100504554();
      _objc_release(uVar1);
    }
  }
  else {
    uVar2 = param_2;
    func_0x000108425950(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f37230; end: 104f37277;  */

void FUN_104f37230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f37278; end: 104f373b3;  */

undefined ** FUN_104f37278(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuVar7 = (undefined **)0x0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(ulong *)(lVar8 * 8);
        func_0x0001084259b4();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        ppuVar7 = (undefined **)((long)ppuVar7 + (uVar5 & 0xffffffff));
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dbb978;
    func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbb978,
                        &PTR____CFConstantStringClassReference_110dbb998,0);
    func_0x000107c61180();
    if (lRam00000001137fe070 != -1) {
      func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
    }
    ppuVar2 = ppuVar7;
    if ((bRam00000001137fe068 & 1) != 0) {
      func_0x000107c312ec(ppuVar7);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  return ppuVar7;
}



/* Entry: 104f373b4; end: 104f3745b;  */

void FUN_104f373b4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb978;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dbb978,
                      &PTR____CFConstantStringClassReference_110dbb998,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104f3745c; end: 104f37733; -[SCMentionBarScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3745c(long param_1)

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
  undefined *puVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126b28a8;
  _objc_alloc();
  lVar18 = (long)_DAT_112717598;
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c26c1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0ca500();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c15c220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0ca460();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127175a0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0cb000();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf44f20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfc8120();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar18;
  _objc_loadWeakRetained();
  func_0x00010c0cb020();
  func_0x00010c0518c0();
  _objc_release(lVar16);
  _objc_release(lVar15);
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
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar17 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c21b220(puVar1);
  _objc_release(puVar17);
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf7a420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    param_1 = param_1 + lVar18;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bf7a420();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010c0ca560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar17);
    _objc_release(puVar17);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f37734; end: 104f3777b; -[SCMentionBarScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f37734(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127175a0);
  _objc_storeStrong(param_1 + _DAT_11271759c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717598);
  return;
}



/* Entry: 104f3777c; end: 104f3798b; -[SCMentionBarViewController initWithTextInputObservable:mentionPersonsObservable:sendMessageObservable:mentionBarDelegate:merlinOnboardingScopeExposer:merlinOnboardingStatusManager:composerRuntime:getNonParticipantObservableCallback:merlinOnboardingType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f3777c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  puStack_68 = PTR_PTR_1126e51c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127175a4,param_6);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127175a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127175a8) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127175ac;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127175b0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127175b4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127175b8;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127175bc;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127175c0;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar3);
    uVar3 = param_10;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127175c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127175c4) = uVar3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127175c8) = param_11;
    func_0x00010be3b740(puVar1);
  }
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



/* Entry: 104f3798c; end: 104f37cdf; -[SCMentionBarViewController _initializeMentionBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3798c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126b28b0;
  _objc_opt_new(PTR_PTR_1126b28b0);
  lVar8 = param_1;
  func_0x00010be3b800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2ac0(puVar1);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010be3b840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2b00(puVar1);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010be3b820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2ae0(puVar1);
  _objc_release(lVar8);
  lVar8 = param_1;
  func_0x00010be3b580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3540(puVar1);
  _objc_release(lVar8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127175ac);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c21e880(puVar1);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127175b0);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c19ffe0(puVar1);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127175b4);
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c1fc280(puVar1);
  _objc_release(uVar4);
  puVar6 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1b07e0(puVar1);
  func_0x00010c1c7ac0(puVar1);
  func_0x00010c1c7c20(puVar1);
  func_0x00010c194c80(puVar1);
  _objc_initWeak(auStack_48,param_1);
  lVar8 = *(long *)(param_1 + _DAT_1127175c4);
  if (lVar8 != 0) {
    puVar6 = auStack_50;
    _objc_copyWeak(puVar6,auStack_48);
  }
  func_0x00010c1a36a0(puVar1);
  puVar3 = PTR_PTR_1126b28b8;
  _objc_alloc();
  func_0x00010c061d40();
  lVar7 = (long)_DAT_1127175cc;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127175d0;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar7));
  if (lVar8 != 0) {
    _objc_destroyWeak(puVar6);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f37ce0; end: 104f37d1f;  */

void FUN_104f37ce0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be20ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f37d20; end: 104f37da7; -[SCMentionBarViewController _initializeOnMentionConfirmedBlock] */

void FUN_104f37d20(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f37da8;
  puStack_38 = &UNK_11085c958;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f37da8; end: 104f37e43;  */

void FUN_104f37da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010beb6240();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if ((int)lVar2 == 0) {
    func_0x00010be5f500();
  }
  else {
    func_0x00010beb9d80();
  }
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f37e44; end: 104f37f07; -[SCMentionBarViewController _shouldShowMerlinOnboarding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104f37e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bfb8960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + _DAT_1127175c8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127175bc);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 8) {
      uVar2 = uVar3;
      func_0x00010c06fe20();
      uVar1 = (uint)uVar2;
    }
    else {
      uVar2 = uVar3;
      func_0x00010c06fde0();
      uVar1 = (uint)uVar2;
    }
    uVar1 = uVar1 ^ 1;
    _objc_release(uVar3);
  }
  return uVar1;
}



/* Entry: 104f37f08; end: 104f380bb; -[SCMentionBarViewController _showMerlinOnboardingForMention:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f37f08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar3 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b28c0;
  _objc_alloc(PTR_PTR_1126b28c0);
  func_0x00010c031aa0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127175b8));
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f380bc; end: 104f38107;  */

void FUN_104f380bc(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be5f500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f38108; end: 104f38387; -[SCMentionBarViewController _mentionConfirmed:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f38108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bfb8960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c153b80();
  uVar1 = (int)uVar3 - 1;
  lVar15 = 0;
  if (uVar1 < 3) {
    lVar15 = (ulong)uVar1 + 1;
  }
  puVar4 = PTR_PTR_1126b28d8;
  _objc_alloc();
  uVar3 = uVar2;
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar6 = uVar2;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c067ec0();
  func_0x00010bf41580(puVar8,param_2,(long)(int)uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c078d00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf1f3c0();
  func_0x00010c05c280(puVar4,param_2,uVar3,uVar5,puVar8,uVar7,uVar10,uVar12,lVar15,(char)uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c24d960(param_4);
  func_0x00010bf94880(param_4);
  func_0x00010c24d960(param_4);
  _objc_release(param_4);
  lVar15 = param_1 + _DAT_1127175a4;
  _objc_loadWeakRetained(lVar15);
  func_0x00010bf7ac80();
  _objc_release(lVar15);
  func_0x00010be359e0(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f38388; end: 104f3843b; -[SCMentionBarViewController _initializeOnMentionShownBlock] */

void FUN_104f38388(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104f38410;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f3843c; end: 104f384ef; -[SCMentionBarViewController _initializeOnMentionHiddenBlock] */

void FUN_104f3843c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104f384c4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f384f0; end: 104f385bf; -[SCMentionBarViewController _initializeGetLatestMentionsDisplayMetrics] */

void FUN_104f384f0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104f38578;
  puStack_38 = &UNK_11085c9b8;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104f385c0; end: 104f385ef; -[SCMentionBarViewController mentionSearchMetricsEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f385c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127175a8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f385f0; end: 104f385ff; -[SCMentionBarViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f385f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_1127175cc));
  return;
}



/* Entry: 104f38600; end: 104f38673; -[SCMentionBarViewController merlinOnboardingNeedsDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f38600(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127175b8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + _DAT_1127175a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f38674; end: 104f386cb; -[SCMentionBarViewController _showMentionBar] */

void FUN_104f38674(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f386cc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f386cc; end: 104f3877b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f386cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127175a4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a6bc0();
  _objc_release(lVar1);
  lStack_38 = *(long *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104f3877c;
  puStack_40 = &UNK_110842e18;
  func_0x00010c27ac60(0x3fd999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,
                      *(undefined8 *)(lStack_38 + _DAT_1127175cc),0x500000,&puStack_58,0);
  return;
}



/* Entry: 104f3877c; end: 104f387c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3877c(long param_1)

{
  func_0x00010c181140(0x4049000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127175d0));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127175cc),
             PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 104f387c8; end: 104f3881f; -[SCMentionBarViewController _hideMentionbar] */

void FUN_104f387c8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104f38820;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104f38820; end: 104f38887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f38820(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127175cc),param_2,1);
  func_0x00010c181140(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127175d0));
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127175a4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf773a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f38888; end: 104f3890f; -[SCMentionBarViewController _updateMentionMetrics:] */

void FUN_104f38888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f38910;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 104f38910; end: 104f389bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f38910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b28c8;
  _objc_alloc(PTR_PTR_1126b28c8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1549e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1548c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067fc0();
  func_0x00010c042be0(puVar1,param_2,uVar3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_1127175a8),param_2,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f389c0; end: 104f38a87; -[SCMentionBarViewController _getNonParticipantRecordsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f389c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127175c4;
  lVar1 = *(long *)(param_1 + lVar5);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + lVar5);
    (**(code **)(puVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar3 = puVar2;
  func_0x00010c0b8600(puVar2,param_2,&PTR___NSConcreteGlobalBlock_11085ca88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


