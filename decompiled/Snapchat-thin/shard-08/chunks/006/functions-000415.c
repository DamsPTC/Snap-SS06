/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106376314; end: 106376343; -[SCAdReportEventTrackerProvider .cxx_destruct] */

void FUN_106376314(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106376344; end: 10637640f; -[SCAdReportHideAdEventTracker initWithTracker:reportTracker:adRequestClientId:] */

undefined1 *
FUN_106376344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106376410; end: 106376413; -[SCAdReportHideAdEventTracker trackDidShowReportAd] */

void FUN_106376410(void)

{
  return;
}



/* Entry: 106376414; end: 106376567; -[SCAdReportHideAdEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106376414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126c5430;
  func_0x00010bfb77a0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar3);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126c5430;
    func_0x00010c06b100(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
    if ((int)uVar2 != 0) goto LAB_1063764b0;
  }
  else {
    _objc_release(puVar3);
LAB_1063764b0:
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar3 = PTR_PTR_1126c9f38;
      func_0x00010bf1d040(PTR_PTR_1126c9f38,param_2,param_3);
      func_0x00010bae7ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132460();
      _objc_release(uVar2);
      goto LAB_106376540;
    }
  }
  func_0x00010bef2bc0(PTR_PTR_1126bdcf8,param_2,param_3);
  puVar3 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1600();
LAB_106376540:
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106376568; end: 10637656b; -[SCAdReportHideAdEventTracker trackDidCancelReport] */

void FUN_106376568(void)

{
  return;
}



/* Entry: 10637656c; end: 1063765a7; -[SCAdReportHideAdEventTracker .cxx_destruct] */

void FUN_10637656c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063765a8; end: 10637665f; -[SCAdReportPromotedStoryEventTracker initWithLogger:promotedStory:tileSize:] */

undefined1 *
FUN_1063765a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1030;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106376660; end: 106376663; -[SCAdReportPromotedStoryEventTracker trackDidShowReportAd] */

void FUN_106376660(void)

{
  return;
}



/* Entry: 106376664; end: 1063766f7; -[SCAdReportPromotedStoryEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106376664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9f38;
  _objc_retain(param_4);
  func_0x00010bf1d040(puVar1,param_2,param_3);
  func_0x00010bae7ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad120(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063766f8; end: 106376737; -[SCAdReportPromotedStoryEventTracker trackDidCancelReport] */

void FUN_1063766f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ad100(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106376738; end: 106376767; -[SCAdReportPromotedStoryEventTracker .cxx_destruct] */

void FUN_106376738(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106376768; end: 1063767db; -[SCAdReportPromotedStoryEventTrackerProvider initWithLogger:] */

undefined1 * FUN_106376768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1038;
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



/* Entry: 1063767dc; end: 106376863; -[SCAdReportPromotedStoryEventTrackerProvider adReportPromotedStoryTileEventTrackerForPromotedStory:tileSize:forAdHide:] */

void FUN_1063767dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_PTR_1126c9f60;
  if (param_6 == 0) {
    ppuVar1 = &PTR_PTR_1126c9f68;
  }
  puVar2 = *ppuVar1;
  _objc_retain(param_5);
  _objc_alloc(puVar2);
  func_0x00010c027580(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106376864; end: 10637686f; -[SCAdReportPromotedStoryEventTrackerProvider .cxx_destruct] */

void FUN_106376864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106376870; end: 10637696b; -[SCAdReportScopeLauncher initWithReportAdScopeExposer:reportAdScopeServices:adInfoScopeExposer:adInfoScopeServices:] */

undefined1 *
FUN_106376870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f1040;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10637696c; end: 106376a0b; -[SCAdReportScopeLauncher presentReportAdWithConfig:eventTracker:uiContainer:uiContainerV3:delegate:] */

void FUN_10637696c(long param_1)

{
  undefined8 in_x6;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(in_x6);
  func_0x00010bf22c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_storeWeak(param_1 + 0x28,in_x6);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106376a0c; end: 106376a53; -[SCAdReportScopeLauncher reportAdScopeDidComplete:didSubmit:] */

void FUN_106376a0c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1324a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106376a54; end: 106376a57; -[SCAdReportScopeLauncher reportAdScopeDidSubmitWithReasonId:comment:] */

void FUN_106376a54(void)

{
  return;
}



/* Entry: 106376a58; end: 106376b53; -[SCAdReportScopeLauncher presentAdInfoWithConfig:uiContainer:delegate:] */

void FUN_106376a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf20f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_3);
  _objc_release(param_3);
  func_0x00010bf22a60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
  _objc_storeWeak(param_1 + 0x30,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106376b54; end: 106376b93; -[SCAdReportScopeLauncher adInfoScopeDidComplete:] */

void FUN_106376b54(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef2d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106376b94; end: 106376beb; -[SCAdReportScopeLauncher .cxx_destruct] */

void FUN_106376b94(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106376bec; end: 106376ceb;  */

void FUN_106376bec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c9f70;
  _objc_alloc(PTR_PTR_1126c9f70);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  FUN_106376cec();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef4760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  FUN_106376cec();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bee6900();
  func_0x00010bff1c40(puVar1,param_2,lVar4,lVar7,lVar8);
  _objc_release(param_1);
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



/* Entry: 106376cec; end: 106376d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106376cec(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127462b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106376d10; end: 106376daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106376d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c9f78;
  _objc_alloc(PTR_PTR_1126c9f78);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_1127462c0;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c0b3760(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0271a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106376db0; end: 106376f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106376db0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126c9f80;
  _objc_alloc(PTR_PTR_1126c9f80);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_1127462b0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  FUN_106376f10();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c281140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  FUN_106376f10();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c281060();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010bee6900();
  func_0x00010c05f500(puVar1,param_2,lVar4,lVar7,lVar10,lVar11);
  _objc_release(param_1);
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



/* Entry: 106376f10; end: 106376f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106376f10(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127462b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106376f34; end: 106376f73;  */

void FUN_106376f34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106376f74; end: 1063770ff;  */

void FUN_106376f74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126c9f88;
  _objc_alloc(PTR_PTR_1126c9f88);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  FUN_106377100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c054dc0(puVar1,param_2,lVar4,puVar6);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bee6900();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c9f90;
    _objc_alloc(PTR_PTR_1126c9f90);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    FUN_106377100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    func_0x00010c054dc0(puVar6,param_2,lVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  puVar5 = PTR_PTR_1126c9f98;
  _objc_alloc(PTR_PTR_1126c9f98);
  func_0x00010bff1c20();
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106377100; end: 106377123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106377100(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127462bc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106377124; end: 1063771a3; -[SCAdReportServiceProvider _useSwiftEventTrackers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106377124(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112746298;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f480();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1063771a4; end: 10637723f; -[SCAdReportServiceProvider _createAdReportScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063771a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9fa8;
  _objc_alloc(PTR_PTR_1126c9fa8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274629c);
  lVar2 = param_1 + _DAT_1127462a0;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127462a4);
  param_1 = param_1 + _DAT_1127462a8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c03e700(puVar1,param_2,uVar3,lVar2,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106377240; end: 1063772eb; -[SCAdReportServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106377240(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127462a8);
  _objc_storeStrong(param_1 + _DAT_1127462a4,0);
  _objc_destroyWeak(param_1 + _DAT_1127462a0);
  _objc_storeStrong(param_1 + _DAT_11274629c,0);
  _objc_destroyWeak(param_1 + _DAT_112746298);
  _objc_destroyWeak(param_1 + _DAT_1127462c0);
  _objc_destroyWeak(param_1 + _DAT_1127462bc);
  _objc_destroyWeak(param_1 + _DAT_1127462b8);
  _objc_destroyWeak(param_1 + _DAT_1127462b4);
  _objc_destroyWeak(param_1 + _DAT_1127462b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127462ac);
  return;
}



/* Entry: 1063772ec; end: 1063773c7; -[SCAdReportSponsoredEventTracker initWithAdResponse:adReportEventSubject:eventTrackerHelper:adViewSource:] */

undefined1 *
FUN_1063772ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1048;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063773c8; end: 106377437; -[SCAdReportSponsoredEventTracker trackDidShowReportAd] */

void FUN_1063773c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bef4520(uVar1,param_2,*(undefined8 *)(param_1 + 8),3,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106377438; end: 10637762f; -[SCAdReportSponsoredEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106377438(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010c06b080(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126c5418;
    func_0x00010bf01ce0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    if ((uVar2 & 1) != 0) {
LAB_1063774e8:
      _objc_release(puVar3);
      goto LAB_1063774f0;
    }
    puVar4 = PTR_PTR_1126c5418;
    func_0x00010bf01cc0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar4);
    if ((int)uVar2 != 0) {
      _objc_release(puVar4);
      goto LAB_1063774e8;
    }
    puVar5 = PTR_PTR_1126c5418;
    func_0x00010bfe5020(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126c9f38;
      func_0x00010bf1d040(PTR_PTR_1126c9f38,param_2,param_3);
      func_0x00010bae7ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bef4520(uVar6,param_2,*(undefined8 *)(param_1 + 8),6,1,puVar1,param_4,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_106377548;
    }
  }
  else {
LAB_1063774f0:
    _objc_release(puVar1);
  }
  func_0x00010bef2bc0(PTR_PTR_1126bdcf8,param_2,param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bef4520(uVar6,param_2,*(undefined8 *)(param_1 + 8),7,0,0,0,0,0,1);
  _objc_retainAutoreleasedReturnValue();
LAB_106377548:
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106377630; end: 106377633; -[SCAdReportSponsoredEventTracker trackDidCancelReport] */

void FUN_106377630(void)

{
  return;
}



/* Entry: 106377634; end: 10637766f; -[SCAdReportSponsoredEventTracker .cxx_destruct] */

void FUN_106377634(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106377670; end: 10637773b; -[SCAdReportSponsoredEventTrackerProvider initWithAdReportEventSubject:eventTrackerHelper:swiftEventTrackerHelper:] */

undefined1 *
FUN_106377670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1050;
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



/* Entry: 10637773c; end: 1063777df; -[SCAdReportSponsoredEventTrackerProvider adReportEventTrackerForAdResponse:forHideAd:adViewSource:] */

void FUN_10637773c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9fc0;
  puVar2 = PTR_PTR_1126c9fc8;
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126c9fb0;
    puVar2 = PTR_PTR_1126c9fb8;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    _objc_alloc(puVar2);
  }
  else {
    _objc_alloc(puVar1);
    puVar2 = puVar1;
  }
  func_0x00010bff1d20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063777e0; end: 10637781b; -[SCAdReportSponsoredEventTrackerProvider .cxx_destruct] */

void FUN_1063777e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10637781c; end: 1063778e7; -[SCAdReportUnlockableEventTracker initWithTracker:userTrackedLogger:unlockableId:] */

undefined1 *
FUN_10637781c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1058;
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



/* Entry: 1063778e8; end: 1063778eb; -[SCAdReportUnlockableEventTracker trackDidShowReportAd] */

void FUN_1063778e8(void)

{
  return;
}



/* Entry: 1063778ec; end: 10637795b; -[SCAdReportUnlockableEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_1063778ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c277de0(uVar1,param_2,uVar2,param_3,param_4);
  func_0x00010be4ff60(param_1,param_2,1,param_3,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10637795c; end: 10637799b; -[SCAdReportUnlockableEventTracker trackDidCancelReport] */

void FUN_10637795c(long param_1,undefined8 param_2)

{
  func_0x00010c277de0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010be4ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAdUnlockableReportWithDidSub_112571978,0,0,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10637799c; end: 106377a67; -[SCAdReportUnlockableEventTracker _logAdUnlockableReportWithDidSubmit:reasonId:unlockableId:] */

void FUN_10637799c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c9fd0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c9f38;
  func_0x00010bf1d040(PTR_PTR_1126c9f38,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c163640(puVar1,param_2,puVar2);
  func_0x00010c198620(puVar1,param_2,param_3);
  func_0x00010c21bbe0(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106377a68; end: 106377aa3; -[SCAdReportUnlockableEventTracker .cxx_destruct] */

void FUN_106377a68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106377aa4; end: 106377b7f; -[SCAdReportUnlockableEventTrackerProvider initWithUserTrackedLogger:unlockableLensTracker:unlockableGeoFilterTracker:useSwiftEventTrackers:] */

undefined1 *
FUN_106377aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1060;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106377b80; end: 106377c1b; -[SCAdReportUnlockableEventTrackerProvider adReportEventTrackerForLensId:] */

void FUN_106377b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR_PTR_1126c9fd8;
  if (*(char *)(param_1 + 0x20) == '\0') {
    ppuVar1 = &PTR_PTR_1126c9fe0;
  }
  puVar3 = *ppuVar1;
  _objc_retain(param_3);
  _objc_alloc(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054ee0(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 8),param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106377c1c; end: 106377cb7; -[SCAdReportUnlockableEventTrackerProvider adReportEventTrackerForGeoFilterId:] */

void FUN_106377c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR_PTR_1126c9fd8;
  if (*(char *)(param_1 + 0x20) == '\0') {
    ppuVar1 = &PTR_PTR_1126c9fe0;
  }
  puVar3 = *ppuVar1;
  _objc_retain(param_3);
  _objc_alloc(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054ee0(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 8),param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106377cb8; end: 106377cf3; -[SCAdReportUnlockableEventTrackerProvider .cxx_destruct] */

void FUN_106377cb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106377cf4; end: 106377d97; -[SCAdSponsoredEventTrackerHelper initWithTrackSeqNumProvider:timeProvider:] */

undefined1 *
FUN_106377cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1068;
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



/* Entry: 106377d98; end: 106377eef; -[SCAdSponsoredEventTrackerHelper adReportEventWithAdResponse:eventType:adFlagged:adFlaggedReason:adFlaggedNote:adReportReason:adReportVersion:adHidden:adHidingReason:adViewSource:] */

void FUN_106377d98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bdc5960();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b9000;
  _objc_alloc(PTR_PTR_1126b9000);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  _objc_retain(uVar3);
  func_0x00010b890a50(puVar1,uVar3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b9008;
  _objc_alloc(PTR_PTR_1126b9008);
  func_0x00010c000060();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106377ef0; end: 1063781fb; -[SCAdSponsoredEventTrackerHelper _adTrackCommonWithAdResponse:eventType:] */

void FUN_106377ef0(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_4);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x10));
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  func_0x00010bef4240(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c278840();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c29e180();
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bfa41e0();
  _objc_release(uVar9);
  puVar2 = param_4;
  func_0x00010bef52c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x0001084c6f7c(param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9150;
  _objc_alloc(PTR_PTR_1126b9150);
  puVar4 = param_4;
  func_0x00010c15ed20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_4;
  func_0x00010bef60a0();
  puVar12 = param_4;
  func_0x00010bef4240();
  puVar13 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b88f85c(param_1 * 1000.0,puVar2,puVar1,puVar3,puVar4,puVar10,0,uVar7,uVar6,uVar8,0,0,
                      puVar11,puVar5,puVar5,puVar12,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063781fc; end: 10637822b; -[SCAdSponsoredEventTrackerHelper .cxx_destruct] */

void FUN_1063781fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10637822c; end: 1063782d3; -[SCAdDiscoverSharingPresenter initWithDiscoverShareController:delegate:] */

undefined1 *
FUN_10637822c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1070;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063782d4; end: 1063782ff; -[SCAdDiscoverSharingPresenter state] */

undefined1 FUN_1063782d4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c252440();
  uVar1 = 2;
  if (lVar2 != 1) {
    uVar1 = lVar2 == 2;
  }
  return uVar1;
}



/* Entry: 106378300; end: 106378327; -[SCAdDiscoverSharingPresenter shareWithImage:fromViewController:] */

void FUN_106378300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 8),
             PTR_s_shareWithImage_overlayImages_fro_112668700,param_3,0,param_4,0,1,6);
  return;
}



/* Entry: 106378328; end: 10637832f; -[SCAdDiscoverSharingPresenter sendPressedFromTopLevelShareFromViewController:page:contextSessionId:] */

void FUN_106378328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendPressedFromTopLevelShareFrom_112634b58);
  return;
}



/* Entry: 106378330; end: 106378337; -[SCAdDiscoverSharingPresenter sendPressedFromContextMenuFromViewController:page:contextSessionId:] */

void FUN_106378330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendPressedFromContextMenuFromVi_112634b48);
  return;
}



/* Entry: 106378338; end: 10637833f; -[SCAdDiscoverSharingPresenter endShare] */

void FUN_106378338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_endDiscoverShare_1125c2b80);
  return;
}



/* Entry: 106378340; end: 10637836b; -[SCAdDiscoverSharingPresenter shareController:didChangeState:] */

void FUN_106378340(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef5060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10637836c; end: 1063783c3; -[SCAdDiscoverSharingPresenter shareController:didCompleteSharing:withParameters:] */

void FUN_10637836c(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef5080();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063783c4; end: 1063783ef; -[SCAdDiscoverSharingPresenter shareControllerDidBeginSharing:] */

void FUN_1063783c4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef5040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063783f0; end: 10637841b; -[SCAdDiscoverSharingPresenter shareControllerDidDismiss:] */

void FUN_1063783f0(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef50a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10637841c; end: 106378447; -[SCAdDiscoverSharingPresenter shareControllerDidExitPreview] */

void FUN_10637841c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef50c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106378448; end: 10637844b; -[SCAdDiscoverSharingPresenter shareControllerDidSaveSnap:parameters:] */

void FUN_106378448(void)

{
  return;
}



/* Entry: 10637844c; end: 106378477; -[SCAdDiscoverSharingPresenter .cxx_destruct] */

void FUN_10637844c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106378478; end: 10637848f;  */

void FUN_106378478(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106378490; end: 10637880f; -[SCAdDiscoverSharingServiceProvider sharingPresenterForAdResponse:adSnap:fromView:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106378490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined *param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  lVar1 = param_5;
  FUN_106378810();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_8;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bfb68e0(param_9);
  _CGRectGetWidth();
  uVar15 = param_1;
  func_0x00010bfb68e0(param_9);
  _objc_release(param_9);
  _CGRectGetHeight(uVar15,param_2,param_3,param_4);
  if (param_5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_5 + _DAT_112746318;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_5 + _DAT_11274631c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010c08f180();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_5 + _DAT_112746320;
    _objc_loadWeakRetained(lVar13);
  }
  lVar6 = lVar13;
  func_0x00010bf398e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_5 + _DAT_112746324;
    _objc_loadWeakRetained(lVar14);
  }
  lVar7 = lVar14;
  func_0x00010c243200(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  FUN_106378d08(0,0,param_1,uVar15,lVar2,param_7,uVar3,param_5,lVar4,lVar5,lVar6,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    param_5 = param_5 + _DAT_112746334;
    _objc_loadWeakRetained();
  }
  lVar1 = param_5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf1f480();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  if ((int)lVar11 == 0) {
    puVar10 = PTR_PTR_1126ca000;
    _objc_alloc(PTR_PTR_1126ca000);
    func_0x00010c00d0a0();
  }
  else {
    puVar9 = PTR_PTR_1126c9ff0;
    _objc_alloc(PTR_PTR_1126c9ff0);
    func_0x00010c00d080();
    puVar10 = PTR_PTR_1126c9ff8;
    _objc_alloc(PTR_PTR_1126c9ff8);
    func_0x00010c0459c0();
    _objc_release(param_10);
    func_0x00010c2104e0(puVar9);
    param_10 = puVar9;
  }
  _objc_release(param_10);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106378810; end: 106378833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106378810(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112746314);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106378834; end: 106378a0b; -[SCAdDiscoverSharingServiceProvider previewFilterDataProviderWithSnapSource:mediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106378834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126b62b0;
  _objc_alloc();
  lVar2 = param_1;
  FUN_106378810();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca008;
  func_0x00010be5ed60(PTR_PTR_1126ca008,param_2,param_4);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112746328;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar11;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11274632c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar13;
  func_0x00010c27e600();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11274630c;
  lVar7 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar9 = lVar12;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_112746330;
    _objc_loadWeakRetained();
  }
  func_0x00010c048800(puVar1,param_2,param_3,0xffffffffffffffff,lVar3,0,0,puVar4,lVar5,lVar6,lVar8,
                      lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106378a0c; end: 106378a1b; +[SCAdDiscoverSharingServiceProvider _mediaTypeFromPreviewMediaType:] */

undefined8 FUN_106378a0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 == 1) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106378a1c; end: 106378abf; -[SCAdDiscoverSharingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106378a1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112746334);
  _objc_destroyWeak(param_1 + _DAT_112746330);
  _objc_destroyWeak(param_1 + _DAT_11274630c);
  _objc_destroyWeak(param_1 + _DAT_11274632c);
  _objc_destroyWeak(param_1 + _DAT_112746328);
  _objc_destroyWeak(param_1 + _DAT_112746324);
  _objc_destroyWeak(param_1 + _DAT_112746320);
  _objc_destroyWeak(param_1 + _DAT_11274631c);
  _objc_destroyWeak(param_1 + _DAT_112746318);
  _objc_destroyWeak(param_1 + _DAT_112746314);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112746310);
  return;
}



/* Entry: 106378ac0; end: 106378b3f; -[SCAdDiscoverSharingSwiftPresenterBridge initWithDiscoverShareController:] */

undefined1 * FUN_106378ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1078;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106378b40; end: 106378b6b; -[SCAdDiscoverSharingSwiftPresenterBridge shareControllerState] */

undefined1 FUN_106378b40(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c252440();
  uVar1 = 2;
  if (lVar2 != 1) {
    uVar1 = lVar2 == 2;
  }
  return uVar1;
}



/* Entry: 106378b6c; end: 106378b93; -[SCAdDiscoverSharingSwiftPresenterBridge shareWithImage:fromViewController:] */

void FUN_106378b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGPointZero_110347540,
             *(undefined8 *)(PTR__CGPointZero_110347540 + 8),*(undefined8 *)(param_1 + 8),
             PTR_s_shareWithImage_overlayImages_fro_112668700,param_3,0,param_4,0,1,6);
  return;
}



/* Entry: 106378b94; end: 106378b9b; -[SCAdDiscoverSharingSwiftPresenterBridge sendPressedFromTopLevelShareFromViewController:page:contextSessionId:] */

void FUN_106378b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendPressedFromTopLevelShareFrom_112634b58);
  return;
}



/* Entry: 106378b9c; end: 106378ba3; -[SCAdDiscoverSharingSwiftPresenterBridge sendPressedFromContextMenuFromViewController:page:contextSessionId:] */

void FUN_106378b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sendPressedFromContextMenuFromVi_112634b48);
  return;
}



/* Entry: 106378ba4; end: 106378bab; -[SCAdDiscoverSharingSwiftPresenterBridge endShare] */

void FUN_106378ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_endDiscoverShare_1125c2b80);
  return;
}



/* Entry: 106378bac; end: 106378bd7; -[SCAdDiscoverSharingSwiftPresenterBridge shareController:didChangeState:] */

void FUN_106378bac(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106378bd8; end: 106378c2f; -[SCAdDiscoverSharingSwiftPresenterBridge shareController:didCompleteSharing:withParameters:] */

void FUN_106378bd8(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0dc0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106378c30; end: 106378c5b; -[SCAdDiscoverSharingSwiftPresenterBridge shareControllerDidBeginSharing:] */

void FUN_106378c30(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106378c5c; end: 106378c87; -[SCAdDiscoverSharingSwiftPresenterBridge shareControllerDidDismiss:] */

void FUN_106378c5c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106378c88; end: 106378cb3; -[SCAdDiscoverSharingSwiftPresenterBridge shareControllerDidExitPreview] */

void FUN_106378c88(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106378cb4; end: 106378cb7; -[SCAdDiscoverSharingSwiftPresenterBridge shareControllerDidSaveSnap:parameters:] */

void FUN_106378cb4(void)

{
  return;
}



/* Entry: 106378cb8; end: 106378ccf; -[SCAdDiscoverSharingSwiftPresenterBridge swiftPresenter] */

void FUN_106378cb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106378cd0; end: 106378cdb; -[SCAdDiscoverSharingSwiftPresenterBridge setSwiftPresenter:] */

void FUN_106378cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106378cdc; end: 106378d07; -[SCAdDiscoverSharingSwiftPresenterBridge .cxx_destruct] */

void FUN_106378cdc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106378d08; end: 1063791cb;  */

void FUN_106378d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ca010;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_alloc();
  puVar2 = PTR_PTR_1126b1350;
  _objc_alloc();
  func_0x00010bfeee60();
  puVar3 = puVar2;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bdb40);
  puVar4 = puVar3;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126ca018);
  puVar7 = puVar6;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x0001080009e8();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ecc0();
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar11 = param_6;
  func_0x00010bef52c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar2 = PTR_PTR_1126ca020;
  _objc_alloc(PTR_PTR_1126ca020);
  func_0x00010c03c100(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
  func_0x00010c171c20(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf1d1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e29e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf1d1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8f40();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar11 = param_6;
  func_0x00010bef4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    puVar2 = puVar1;
    func_0x00010bf1d1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010befd340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar11 = param_6;
    func_0x00010bef4360(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(lVar12);
    _objc_release(lVar11);
    puVar2 = puVar1;
    func_0x00010bf1d1a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165a80();
    _objc_release(puVar2);
    func_0x00010c1c6e60(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(lVar13);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063791cc; end: 1063791db;  */

void FUN_1063791cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_legacySendToScopeLauncher_112601750);
  return;
}



/* Entry: 1063791dc; end: 106379537; -[SCAdOperaParser initWithConfigProvider:adConfigProviderV2:onDemandResourceDownloader:preferences:userPreferences:userInfoServices:contextExperimentService:adBrowserLifecycleService:impalaLegacyServices:trackMetricsManager:creatorSettingsFetcher:creatorSettingsTracker:dpaConfigProvider:webBrowsingConfigProvider:storiesConfigProvider:] */

undefined8 *
FUN_1063791dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126f1080;
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
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
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
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106379538; end: 1063798d7; -[SCAdOperaParser operaPageDataForMetadata:] */

void FUN_106379538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  puVar1 = PTR_PTR_1126ca028;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0c5880();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf42920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf4c260();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c06b820();
  uVar9 = param_3;
  func_0x00010c274ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c2a3d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea840();
  func_0x00010c29d360();
  uVar11 = param_3;
  func_0x00010c0fcce0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bfeca20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9bea0();
  func_0x00010c298f60();
  uVar15 = param_3;
  func_0x00010bef3c60();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0ea160();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c1001c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1f60(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,(char)uVar8);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0ed000(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d6340(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar18 = PTR_PTR_1126ca030;
  _objc_alloc(PTR_PTR_1126ca030);
  func_0x00010c02ba40();
  puVar19 = puVar18;
  func_0x00010c0ea920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 1063798d8; end: 1063799e3; -[SCAdOperaParser .cxx_destruct] */

void FUN_1063798d8(long param_1)

{
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



/* Entry: 1063799e4; end: 106379dfb; -[SCAdOperaParserServiceProvider _buildSnapAdsOperaParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063799e4(long param_1,undefined8 param_2)

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
  undefined8 uStack_f0;
  
  puVar1 = PTR_PTR_1126ca040;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274637c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112746380;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112746384;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112746388;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11274638c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_f0 = 0;
  }
  else {
    uStack_f0 = param_1 + _DAT_1127463b4;
    _objc_loadWeakRetained();
  }
  lVar17 = param_1 + _DAT_112746390;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112746394;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bef2160();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112746398;
  _objc_loadWeakRetained();
  lVar22 = param_1 + _DAT_11274639c;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c2782c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  FUN_106379dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  FUN_106379dfc();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_1127463a0;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_1127463ac;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar34;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = 0;
  if (param_1 != 0) {
    lVar32 = param_1 + _DAT_1127463b0;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar32;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0012a0(puVar1,param_2,lVar4,lVar7,lVar10,lVar13,lVar16,uStack_f0,lVar18,lVar20,lVar21
                      ,lVar23,lVar25,lVar27,lVar30,lVar31,lVar33);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar34);
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
  _objc_release(uStack_f0);
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



/* Entry: 106379dfc; end: 106379e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106379dfc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127463a8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106379e20; end: 106379f33; -[SCAdOperaParserServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106379e20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127463b4);
  _objc_destroyWeak(param_1 + _DAT_1127463b0);
  _objc_destroyWeak(param_1 + _DAT_1127463ac);
  _objc_destroyWeak(param_1 + _DAT_1127463a8);
  _objc_destroyWeak(param_1 + _DAT_11274638c);
  _objc_destroyWeak(param_1 + _DAT_112746384);
  _objc_destroyWeak(param_1 + _DAT_112746398);
  _objc_destroyWeak(param_1 + _DAT_112746390);
  _objc_destroyWeak(param_1 + _DAT_112746388);
  _objc_destroyWeak(param_1 + _DAT_11274639c);
  _objc_destroyWeak(param_1 + _DAT_11274637c);
  _objc_destroyWeak(param_1 + _DAT_112746380);
  _objc_destroyWeak(param_1 + _DAT_1127463a0);
  _objc_destroyWeak(param_1 + _DAT_112746394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127463a4);
  return;
}



/* Entry: 106379f34; end: 106379f6f; -[SCAdPlaybackServiceProvider end] */

void FUN_106379f34(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1088;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106379f70; end: 10637b0f3; -[SCAdPlaybackServiceProvider _buildAdPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106379f70(long param_1)

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
  long lVar78;
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
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca058;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010637b110();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010637b134();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010637b158();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010637b17c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010637b1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar124 = 0;
  }
  else {
    lVar124 = param_1 + _DAT_112746484;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar124;
  func_0x00010c08f180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar125 = 0;
  }
  else {
    lVar125 = param_1 + _DAT_112746450;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar125;
  func_0x00010bf9a3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar126 = 0;
  }
  else {
    lVar126 = param_1 + _DAT_112746404;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar126;
  func_0x00010c23d7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf05380();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf053a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar127 = 0;
  }
  else {
    lVar127 = param_1 + _DAT_112746468;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar127;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar97 = 0;
  }
  else {
    lVar97 = param_1 + _DAT_112746464;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar97;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar98 = 0;
  }
  else {
    lVar98 = param_1 + _DAT_112746478;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar98;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010637b1c4();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c08f040();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010637b1c4();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c08f080();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010637b1e8();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar99 = 0;
  }
  else {
    lVar99 = param_1 + _DAT_112746434;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar99;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar100 = 0;
  }
  else {
    lVar100 = param_1 + _DAT_112746438;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar100;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar101 = 0;
  }
  else {
    lVar101 = param_1 + _DAT_11274647c;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar101;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar102 = 0;
  }
  else {
    lVar102 = param_1 + _DAT_11274646c;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar102;
  func_0x00010c23b040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar103 = 0;
  }
  else {
    lVar103 = param_1 + _DAT_112746470;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar103;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar104 = 0;
  }
  else {
    lVar104 = param_1 + _DAT_112746458;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar104;
  func_0x00010c29f380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar105 = 0;
  }
  else {
    lVar105 = param_1 + _DAT_112746488;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar105;
  func_0x00010bef2860();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x00010637b20c();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010637b230();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010637b230();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar106 = 0;
  }
  else {
    lVar106 = param_1 + _DAT_1127464ac;
    _objc_loadWeakRetained();
  }
  lVar39 = lVar106;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  if (param_1 == 0) {
    lVar107 = 0;
  }
  else {
    lVar107 = param_1 + _DAT_112746428;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar107;
  func_0x00010c0cc620();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar108 = 0;
  }
  else {
    lVar108 = param_1 + _DAT_1127464b8;
    _objc_loadWeakRetained();
  }
  lVar41 = lVar108;
  func_0x00010c0ca1e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar109 = 0;
  }
  else {
    lVar109 = param_1 + _DAT_1127463e0;
    _objc_loadWeakRetained();
  }
  lVar42 = lVar109;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar110 = 0;
  }
  else {
    lVar110 = param_1 + _DAT_1127464bc;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar110;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar111 = 0;
  }
  else {
    lVar111 = param_1 + _DAT_1127464c8;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar111;
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar112 = 0;
  }
  else {
    lVar112 = param_1 + _DAT_1127464cc;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar112;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar113 = 0;
  }
  else {
    lVar113 = param_1 + _DAT_1127464d0;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar113;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1;
  FUN_10637b320();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010637b344();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010c108d60();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1;
  func_0x00010637b368();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = lVar51;
  func_0x00010c23dc00();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar53;
  func_0x00010bef5d20();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar55;
  func_0x00010bef5d40();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010bef64c0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar59;
  func_0x00010bef5dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = lVar61;
  func_0x00010bef5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1;
  func_0x00010637b3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = lVar63;
  func_0x00010bef2160();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1;
  func_0x00010637b3d4();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010bef25c0();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1;
  func_0x00010637b3f8();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = lVar67;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = lVar69;
  func_0x00010bef3d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar114 = 0;
  }
  else {
    lVar114 = param_1 + _DAT_1127464e0;
    _objc_loadWeakRetained();
  }
  lVar71 = lVar114;
  func_0x00010c108d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar115 = 0;
  }
  else {
    lVar115 = param_1 + _DAT_1127464e8;
    _objc_loadWeakRetained();
  }
  lVar72 = lVar115;
  func_0x00010c22c6a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar116 = 0;
  }
  else {
    lVar116 = param_1 + _DAT_112746440;
    _objc_loadWeakRetained();
  }
  lVar73 = lVar116;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar117 = 0;
  }
  else {
    lVar117 = param_1 + _DAT_112746444;
    _objc_loadWeakRetained();
  }
  lVar74 = lVar117;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar118 = 0;
  }
  else {
    lVar118 = param_1 + _DAT_112746448;
    _objc_loadWeakRetained();
  }
  lVar75 = lVar118;
  func_0x00010bf34a60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar119 = 0;
  }
  else {
    lVar119 = param_1 + _DAT_11274644c;
    _objc_loadWeakRetained();
  }
  lVar76 = lVar119;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_250 = 0;
    uStack_248 = 0;
    lStack_258 = 0;
  }
  else {
    uStack_248 = *(undefined8 *)(param_1 + _DAT_112746504);
    _objc_retain();
    uStack_250 = *(undefined8 *)(param_1 + _DAT_112746508);
    _objc_retain();
    lStack_258 = param_1 + _DAT_112746500;
    _objc_loadWeakRetained();
  }
  lVar77 = param_1;
  func_0x00010637b38c();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = lVar77;
  func_0x00010bef6620();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar120 = 0;
  }
  else {
    lVar120 = param_1 + _DAT_11274642c;
    _objc_loadWeakRetained();
  }
  lVar79 = lVar120;
  func_0x00010bf3afa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar121 = 0;
  }
  else {
    lVar121 = param_1 + _DAT_1127464f0;
    _objc_loadWeakRetained();
  }
  lVar80 = lVar121;
  func_0x00010bef3920();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_1;
  func_0x00010637b41c();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = lVar81;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar122 = 0;
  }
  else {
    lVar122 = param_1 + _DAT_1127464f4;
    _objc_loadWeakRetained();
  }
  lVar83 = lVar122;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = lVar83;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = param_1;
  func_0x00010637b440();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = lVar85;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar123 = 0;
  }
  else {
    lVar123 = param_1 + _DAT_1127464f8;
    _objc_loadWeakRetained();
  }
  lVar87 = lVar123;
  func_0x00010c113e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar128 = 0;
  }
  else {
    lVar128 = param_1 + _DAT_1127464fc;
    _objc_loadWeakRetained();
  }
  lVar88 = lVar128;
  func_0x00010c09dc80();
  _objc_retainAutoreleasedReturnValue();
  lVar89 = param_1;
  func_0x00010637b41c();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = lVar89;
  func_0x00010befe1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar91 = lVar90;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1;
  func_0x00010637b1e8();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = lVar92;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar94 = lVar93;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = 0;
  if (param_1 != 0) {
    lVar95 = param_1 + _DAT_11274643c;
    _objc_loadWeakRetained();
  }
  lVar96 = lVar95;
  func_0x00010c14c360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cf60();
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar128);
  _objc_release(lVar87);
  _objc_release(lVar123);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar122);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar121);
  _objc_release(lVar79);
  _objc_release(lVar120);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(lVar76);
  _objc_release(lVar119);
  _objc_release(lVar75);
  _objc_release(lVar118);
  _objc_release(lVar74);
  _objc_release(lVar117);
  _objc_release(lVar73);
  _objc_release(lVar116);
  _objc_release(lVar72);
  _objc_release(lVar115);
  _objc_release(lVar71);
  _objc_release(lVar114);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar113);
  _objc_release(lVar45);
  _objc_release(lVar112);
  _objc_release(lVar44);
  _objc_release(lVar111);
  _objc_release(lVar43);
  _objc_release(lVar110);
  _objc_release(lVar42);
  _objc_release(lVar109);
  _objc_release(lVar41);
  _objc_release(lVar108);
  _objc_release(lVar40);
  _objc_release(lVar107);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar39);
  _objc_release(lVar106);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar105);
  _objc_release(lVar31);
  _objc_release(lVar104);
  _objc_release(lVar30);
  _objc_release(lVar103);
  _objc_release(lVar29);
  _objc_release(lVar102);
  _objc_release(lVar28);
  _objc_release(lVar101);
  _objc_release(lVar27);
  _objc_release(lVar100);
  _objc_release(lVar26);
  _objc_release(lVar99);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar98);
  _objc_release(lVar18);
  _objc_release(lVar97);
  _objc_release(lVar17);
  _objc_release(lVar127);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar126);
  _objc_release(lVar13);
  _objc_release(lVar125);
  _objc_release(lVar12);
  _objc_release(lVar124);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10637b0f4; end: 10637b253;  */

void FUN_10637b0f4(void)

{
  _objc_opt_new(PTR_PTR_1126ca050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10637b254; end: 10637b31f;  */

void FUN_10637b254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf7f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


