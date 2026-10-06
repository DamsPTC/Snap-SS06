/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068b7620; end: 1068b7673; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _feedTypeString] */

void FUN_1068b7620(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068b7674; end: 1068b7797; -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver .cxx_destruct] */

void FUN_1068b7674(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068b7798; end: 1068b7aa7; -[SCSpotlightMediaFetchingServiceProvider _createSpotlightMediaFetcherFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068b7798(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126cead8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112752b88;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112752b8c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112752b90;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112752b94;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112752b98;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112752b9c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0dbd20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112752ba0;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112752ba4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0ffb00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112752ba8;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112752bac;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112752bb0;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c23fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112752bb4;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752bb8;
  _objc_loadWeakRetained();
  lVar26 = param_1;
  func_0x00010c24c880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe2a0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar19,
                      lVar21,lVar23,lVar25,lVar26);
  _objc_release(lVar26);
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



/* Entry: 1068b7aa8; end: 1068b7b6f; -[SCSpotlightMediaFetchingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068b7aa8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752bb8);
  _objc_destroyWeak(param_1 + _DAT_112752bb4);
  _objc_destroyWeak(param_1 + _DAT_112752bb0);
  _objc_destroyWeak(param_1 + _DAT_112752b9c);
  _objc_destroyWeak(param_1 + _DAT_112752ba8);
  _objc_destroyWeak(param_1 + _DAT_112752ba4);
  _objc_destroyWeak(param_1 + _DAT_112752ba0);
  _objc_destroyWeak(param_1 + _DAT_112752b8c);
  _objc_destroyWeak(param_1 + _DAT_112752bac);
  _objc_destroyWeak(param_1 + _DAT_112752b90);
  _objc_destroyWeak(param_1 + _DAT_112752b98);
  _objc_destroyWeak(param_1 + _DAT_112752b94);
  _objc_destroyWeak(param_1 + _DAT_112752b88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752bbc);
  return;
}



/* Entry: 1068b7b70; end: 1068b7e33; -[SCSpotlightRecentStoriesServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068b7b70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1068b7e34;
  puStack_90 = &UNK_110861c28;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112752bc0;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae960;
  puVar5 = PTR_PTR_1126c5728;
  func_0x00010c1225e0(PTR_PTR_1126c5728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ad00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c269d40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c2a1620(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126ceae0;
  _objc_alloc(PTR_PTR_1126ceae0);
  func_0x00010c03d320();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1068b7e34; end: 1068b7eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068b7e34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112752bc0;
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
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1068b7ef0; end: 1068b7f5f;  */

void FUN_1068b7ef0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be86f00(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068b7f60; end: 1068b7f93;  */

void FUN_1068b7f60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068b7f94; end: 1068b80e3; -[SCSpotlightRecentStoriesServiceProvider _recentStoryRepoWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068b7f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126ceae8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7648;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7678;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7660;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7660;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a160(puVar1,param_2,0x14,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ceaf0;
  _objc_alloc();
  param_1 = param_1 + _DAT_112752bc4;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c2798e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0551a0(puVar2,param_2,lVar3,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar1 + _DAT_112752bc0);
  _objc_destroyWeak(puVar1 + _DAT_112752bc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_112752bc8);
  return;
}



/* Entry: 1068b80e4; end: 1068b8127; -[SCSpotlightRecentStoriesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068b80e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752bc0);
  _objc_destroyWeak(param_1 + _DAT_112752bc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752bc8);
  return;
}



/* Entry: 1068b8128; end: 1068b8253; -[SCSpotlightRecentStoryRepository initWithTransactorProvider:config:performer:] */

undefined8 *
FUN_1068b8128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f3ac8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068b8254; end: 1068b82c7;  */

void FUN_1068b8254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ceaf8;
  _objc_opt_class(PTR_PTR_1126ceaf8);
  uVar3 = uVar1;
  func_0x00010c279940(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e64058,0,0,1,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068b82c8; end: 1068b82cf; -[SCSpotlightRecentStoryRepository initDatabase] */

void FUN_1068b82c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearOldStoriesWithCompletion__1125ac868,0);
  return;
}



/* Entry: 1068b82d0; end: 1068b8433; -[SCSpotlightRecentStoryRepository recordInteractionWithStory:interactionType:completion:] */

void FUN_1068b82d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_2);
  func_0x00010c0f98a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_4);
  uStack_68 = param_5;
  uStack_60 = param_1;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(param_2);
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1068b8434; end: 1068b846f;  */

void FUN_1068b8434(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be87780(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068b8470; end: 1068b85fb; -[SCSpotlightRecentStoryRepository _recordInteractionWithStory:interactionType:timestamp:completion:] */

void FUN_1068b8470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c259740();
  lStack_68 = 0;
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar1 == 0) {
    func_0x00010c2798c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1068b85fc;
    puStack_98 = &UNK_1109475f8;
    uStack_88 = uVar2;
    uStack_80 = param_5;
    uStack_78 = param_1;
    uStack_70 = uVar2;
    _objc_retain(puVar3);
    puStack_90 = puVar3;
    func_0x00010b5edefc(uVar4,0,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_2);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,1);
    }
    _objc_release(puStack_90);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 1068b85fc; end: 1068b8693;  */

undefined * FUN_1068b85fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  FUN_1068b9830(uVar4,param_2,uVar1,uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_1068b9ba4(param_2,puVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  _objc_release(puVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1068b8694; end: 1068b879f; -[SCSpotlightRecentStoryRepository removeRecordForDedupeFp:interactionType:completion:] */

void FUN_1068b8694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1068b87a0; end: 1068b87d7;  */

void FUN_1068b87a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b87d8; end: 1068b88af; -[SCSpotlightRecentStoryRepository _removeRecordForDedupeFp:interactionType:completion:] */

void FUN_1068b87d8(undefined8 param_1)

{
  undefined8 uVar1;
  long in_x4;
  
  _objc_retain(in_x4);
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5edefc();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1068b88b0; end: 1068b8907;  */

undefined * FUN_1068b88b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  FUN_1068b996c(param_2,uVar1,uVar2);
  FUN_1068b9d08(param_2);
  _objc_release(param_2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1068b8908; end: 1068b8a27; -[SCSpotlightRecentStoryRepository getLatestStoriesWithInteractionType:afterTimestamp:limit:completion:] */

void FUN_1068b8908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_2);
  func_0x00010c0f98a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_70 = param_4;
  uStack_68 = param_1;
  uStack_60 = param_5;
  _objc_retain(param_6);
  func_0x00010c0f7fc0(param_2);
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  return;
}



/* Entry: 1068b8a28; end: 1068b8a67;  */

void FUN_1068b8a28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be20040(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068b8a68; end: 1068b8bfb; -[SCSpotlightRecentStoryRepository _getLatestStoriesWithInteractionType:afterTimestamp:limit:completion:] */

void FUN_1068b8a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  func_0x00010c2798c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc0000000;
  pcStack_88 = FUN_1068b8bfc;
  puStack_80 = &UNK_110947678;
  uVar2 = uVar1;
  uStack_78 = param_4;
  uStack_70 = param_1;
  uStack_68 = param_5;
  func_0x000100589538();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  uStack_b0 = 0x1068b8c14;
  uStack_a8 = 0x1068b8c24;
  uStack_a0 = 0;
  func_0x00010c0c0800(uVar2);
  (**(code **)(param_6 + 0x10))(param_6,puStack_c0[5]);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(uVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 1068b8bfc; end: 1068b8c2b;  */

void FUN_1068b8bfc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dde22f8,0x11e);
      func_0x0001005edcd4();
      func_0x00010bccb848(uVar3,lVar1,2);
      func_0x0001005edcd4(lVar1,3,uVar2);
      func_0x0001005fcb64(lVar1,FUN_1068b97bc);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068b8c2c; end: 1068b8d03;  */

void FUN_1068b8c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1068b8cac;
  puStack_30 = &UNK_110947698;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(param_2,&puStack_48);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  return;
}



/* Entry: 1068b8d04; end: 1068b8dfb; -[SCSpotlightRecentStoryRepository clearOldStoriesWithCompletion:] */

void FUN_1068b8d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068b8dfc; end: 1068b8e2f;  */

void FUN_1068b8dfc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068b8e30; end: 1068b8ef7; -[SCSpotlightRecentStoryRepository _clearOldStoriesWithCompletion:] */

void FUN_1068b8e30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5edefc();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068b8ef8; end: 1068b903b;  */

undefined ** FUN_1068b8ef8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bdc9e80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(lVar7 * 8);
      func_0x00010c067fc0(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be877a0(uVar5);
      FUN_1068b9a88(param_2,uVar4,uVar5);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  FUN_1068b9d08(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return (undefined **)PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  return &PTR__OBJC_CLASS___NSConstantArray_111180cb0;
}



/* Entry: 1068b903c; end: 1068b9047; -[SCSpotlightRecentStoryRepository _allInteractionTypes] */

undefined ** FUN_1068b903c(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111180cb0;
}



/* Entry: 1068b9048; end: 1068b910f; -[SCSpotlightRecentStoryRepository _decodeDiscoverFeedStoryWithStoredData:] */

void FUN_1068b9048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfeea60();
  _objc_release(param_3);
  func_0x00010c1ec620(puVar1);
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2098;
  _objc_opt_class(PTR_PTR_1126c2098);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068b9110; end: 1068b91ef; -[SCSpotlightRecentStoryRepository _recordLimitForInteractionType:] */

long FUN_1068b9110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f0440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    func_0x00010bf45e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf6a100();
    _objc_release(param_1);
  }
  else {
    lVar1 = lVar4;
    func_0x00010c2827c0(lVar4);
  }
  _objc_release(lVar4);
  return lVar1;
}



/* Entry: 1068b91f0; end: 1068b91f7; -[SCSpotlightRecentStoryRepository performer] */

undefined8 FUN_1068b91f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068b91f8; end: 1068b91ff; -[SCSpotlightRecentStoryRepository transactor] */

undefined8 FUN_1068b91f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068b9200; end: 1068b9207; -[SCSpotlightRecentStoryRepository config] */

undefined8 FUN_1068b9200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068b9208; end: 1068b9237; -[SCSpotlightRecentStoryRepository setConfig:] */

void FUN_1068b9208(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1068b9238; end: 1068b9273; -[SCSpotlightRecentStoryRepository .cxx_destruct] */

void FUN_1068b9238(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068b9274; end: 1068b92fb; -[SCSpotlightRecentStoriesRepoConfig initWithDefaultRecordLimit:overrideRecordLimitForInteractionType:] */

undefined1 *
FUN_1068b9274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1068b92fc; end: 1068b931f; -[SCSpotlightRecentStoriesRepoConfig copyWithZone:] */

undefined8 FUN_1068b92fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068b9320; end: 1068b937f; -[SCSpotlightRecentStoriesRepoConfig hash] */

undefined8 * FUN_1068b9320(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1068b9404;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1068b9404;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1068b9404;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1068b9404:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1068b9380; end: 1068b941f; -[SCSpotlightRecentStoriesRepoConfig isEqual:] */

long FUN_1068b9380(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068b9404;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1068b9404;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1068b9404;
    }
  }
  lVar3 = 1;
LAB_1068b9404:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068b9420; end: 1068b9427; -[SCSpotlightRecentStoriesRepoConfig defaultRecordLimit] */

undefined8 FUN_1068b9420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068b9428; end: 1068b942f; -[SCSpotlightRecentStoriesRepoConfig overrideRecordLimitForInteractionType] */

undefined8 FUN_1068b9428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068b9430; end: 1068b943b; -[SCSpotlightRecentStoriesRepoConfig .cxx_destruct] */

void FUN_1068b9430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068b943c; end: 1068b94bf; +[SQLSpotlightRecentStoriesDB schema] */

void FUN_1068b943c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f39f0cf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068b94c0; end: 1068b94e7; -[SQLSpotlightRecentStoriesDB getConn] */

void FUN_1068b94c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068b94e8; end: 1068b956f; -[SQLSpotlightRecentStoriesDB initWithSqliteConnection:] */

undefined1 * FUN_1068b94e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3ad8;
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



/* Entry: 1068b9570; end: 1068b9653; -[SQLSpotlightRecentStoriesDB .cxx_destruct] */

void FUN_1068b9570(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068b9654; end: 1068b9663; -[SQLSpotlightRecentStoriesDB .cxx_construct] */

void FUN_1068b9654(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1068b9664; end: 1068b97bb;  */

void FUN_1068b9664(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dde22f8,0x11e);
      func_0x0001005edcd4();
      func_0x00010bccb848(param_1,lVar1,2);
      func_0x0001005edcd4(lVar1,3,param_4);
      func_0x0001005fcb64(lVar1,FUN_1068b97bc);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068b97bc; end: 1068b982f;  */

void FUN_1068b97bc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ceb00;
  _objc_alloc(PTR_PTR_1126ceb00);
  func_0x0001005fdb34(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_1068ba0b8(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068b9830; end: 1068b996b;  */

void FUN_1068b9830(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_2 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10dde2417,0x9d);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_4);
      func_0x00010bccb848(param_1,lVar1,3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1068b996c; end: 1068b9a87;  */

void FUN_1068b996c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x30;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde24b5,0x5f);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1068b9a88; end: 1068b9ba3;  */

void FUN_1068b9a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x38;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde2515,0x147);
      func_0x0001005edcd4();
      func_0x0001005edcd4(lVar1,2,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1068b9ba4; end: 1068b9d07;  */

void FUN_1068b9ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dde265d,0x72);
      uStack_44 = 1;
      func_0x00010b5eeb94();
      func_0x00010b5eec6c(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068b9d08; end: 1068b9df3;  */

void FUN_1068b9d08(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0001005fc990(param_1 + 0x48,*(undefined8 *)(param_1 + 8),&UNK_10dde26d0,0xf4);
      func_0x00010b5ef0d0();
    }
  }
  return;
}



/* Entry: 1068b9df4; end: 1068b9e17; -[SQLRecentStoryRecord copyWithZone:] */

undefined8 FUN_1068b9df4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068b9e18; end: 1068b9ea3; -[SQLRecentStoryRecord hash] */

undefined8 * FUN_1068b9e18(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar5 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) == 0) ||
         (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        dVar6 = ABS(*(double *)((long)puVar2 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        puVar5 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar2 + 0x20) - *(double *)(param_3 + 0x20)) < dVar6
                        );
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 1068b9ea4; end: 1068b9f7f; -[SQLRecentStoryRecord isEqual:] */

bool FUN_1068b9ea4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 1068b9f80; end: 1068b9fa3; -[SQLRecentStoryMetadata copyWithZone:] */

undefined8 FUN_1068b9f80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068b9fa4; end: 1068ba00b; -[SQLRecentStoryMetadata hash] */

long * FUN_1068b9fa4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1068ba090;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_1068ba090;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1068ba090;
    }
  }
  plVar5 = (long *)0x1;
LAB_1068ba090:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1068ba00c; end: 1068ba0ab; -[SQLRecentStoryMetadata isEqual:] */

long FUN_1068ba00c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ba090;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1068ba090;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1068ba090;
    }
  }
  lVar3 = 1;
LAB_1068ba090:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068ba0ac; end: 1068ba0b7; -[SQLRecentStoryMetadata .cxx_destruct] */

void FUN_1068ba0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068ba0b8; end: 1068ba133;  */

undefined1 * FUN_1068ba0b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_28 = PTR_PTR_1126f3af0;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1068ba134; end: 1068ba157; -[SQLGetLatestStoriesMetadata copyWithZone:] */

undefined8 FUN_1068ba134(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068ba158; end: 1068ba15f; -[SQLGetLatestStoriesMetadata hash] */

void FUN_1068ba158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1068ba160; end: 1068ba1ef; -[SQLGetLatestStoriesMetadata isEqual:] */

long FUN_1068ba160(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ba1d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1068ba1d4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1068ba1d4;
    }
  }
  lVar3 = 1;
LAB_1068ba1d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068ba1f0; end: 1068ba1fb; -[SQLGetLatestStoriesMetadata .cxx_destruct] */

void FUN_1068ba1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068ba1fc; end: 1068ba207; +[SCSpotlightLogger announcerIdentifier] */

undefined ** FUN_1068ba1fc(void)

{
  return &PTR____CFConstantStringClassReference_110e640b8;
}



/* Entry: 1068ba208; end: 1068ba2d3; -[SCSpotlightLogger initWithDiscoverFeedEventsController:interactionHistoryManager:discoverFeedDataFetcher:] */

undefined1 *
FUN_1068ba208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3af8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ba2d4; end: 1068ba507; -[SCSpotlightLogger _logFeedItemsLongImpression:pageType:itemId:] */

void FUN_1068ba2d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41858);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9300;
  func_0x00010c28efe0(PTR_PTR_1126c9300);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126c9300;
    func_0x00010c132240(PTR_PTR_1126c9300);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 == 0) goto LAB_1068ba480;
    if (param_5 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e02998);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c1d0640(puVar1,param_2,param_5,&PTR____CFConstantStringClassReference_110e02998);
    }
    func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c76d8,
                        &PTR____CFConstantStringClassReference_110ea1ad8);
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea1af8;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e640f8;
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110e640d8,
                        &PTR____CFConstantStringClassReference_110e02998);
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea1ad8;
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c76d8;
  }
  func_0x00010c1d0640(puVar1,param_2,ppuVar4,ppuVar5);
