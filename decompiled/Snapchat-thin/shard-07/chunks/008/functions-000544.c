/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a23888; end: 105a238af; -[SCOurStoriesObserver mostRecentMapSnapTimestampObservable] */

void FUN_105a23888(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a238b0; end: 105a23943; -[SCOurStoriesObserver mostRecentMapSnapTimestamp] */

void FUN_105a238b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001084e87f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105700();
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a23944; end: 105a23a4b; -[SCOurStoriesObserver .cxx_destruct] */

void FUN_105a23944(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a23a4c; end: 105a23abb;  */

void FUN_105a23a4c(long param_1,undefined8 param_2)

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
  func_0x00010bdeca40(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105a23abc; end: 105a23b2b; -[SCOurStoriesEntryPoint _ourStoriesDateUpdatePerfomer] */

void FUN_105a23abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f32007a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,0x15);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a23b2c; end: 105a23bb7; -[SCOurStoriesEntryPoint _createDataCoordinatorWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a23b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272da20;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126c1460;
  _objc_alloc(PTR_PTR_1126c1460);
  func_0x00010c00ddc0();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a23bb8; end: 105a23da7; -[SCOurStoriesEntryPoint _createAttributionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a23bb8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c1468;
  _objc_alloc();
  lVar2 = param_1;
  FUN_105a23da8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272da20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272da24;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272da28;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11272da2c;
  lVar11 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar13 = lVar15;
  func_0x00010c103c00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272da30;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012140(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar13,lVar14);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar15);
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



/* Entry: 105a23da8; end: 105a23dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a23da8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272da3c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a23dcc; end: 105a23edf; -[SCOurStoriesEntryPoint _createOnboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a23dcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c1470;
  _objc_alloc(PTR_PTR_1126c1470);
  lVar2 = param_1;
  FUN_105a23da8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272da20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272da34;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012160(puVar1,param_2,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
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



/* Entry: 105a23ee0; end: 105a23f6f; -[SCOurStoriesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a23ee0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272da34);
  _objc_storeStrong(param_1 + _DAT_11272da1c,0);
  _objc_destroyWeak(param_1 + _DAT_11272da3c);
  _objc_destroyWeak(param_1 + _DAT_11272da2c);
  _objc_destroyWeak(param_1 + _DAT_11272da30);
  _objc_destroyWeak(param_1 + _DAT_11272da28);
  _objc_destroyWeak(param_1 + _DAT_11272da24);
  _objc_destroyWeak(param_1 + _DAT_11272da20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272da38);
  return;
}



/* Entry: 105a23f70; end: 105a2405b; -[SCOurStoriesOnboardingManager initWithFeatureSettingsService:userPreferences:circumstanceEngine:] */

undefined8 *
FUN_105a23f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb5b8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
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
    _objc_initWeak(auStack_48,puVar1);
    uVar2 = puVar1[4];
    puVar1[4] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a2405c; end: 105a2409f; -[SCOurStoriesOnboardingManager setDisplayedBestOfSpectaclesSendToIntro:] */

void FUN_105a2405c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a240a0; end: 105a240e7; -[SCOurStoriesOnboardingManager displayedBestOfSpectaclesSendToIntro] */

undefined8 FUN_105a240a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a240e8; end: 105a241a7; -[SCOurStoriesOnboardingManager setSpotlightSubmissionOnboardingV2Complete:] */

void FUN_105a240e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8520(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a241a8; end: 105a241db;  */

void FUN_105a241a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a241dc; end: 105a241e3; -[SCOurStoriesOnboardingManager _updateSpotlightSubmissionOnboardingV2Complete:] */

void FUN_105a241dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fa7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSeenSpotlightSubmissionOnboar_11265c410);
  return;
}



/* Entry: 105a241e4; end: 105a241eb; -[SCOurStoriesOnboardingManager isSpotlightSubmissionOnboardingV2Complete] */

void FUN_105a241e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_seenSpotlightSubmissionOnboardin_1126339e0);
  return;
}



/* Entry: 105a241ec; end: 105a242ab; -[SCOurStoriesOnboardingManager setSnapMapOnboardingComplete:] */

void FUN_105a241ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8520(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a242ac; end: 105a242df;  */

void FUN_105a242ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a242e0; end: 105a242e7; -[SCOurStoriesOnboardingManager _updateSnapMapOnboardingComplete:] */

void FUN_105a242e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fa610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSeenSnapMapOnboardingPromptV2_11265c3a8);
  return;
}



