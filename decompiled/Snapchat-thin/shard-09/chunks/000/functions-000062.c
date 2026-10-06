/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106906138; end: 10690624f; -[SCOperaOptInDoorbellPlugin _doorbellPropertyWithUserId:] */

void FUN_106906138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c073780();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0e618);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ceed8;
  _objc_alloc(PTR_PTR_1126ceed8);
  func_0x00010c05b760();
  _objc_release(param_3);
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0e5f8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106906250; end: 10690627f; -[SCOperaOptInDoorbellPlugin .cxx_destruct] */

void FUN_106906250(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106906280; end: 1069062b3; -[SCDiscoverOperaDebugViewerPlugin initWithDiscoverFeedDataStoreFetcher:showStoryDebugViewCallback:] */

void FUN_106906280(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3c60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1069062b4; end: 1069062b7; -[SCDiscoverOperaDebugViewerPlugin setPlaylistItemController:] */

void FUN_1069062b4(void)

{
  return;
}



/* Entry: 1069062b8; end: 1069062bf; -[SCDiscoverOperaDebugViewerPlugin registeredEventsForOperaSession] */

undefined8 FUN_1069062b8(void)

{
  return 0;
}



/* Entry: 1069062c0; end: 1069062c3; -[SCDiscoverOperaDebugViewerPlugin operaViewDidSendEvent:page:params:] */

void FUN_1069062c0(void)

{
  return;
}



/* Entry: 1069062c4; end: 1069063a7;  */

void FUN_1069062c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ceee0;
  _objc_alloc(PTR_PTR_1126ceee0);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  FUN_1069063a8();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  FUN_1069063a8();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0069e0(puVar1,param_2,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069063a8; end: 1069063cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069063a8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275370c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069063cc; end: 10690668f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069063cc(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126ceee8;
  _objc_alloc();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112753734;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar3;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = lVar6 + _DAT_11275371c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  FUN_106906690();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + _DAT_112753720;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar13;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar16 = 0;
  if (lVar15 != 0) {
    lVar16 = lVar15 + _DAT_112753728;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar19 = 0;
  if (lVar18 != 0) {
    lVar19 = lVar18 + _DAT_112753744;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar19;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112753748;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar22;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c840(puVar1,param_2,lVar5,lVar8,lVar11,lVar14,lVar17,lVar20,lVar21);
  _objc_release(lVar21);
  _objc_release(lVar22);
  _objc_release(param_1);
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



/* Entry: 106906690; end: 1069066b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106906690(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112753738);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069066b4; end: 10690689b;  */

void FUN_1069066b4(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126ceef0;
  _objc_alloc();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  FUN_10690689c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  FUN_10690689c();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x0001069068c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x0001069068c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009300(puVar1,param_2,lVar5,lVar9,lVar13,lVar17,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
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



/* Entry: 10690689c; end: 1069068e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690689c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112753718);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069068e4; end: 106906b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069068e4(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126ceef8;
  _objc_alloc();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x0001069068c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  FUN_1069063a8();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  FUN_1069063a8();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  FUN_106906b08();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar15 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = lVar15 + _DAT_11275372c;
    _objc_loadWeakRetained(lVar18);
  }
  lVar16 = lVar18;
  func_0x00010c244ac0(lVar18);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e000(puVar1,param_2,lVar4,lVar6,lVar9,lVar12,lVar14,lVar17,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar18);
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



/* Entry: 106906b08; end: 106906b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106906b08(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112753730);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106906b2c; end: 106906cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106906b2c(long param_1,undefined8 param_2)

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
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = PTR_PTR_1126cef00;
  _objc_alloc(PTR_PTR_1126cef00);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x0001069068c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  FUN_106906690();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = lVar8 + _DAT_112753724;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar9;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  FUN_106906b08();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d960(puVar1,param_2,lVar4,uVar15,lVar7,lVar12,uVar16,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(param_1);
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



/* Entry: 106906d00; end: 106906e0b; -[SCNotificationOptInEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106906d00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112753708,0);
  _objc_storeStrong(param_1 + _DAT_112753704,0);
  _objc_destroyWeak(param_1 + _DAT_112753748);
  _objc_destroyWeak(param_1 + _DAT_112753744);
  _objc_destroyWeak(param_1 + _DAT_112753740);
  _objc_destroyWeak(param_1 + _DAT_112753700);
  _objc_destroyWeak(param_1 + _DAT_11275373c);
  _objc_destroyWeak(param_1 + _DAT_112753738);
  _objc_destroyWeak(param_1 + _DAT_112753734);
  _objc_destroyWeak(param_1 + _DAT_112753730);
  _objc_destroyWeak(param_1 + _DAT_11275372c);
  _objc_destroyWeak(param_1 + _DAT_112753728);
  _objc_destroyWeak(param_1 + _DAT_112753724);
  _objc_destroyWeak(param_1 + _DAT_112753720);
  _objc_destroyWeak(param_1 + _DAT_11275371c);
  _objc_destroyWeak(param_1 + _DAT_112753718);
  _objc_destroyWeak(param_1 + _DAT_112753714);
  _objc_destroyWeak(param_1 + _DAT_112753710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275370c);
  return;
}



/* Entry: 106906e0c; end: 106906f87; -[SCSettingStoryNotificationsViewControllerCreator initWithUserSession:notificationOptInRequestManager:creatorSettingsFetcher:creatorSettingsMutator:snapProServices:snapchattersDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_106906e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f3c68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106906f88; end: 106906fcf; -[SCSettingStoryNotificationsViewControllerCreator createSettingsNotificationViewController] */

void FUN_106906f88(void)

{
  _objc_alloc(PTR_PTR_1126cef18);
  func_0x00010c05e000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106906fd0; end: 10690703b; -[SCSettingStoryNotificationsViewControllerCreator .cxx_destruct] */

void FUN_106906fd0(long param_1)

{
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



/* Entry: 10690703c; end: 106907047; +[SCSettingsOptInEntityDataStore announcerIdentifier] */

undefined ** FUN_10690703c(void)

{
  return &PTR____CFConstantStringClassReference_110e649f8;
}



/* Entry: 106907048; end: 10690704f; -[SCSettingsOptInEntityDataStore addUpdateListener:] */

void FUN_106907048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106907050; end: 106907057; -[SCSettingsOptInEntityDataStore removeUpdateListener:] */

void FUN_106907050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106907058; end: 10690713b; -[SCSettingsOptInEntityDataStore init] */

undefined1 * FUN_106907058(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f3c70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10690713c; end: 106907173; -[SCSettingsOptInEntityDataStore setQueryText:] */

void FUN_10690713c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchAnnounceDataStoreUpdate_11255e8f0);
  return;
}



/* Entry: 106907174; end: 10690724b; -[SCSettingsOptInEntityDataStore saveEntities:] */

void FUN_106907174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10690724c; end: 10690727f;  */

void FUN_10690724c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106907280; end: 10690738b; -[SCSettingsOptInEntityDataStore allEntities] */

void FUN_106907280(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10690738c;
  uStack_30 = 0x10690739c;
  uStack_28 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10690738c; end: 1069073a3;  */

void FUN_10690738c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069073a4; end: 10690740b;  */

void FUN_1069073a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be0a940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10690740c; end: 106907547; -[SCSettingsOptInEntityDataStore allEntitiesForQuery:] */

void FUN_10690740c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10690738c;
  uStack_40 = 0x10690739c;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106907548; end: 1069075b3;  */

void FUN_106907548(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be0a980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069075b4; end: 1069076bf; -[SCSettingsOptInEntityDataStore optedInEntities] */

void FUN_1069075b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10690738c;
  uStack_30 = 0x10690739c;
  uStack_28 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069076c0; end: 106907727;  */

void FUN_1069076c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be6e000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106907728; end: 106907833; -[SCSettingsOptInEntityDataStore pendingEntities] */

void FUN_106907728(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10690738c;
  uStack_30 = 0x10690739c;
  uStack_28 = 0;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106907834; end: 10690789b;  */

void FUN_106907834(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be71200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10690789c; end: 10690797b; -[SCSettingsOptInEntityDataStore updateEntity:toOptInState:] */

void FUN_10690789c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10690797c; end: 1069079b3;  */

void FUN_10690797c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069079b4; end: 106907a67; -[SCSettingsOptInEntityDataStore _saveEntities:] */

void FUN_1069079b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106907a54;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = uVar3;
    _objc_release(uVar2);
    func_0x00010be03d40(param_1);
  }
LAB_106907a54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106907a68; end: 106907bbf; -[SCSettingsOptInEntityDataStore _updateEntity:toOptInState:] */

void FUN_106907a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106907bc0;
  puStack_60 = &UNK_110949bc0;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bfece40(lVar5,param_2,&puStack_78);
  if (lVar5 != 0x7fffffffffffffff) {
    puVar1 = PTR_PTR_1126cef20;
    _objc_alloc(PTR_PTR_1126cef20);
    uVar2 = param_3;
    func_0x00010bf96e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010080(puVar1,param_2,uVar2,uVar3,param_4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3c80();
    func_0x00010c130f40();
    uVar2 = uVar3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    _objc_release(uVar4);
    func_0x00010be03d40(param_1);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106907bc0; end: 106907ce7;  */

long FUN_106907bc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf96e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf96e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  if (lVar1 == lVar2) {
    _objc_release(lVar2);
    _objc_release(lVar1);
LAB_106907c64:
    lVar3 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0720c0(lVar3);
    _objc_release(uVar4);
  }
  else {
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x00010c071ae0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 == 0) {
        lVar5 = 0;
        goto LAB_106907cb8;
      }
      goto LAB_106907c64;
    }
    lVar5 = 0;
    lVar3 = lVar1;
  }
  _objc_release(lVar3);
LAB_106907cb8:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar5;
}



/* Entry: 106907ce8; end: 106907cff; -[SCSettingsOptInEntityDataStore _entities] */

void FUN_106907ce8(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106907d00; end: 106907e37; -[SCSettingsOptInEntityDataStore _entitiesForQuery:] */

void FUN_106907d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106907db0;
  puStack_40 = &UNK_110949bf0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c14cca0(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106907e38; end: 106907ed7; -[SCSettingsOptInEntityDataStore _pendingEntities] */

void FUN_106907e38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c14cca0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110949c40);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106907ed8; end: 106907f77; -[SCSettingsOptInEntityDataStore _optedInEntities] */

void FUN_106907ed8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c14cca0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110949c60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106907f78; end: 10690802f; -[SCSettingsOptInEntityDataStore _dispatchAnnounceDataStoreUpdate] */

void FUN_106907f78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106908030;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106908030; end: 10690805b;  */

void FUN_106908030(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10690805c; end: 10690809b; -[SCSettingsOptInEntityDataStore _announceDataStoreUpdate] */

void FUN_10690805c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10690809c; end: 1069080a3; -[SCSettingsOptInEntityDataStore queryText] */

undefined8 FUN_10690809c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1069080a4; end: 1069080eb; -[SCSettingsOptInEntityDataStore .cxx_destruct] */

void FUN_1069080a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069080ec; end: 1069080f7; +[SCSettingsStoryNotificationsActionHandler announcerIdentifier] */

undefined ** FUN_1069080ec(void)

{
  return &PTR____CFConstantStringClassReference_110e64a18;
}



/* Entry: 1069080f8; end: 1069080ff; -[SCSettingsStoryNotificationsActionHandler addListener:] */

void FUN_1069080f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106908100; end: 106908107; -[SCSettingsStoryNotificationsActionHandler removeListener:] */

void FUN_106908100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106908108; end: 106908223; -[SCSettingsStoryNotificationsActionHandler initWithUserSession:dataStore:delegate:notificationOptInRequestManager:creatorSettingsMutator:] */

undefined1 *
FUN_106908108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3c78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106908224; end: 10690862f; -[SCSettingsStoryNotificationsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_106908224(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar9 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar7 != 0) {
      uVar7 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126cef20;
      _objc_opt_class(PTR_PTR_1126cef20);
      uVar11 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar8);
      uVar1 = uVar7;
      if ((uVar11 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar7);
      if (uVar1 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c0ebec0();
        func_0x00010c2858a0(uVar5);
      }
      _objc_release(uVar1);
    }
  }
  else {
    uVar7 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar11 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar8);
    uVar1 = uVar7;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    if ((uVar1 != 0) && (uVar11 = uVar7, func_0x00010bf529e0(), uVar11 != 0)) {
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained();
      func_0x00010bf7b480();
      _objc_release();
      _dispatch_group_create();
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 1;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_106908630;
      puStack_b8 = &UNK_110949c80;
      lStack_b0 = param_1;
      puStack_90 = &uStack_98;
      _objc_retain();
      ppuVar3 = &puStack_d0;
      lStack_a8 = lVar2;
      puStack_a0 = &uStack_98;
      _objc_retainBlock();
      _objc_initWeak(auStack_d8,param_1);
      lVar10 = 0;
      for (uVar11 = 0; uVar4 = uVar7, func_0x00010bf529e0(), uVar11 < uVar4; uVar11 = uVar11 + 1) {
        uVar4 = uVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_group_enter(lVar2);
        uVar5 = 0;
        _dispatch_time(0,lVar10);
        uVar6 = 9;
        func_0x0001000819a8(9,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_1069087b4;
        puStack_f0 = &UNK_11084aaa8;
        uStack_e8 = uVar4;
        ppuStack_e0 = ppuVar3;
        _objc_retain(uVar4);
        func_0x00010058c530(uVar5,uVar6,&puStack_108);
        _objc_release(uVar6);
        _objc_release(uStack_e8);
        _objc_release(uVar4);
        lVar10 = lVar10 + 100000000;
      }
      uVar5 = 9;
      func_0x0001000819a8(9,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_106908978;
      puStack_120 = &UNK_110850308;
      _objc_copyWeak(auStack_110,auStack_d8);
      puStack_118 = &uStack_98;
      func_0x000100bc0718(lVar2,uVar5,&puStack_138);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_d8);
      _objc_release(ppuVar3);
      _objc_release(lStack_a8);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(lVar2);
    }
    _objc_release(uVar1);
    uVar9 = uVar9 & 0xffffffff;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106908630; end: 106908797;  */

void FUN_106908630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4028;
  func_0x00010c258820(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c0f9280(uVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 106908798; end: 1069087b3;  */

void FUN_106908798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069087b4; end: 10690889b;  */

void FUN_1069087b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10690889c;
  puStack_58 = &UNK_110875d40;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106908920;
  puStack_88 = &UNK_11085d1a0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar5;
  _objc_retain(uVar4);
  uStack_80 = uVar4;
  uStack_78 = uVar6;
  func_0x00010c0bf6c0(uVar2,param_2,&puStack_70,&puStack_a0);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10690889c; end: 106908977;  */

void FUN_10690889c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0ebec0(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2 == 2,0,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106908978; end: 1069089b3;  */

void FUN_106908978(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069089b4; end: 1069089b7; -[SCSettingsStoryNotificationsActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1069089b4(void)

{
  return;
}



/* Entry: 1069089b8; end: 1069089eb; -[SCSettingsStoryNotificationsActionHandler _receivedOptInResponseWithSuccess:] */

void FUN_1069089b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf792e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069089ec; end: 106908a47; -[SCSettingsStoryNotificationsActionHandler .cxx_destruct] */

void FUN_1069089ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106908a48; end: 106908bb7; -[SCSettingsStoryNotificationsEntityCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106908a48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f3c80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_112753790;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1a7d00(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    func_0x00010bead580(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112753794);
    *(undefined **)((long)puVar1 + (long)_DAT_112753794) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106908bb8; end: 106908d7f; -[SCSettingsStoryNotificationsEntityCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106908bb8(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f3c80;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5040();
  lVar3 = (long)_DAT_112753798;
  dVar4 = param_1;
  func_0x00010c08e360(*(undefined8 *)(param_2 + lVar3));
  param_1 = param_1 - dVar4;
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010bfb3a80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  func_0x00010c202c80(param_1,dVar4,*(undefined8 *)(param_2 + lVar3));
  _objc_release(uVar2);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  dVar4 = param_1;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar3));
  dVar4 = (param_1 - dVar4) * 0.5;
  func_0x00010c2172c0(dVar4,*(undefined8 *)(param_2 + lVar3));
  _objc_release(lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar3));
  _CGRectIntegral();
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar3));
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5040();
  lVar3 = (long)_DAT_112753790;
  func_0x00010c2256c0(*(undefined8 *)(param_2 + lVar3));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  func_0x00010c173440(*(undefined8 *)(param_2 + lVar3));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  lVar3 = (long)_DAT_11275379c;
  func_0x00010c17a860(dVar4 * 0.5,*(undefined8 *)(param_2 + lVar3));
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c202c80(*(undefined8 *)(param_2 + lVar3));
  _objc_release(uVar2);
  func_0x00010c1ba100(0x4030000000000000,*(undefined8 *)(param_2 + lVar3));
  return;
}



/* Entry: 106908d80; end: 106908d8b; +[SCSettingsStoryNotificationsEntityCell sizeWithViewModel:constrainedToSize:] */

void FUN_106908d80(void)

{
  return;
}



/* Entry: 106908d8c; end: 106908edb; -[SCSettingsStoryNotificationsEntityCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106908d8c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cef20;
  _objc_opt_class(PTR_PTR_1126cef20);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_1127537a0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_106908ebc;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010bf85d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112753798));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c0ebec0();
    if (uVar5 != 3) {
      func_0x00010c0ebec0(uVar1);
    }
    func_0x00010bea29e0(param_1);
  }
LAB_106908ebc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106908edc; end: 106908f23; -[SCSettingsStoryNotificationsEntityCell _setCellSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106908edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(char *)(param_1 + _DAT_1127537a4) = (char)param_3;
  func_0x00010bea2220();
  func_0x00010bea4080(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCheckmarkVisible_animated__112586448,param_3,1);
  return;
}



/* Entry: 106908f24; end: 106909007; -[SCSettingsStoryNotificationsEntityCell _setCheckmarkVisible:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106908f24(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = (long)_DAT_11275379c;
  lVar1 = *(long *)(param_1 + lVar3);
  if ((param_3 != 0) && (lVar1 == 0)) {
    func_0x00010beab7e0(param_1);
    lVar1 = *(long *)(param_1 + lVar3);
  }
  func_0x00010c1a7f60(lVar1,param_2,param_3 ^ 1);
  uStack_38 = 0x4047000000000000;
  if (param_3 == 0) {
    uStack_38 = 0x4030000000000000;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106909008;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_1;
  _objc_retainBlock();
  if (param_4 == 0) {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    func_0x00010bf03400(0x3fb999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar2);
  }
  _objc_release(ppuVar2);
  return;
}



/* Entry: 106909008; end: 10690901f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106909008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ba110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112753798),
             PTR_s_setLeft__11264c268);
  return;
}



/* Entry: 106909020; end: 10690909f; -[SCSettingsStoryNotificationsEntityCell _setupCheckMark] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106909020(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275379c);
  *(undefined **)(param_1 + _DAT_11275379c) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1069090a0; end: 1069091b3; -[SCSettingsStoryNotificationsEntityCell _setupLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069090a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112753798;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a89a0(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069091b4; end: 1069091bf; -[SCSettingsStoryNotificationsEntityCell _setBackgroundSelected:] */

void FUN_1069091b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea7270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSelectedBackground_112587640);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea8d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUnselectedBackground_112587ce8);
  return;
}



/* Entry: 1069091c0; end: 106909223; -[SCSettingsStoryNotificationsEntityCell _setFontSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069091c0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_3 == 0) {
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_112753798),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106909224; end: 106909283; -[SCSettingsStoryNotificationsEntityCell _setSelectedBackground] */

void FUN_106909224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106909284; end: 1069092e3; -[SCSettingsStoryNotificationsEntityCell _setUnselectedBackground] */

void FUN_106909284(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069092e4; end: 106909363; -[SCSettingsStoryNotificationsEntityCell _didTapCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069092e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(byte *)(param_1 + _DAT_1127537a4) = *(byte *)(param_1 + _DAT_1127537a4) ^ 1;
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_1127537a8),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106909364; end: 106909373; -[SCSettingsStoryNotificationsEntityCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106909364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127537a8);
}



/* Entry: 106909374; end: 1069093b3; -[SCSettingsStoryNotificationsEntityCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106909374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127537a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069093b4; end: 106909433; -[SCSettingsStoryNotificationsEntityCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069093b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127537a8,0);
  _objc_storeStrong(param_1 + _DAT_11275379c,0);
  _objc_storeStrong(param_1 + _DAT_112753794,0);
  _objc_storeStrong(param_1 + _DAT_112753798,0);
  _objc_storeStrong(param_1 + _DAT_112753790,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127537a0,0);
  return;
}



/* Entry: 106909434; end: 1069095df; -[SCSettingsStoryNotificationsQueryCoordinator initWithUserSession:dataStore:creatorSettingsFetcher:snapProServices:snapchattersDataFetcher:] */

undefined1 *
FUN_106909434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f3c88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c135d00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069095e0; end: 1069095eb; +[SCSettingsStoryNotificationsQueryCoordinator announcerIdentifier] */

undefined ** FUN_1069095e0(void)

{
  return &PTR____CFConstantStringClassReference_110e64a38;
}



/* Entry: 1069095ec; end: 1069095f3; -[SCSettingsStoryNotificationsQueryCoordinator canPerformQuery:] */

undefined8 FUN_1069095ec(void)

{
  return 1;
}



/* Entry: 1069095f4; end: 1069096cb; -[SCSettingsStoryNotificationsQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1069095f4(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x48) = ppuVar1;
  _objc_release(uVar3);
  ppuVar1 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == &PTR____CFConstantStringClassReference_110eae078) {
    lVar2 = param_1;
    func_0x00010be4f180(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,lVar2,0);
    _objc_release(lVar2);
    func_0x00010be12e80(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069096cc; end: 10690990f; -[SCSettingsStoryNotificationsQueryCoordinator _fetchOptInEntitiesWithQuery:updatingBlock:] */

void FUN_1069096cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4028;
  func_0x00010c258820(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2604e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0dc4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bd86590();
  _objc_initWeak(auStack_68,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106909918;
  puStack_90 = &UNK_110894250;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar5);
  uStack_88 = uVar5;
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  ppuVar6 = &puStack_a8;
  uStack_78 = param_4;
  _objc_retainBlock(ppuVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10690eecc(uVar5,uVar8,uVar9,1,ppuVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106909910; end: 106909917;  */

void FUN_106909910(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 106909918; end: 10690996f;  */

void FUN_106909918(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be338c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106909970; end: 106909b53; -[SCSettingsStoryNotificationsQueryCoordinator _handledSubscribedCreators:creatorMetadatas:query:updatingBlock:] */

void FUN_106909970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106909b54;
  puStack_70 = &UNK_110949cd0;
  _objc_retain(param_4);
  uVar1 = param_3;
  uStack_68 = param_4;
  func_0x000100504554(param_3,&puStack_88);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00010bde2900(param_1);
  }
  else {
    _objc_initWeak(auStack_90,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(uVar1);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0d42a0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106909b54; end: 106909f2b;  */

void FUN_106909b54(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  func_0x00010c079480();
  puVar8 = param_2;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf0aaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar8);
  if (puVar1 == (undefined *)0x0) {
    puVar8 = param_2;
    func_0x00010bf5b280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    func_0x00010bf0a920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    if (puVar1 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      goto LAB_106909ed0;
    }
    lVar10 = *(long *)(param_1 + 0x20);
    puVar8 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c242840();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(puVar8);
    puVar1 = PTR_PTR_1126cef28;
    if (lVar5 != 0) {
      puVar8 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      _atol();
      func_0x00010c11b620(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126cef20;
      _objc_alloc(PTR_PTR_1126cef20);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar9 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c242840();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c010080(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar11);
      goto LAB_106909ec4;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar9 = *(undefined **)(param_1 + 0x20);
    puVar8 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    if (puVar8 == (undefined *)0x0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      if (puVar3 == (undefined *)0x0) {
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
    }
    _objc_release(puVar8);
    if ((puVar9 == (undefined *)0x0) ||
       (puVar8 = puVar9, func_0x00010c08fa60(), puVar2 = PTR_PTR_1126cef28,
       puVar8 == (undefined *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c293ca0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126cef20;
      _objc_alloc(PTR_PTR_1126cef20);
      func_0x00010c010080();
    }
    _objc_release(puVar2);
LAB_106909ec4:
    _objc_release(puVar9);
  }
  _objc_release(puVar1);
LAB_106909ed0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106909f2c; end: 106909fb3;  */

void FUN_106909f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be5fa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2900();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106909fb4; end: 10690a02f; -[SCSettingsStoryNotificationsQueryCoordinator _completeBuildingOptInEntities:query:updatingBlock:] */

void FUN_106909fb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c14a500(uVar1,param_2,param_3);
  func_0x00010be04d60(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111180d40,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10690a030; end: 10690a26f; -[SCSettingsStoryNotificationsQueryCoordinator _mergeMutualFriends:withOptInEntities:] */

void FUN_10690a030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10690a0f0;
  puStack_40 = &UNK_110949d00;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x000100504554(param_3,&puStack_58);
  uVar1 = param_4;
  func_0x00010bf09f80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bd86590(uVar1,&PTR___NSConcreteGlobalBlock_110949d50);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10690a270; end: 10690a277;  */

void FUN_10690a270(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entityId_1125c3548);
  return;
}



/* Entry: 10690a278; end: 10690a5eb; -[SCSettingsStoryNotificationsQueryCoordinator _displaySections:query:updatingBlock:] */

undefined *
FUN_10690a278(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (puVar3 != (undefined *)0x0) {
    ppuStack_158 = &PTR____CFConstantStringClassReference_110e64c98;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110e64c38;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        iVar1 = (int)*(undefined8 *)((long)puVar13 * 8);
        func_0x00010c067ec0();
        if (iVar1 == 0) {
          ppuVar15 = &PTR____CFConstantStringClassReference_110e64a78;
          ppuVar14 = &PTR____CFConstantStringClassReference_110e64c78;
LAB_10690a3b4:
          func_0x00010bcbeaa8(ppuVar15,0);
          _objc_retainAutoreleasedReturnValue();
LAB_10690a3c8:
          _objc_retain(ppuVar14);
        }
        else {
          if (iVar1 == 2) {
            ppuVar15 = (undefined **)0x0;
            ppuVar14 = ppuStack_158;
            goto LAB_10690a3c8;
          }
          ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
          ppuVar15 = ppuVar14;
          if (iVar1 == 1) {
            ppuVar15 = &PTR____CFConstantStringClassReference_110e64a98;
            ppuVar14 = ppuStack_150;
            goto LAB_10690a3b4;
          }
        }
        puVar4 = PTR_PTR_1126cef30;
        _objc_alloc(PTR_PTR_1126cef30);
        func_0x00010c0437a0();
        puVar5 = PTR_PTR_1126b16f8;
        _objc_alloc(PTR_PTR_1126b16f8);
        func_0x00010c028e00();
        puVar6 = PTR_PTR_1126c3ec8;
        _objc_alloc(PTR_PTR_1126c3ec8);
        func_0x00010c00d660();
        puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297340(0,0,0,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b1700;
        _objc_alloc(PTR_PTR_1126b1700);
        func_0x00010c043020(0);
        puVar9 = PTR_PTR_1126b1260;
        _objc_alloc(PTR_PTR_1126b1260);
        func_0x00010c055bc0();
        func_0x00010befa120(puVar2);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(ppuVar14);
        _objc_release(ppuVar15);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar3 = param_3;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b16f0;
  _objc_alloc();
  puVar13 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c042a40();
  _objc_release(puVar13);
  uVar10 = 0;
  (**(code **)(param_5 + 0x10))(param_5,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b16f8;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar10);
  _objc_alloc();
  func_0x00010c028e00();
  puVar3 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar13 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar13);
  func_0x00010c055bc0();
  _objc_release(puVar13);
  _objc_release(puVar4);
  puVar13 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042a40(puVar13);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(byte)puVar2[0x40];
}



/* Entry: 10690a5ec; end: 10690a78b; -[SCSettingsStoryNotificationsQueryCoordinator _loadingQueryResultWithQuery:] */

undefined * FUN_10690a5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b16f8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c028e00();
  puVar2 = PTR_PTR_1126b1260;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(0,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar3,param_2,0,puVar1,puVar4,0,0,0);
  func_0x00010c055bc0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e64c58,
                      &PTR____CFConstantStringClassReference_110e64c58,0,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126b16f0;
  _objc_alloc(PTR_PTR_1126b16f0);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042a40(puVar3,param_2,param_3,puVar4,1);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(byte)puVar1[0x40];
}



/* Entry: 10690a78c; end: 10690a793; -[SCSettingsStoryNotificationsQueryCoordinator isLoading] */

undefined1 FUN_10690a78c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 10690a794; end: 10690a79b; -[SCSettingsStoryNotificationsQueryCoordinator currentQuery] */

undefined8 FUN_10690a794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10690a79c; end: 10690a7a3; -[SCSettingsStoryNotificationsQueryCoordinator setCurrentQuery:] */

void FUN_10690a79c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10690a7a4; end: 10690a81b; -[SCSettingsStoryNotificationsQueryCoordinator .cxx_destruct] */

void FUN_10690a7a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10690a81c; end: 10690a9b7; -[SCSettingsStoryNotificationsSearchCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10690a81c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f3c90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_1127537d0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1a7d00(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_1127537d4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bde6020();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127537d8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined1 **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bde60e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127537dc);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127537dc) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10690a9b8; end: 10690aab7; -[SCSettingsStoryNotificationsSearchCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690a9b8(long param_1)

{
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f3c90;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_1127537d4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_1127537d8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + _DAT_1127537dc));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}