LAB_1068ba480:
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f415f8,param_1,puVar1)
  ;
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068ba508; end: 1068ba647; -[SCSpotlightLogger _logFeedItemAction:pageType:] */

void FUN_1068ba508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f41858);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110daf5b8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f41518,param_1,puVar1)
  ;
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068ba648; end: 1068ba74f; -[SCSpotlightLogger _logFeedItemAction:extraData:] */

void FUN_1068ba648(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c0d3c80(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_2,puVar1,&PTR____CFConstantStringClassReference_110f41858);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4,param_2,puVar1,&PTR____CFConstantStringClassReference_110daf5b8);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f41518,param_1,param_4
                     );
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068ba750; end: 1068ba7d3; -[SCSpotlightLogger logImpressionEventForContextLayer:impressionType:contextPageType:itemId:] */

void FUN_1068ba750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f415f8);
  if ((int)param_4 != 0) {
    func_0x00010be53260(param_1,param_2,param_3,param_5,param_6);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068ba7d4; end: 1068ba7d7; -[SCSpotlightLogger logSpotlightFeedItemActionEvent:pageType:] */

void FUN_1068ba7d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be53150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logFeedItemAction_pageType__1125725f0);
  return;
}



/* Entry: 1068ba7d8; end: 1068ba7db; -[SCSpotlightLogger logSpotlightFeedItemActionEvent:extraData:] */