/* Entry: 105a242e8; end: 105a242ef; -[SCOurStoriesOnboardingManager isSnapMapOnboardingComplete] */

void FUN_105a242e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_seenSnapMapOnboardingPromptV2_112633990);
  return;
}



/* Entry: 105a242f0; end: 105a24357; -[SCOurStoriesOnboardingManager shouldShowUpdatedSpotlightLegalDialog] */

bool FUN_105a242f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c157ec0(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c067f00(uVar3,param_2,&PTR____CFConstantStringClassReference_110e17858,0,0);
  _objc_release(uVar3);
  return lVar1 < (int)uVar2;
}



/* Entry: 105a24358; end: 105a243b3; -[SCOurStoriesOnboardingManager acceptedLatestSpotlightLegalDialog] */

void FUN_105a24358(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c067f00(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1fa770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setSeenSpotlightPolicyVersion__11265c400,(long)(int)uVar1);
  return;
}



/* Entry: 105a243b4; end: 105a243fb; -[SCOurStoriesOnboardingManager .cxx_destruct] */

void FUN_105a243b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a243fc; end: 105a244f3; -[SCPublicStoriesDataCoordinator initWithDocObjectContext:performer:] */

undefined1 *
FUN_105a243fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb5c0;
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
    puVar3 = PTR_PTR_1126c1478;
    _objc_alloc();
    func_0x00010c00ddc0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010c24f9e0(*(undefined8 *)((long)puVar1 + 0x18));
    puVar3 = PTR_PTR_1126c1480;
    _objc_alloc();
    func_0x00010c00d820();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a244f4; end: 105a244fb; -[SCPublicStoriesDataCoordinator mostRecentPublicStoryTimestampObservable] */

void FUN_105a244f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d10f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_mostRecentPublicStoryTimestampOb_112611e50);
  return;
}



/* Entry: 105a244fc; end: 105a24503; -[SCPublicStoriesDataCoordinator mostRecentPublicStoryTimestamp] */

void FUN_105a244fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d10d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_mostRecentPublicStoryTimestamp_112611e48);
  return;
}



/* Entry: 105a24504; end: 105a24573; -[SCPublicStoriesDataCoordinator publicStoryTimestampForProfileId:] */

