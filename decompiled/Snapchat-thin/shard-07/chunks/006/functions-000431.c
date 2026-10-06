/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057eb288; end: 1057eb31b;  */

void FUN_1057eb288(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    _objc_release(param_1);
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e040f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057eb31c; end: 1057eb343;  */

undefined ** FUN_1057eb31c(long param_1)

{
  if (param_1 - 1U < 6) {
    return (undefined **)(&PTR_PTR_1108b48b8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e04118;
}



/* Entry: 1057eb344; end: 1057eb3b7; -[CTPUserDataFeedServiceLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1057eb344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea608;
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



/* Entry: 1057eb3b8; end: 1057eb5a3; -[CTPUserDataFeedServiceLogger logCompletedLegacyUserDataJob:] */

void FUN_1057eb3b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c085920();
  if (lVar1 != 0) {
    puVar7 = PTR_PTR_1126be9c0;
    if (lVar1 == 2) {
      func_0x00010c12c400(PTR_PTR_1126be9c0);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar1 == 1) {
      func_0x00010bef82a0(PTR_PTR_1126be9c0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    func_0x00010c252440(param_3);
    lVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_1057eb288();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = puVar7;
    if (lVar2 != 0) {
      func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110daeeb8,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    lVar1 = param_3;
    func_0x00010bf441c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar4 = param_3;
    func_0x00010c250f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(lVar4);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa13a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa13a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057eb5a4; end: 1057eb66b; -[CTPUserDataFeedServiceLogger logUpdateJobSuccess:] */

void FUN_1057eb5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be9c8;
  func_0x00010c2943c0(PTR_PTR_1126be9c8);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057eb31c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c294380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1057eb66c; end: 1057eb797; -[CTPUserDataFeedServiceLogger logUpdateJobFailure:error:] */

void FUN_1057eb66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be9c8;
  _objc_retain(param_4);
  func_0x00010c2943a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057eb31c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = param_4;
  FUN_1057eb288(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daeeb8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c294380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057eb798; end: 1057eb85f; -[CTPUserDataFeedServiceLogger logCompletedRecentsMigration:] */

void FUN_1057eb798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be9c8;
  func_0x00010c122a40(PTR_PTR_1126be9c8);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057eb31c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c294380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1057eb860; end: 1057eb98b; -[CTPUserDataFeedServiceLogger logFailedRecentsMigration:error:] */

void FUN_1057eb860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be9c8;
  _objc_retain(param_4);
  func_0x00010c122a20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057eb31c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar3 = param_4;
  FUN_1057eb288(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daeeb8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c294380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057eb98c; end: 1057eb997; -[CTPUserDataFeedServiceLogger .cxx_destruct] */

void FUN_1057eb98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057eb998; end: 1057ebccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057eb998(long param_1,undefined8 param_2)

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
  undefined8 uVar27;
  long lVar28;
  
  puVar1 = PTR_PTR_1126be9d8;
  _objc_alloc();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  FUN_1057ebccc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c085260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + _DAT_112729fb4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar6;
  func_0x00010c085220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  FUN_1057ebccc();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfa4700();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar12 = 0;
  if (lVar11 != 0) {
    lVar12 = lVar11 + _DAT_112729fb8;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar12;
  func_0x00010c291880();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar15 = 0;
  if (lVar14 != 0) {
    lVar15 = lVar14 + _DAT_112729fc0;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x0001006f26d0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar21 = 0;
  if (lVar20 != 0) {
    lVar21 = lVar20 + _DAT_112729fc4;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar21;
  func_0x00010bfeb240();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar24 = 0;
  if (lVar23 != 0) {
    lVar24 = lVar23 + _DAT_112729fc8;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar24;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112729fcc;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar28;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020640(puVar1,param_2,lVar4,lVar7,lVar10,lVar13,lVar16,lVar19,lVar22,lVar25,uVar27,
                      lVar26);
  _objc_release(lVar26);
  _objc_release(lVar28);
  _objc_release(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057ebccc; end: 1057ebcef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ebccc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112729fb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057ebcf0; end: 1057ebd8b; -[CTPUserDataFeedServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ebcf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729fd0,0);
  _objc_destroyWeak(param_1 + _DAT_112729fcc);
  _objc_destroyWeak(param_1 + _DAT_112729fc8);
  _objc_destroyWeak(param_1 + _DAT_112729fc4);
  _objc_destroyWeak(param_1 + _DAT_112729fc0);
  _objc_destroyWeak(param_1 + _DAT_112729fbc);
  _objc_destroyWeak(param_1 + _DAT_112729fb8);
  _objc_destroyWeak(param_1 + _DAT_112729fb4);
  _objc_destroyWeak(param_1 + _DAT_112729fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729fac);
  return;
}



/* Entry: 1057ebd8c; end: 1057ebdaf;  */

uint FUN_1057ebd8c(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0x70403050201 >> ((param_1 & 7) << 3));
  if (6 < param_1) {
    uVar1 = 1;
  }
  return uVar1 & 7;
}



/* Entry: 1057ebdb0; end: 1057ebe8b;  */

void FUN_1057ebdb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010bf96f00();
  puVar1 = PTR_PTR_1126be9e8;
  _objc_alloc(PTR_PTR_1126be9e8);
  uVar2 = param_2;
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96f00();
  func_0x00010c01b3c0(puVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057ebe8c; end: 1057ebeb3;  */

undefined8 FUN_1057ebe8c(int param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10ddbea68 + ((ulong)(param_1 - 1U) & 0xff) * 8);
  }
  return 0;
}



/* Entry: 1057ebeb4; end: 1057ec057; -[CTPUserDataUpdateJobProcessor initWithDocObjectContext:userDataClient:logger:circumstanceEngine:retryJobProvider:persistenceService:] */

long FUN_1057ebeb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x28,param_7);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_8;
    _objc_release(uVar1);
    puVar2 = &UNK_10f2fc23e;
    _dispatch_queue_create(&UNK_10f2fc23e,0);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1057ec058; end: 1057ec097; -[CTPUserDataUpdateJobProcessor _maxAttemptsForItemsInCategory:] */

long FUN_1057ec058(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 2U < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e041d8,3,0);
    return (long)(int)uVar1;
  }
  return 3;
}



/* Entry: 1057ec098; end: 1057ec0c7; -[CTPUserDataUpdateJobProcessor _shouldUseSimpleUpload:] */

undefined8 FUN_1057ec098(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 2U < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               (&PTR_PTR_1108b4e68)[param_3 - 2U],1,0);
    return uVar1;
  }
  return 1;
}



/* Entry: 1057ec0c8; end: 1057ec17f; -[CTPUserDataUpdateJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_1057ec0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6)

{
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_4 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,2,0);
  }
  else {
    func_0x00010bfc3320(param_4);
    func_0x00010bed39a0(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return 0;
}



/* Entry: 1057ec180; end: 1057ec1b7; -[CTPUserDataUpdateJobProcessor dataForFeedCategory:] */

void FUN_1057ec180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,&uStack_18,8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057ec1b8; end: 1057ec513; -[CTPUserDataUpdateJobProcessor addTaskForItem:category:isDelete:] */

void FUN_1057ec1b8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be9f0;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf9e140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf96f00();
  switch(uVar3) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    uVar4 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126be9e0;
    _objc_opt_class(PTR_PTR_1126be9e0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      func_0x00010c0ed1a0();
    }
    _objc_release(uVar3);
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xd:
  }
  _objc_release(param_3);
  FUN_1057ebd8c(param_4);
  func_0x00010c011240();
  _objc_release(uVar2);
  lVar7 = param_1;
  func_0x00010beb74a0();
  if ((int)lVar7 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1057ec514;
    puStack_78 = &UNK_11084f688;
    _objc_retain(puVar1);
    puStack_70 = puVar1;
    _objc_copyWeak(auStack_a8,auStack_68);
    uStack_98 = param_5;
    _objc_retain(param_3);
    uStack_a0 = param_4;
    func_0x00010c0f8500(uVar8);
    _objc_release(uVar8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010bed39c0(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ec514; end: 1057ec5bb;  */

void FUN_1057ec514(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1057f463c(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c25ed40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010beec4e0(param_2);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057ec5bc; end: 1057ec7f7;  */

void FUN_1057ec5bc(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1;
    func_0x00010bf2f600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar1 = param_1;
      func_0x00010c13f820(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf63ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 5;
      func_0x00010aee31d0(5,10,1,2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c25f1e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf2f600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(lVar1);
      _objc_release(puVar2);
      _objc_release(lVar1);
      _objc_release(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ec7f8; end: 1057ecc67; -[CTPUserDataUpdateJobProcessor _updateBackendWithOneUpdate:category:isDelete:] */

void FUN_1057ec7f8(long param_1,undefined1 *param_2,long param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_4;
  if (param_3 != 0) {
    unaff_x25 = param_4;
    FUN_1057ebd8c();
    unaff_x20 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x26;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x26);
    puVar1 = unaff_x21;
    func_0x00010bf529e0();
    if (puVar1 != (undefined *)0x0) {
      if (((ulong)param_5 & 1) == 0) {
        _objc_initWeak(auStack_90,param_1);
        param_5 = *(undefined **)(param_1 + 0x10);
        func_0x00010c269d40(param_5);
        _objc_retainAutoreleasedReturnValue();
        FUN_1057ebe8c(unaff_x25);
        unaff_x26 = param_5;
        func_0x00010c11c9e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_1057ecc68;
        puStack_b8 = &UNK_1108b49e8;
        unaff_x27 = &puStack_d0;
        param_2 = auStack_90;
        _objc_copyWeak(auStack_a8,param_2);
        puVar2 = unaff_x26;
        lStack_b0 = param_1;
        puStack_a0 = param_4;
        uStack_98 = (char)unaff_x25;
        func_0x00010bf87460(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        puStack_f8 = puVar1;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_1057ece98;
        puStack_e0 = &UNK_11087bb00;
        _objc_retain(unaff_x20);
        unaff_x25 = puVar2;
        puStack_d8 = unaff_x20;
        func_0x00010c25ff20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(unaff_x25);
        _objc_release(puVar2);
        _objc_release(unaff_x26);
        _objc_release(param_5);
        _objc_release(puStack_d8);
        _objc_destroyWeak(auStack_a8);
        _objc_destroyWeak(auStack_90);
      }
      else {
        _objc_initWeak(auStack_90,param_1);
        param_5 = *(undefined **)(param_1 + 0x10);
        func_0x00010c269d40(param_5);
        _objc_retainAutoreleasedReturnValue();
        FUN_1057ebe8c(unaff_x25);
        unaff_x26 = param_5;
        func_0x00010c12ef40(param_5);
        _objc_retainAutoreleasedReturnValue();
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_1057ecea0;
        puStack_120 = &UNK_1108b49e8;
        unaff_x27 = &puStack_138;
        param_2 = auStack_90;
        _objc_copyWeak(auStack_110,param_2);
        puVar2 = unaff_x26;
        lStack_118 = param_1;
        puStack_108 = param_4;
        uStack_100 = (char)unaff_x25;
        func_0x00010bf87460(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(unaff_x20);
        unaff_x25 = puVar2;
        func_0x00010c25ff20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(unaff_x25);
        _objc_release(puVar2);
        _objc_release(unaff_x26);
        _objc_release(param_5);
        _objc_release(unaff_x20);
        _objc_destroyWeak(auStack_110);
        _objc_destroyWeak(auStack_90);
      }
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x25);
  _objc_release(puStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(unaff_x27 + 5);
  _objc_release(unaff_x26);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_copyWeak(auStack_1b8,lVar3 + 0x28);
  uStack_1a8 = *(undefined1 *)(lVar3 + 0x38);
  uStack_1b0 = *(undefined8 *)(lVar3 + 0x30);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_1b8);
  return;
}



/* Entry: 1057ecc68; end: 1057ecd53;  */

void FUN_1057ecc68(long param_1,undefined8 param_2)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uStack_48 = *(undefined1 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1057ecd54; end: 1057ece17;  */

void FUN_1057ecd54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beda020(param_1);
    func_0x00010bed5220(param_1);
    lVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2660();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057ece18; end: 1057ece97;  */

void FUN_1057ece18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2640();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057ece98; end: 1057ece9f;  */

void FUN_1057ece98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1057ecea0; end: 1057ecf8b;  */

void FUN_1057ecea0(long param_1,undefined8 param_2)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  uStack_48 = *(undefined1 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1057ecf8c; end: 1057ed04f;  */

void FUN_1057ecf8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beda020(param_1);
    func_0x00010bed5220(param_1);
    lVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2660();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057ed050; end: 1057ed0cf;  */

void FUN_1057ed050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2640();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057ed0d0; end: 1057ed0d7;  */

void FUN_1057ed0d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1057ed0d8; end: 1057ed85f; -[CTPUserDataUpdateJobProcessor _updateBackendWithChanges:onComplete:] */

void FUN_1057ed0d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  uVar14 = param_3;
  FUN_1057ebd8c();
  if ((int)uVar14 - 5U < 0xfffffffc) {
    (**(code **)(param_4 + 0x10))(param_4,2,0);
  }
  else {
    lVar1 = param_1;
    func_0x00010be152a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be10e00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if ((lVar1 == 0) && (lVar1 = lVar3, func_0x00010bf529e0(), lVar1 == 0)) {
      func_0x00010bec8ce0(param_1);
    }
    lVar1 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_1057ed860;
    uStack_78 = 0x1057ed870;
    uStack_70 = 0;
    lVar5 = lVar4;
    _dispatch_group_create();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_initWeak(auStack_a0,param_1);
    lVar7 = lVar1;
    func_0x00010bf529e0();
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      FUN_1057ebe8c(uVar14);
      uVar9 = uVar8;
      func_0x00010c11c9e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = puVar11;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_1057ed878;
      puStack_e0 = &UNK_1108b4aa8;
      _objc_copyWeak(auStack_b8,auStack_a0);
      uStack_a8 = (char)uVar14;
      _objc_retain(lVar1);
      lStack_d8 = lVar1;
      _objc_retain(lVar2);
      lStack_d0 = lVar2;
      _objc_retain(lVar5);
      puStack_c0 = &uStack_98;
      uVar10 = uVar9;
      lStack_c8 = lVar5;
      uStack_b0 = param_3;
      func_0x00010bf87460(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar8);
      func_0x00010befa120(puVar6);
      _dispatch_group_enter(lVar5);
      _objc_release(uVar10);
      _objc_release(lStack_c8);
      _objc_release(lStack_d0);
      _objc_release(lStack_d8);
      _objc_destroyWeak(auStack_b8);
    }
    lVar7 = lVar4;
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      FUN_1057ebe8c(uVar14);
      uVar9 = uVar10;
      func_0x00010c12ef40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = puVar11;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1057edca0;
      puStack_140 = &UNK_1108b4b08;
      _objc_copyWeak(auStack_110,auStack_a0);
      uStack_100 = (char)uVar14;
      _objc_retain(lVar1);
      lStack_138 = lVar1;
      _objc_retain(lVar3);
      lStack_130 = lVar3;
      _objc_retain(lVar5);
      lStack_128 = lVar5;
      _objc_retain(lVar4);
      puStack_118 = &uStack_98;
      uVar14 = uVar9;
      lStack_120 = lVar4;
      uStack_108 = param_3;
      func_0x00010bf87460(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar10);
      func_0x00010befa120(puVar6);
      _dispatch_group_enter(lVar5);
      _objc_release(uVar14);
      _objc_release(lStack_120);
      _objc_release(lStack_128);
      _objc_release(lStack_130);
      _objc_release(lStack_138);
      _objc_destroyWeak(auStack_110);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar14);
    puVar11 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    puVar12 = PTR_PTR_1126ae6b8;
    func_0x00010c0cab40(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar5);
    _objc_retain(uVar14);
    _objc_copyWeak(auStack_168,auStack_a0);
    uStack_160 = param_3;
    _objc_retain(param_4);
    _objc_retain(puVar11);
    puVar13 = puVar12;
    func_0x00010c25ff20(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_168);
    _objc_release(uVar14);
    _objc_release(lVar5);
    _objc_release(puVar11);
    _objc_release(uVar14);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar6);
    _objc_release(lVar5);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1057ed860; end: 1057ed877;  */

void FUN_1057ed860(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057ed878; end: 1057eda33;  */

void FUN_1057ed878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1057eda34;
  puStack_80 = &UNK_1108b4a18;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_60,param_1 + 0x40);
  uStack_58 = *(undefined1 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  _objc_retain(uVar1);
  uStack_a0 = *(undefined1 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_b0,param_1 + 0x40);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 1057eda34; end: 1057edb33;  */

void FUN_1057eda34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010beda020(lVar2);
    func_0x00010bed5220(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    func_0x00010bddfac0(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1057edb34; end: 1057edb3b;  */

void FUN_1057edb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057edb3c; end: 1057edc57;  */

void FUN_1057edb3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be5db60(lVar1);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010be38240(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1057edc58; end: 1057edc9f;  */

void FUN_1057edc58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057edca0; end: 1057ede7b;  */

void FUN_1057edca0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1057ede7c;
  puStack_80 = &UNK_1108b4a18;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_60,param_1 + 0x48);
  uStack_58 = *(undefined1 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_b0,param_1 + 0x48);
  uStack_a0 = *(undefined1 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uStack_a8 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 1057ede7c; end: 1057edf7b;  */

void FUN_1057ede7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010beda020(lVar2);
    func_0x00010bed5220(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    func_0x00010bddfac0(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1057edf7c; end: 1057edf83;  */

void FUN_1057edf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1057edf84; end: 1057ee09f;  */

void FUN_1057edf84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be5db60(lVar1);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010be38240(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1057ee0a0; end: 1057ee1ab;  */

void FUN_1057ee0a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057ee1ac; end: 1057ee293;  */

void FUN_1057ee1ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
      func_0x00010bec8ce0(lVar1,param_2,*(undefined8 *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010be0e2c0(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010bf2f600(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x40)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(lVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057ee294; end: 1057ee343;  */

void FUN_1057ee294(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1057ee344; end: 1057ee647; -[CTPUserDataUpdateJobProcessor _updateItemsPersistenceService:removingItemIds:category:] */

void FUN_1057ee344(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined *)0x0;
  if (param_5 < 4) {
    if (param_5 == 1) {
      puVar5 = PTR_PTR_1126b0cb0;
      _objc_alloc();
    }
    else if (param_5 == 2) {
      puVar5 = PTR_PTR_1126b0cb0;
      _objc_alloc();
    }
    else {
      if (param_5 != 3) goto LAB_1057ee478;
      puVar5 = PTR_PTR_1126b0cb0;
      _objc_alloc();
    }
  }
  else if (param_5 < 6) {
    if (param_5 == 4) {
      puVar5 = PTR_PTR_1126b0cb0;
      _objc_alloc();
    }
    else {
      if (param_5 != 5) goto LAB_1057ee478;
      puVar5 = PTR_PTR_1126b0cb0;
      _objc_alloc();
    }
  }
  else if (param_5 == 6) {
    puVar5 = PTR_PTR_1126b0cb0;
    _objc_alloc();
  }
  else {
    if (param_5 != 7) goto LAB_1057ee478;
    puVar5 = PTR_PTR_1126b0cb0;
    _objc_alloc();
  }
  func_0x00010c0559c0();
LAB_1057ee478:
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(puVar5);
  lVar1 = param_3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if ((lVar3 != 0) || (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28f160();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ee648; end: 1057ee8bb;  */

void FUN_1057ee648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
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
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1057ed860;
  uStack_60 = 0x1057ed870;
  uStack_58 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1057ed860;
  uStack_90 = 0x1057ed870;
  uStack_88 = 0;
  func_0x00010c0c0800(param_2);
  if (puStack_78[5] == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 1;
    puVar6 = PTR_PTR_1126bacd0;
    _objc_alloc(PTR_PTR_1126bacd0);
    uVar1 = puStack_78[5];
    func_0x00010bfe5ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126badb8;
    func_0x00010c11fd80(PTR_PTR_1126badb8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_78[5];
    func_0x00010bf63640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ffe0(puVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1057ee8bc; end: 1057ee97b;  */

/* WARNING: Removing unreachable block (ram,0x0001057ee928) */

void FUN_1057ee8bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b0cb8;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(0);
  _objc_release(param_2);
  return;
}



/* Entry: 1057ee97c; end: 1057ee9b3;  */

void FUN_1057ee97c(long param_1,undefined8 param_2)

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



/* Entry: 1057ee9b4; end: 1057eeab7;  */

void FUN_1057ee9b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1057ed860;
  uStack_30 = 0x1057ed870;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057eeab8;
  puStack_68 = &UNK_1108b4c28;
  uStack_88 = *(undefined1 *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc0000000;
  pcStack_98 = FUN_1057eeaf0;
  puStack_90 = &UNK_1108b4c58;
  uStack_58 = uStack_88;
  puStack_48 = puStack_60;
  func_0x00010c0c0800(param_2,param_2,&puStack_80,&puStack_a8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057eeab8; end: 1057eeaef;  */

void FUN_1057eeab8(long param_1,undefined8 param_2)

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



/* Entry: 1057eeaf0; end: 1057eeaf3;  */

void FUN_1057eeaf0(void)

{
  return;
}



/* Entry: 1057eeaf4; end: 1057eeb7f; -[CTPUserDataUpdateJobProcessor _updateChatHometabFeedIfNecessaryWithUpdatingItems:removingItemIds:category:] */

void FUN_1057eeaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 == 4) || (param_5 == 1)) {
    func_0x00010beda020(param_1,param_2,param_3,param_4,6);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057eeb80; end: 1057eef13; -[CTPUserDataUpdateJobProcessor _fetchUpdateExternalIDs:] */

void FUN_1057eeb80(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be9f0);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_1057f3e2c();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  uStack_1d8 = 1;
  ppuStack_208 = &PTR_DAT_1108b4e08;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108b4d38;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar4 = &uStack_279;
  puStack_158 = puVar3;
  pppuStack_150 = &ppuStack_208;
  FUN_1057f3ce0();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_1108b4d98;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_1108b4cd8;
  plStack_210 = (long *)0x0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar5 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_1108b4cd8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_1108b4d98;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108b4d38;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_1108b4e08;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057eef14; end: 1057ef0cb;  */

undefined8 * FUN_1057eef14(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108b4cd8;
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
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1057ef0cc; end: 1057ef45f; -[CTPUserDataUpdateJobProcessor _fetchDeleteExternalIDs:] */

void FUN_1057ef0cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be9f0);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar2);
  }
  puVar3 = &uStack_191;
  FUN_1057f3e2c();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  uStack_1d8 = 2;
  ppuStack_208 = &PTR_DAT_1108b4e08;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_1108b4d38;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar4 = &uStack_279;
  puStack_158 = puVar3;
  pppuStack_150 = &ppuStack_208;
  FUN_1057f3ce0();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_1108b4d98;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_1108b4cd8;
  plStack_210 = (long *)0x0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar5 = &uStack_b0;
  uStack_2c0 = param_3;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_1108b4cd8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_1108b4d98;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_1108b4d38;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_1108b4e08;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057ef460; end: 1057ef563; -[CTPUserDataUpdateJobProcessor _incrementAttempts:maxAttempts:completionBlock:] */

void FUN_1057ef460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057ef564;
  puStack_58 = &UNK_1108b4c98;
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x00010c0f8500(uVar1,param_2,&puStack_70,*(undefined8 *)(param_1 + 0x40),param_5);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ef564; end: 1057ef75b;  */

void FUN_1057ef564(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  puVar6 = auStack_e8;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar2 = uVar8;
        func_0x00010bf0dc20();
        puVar3 = PTR_PTR_1126be9f8;
        if ((uVar2 & 0xffffffff) < *(ulong *)(param_1 + 0x28)) {
          FUN_1057f41c8(PTR_PTR_1126be9f8,uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0dc20();
          if (puVar3 != (undefined *)0x0) {
            *(int *)(puVar3 + 0x18) = (int)uVar8 + 1;
          }
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        else {
          FUN_1057f45c8(PTR_PTR_1126be9f8,uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar6 = auStack_e8;
      lVar1 = lVar7;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  func_0x00010c0f8500(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 1057ef75c; end: 1057ef853; -[CTPUserDataUpdateJobProcessor _cleanupTasks:completionBlock:] */

void FUN_1057ef75c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1057ef854;
  puStack_40 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x40),param_4);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ef854; end: 1057ef9d3;  */

void FUN_1057ef854(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  puVar5 = auStack_d8;
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      puVar3 = PTR_PTR_1126be9f8;
      FUN_1057f45c8(PTR_PTR_1126be9f8,*(undefined8 *)(lVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    puVar5 = auStack_d8;
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar6);
  _objc_release(param_2);
  __Unwind_Resume(uVar4);
  _objc_retain(puVar5);
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2660();
  _objc_release(uVar4);
  (**(code **)(puVar5 + 0x10))(puVar5,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1057ef9d4; end: 1057efa67; -[CTPUserDataUpdateJobProcessor _successfullyCompleteJob:callback:] */

void FUN_1057ef9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2660();
  _objc_release(param_1);
  (**(code **)(param_4 + 0x10))(param_4,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057efa68; end: 1057efb1b; -[CTPUserDataUpdateJobProcessor _failedJob:callback:errors:] */

void FUN_1057efa68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2640();
  _objc_release(param_1);
  (**(code **)(param_4 + 0x10))(param_4,1,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057efb1c; end: 1057efb23; -[CTPUserDataUpdateJobProcessor docObjectContext] */

undefined8 FUN_1057efb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057efb24; end: 1057efb53; -[CTPUserDataUpdateJobProcessor setDocObjectContext:] */

void FUN_1057efb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057efb54; end: 1057efb5b; -[CTPUserDataUpdateJobProcessor userDataClient] */

undefined8 FUN_1057efb54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057efb5c; end: 1057efb8b; -[CTPUserDataUpdateJobProcessor setUserDataClient:] */

void FUN_1057efb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057efb8c; end: 1057efb93; -[CTPUserDataUpdateJobProcessor logger] */

undefined8 FUN_1057efb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057efb94; end: 1057efbc3; -[CTPUserDataUpdateJobProcessor setLogger:] */

void FUN_1057efb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057efbc4; end: 1057efbcb; -[CTPUserDataUpdateJobProcessor circumstanceEngine] */

undefined8 FUN_1057efbc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057efbcc; end: 1057efbfb; -[CTPUserDataUpdateJobProcessor setCircumstanceEngine:] */

void FUN_1057efbcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057efbfc; end: 1057efc13; -[CTPUserDataUpdateJobProcessor retryJobProvider] */

void FUN_1057efbfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057efc14; end: 1057efc1f; -[CTPUserDataUpdateJobProcessor setRetryJobProvider:] */

void FUN_1057efc14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1057efc20; end: 1057efc27; -[CTPUserDataUpdateJobProcessor persistenceService] */

undefined8 FUN_1057efc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1057efc28; end: 1057efc57; -[CTPUserDataUpdateJobProcessor setPersistenceService:] */

void FUN_1057efc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057efc58; end: 1057efc5f; -[CTPUserDataUpdateJobProcessor cancellableTasks] */

undefined8 FUN_1057efc58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057efc60; end: 1057efc8f; -[CTPUserDataUpdateJobProcessor setCancellableTasks:] */

void FUN_1057efc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057efc90; end: 1057efc97; -[CTPUserDataUpdateJobProcessor updateQueue] */

undefined8 FUN_1057efc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057efc98; end: 1057efcc7; -[CTPUserDataUpdateJobProcessor setUpdateQueue:] */

void FUN_1057efc98(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057efcc8; end: 1057efdab; -[CTPUserDataUpdateJobProcessor .cxx_destruct] */

void FUN_1057efcc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057efdac; end: 1057f0467;  */

void FUN_1057efdac(long param_1,undefined8 param_2,int *param_3)

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
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001057f040c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001057f042c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001057f042c;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
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
code_r0x0001057f03a0:
                    /* WARNING: Could not recover jumptable at 0x0001057f03c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001057f03a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
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
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x0001057f042c;
    }
    goto code_r0x0001057f0420;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001057f0420;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
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
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x0001057f042c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001057f042c;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
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
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1057f043c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001057f040c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001057f0420:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001057f042c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1057f043c:
  return;
}



/* Entry: 1057f0468; end: 1057f04ef;  */

void FUN_1057f0468(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001057f04dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1057f04f0; end: 1057f0627;  */

void FUN_1057f04f0(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
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
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,(long)*(char *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001057f061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1057f0628; end: 1057f06d7;  */

int FUN_1057f0628(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    cVar3 = '\0';
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    cVar3 = *(char *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar4 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar4 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar4,param_4);
    cVar3 = (char)lVar4;
  }
  else {
    cVar3 = '\0';
  }
  _objc_release(param_3);
  return (int)cVar3;
}



/* Entry: 1057f06d8; end: 1057f0713;  */

undefined8 FUN_1057f06d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1057f0714(uVar1,param_1);
  return uVar1;
}



/* Entry: 1057f0714; end: 1057f08bf;  */

void FUN_1057f0714(undefined8 *param_1,long param_2)

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
      func_0x0001057f0954(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
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
      func_0x0001057f08c0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1057f0800:
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
        FUN_1057f0a54(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1057f0800;
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
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_1108b4e08;
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



/* Entry: 1057f08c0; end: 1057f0a53;  */

undefined8 * FUN_1057f08c0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_1108b4e08;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1057f0a54; end: 1057f0ae7;  */

undefined8 * FUN_1057f0a54(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_1108b4e08;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1057f0ae8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1057f0ae8; end: 1057f0b5f;  */

void FUN_1057f0ae8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1057f0b60(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1057f0b60; end: 1057f0b9b;  */

void FUN_1057f0b60(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (-1 < param_2) {
    lVar1 = param_2;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
  FUN_1057f0b9c();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar2 = &PTR_DAT_1108b4d98;
  plVar3 = (long *)puVar2[0xd];
  puVar2[0xd] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)puVar2[0xc];
  puVar2[0xc] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (puVar2[9] != 0) {
    puVar2[10] = puVar2[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1057f0b9c; end: 1057f0baf;  */

void FUN_1057f0b9c(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_DAT_1108b4d98;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1057f0bb0; end: 1057f0c1f;  */

void FUN_1057f0bb0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1108b4d98;
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
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1057f0c20; end: 1057f12db;  */

void FUN_1057f0c20(long param_1,undefined8 param_2,int *param_3)

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
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001057f1280;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001057f12a0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001057f12a0;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
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
code_r0x0001057f1214:
                    /* WARNING: Could not recover jumptable at 0x0001057f1238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001057f1214;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
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
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
      goto code_r0x0001057f12a0;
    }
    goto code_r0x0001057f1294;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001057f1294;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
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
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)));
    goto code_r0x0001057f12a0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001057f12a0;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
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
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1057f12b0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001057f1280:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001057f1294:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001057f12a0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1057f12b0:
  return;
}



/* Entry: 1057f12dc; end: 1057f1363;  */

void FUN_1057f12dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001057f1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1057f1364; end: 1057f149b;  */

void FUN_1057f1364(long param_1,undefined8 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  
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
      pcVar1 = *(char **)(param_1 + 0x50);
      for (pcVar5 = *(char **)(param_1 + 0x48); pcVar5 != pcVar1; pcVar5 = pcVar5 + 1) {
        cVar3 = *pcVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,(long)cVar3);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,(long)*(char *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001057f1490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1057f149c; end: 1057f154b;  */

int FUN_1057f149c(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    cVar3 = '\0';
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    cVar3 = *(char *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar4 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar4 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar4,param_4);
    cVar3 = (char)lVar4;
  }
  else {
    cVar3 = '\0';
  }
  _objc_release(param_3);
  return (int)cVar3;
}



/* Entry: 1057f154c; end: 1057f1587;  */

undefined8 FUN_1057f154c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1057f1588(uVar1,param_1);
  return uVar1;
}



/* Entry: 1057f1588; end: 1057f1733;  */

void FUN_1057f1588(undefined8 *param_1,long param_2)

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
      func_0x0001057f17c8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
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
      func_0x0001057f1734(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1057f1674:
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
        FUN_1057f18c8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1057f1674;
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
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_1108b4d98;
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



/* Entry: 1057f1734; end: 1057f18c7;  */

undefined8 * FUN_1057f1734(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_1108b4d98;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1057f18c8; end: 1057f195b;  */

undefined8 * FUN_1057f18c8(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_1108b4d98;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1057f195c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}