void FUN_1068ba7d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be53130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logFeedItemAction_extraData__1125725e8);
  return;
}



/* Entry: 1068ba7dc; end: 1068ba98b; -[SCSpotlightLogger logContentTooltipImpressionEventWithItemId:itemType:tooltipType:] */

void FUN_1068ba7dc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f41758;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e02998;
  puVar2 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ea1ad8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar2;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f42378;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41758,param_1,puVar5)
  ;
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(ppuVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41418,param_3,ppuVar6
                     );
  _objc_release(ppuVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068ba98c; end: 1068baa1f; -[SCSpotlightLogger performLoggerUpdateWithExtraData:] */

void FUN_1068ba98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41418,param_1,param_3
                     );
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068baa20; end: 1068bab1b; -[SCSpotlightLogger logOneTapToShareDisplayed] */

void FUN_1068baa20(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long in_x5;
  long lVar8;
  undefined **ppuVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110f41598;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  puVar7 = puVar2;
  func_0x00010bf7dbc0(lVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar9);
  _objc_retain(lVar5);
  _objc_retain(puVar7);
  func_0x00010be53120(lVar1);
  if ((lVar5 != 0) && (0xfffffffffffffffd < in_x5 - 0xfU)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar5);
    _objc_retain(puVar7);
    _objc_retain(ppuVar9);
    _objc_retain(uVar3);
    func_0x00010c258f00(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(ppuVar9);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar5 = param_2;
    func_0x000107bfa524(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = ppuVar9[5];
    lVar1 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(puVar2);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068bab1c; end: 1068bacdb; -[SCSpotlightLogger logInFeedSurveyResponseWithData:storyDedupeFp:pageSessionId:feedActionType:] */

void FUN_1068bab1c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be53120(param_1);
  if ((param_4 != 0) && (0xfffffffffffffffd < param_6 - 0xfU)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c258f00(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar7 = param_2;
    func_0x000107bfa524(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    lVar4 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(uVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068bacdc; end: 1068badcf;  */

void FUN_1068bacdc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000107bfa524(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = param_2;
    func_0x00010bf454e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285ba0(uVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068badd0; end: 1068bae0b; -[SCSpotlightLogger .cxx_destruct] */

void FUN_1068badd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068bae0c; end: 1068baeef; -[SCSpotlightLoggingServiceProvider provide] */

void FUN_1068bae0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ceb08;
  _objc_alloc(PTR_PTR_1126ceb08);
  func_0x00010c0271a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068baef0; end: 1068baf2f;  */

void FUN_1068baef0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068baf30; end: 1068bb017; -[SCSpotlightLoggingServiceProvider _createSpotlightLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068baf30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_112752c2c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112752c30;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112752c34;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ceb10;
  _objc_alloc(PTR_PTR_1126ceb10);
  func_0x00010c00ce20();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068bb018; end: 1068bb067; -[SCSpotlightLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb018(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112752c30);
  _objc_destroyWeak(param_1 + _DAT_112752c34);
  _objc_destroyWeak(param_1 + _DAT_112752c2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752c38);
  return;
}



/* Entry: 1068bb068; end: 1068bb09f;  */

void FUN_1068bb068(void)

{
  _objc_opt_new(PTR_PTR_1126ceb18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb0a0; end: 1068bb0a7;  */

void FUN_1068bb0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_build_1125a6180);
  return;
}



/* Entry: 1068bb0a8; end: 1068bb0df;  */

void FUN_1068bb0a8(void)

{
  _objc_opt_new(PTR_PTR_1126ceb30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb0e0; end: 1068bb0e7;  */

void FUN_1068bb0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_build_1125a6180);
  return;
}



/* Entry: 1068bb0e8; end: 1068bb13b;  */

void FUN_1068bb0e8(void)

{
  _objc_opt_new(PTR_PTR_1126ceb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb13c; end: 1068bb143;  */

void FUN_1068bb13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_build_1125a6180);
  return;
}



/* Entry: 1068bb144; end: 1068bb17b;  */

void FUN_1068bb144(void)

{
  _objc_opt_new(PTR_PTR_1126ceb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb17c; end: 1068bb183;  */

void FUN_1068bb17c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_build_1125a6180);
  return;
}



/* Entry: 1068bb184; end: 1068bb1bb;  */

void FUN_1068bb184(void)

{
  _objc_opt_new(PTR_PTR_1126ceb70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068bb1bc; end: 1068bb2db; -[SCActiveUserStartupCompleteEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb1bc(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar1 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_1 + _DAT_112752c3c);
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lStack_108 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar7;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar7);
  puStack_118 = PTR_PTR_1126f3b00;
  puVar6 = PTR_s_end_1125c29d0;
  lStack_120 = param_1;
  _objc_msgSendSuper2();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  puVar2 = (undefined1 *)((long)plVar1 + 0x28);
  _objc_loadWeakRetained();
  if (((puVar2 != (undefined1 *)0x0) && (puVar3 = puVar2, func_0x00010c071800(), (int)puVar3 != 0))
     && (lVar4 = *(long *)((long)plVar1 + 0x20), lVar4 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)((long)plVar1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(puVar2);
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068bb2dc; end: 1068bb3f7;  */

void FUN_1068bb2dc(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c071800(), (int)lVar2 != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(lVar1);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068bb3f8; end: 1068bb55f; -[SCActiveUserStartupCompleteEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068bb3f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112752c90,0);
  _objc_storeStrong(param_1 + _DAT_112752c8c,0);
  _objc_storeStrong(param_1 + _DAT_112752c88,0);
  _objc_storeStrong(param_1 + _DAT_112752c84,0);
  _objc_storeStrong(param_1 + _DAT_112752c80,0);
  _objc_storeStrong(param_1 + _DAT_112752c7c,0);
  _objc_storeStrong(param_1 + _DAT_112752c78,0);
  _objc_storeStrong(param_1 + _DAT_112752c74,0);
  _objc_storeStrong(param_1 + _DAT_112752c70,0);
  _objc_storeStrong(param_1 + _DAT_112752c6c,0);
  _objc_storeStrong(param_1 + _DAT_112752c68,0);
  _objc_storeStrong(param_1 + _DAT_112752c64,0);
  _objc_storeStrong(param_1 + _DAT_112752c60,0);
  _objc_storeStrong(param_1 + _DAT_112752c5c,0);
  _objc_storeStrong(param_1 + _DAT_112752c58,0);
  _objc_destroyWeak(param_1 + _DAT_112752c54);
  _objc_destroyWeak(param_1 + _DAT_112752c50);
  _objc_destroyWeak(param_1 + _DAT_112752c4c);
  _objc_destroyWeak(param_1 + _DAT_112752c48);
  _objc_destroyWeak(param_1 + _DAT_112752c44);
  _objc_destroyWeak(param_1 + _DAT_112752c40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752c3c,0);
  return;
}



/* Entry: 1068bb560; end: 1068bb623;  */

void FUN_1068bb560(void)

{
  _objc_opt_new(PTR_PTR_1126ceb80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