undefined8 FUN_105a24504(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c11d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c122520(lVar2);
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 105a24574; end: 105a24727; -[SCPublicStoriesDataCoordinator updatePublicStoryForProfileId:storySnap:] */

void FUN_105a24574(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a24728; end: 105a2477f;  */

void FUN_105a24728(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bede2a0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a24780; end: 105a24783;  */

void FUN_105a24780(void)

{
  return;
}



/* Entry: 105a24784; end: 105a2478b; -[SCPublicStoriesDataCoordinator _updatePublicStoryLatestPostTimestampWithContext:profileId:postedTimestamp:storySnap:] */

void FUN_105a24784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updatePublicStoryLatestPostTimes_11267fde8);
  return;
}



/* Entry: 105a2478c; end: 105a247d3; -[SCPublicStoriesDataCoordinator .cxx_destruct] */

void FUN_105a2478c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a247d4; end: 105a248b7; -[SCPublicStoriesObserver initWithDocObjectContext:performer:] */

undefined1 *
FUN_105a247d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb5c8;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1480;
    _objc_alloc();
    func_0x00010c00d820();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a248b8; end: 105a2499b; -[SCPublicStoriesObserver startObservingMostRecentPublicStoryTimestamp] */

void FUN_105a248b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  puStack_40 = puVar2;
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a2499c; end: 105a249f3;  */

void FUN_105a2499c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12bc0();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a249f4; end: 105a24a1b; -[SCPublicStoriesObserver mostRecentPublicStoryTimestampObservable] */

void FUN_105a249f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a24a1c; end: 105a24a7b; -[SCPublicStoriesObserver mostRecentPublicStoryTimestamp] */

undefined8 FUN_105a24a1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11d7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c122520();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105a24a7c; end: 105a24b1f; -[SCPublicStoriesObserver _updateMostRecentPublicStoryPostedTimestampWithFetchedResult:] */

void FUN_105a24a7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c122520();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a24b20; end: 105a24c4f; -[SCPublicStoriesObserver _fetchMostRecentPublicStoryPost] */

void FUN_105a24b20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11d7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar2;
  func_0x00010c0e0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105a24c50; end: 105a24c97;  */

void FUN_105a24c50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbcc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a24c98; end: 105a24ceb; -[SCPublicStoriesObserver .cxx_destruct] */

void FUN_105a24c98(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a24cec; end: 105a24e4b; -[SCPublicStoriesServiceProvider provide] */

void FUN_105a24cec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a24e4c;
  puStack_68 = &UNK_110861c28;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1488;
  _objc_alloc(PTR_PTR_1126c1488);
  func_0x00010c03bda0();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a24e4c; end: 105a24e8b;  */

void FUN_105a24e4c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be83c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a24e8c; end: 105a24efb;  */

void FUN_105a24e8c(long param_1,undefined8 param_2)

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
  func_0x00010bdeca40(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105a24efc; end: 105a24fbf; -[SCPublicStoriesServiceProvider _publicStoriesDateUpdatePerfomer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a24efc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  param_1 = param_1 + _DAT_11272da74;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f32013d);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f9920(lVar2,param_2,puVar3,3,0,0x15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105a24fc0; end: 105a2504b; -[SCPublicStoriesServiceProvider _createDataCoordinatorWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a24fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272da78;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126c1490;
  _objc_alloc(PTR_PTR_1126c1490);
  func_0x00010c00ddc0();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a2504c; end: 105a2508f; -[SCPublicStoriesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2504c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272da74);
  _objc_destroyWeak(param_1 + _DAT_11272da78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272da7c);
  return;
}



/* Entry: 105a25090; end: 105a2524f; -[SCStoryDraftingDataCoordinator initWithSTMSNetworkRequster:userSession:performer:circumstanceEngine:notificationPool:storiesBlizzardLogger:snapProProfilesProvider:] */

undefined1 *
FUN_105a25090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eb5d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    func_0x00010bdf0b00(puVar1);
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



/* Entry: 105a25250; end: 105a25277; -[SCStoryDraftingDataCoordinator snapProStoryDraftingSnapsObservable] */

void FUN_105a25250(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a25278; end: 105a2535b; -[SCStoryDraftingDataCoordinator syncSnapProStoryDraftingSnaps] */

void FUN_105a25278(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x000108f42110();
  if (((iVar1 != 0) && ((*(byte *)(param_2 + 0x50) & 1) == 0)) &&
     (dVar3 = *(double *)(param_2 + 0x58), _CACurrentMediaTime(), 5.0 < dVar3 + param_1)) {
    *(undefined1 *)(param_2 + 0x50) = 1;
    _objc_initWeak(auStack_38,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105a2535c; end: 105a25387;  */

void FUN_105a2535c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a25388; end: 105a254bb; -[SCStoryDraftingDataCoordinator deleteDraftingSnapsWithIds:] */

void FUN_105a25388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x60);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a254bc;
  puStack_50 = &UNK_1108ce558;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001006372a4(lVar2,&puStack_68);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_70,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(lVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105a254bc; end: 105a2553b;  */

undefined8 FUN_105a254bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105a2553c; end: 105a256a3; -[SCStoryDraftingDataCoordinator updateDraftingSnapWithId:goLiveTimestamp:] */

void FUN_105a2553c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x60);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a256a4;
  puStack_60 = &UNK_1108ce558;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a256a4; end: 105a2571f;  */

undefined8 FUN_105a256a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105a25720; end: 105a258c7; -[SCStoryDraftingDataCoordinator _fetchSnapProStoryDraftingSnaps] */

void FUN_105a25720(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126c1320;
  _objc_alloc_init(PTR_PTR_1126c1320);
  func_0x00010c20ddc0();
  puVar2 = PTR_PTR_1126c1498;
  _objc_alloc_init(PTR_PTR_1126c1498);
  func_0x00010c1bda80();
  func_0x00010c206200(puVar1);
  puVar3 = PTR_PTR_1126c14a0;
  _objc_alloc_init(PTR_PTR_1126c14a0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfaa920(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105a258c8; end: 105a259ff;  */

void FUN_105a258c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c2456a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x105a25a38;
      puStack_70 = &UNK_110841fb0;
      puVar2 = auStack_60;
      _objc_copyWeak(puVar2,param_1 + 0x20);
      _objc_retain(param_2);
      lStack_68 = param_2;
      func_0x000100162d98("APPSTORE",&puStack_88);
      _objc_release(lStack_68);
      goto LAB_105a259d4;
    }
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a25a00;
  puStack_40 = &UNK_1108434b0;
  puVar2 = auStack_38;
  _objc_copyWeak(puVar2,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_58);
LAB_105a259d4:
  _objc_destroyWeak(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a25a00; end: 105a25a8f;  */

void FUN_105a25a00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a25a90; end: 105a25aff; -[SCStoryDraftingDataCoordinator _didFetchSnapProStoryDraftingSnaps:didSucceed:] */

void FUN_105a25a90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  *(undefined1 *)(param_2 + 0x50) = 0;
  if (param_5 != 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x58) = param_1;
    func_0x00010bedaf00(param_2,param_3,param_4);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = param_4;
    _objc_release(uVar1);
    func_0x00010be83f60(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a25b00; end: 105a25e17; -[SCStoryDraftingDataCoordinator _createSnapProDataModelFromDraftingSnap:isUpdating:] */

void FUN_105a25b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 uStack_9c;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c14ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2533e0();
  _objc_release(uVar1);
  uStack_70 = PTR__OBJC_CLASS___NSDate_1126ae770;
  iVar14 = (int)uVar2;
  if (iVar14 == 0) {
    func_0x00010bf651a0(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar14 != 2) {
      if (iVar14 == 1) {
        uVar1 = param_3;
        func_0x00010c14ff80(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c253400();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfcd380();
        func_0x00010bf651a0(uStack_70,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar1);
        uStack_9c = 0;
      }
      else {
        uStack_70 = (undefined *)0x0;
      }
      goto LAB_105a25c50;
    }
    uVar1 = param_3;
    func_0x00010c14ff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c253120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf990c0();
    func_0x00010bf651a0(uStack_70,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uStack_9c = 1;
LAB_105a25c50:
  puVar4 = PTR_PTR_1126c14a8;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c242960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar10 = param_3;
  func_0x00010c25a520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c26da00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar9,param_2,uVar11);
  uVar12 = param_3;
  func_0x00010c25a520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff060(puVar4,param_2,uVar2,uVar3,uVar8,puVar9,uVar13,uStack_70,uStack_9c & 1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_70);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a25e18; end: 105a25fbf; -[SCStoryDraftingDataCoordinator _deleteDraftingSnaps:] */

void FUN_105a25e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c14a0;
  _objc_alloc_init(PTR_PTR_1126c14a0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ce5d8);
  func_0x00010be4f4a0(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf6caa0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105a25fc0; end: 105a25fc7;  */

void FUN_105a25fc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105a25fc8; end: 105a2607b;  */

void FUN_105a25fc8(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a2607c;
  puStack_50 = &UNK_1108488f8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  uStack_38 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105a2607c; end: 105a260b3;  */

void FUN_105a2607c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a260b4; end: 105a26207; -[SCStoryDraftingDataCoordinator _didDeleteDraftingSnaps:success:] */

void FUN_105a260b4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    func_0x00010bde0860(param_1);
    func_0x00010bec6020(param_1);
  }
  else {
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be52360(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be14010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__fetchSnapProStoryDraftingSnaps_1125629a0);
  return;
}



/* Entry: 105a26208; end: 105a2620f;  */

void FUN_105a26208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchSnapProStoryDraftingSnaps_1125629a0);
  return;
}



/* Entry: 105a26210; end: 105a26493; -[SCStoryDraftingDataCoordinator _updateDraftingSnap:goLiveTimestamp:] */

void FUN_105a26210(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  lVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5);
  _objc_release(lVar1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105a26494;
  puStack_88 = &UNK_110842e18;
  lStack_80 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_a0);
  puVar2 = PTR_PTR_1126c14a0;
  _objc_alloc_init(PTR_PTR_1126c14a0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_initWeak(auStack_a8,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_78 = lVar1;
  uStack_70 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_3);
  func_0x00010c28a5a0(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010be83f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s__publishDraftingSnapProSnaps_11257e978);
  return;
}



/* Entry: 105a26494; end: 105a2649b;  */

void FUN_105a26494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__publishDraftingSnapProSnaps_11257e978);
  return;
}



/* Entry: 105a2649c; end: 105a265cb;  */

void FUN_105a2649c(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a265cc;
    puStack_48 = &UNK_110841fb0;
    puVar1 = auStack_38;
    _objc_copyWeak(puVar1,param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    func_0x000100162d98("APPSTORE",&puStack_60);
    lVar2 = lStack_40;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a26620;
    puStack_78 = &UNK_110841fb0;
    puVar1 = auStack_68;
    _objc_copyWeak(puVar1,param_1 + 0x28);
    _objc_retain(param_2);
    lStack_70 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_90);
    lVar2 = lStack_70;
  }
  _objc_release(lVar2);
  _objc_destroyWeak(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a265cc; end: 105a2661f;  */

void FUN_105a265cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfdc00(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a26620; end: 105a26693;  */

void FUN_105a26620(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2456a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be015c0(lVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a26694; end: 105a267c3; -[SCStoryDraftingDataCoordinator _didUpdateDraftingSnap:] */

void FUN_105a26694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar4 = *(long *)(param_1 + 0x60);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a267c4;
  puStack_50 = &UNK_1108ce628;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(lVar4,param_2,&puStack_68);
  if (lVar4 == 0x7fffffffffffffff) {
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a26834;
    puStack_78 = &UNK_110842e18;
    lStack_70 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_90);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf09fe0(uVar2,param_2,lVar4,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010be83f60(param_1);
  }
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105a267c4; end: 105a26833;  */

undefined8 FUN_105a267c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105a26834; end: 105a2683b;  */

void FUN_105a26834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchSnapProStoryDraftingSnaps_1125629a0);
  return;
}



/* Entry: 105a2683c; end: 105a2686b; -[SCStoryDraftingDataCoordinator _didFailToUpdateDraftingSnapWithId:] */

void FUN_105a2683c(long param_1)

{
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x70));
  func_0x00010be83f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__submitFailureToUpdateNotificati_11258f1b8);
  return;
}



/* Entry: 105a2686c; end: 105a269e7; -[SCStoryDraftingDataCoordinator _createObservables] */

void FUN_105a2686c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a269e8;
  puStack_68 = &UNK_11084de30;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar3 = uVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a269e8; end: 105a26a8f;  */

void FUN_105a269e8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105a26a90;
    puStack_40 = &UNK_1108ce558;
    puVar1 = param_2;
    lStack_38 = param_1;
    func_0x0001006372a4(param_2,&puStack_58);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a26a90; end: 105a26adf;  */

uint FUN_105a26a90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105a26ae0; end: 105a26c0b;  */

void FUN_105a26ae0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105a26b88;
    puStack_40 = &UNK_1108ce658;
    puVar1 = param_2;
    lStack_38 = param_1;
    func_0x000100504554(param_2,&puStack_58);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a26c0c; end: 105a26c1b; -[SCStoryDraftingDataCoordinator _publishDraftingSnapProSnaps] */

void FUN_105a26c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 105a26c1c; end: 105a26c63; -[SCStoryDraftingDataCoordinator _locallyDeleteDraftingSnaps:] */

void FUN_105a26c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ce688);
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x68));
  func_0x00010be83f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a26c64; end: 105a26c6b;  */

void FUN_105a26c64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105a26c6c; end: 105a26cb3; -[SCStoryDraftingDataCoordinator _clearLocallyDeletedDraftingSnaps:] */

void FUN_105a26c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ce6a8);
  func_0x00010c12d500(*(undefined8 *)(param_1 + 0x68));
  func_0x00010be83f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a26cb4; end: 105a26cbb;  */

void FUN_105a26cb4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105a26cbc; end: 105a26d6b; -[SCStoryDraftingDataCoordinator _updateLocallyDeletedSnapsWithFetchedDraftingSnaps:] */

void FUN_105a26cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ce6c8);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105a26d74;
  puStack_40 = &UNK_110856a28;
  uStack_38 = param_3;
  _objc_retain();
  func_0x0001006372a4(uVar3,&puStack_58);
  uVar1 = uVar3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a26d6c; end: 105a26d7f;  */

void FUN_105a26d6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105a26d80; end: 105a26dd7; -[SCStoryDraftingDataCoordinator _submitFailureToDeleteNotification] */

void FUN_105a26d80(undefined8 param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e17898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec6000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105a26dd8; end: 105a26e1b; -[SCStoryDraftingDataCoordinator _submitFailureToUpdateNotification] */

void FUN_105a26dd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000108f58f0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec6000(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110e178b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a26e1c; end: 105a26eff; -[SCStoryDraftingDataCoordinator _submitFailureNotificationWithText:accessibilityIdentifier:] */

void FUN_105a26e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a26f00;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = uVar1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105a26f00; end: 105a26f4b;  */

void FUN_105a26f00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a26f4c; end: 105a2713b; -[SCStoryDraftingDataCoordinator _logDeleteEventForDraftingSnap:] */

void FUN_105a26f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c25a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf6ece0();
  _objc_release(uVar6);
  uVar6 = 0;
  uVar7 = (uint)uVar1;
  if ((3 < uVar7) && (uVar7 != 6)) {
    if (uVar7 == 4) {
      uVar1 = param_3;
      func_0x00010c25a8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c242960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    uVar1 = param_3;
    func_0x00010c14ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2533e0();
    _objc_release(uVar1);
    iVar8 = (int)uVar2;
    if ((iVar8 != 0) && (iVar8 != 2)) {
      if (iVar8 == 1) {
        uVar2 = param_3;
        func_0x00010c14ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c253400();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010bfcd380();
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      uVar2 = uVar6;
      func_0x00010bf24ec0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = param_1;
      func_0x00010bec49e0(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x40);
        uVar2 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a4d40(uVar9,param_2,uVar2,uVar5,0,0,0xc,3,lVar4,uVar1);
        _objc_release(uVar5);
        _objc_release(uVar2);
      }
      _objc_release(lVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a2713c; end: 105a272e7; -[SCStoryDraftingDataCoordinator _storyIdForBusinessId:] */

void FUN_105a2713c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar4 = 0;
  if (lVar3 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar8;
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf25000(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010bfe4500();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          goto LAB_105a27298;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar4 = 0;
  }
LAB_105a27298:
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x70,0);
    _objc_storeStrong(param_3 + 0x68,0);
    _objc_storeStrong(param_3 + 0x60,0);
    _objc_storeStrong(param_3 + 0x48,0);
    _objc_storeStrong(param_3 + 0x40,0);
    _objc_storeStrong(param_3 + 0x38,0);
    _objc_storeStrong(param_3 + 0x30,0);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105a272e8; end: 105a273cf; -[SCStoryDraftingDataCoordinator .cxx_destruct] */

void FUN_105a272e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105a273d0; end: 105a2758f; -[SCStoryDraftingServiceProvider _createStoryDraftingDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a273d0(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1;
  func_0x00010bdecb60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c14b8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11272dab8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c255740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272dabc;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272dac0;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272dac4;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272dac8;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272dacc;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0411e0(puVar2,param_2,lVar4,lVar6,lVar1,lVar8,lVar10,lVar12,lVar13);
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
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a27590; end: 105a27653; -[SCStoryDraftingServiceProvider _createDataUpdatePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a27590(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  param_1 = param_1 + _DAT_11272dad0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3202b9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f9920(lVar2,param_2,puVar3,3,0,0x15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105a27654; end: 105a27707; -[SCStoryDraftingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a27654(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272dacc);
  _objc_destroyWeak(param_1 + _DAT_11272dac8);
  _objc_destroyWeak(param_1 + _DAT_11272dac4);
  _objc_destroyWeak(param_1 + _DAT_11272dad0);
  _objc_destroyWeak(param_1 + _DAT_11272dac0);
  _objc_destroyWeak(param_1 + _DAT_11272dab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272dabc);
  return;
}



/* Entry: 105a27708; end: 105a278ab; -[SCStoriesSnapchatterServicesEntryPoint _createSnapchatterFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a27708(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c14c8;
  _objc_alloc();
  lVar12 = (long)_DAT_11272dad4;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar4 = lVar12;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11272dad8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfba5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272dadc;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11272dae0;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272dae4;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049920(puVar1,param_2,lVar3,lVar4,lVar6,lVar8,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a278ac; end: 105a27923; -[SCStoriesSnapchatterServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a278ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272daec,0);
  _objc_destroyWeak(param_1 + _DAT_11272dae4);
  _objc_destroyWeak(param_1 + _DAT_11272dae0);
  _objc_destroyWeak(param_1 + _DAT_11272dad8);
  _objc_destroyWeak(param_1 + _DAT_11272dadc);
  _objc_destroyWeak(param_1 + _DAT_11272dad4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272dae8);
  return;
}



/* Entry: 105a27924; end: 105a27aaf; -[SCStoriesSnapchatterFetcher initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:friendsResponseResultObservable:docObjectContext:circumstanceEngine:grapheneMetricsEmitter:] */

undefined1 *
FUN_105a27924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb5d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


