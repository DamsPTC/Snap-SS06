/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a1bff4; end: 107a1c013; -[SCStoryManagementView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1bff4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112768094);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a1c014; end: 107a1c027; -[SCStoryManagementView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1c014(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112768094,param_3);
  return;
}



/* Entry: 107a1c028; end: 107a1c123; -[SCStoryManagementView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1c028(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112768094);
  _objc_storeStrong(param_1 + _DAT_11276806c,0);
  _objc_storeStrong(param_1 + _DAT_11276807c,0);
  _objc_storeStrong(param_1 + _DAT_112768078,0);
  _objc_storeStrong(param_1 + _DAT_112768070,0);
  _objc_storeStrong(param_1 + _DAT_112768088,0);
  _objc_storeStrong(param_1 + _DAT_112768068,0);
  _objc_storeStrong(param_1 + _DAT_112768064,0);
  _objc_storeStrong(param_1 + _DAT_112768060,0);
  _objc_storeStrong(param_1 + _DAT_112768090,0);
  _objc_storeStrong(param_1 + _DAT_11276808c,0);
  _objc_storeStrong(param_1 + _DAT_112768084,0);
  _objc_storeStrong(param_1 + _DAT_112768080,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768074,0);
  return;
}



/* Entry: 107a1c124; end: 107a1c6db; -[SCStoryManagementViewController initWithDataSource:storyPrivacySettingManager:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:friendProfileScopeExposer:myStorySettingsScopeExposer:myStorySettingsScopeServices:customStoryMenuScopeExposer:webBrowsingScopeExposer:imageDownloader:blizzardLogger:customStoriesDataFetching:circumstanceEngine:storyBoostService:userPreferences:storiesConfigProvider:pageLauncher:optInDataProvider:avatarFactory:customStoryMenuScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107a1c124(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126f9520;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112768098;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276809c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680a0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680a4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680a8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127680ac,param_12);
    lVar5 = (long)_DAT_1127680b0;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_13;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127680b4,param_25);
    lVar5 = (long)_DAT_1127680b8;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680bc;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680c0;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be34d80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127680c4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    lVar5 = param_3;
    func_0x00010c297440();
    if (lVar5 != 2) {
      puVar3 = puVar1;
      func_0x00010beaa440(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2194c0(*(undefined8 *)((long)puVar1 + lVar6));
      _objc_release(puVar3);
    }
    puVar4 = PTR_PTR_1126d5ea0;
    _objc_alloc();
    lVar5 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d9c0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127680c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127680c8) = puVar4;
    _objc_release(uVar2);
    _objc_release(lVar5);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127680cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127680cc) = puVar4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680d0;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680d4;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680d8;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_19;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680dc;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680e0;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_21;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680e4;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_22;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680e8;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_23;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127680ec;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_24;
    _objc_release(uVar2);
    func_0x00010bec7680(puVar1);
    func_0x00010bec7600(puVar1);
  }
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



/* Entry: 107a1c6dc; end: 107a1c737; -[SCStoryManagementViewController _headerItem] */

void FUN_107a1c6dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af080;
  _objc_alloc_init(PTR_PTR_1126af080);
  func_0x00010c18b5e0();
  func_0x00010c18f820(puVar1,param_2,1);
  func_0x00010c2163c0(puVar1,param_2,0);
  func_0x00010c20eaa0(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a1c738; end: 107a1c7df; -[SCStoryManagementViewController _settingsButton] */

void FUN_107a1c738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  uVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2640(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c181e40(0,0x4008000000000000,0,0x4008000000000000,puVar3);
  func_0x00010befbd60(puVar3,param_2,param_1,PTR_s__onSettingsTapped_1125267c8,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107a1c7e0; end: 107a1c927; -[SCStoryManagementViewController _subscribeToDisplayNameUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1c7e0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768098);
  func_0x00010c259860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107a1c928; end: 107a1c96f;  */

void FUN_107a1c928(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9240();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1c970; end: 107a1c97f; -[SCStoryManagementViewController _updateHeaderTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1c970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127680c4),PTR_s_setTitle__1126632b8);
  return;
}



/* Entry: 107a1c980; end: 107a1cb17; -[SCStoryManagementViewController _subscribeToDataModelsUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1c980(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768098);
  func_0x00010c23fce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107a1cb18;
  puStack_78 = &UNK_110842c58;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 107a1cb18; end: 107a1cb8b;  */

void FUN_107a1cb18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c2e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1cb8c; end: 107a1cbe3; -[SCStoryManagementViewController _onUpdatedDataModels:] */

void FUN_107a1cb8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf529e0();
  if (param_3 != 0) {
    return;
  }
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1cbe4; end: 107a1cc1b; -[SCStoryManagementViewController _onDataModelsComplete] */

void FUN_107a1cbe4(undefined8 param_1)

{
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1cc1c; end: 107a1cceb; -[SCStoryManagementViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1cc1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5ea8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014cc0(puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127680f0);
  *(undefined **)(param_1 + _DAT_1127680f0) = puVar1;
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_release(puVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  puVar2 = puVar1;
  func_0x00010bfdef60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187440();
  _objc_release(puVar2);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1ccec; end: 107a1d1c3; -[SCStoryManagementViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1ccec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126f9520;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126d5eb0;
  _objc_alloc();
  lVar9 = (long)_DAT_1127680f0;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c23f760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c243e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112768098;
  func_0x00010c047200();
  lVar8 = (long)_DAT_1127680f4;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_90,param_1);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf60100(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0e0e80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107a1d1c4;
  puStack_a0 = &UNK_110842a38;
  _objc_copyWeak(auStack_98,auStack_90);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar6);
  puVar1 = PTR_PTR_1126d5eb8;
  _objc_alloc();
  func_0x00010c0336a0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127680f8);
  *(undefined **)(param_1 + _DAT_1127680f8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d5ec0;
  _objc_alloc(PTR_PTR_1126d5ec0);
  func_0x00010c0336c0();
  puVar4 = PTR_PTR_1126d5ec8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c23f760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff8c0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127680fc);
  *(undefined **)(param_1 + _DAT_1127680fc) = puVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d5ed0;
  _objc_alloc();
  func_0x00010c0394c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112768100);
  *(undefined **)(param_1 + _DAT_112768100) = puVar4;
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d5ed8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c243e00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff8e0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768104);
  *(undefined **)(param_1 + _DAT_112768104) = puVar4;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c154580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127680d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c25a240();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_90);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  return;
}



/* Entry: 107a1d1c4; end: 107a1d31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d1c4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar7 = *(ulong *)(param_1 + _DAT_112768098);
    func_0x00010c067fc0(param_2);
    func_0x00010bf63e40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4e880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000107d2a86c();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar7;
      func_0x00010c23f220(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4e880();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c11ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107d294ec();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c1f57a0(*(undefined8 *)(param_1 + _DAT_1127680f0));
    _objc_release(uVar7);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a1d31c; end: 107a1d3d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d31c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127680f0);
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20cbe0(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112768104);
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20cbe0(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a1d3d8; end: 107a1d40b; -[SCStoryManagementViewController viewWillAppear:] */

void FUN_107a1d3d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9520;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 107a1d40c; end: 107a1d45b; -[SCStoryManagementViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d40c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9520;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf18420(*(undefined8 *)(param_1 + _DAT_1127680f8));
  return;
}



/* Entry: 107a1d45c; end: 107a1d4df; -[SCStoryManagementViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d45c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9520;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  if ((((*(byte *)(param_1 + _DAT_112768108) & 1) == 0) &&
      (*(char *)(param_1 + _DAT_11276810c) == '\x01')) &&
     (*(char *)(param_1 + _DAT_112768110) == '\x01')) {
    func_0x00010be6f860(param_1);
  }
  return;
}



/* Entry: 107a1d4e0; end: 107a1d537; -[SCStoryManagementViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d4e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf94d40(*(undefined8 *)(param_1 + _DAT_1127680f8));
  puStack_28 = PTR_PTR_1126f9520;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 107a1d538; end: 107a1d5bf; -[SCStoryManagementViewController setOperaEventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768114);
  *(undefined8 *)(param_1 + _DAT_112768114) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1d5400(*(undefined8 *)(param_1 + _DAT_1127680f4),param_2,param_3);
  func_0x00010c1d5400(*(undefined8 *)(param_1 + _DAT_112768100),param_2,param_3);
  func_0x00010c1d5400(*(undefined8 *)(param_1 + _DAT_1127680c8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a1d5c0; end: 107a1d5cf; -[SCStoryManagementViewController resetForInitialPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d5c0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112768108) = 0;
  return;
}



/* Entry: 107a1d5d0; end: 107a1d617; -[SCStoryManagementViewController snapCarouselSectionControllerDidUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d5d0(long param_1)

{
  if ((((*(byte *)(param_1 + _DAT_11276810c) & 1) == 0) &&
      (*(undefined1 *)(param_1 + _DAT_11276810c) = 1, (*(byte *)(param_1 + _DAT_112768108) & 1) == 0
      )) && (*(char *)(param_1 + _DAT_112768110) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be6f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__pageToInitialClientIdWithAnimat_1125797b8,0);
    return;
  }
  return;
}



/* Entry: 107a1d618; end: 107a1d69f; -[SCStoryManagementViewController snapViewersSectionControllerDidUpdateWithDataModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d618(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf529e0();
  if (param_3 != 0) {
    func_0x00010c284c60(*(undefined8 *)(param_1 + _DAT_1127680f4));
  }
  if ((((*(byte *)(param_1 + _DAT_112768110) & 1) == 0) &&
      (*(undefined1 *)(param_1 + _DAT_112768110) = 1, (*(byte *)(param_1 + _DAT_112768108) & 1) == 0
      )) && (*(char *)(param_1 + _DAT_11276810c) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be6f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__pageToInitialClientIdWithAnimat_1125797b8,0);
    return;
  }
  return;
}



/* Entry: 107a1d6a0; end: 107a1d6e7; -[SCStoryManagementViewController _pageToInitialClientIdWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0f1e00(*(undefined8 *)(param_1 + _DAT_1127680f4),param_2,
                      *(undefined8 *)(param_1 + _DAT_112768118),param_3);
  *(undefined1 *)(param_1 + _DAT_112768108) = 1;
  return;
}



/* Entry: 107a1d6e8; end: 107a1d71f; -[SCStoryManagementViewController snapViewersSectionWantsToDismiss] */

void FUN_107a1d6e8(undefined8 param_1)

{
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1d720; end: 107a1d757; -[SCStoryManagementViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_107a1d720(undefined8 param_1)

{
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1d758; end: 107a1d7b3; -[SCStoryManagementViewController _onSettingsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d758(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112768098);
  func_0x00010c25b720();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be688f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCustomStorySettingsTapped_112577bd8);
    return;
  }
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be6a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onMyStorySettingsTapped_112578270);
    return;
  }
  return;
}



/* Entry: 107a1d7b4; end: 107a1d87f; -[SCStoryManagementViewController _onMyStorySettingsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d7b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127680ac;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112768098);
    func_0x00010c259cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf23a60(lVar3,param_2,uVar2,param_1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127680a8),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107a1d880; end: 107a1d93f; -[SCStoryManagementViewController didSelectSaveStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112768098);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff0a0(puVar2,param_2,0,uVar3,0,0,puVar1,param_1);
  _objc_release(uVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127680a0),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a1d940; end: 107a1d997; -[SCStoryManagementViewController didCompleteMyStorySettingsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d940(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127680a8;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a1d998; end: 107a1d9bf; -[SCStoryManagementViewController didCompleteSaveStoryScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d998(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_1127680a0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107a1d9c0; end: 107a1dabb; -[SCStoryManagementViewController _onCustomStorySettingsTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1d9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127680b4;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112768098);
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf24480(lVar4,param_2,puVar2,param_1,uVar3,0x2c,0x3a,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127680b0),param_2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107a1dabc; end: 107a1db13; -[SCStoryManagementViewController didCompleteCustomStoryMenuScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1dabc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127680b0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a1db14; end: 107a1db23; -[SCStoryManagementViewController didTapSaveSnap] */

void FUN_107a1db14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleActionBarAction__112566de0,
             &PTR____CFConstantStringClassReference_110ea9f78);
  return;
}



/* Entry: 107a1db24; end: 107a1db33; -[SCStoryManagementViewController didTapDeleteSnap] */

void FUN_107a1db24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleActionBarAction__112566de0,
             &PTR____CFConstantStringClassReference_110ea9f98);
  return;
}



/* Entry: 107a1db34; end: 107a1db43; -[SCStoryManagementViewController didTapSendSnap] */

void FUN_107a1db34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleActionBarAction__112566de0,
             &PTR____CFConstantStringClassReference_110ea9fb8);
  return;
}



/* Entry: 107a1db44; end: 107a1dbef; -[SCStoryManagementViewController _handleActionBarAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1db44(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127680f4;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c06ff40();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bf3cf80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_1127680c8),param_2,param_1,puVar3,0);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a1dbf0; end: 107a1dbf7; -[SCStoryManagementViewController pageViewName] */

undefined8 FUN_107a1dbf0(void)

{
  return 0xe8;
}



/* Entry: 107a1dbf8; end: 107a1dc27; -[SCStoryManagementViewController clientIdForCurrentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1dbf8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127680f4;
  func_0x00010c284c60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_clientIdForCurrentIndex_1125acd88);
  return;
}



/* Entry: 107a1dc28; end: 107a1dc37; -[SCStoryManagementViewController currentSnapIndexObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1dc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127680f4),PTR_s_currentSnapIndexObservable_1125b59e8);
  return;
}



/* Entry: 107a1dc38; end: 107a1dc47; -[SCStoryManagementViewController presenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1dc38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276811c);
}



/* Entry: 107a1dc48; end: 107a1dc87; -[SCStoryManagementViewController setPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1dc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276811c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a1dc88; end: 107a1dc97; -[SCStoryManagementViewController operaEventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1dc88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768114);
}



/* Entry: 107a1dc98; end: 107a1dca7; -[SCStoryManagementViewController initialClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1dc98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768118);
}



/* Entry: 107a1dca8; end: 107a1dcb3; -[SCStoryManagementViewController setInitialClientId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1dca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a1dcb4; end: 107a1debb; -[SCStoryManagementViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1dcb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768118,0);
  _objc_storeStrong(param_1 + _DAT_112768114,0);
  _objc_storeStrong(param_1 + _DAT_11276811c,0);
  _objc_storeStrong(param_1 + _DAT_1127680ec,0);
  _objc_storeStrong(param_1 + _DAT_1127680e8,0);
  _objc_storeStrong(param_1 + _DAT_1127680e4,0);
  _objc_storeStrong(param_1 + _DAT_1127680cc,0);
  _objc_storeStrong(param_1 + _DAT_1127680c8,0);
  _objc_storeStrong(param_1 + _DAT_112768104,0);
  _objc_storeStrong(param_1 + _DAT_112768100,0);
  _objc_storeStrong(param_1 + _DAT_1127680fc,0);
  _objc_storeStrong(param_1 + _DAT_1127680f8,0);
  _objc_storeStrong(param_1 + _DAT_1127680f4,0);
  _objc_storeStrong(param_1 + _DAT_1127680c4,0);
  _objc_storeStrong(param_1 + _DAT_1127680f0,0);
  _objc_storeStrong(param_1 + _DAT_1127680e0,0);
  _objc_storeStrong(param_1 + _DAT_1127680dc,0);
  _objc_storeStrong(param_1 + _DAT_1127680d8,0);
  _objc_storeStrong(param_1 + _DAT_1127680b8,0);
  _objc_storeStrong(param_1 + _DAT_1127680d4,0);
  _objc_storeStrong(param_1 + _DAT_1127680d0,0);
  _objc_storeStrong(param_1 + _DAT_1127680c0,0);
  _objc_storeStrong(param_1 + _DAT_1127680bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127680ac);
  _objc_destroyWeak(param_1 + _DAT_1127680b4);
  _objc_storeStrong(param_1 + _DAT_1127680b0,0);
  _objc_storeStrong(param_1 + _DAT_1127680a8,0);
  _objc_storeStrong(param_1 + _DAT_1127680a4,0);
  _objc_storeStrong(param_1 + _DAT_1127680a0,0);
  _objc_storeStrong(param_1 + _DAT_11276809c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768098,0);
  return;
}



/* Entry: 107a1debc; end: 107a1df57; -[SCStoryManagementSnapCarouselActionHandler initWithPagingController:storyManagementViewController:] */

undefined1 *
FUN_107a1debc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a1df58; end: 107a1e09b; -[SCStoryManagementSnapCarouselActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_107a1df58(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return 0;
    }
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(uVar1);
    uVar2 = uVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(uVar2);
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c0f1e00(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(uVar1);
  return 1;
}



/* Entry: 107a1e09c; end: 107a1e0c7; -[SCStoryManagementSnapCarouselActionHandler .cxx_destruct] */

void FUN_107a1e09c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a1e0c8; end: 107a1e93b; -[SCStoryManagementSnapCarouselCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107a1e0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126f9530;
  puVar1 = &uStack_b0;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768128);
    *(undefined **)((long)puVar1 + (long)_DAT_112768128) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c160fc0(puVar2);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar25 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar26 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    lVar24 = (long)_DAT_11276812c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar5;
    _objc_release(uVar3);
    _objc_retain(puVar5);
    func_0x00010c17d4c0(puVar5);
    puVar6 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar6);
    func_0x00010befbb60(puVar2);
    puVar7 = PTR_PTR_1126b48f0;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768130);
    *(undefined **)((long)puVar1 + (long)_DAT_112768130) = puVar7;
    _objc_release(uVar3);
    _objc_retain(puVar7);
    func_0x00010befbb60(puVar5);
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    lVar23 = (long)_DAT_112768134;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar8;
    _objc_release(uVar3);
    _objc_retain(puVar8);
    func_0x00010c21ad00(puVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar8);
    _objc_release(puVar6);
    func_0x00010c1cfce0(puVar8);
    func_0x00010c1bdb00(puVar8);
    func_0x00010c219b60(puVar8);
    func_0x00010c213040(puVar8);
    func_0x00010befbb60(puVar5);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar3;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08e400(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c1408a0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar9);
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768138);
    *(undefined **)((long)puVar1 + (long)_DAT_112768138) = puVar6;
    _objc_release(uVar3);
    _objc_retain(puVar6);
    func_0x00010c182220(puVar6);
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar6);
    _objc_release(puVar17);
    puVar21 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar21;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar21);
    func_0x00010befbb60(puVar2);
    puVar18 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276813c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276813c) = puVar18;
    _objc_release(uVar3);
    _objc_retain(puVar18);
    func_0x00010c21ad00(puVar18);
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar18);
    _objc_release(puVar17);
    func_0x00010befbb60(puVar2);
    puVar19 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768140);
    *(undefined **)((long)puVar1 + (long)_DAT_112768140) = puVar19;
    _objc_release(uVar3);
    _objc_retain(puVar19);
    func_0x00010c182220(puVar19);
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar19);
    _objc_release(puVar17);
    puVar21 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar21;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar19);
    _objc_release(puVar17);
    _objc_release(puVar21);
    func_0x00010befbb60(puVar2);
    puVar20 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768144);
    *(undefined **)((long)puVar1 + (long)_DAT_112768144) = puVar20;
    _objc_release(uVar3);
    _objc_retain(puVar20);
    func_0x00010c21ad00(puVar20);
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar20);
    _objc_release(puVar17);
    func_0x00010befbb60(puVar2);
    puVar21 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768148);
    *(undefined **)((long)puVar1 + (long)_DAT_112768148) = puVar21;
    _objc_release(uVar3);
    _objc_retain(puVar21);
    func_0x00010c21ad00(puVar21);
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar21);
    _objc_release(puVar17);
    func_0x00010c212f20(puVar21);
    func_0x00010befbb60(puVar2);
    puVar17 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar25,uVar26,uVar27,uVar28);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276814c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276814c) = puVar17;
    _objc_release(uVar3);
    _objc_retain(puVar17);
    func_0x00010c21ad00(puVar17);
    puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar17);
    _objc_release(puVar22);
    func_0x00010befbb60(puVar2);
    param_7 = (undefined8 *)PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768150);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112768150) = param_7;
    _objc_release(uVar3);
    _objc_release(puVar17);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    func_0x00010bef9040(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112768154);
  *(undefined8 **)(puVar2 + _DAT_112768154) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  func_0x00010c1aa200(*(undefined8 *)(puVar2 + _DAT_112768130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return param_7;
}



/* Entry: 107a1e93c; end: 107a1e9a3; -[SCStoryManagementSnapCarouselCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1e93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112768154);
  *(undefined8 *)(param_1 + _DAT_112768154) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_112768130),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a1e9a4; end: 107a1ebd7; -[SCStoryManagementSnapCarouselCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1e9a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9530;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010c284340(param_1);
  lVar6 = (long)_DAT_112768128;
  if (*(long *)(param_1 + lVar6) == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_80);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
  }
  func_0x00010c219960(uVar1);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(lVar2);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar6));
  lVar6 = (long)_DAT_11276812c;
  func_0x00010c19f0e0(0,0,0x4055000000000000,0x4062800000000000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112768130));
  func_0x00010c23d620(*(undefined8 *)(param_1 + _DAT_112768134));
  lVar6 = (long)_DAT_11276813c;
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar5 = *(ulong *)(param_1 + lVar6);
  func_0x00010c074c20();
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112768138);
    func_0x00010c074c20();
    if ((uVar5 & 1) == 0) {
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar4);
    }
  }
  uVar5 = *(ulong *)(param_1 + _DAT_112768144);
  func_0x00010c074c20();
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112768140);
    func_0x00010c074c20();
    if ((uVar5 & 1) == 0) {
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar4);
    }
  }
  uVar5 = *(ulong *)(param_1 + _DAT_11276814c);
  func_0x00010c074c20();
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112768148);
    func_0x00010c074c20();
    if ((uVar5 & 1) == 0) {
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar4);
    }
  }
  func_0x00010be490a0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 107a1ebd8; end: 107a1ef77; -[SCStoryManagementSnapCarouselCell _layoutCountIconViews:countLabelViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1ebd8(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_98;
  
  puVar5 = &uStack_160;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_3;
  func_0x00010bf529e0();
  if ((puVar7 != (undefined1 *)0x0) ||
     (puVar7 = param_4, func_0x00010bf529e0(), puVar7 != (undefined1 *)0x0)) {
    puVar7 = param_4;
    func_0x00010bf529e0();
    if (puVar7 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
      do {
        puVar9 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d620(puVar9);
        func_0x00010c23d620(puVar1);
        _objc_release(puVar1);
        _objc_release(puVar9);
        puVar7 = puVar7 + 1;
        puVar9 = param_4;
        func_0x00010bf529e0();
      } while (puVar7 < puVar9);
    }
    dVar10 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(param_4);
    puVar7 = param_4;
    func_0x00010bf52a60();
    if (puVar7 == (undefined1 *)0x0) {
      dVar13 = 0.0;
    }
    else {
      lVar8 = *plStack_150;
      dVar13 = 0.0;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_150 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010bf20c00(*(undefined8 *)(lStack_158 + (long)puVar9 * 8));
          _CGRectGetWidth();
          dVar13 = dVar13 + dVar10;
          puVar9 = puVar9 + 1;
        } while (puVar7 != puVar9);
        puVar7 = param_4;
        puVar5 = &uStack_160;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11276813c));
    _CGRectGetHeight();
    puVar7 = param_3;
    func_0x00010bf529e0();
    puVar1 = param_3;
    func_0x00010bf529e0();
    puVar2 = param_4;
    func_0x00010bf529e0();
    puVar6 = param_4;
    func_0x00010bf529e0();
    puVar9 = (undefined1 *)puVar5;
    if (puVar6 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      dVar13 = 84.0 - (dVar13 + (double)puVar1 + (double)puVar1 + (double)puVar7 * 15.0 +
                      (double)(puVar2 + -1) * 6.0);
      dVar14 = dVar13 * 0.5;
      do {
        puVar7 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_4;
        puVar9 = puVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
        puVar2 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar3);
        uVar12 = 0x402e000000000000;
        uVar4 = 0x4063900000000000;
        if (((ulong)puVar2 & 1) == 0) {
          puVar3 = PTR_PTR_1126aea58;
          _objc_opt_class(PTR_PTR_1126aea58);
          puVar2 = puVar7;
          _objc_opt_isKindOfClass(puVar7,puVar3);
          uVar12 = 0x4031000000000000;
          dVar11 = dVar13;
          uVar4 = 0x4063700000000000;
          if (((ulong)puVar2 & 1) != 0) goto LAB_107a1ee90;
        }
        else {
LAB_107a1ee90:
          func_0x00010b816528(dVar14,uVar4,uVar12,uVar12);
          func_0x00010c19f0e0(puVar7);
          dVar11 = dVar14;
        }
        func_0x00010bfb68e0(puVar7);
        _CGRectGetMaxX();
        dVar13 = dVar11 + 2.0;
        func_0x00010bf20c00(puVar1);
        _CGRectGetWidth();
        dVar14 = dVar11;
        func_0x00010bf20c00(puVar1);
        _CGRectGetHeight();
        func_0x00010b816528(dVar13,(32.0 - dVar10) * 0.5 + 148.0,dVar11,dVar14);
        func_0x00010c19f0e0(puVar1);
        func_0x00010bfb68e0(puVar1);
        _CGRectGetMaxX();
        dVar14 = dVar13 + 6.0;
        _objc_release(puVar1);
        _objc_release(puVar7);
        puVar6 = puVar6 + 1;
        puVar7 = param_4;
        func_0x00010bf529e0();
      } while (puVar6 < puVar7);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  lVar8 = (long)_DAT_112768158;
  puVar7 = *(undefined1 **)(param_3 + lVar8);
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  if (puVar7 == puVar9) {
    _objc_release(puVar9);
    _objc_release(puVar7);
  }
  else {
    if (puVar9 == (undefined1 *)0x0) {
      _objc_release(puVar7);
    }
    else {
      puVar1 = puVar7;
      func_0x00010c071ae0();
      _objc_release(puVar9);
      _objc_release(puVar7);
      if (((ulong)puVar1 & 1) != 0) goto LAB_107a1f2f4;
    }
    _objc_retain(puVar9);
    uVar4 = *(undefined8 *)(param_3 + lVar8);
    *(undefined1 **)(param_3 + lVar8) = puVar9;
    _objc_release(uVar4);
    puVar7 = puVar9;
    func_0x00010c26d760(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200(*(undefined8 *)(param_3 + _DAT_112768130));
    _objc_release(puVar7);
    puVar7 = puVar9;
    func_0x00010c270c20(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_3 + _DAT_112768134));
    _objc_release(puVar7);
    puVar7 = puVar9;
    func_0x00010c26d8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined1 *)0x0) {
      puVar5 = (undefined8 *)(param_3 + _DAT_11276812c);
      uVar4 = 0;
    }
    else {
      puVar7 = puVar9;
      func_0x00010c26d8c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar5 = (undefined8 *)(param_3 + _DAT_11276812c);
      uVar4 = *puVar5;
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar4);
      _objc_release(puVar7);
      uVar4 = 0x4008000000000000;
    }
    uVar12 = *puVar5;
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar4);
    _objc_release(uVar12);
    puVar7 = puVar9;
    func_0x00010c29c600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_112768138));
      uVar4 = *(undefined8 *)(param_3 + _DAT_11276813c);
    }
    else {
      puVar7 = puVar9;
      func_0x00010c29c600(puVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11276813c;
      func_0x00010c212f20(*(undefined8 *)(param_3 + lVar8));
      _objc_release(puVar7);
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_112768138));
      uVar4 = *(undefined8 *)(param_3 + lVar8);
    }
    func_0x00010c1a7f60(uVar4);
    puVar7 = puVar9;
    func_0x00010c151920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_112768140));
      uVar4 = *(undefined8 *)(param_3 + _DAT_112768144);
    }
    else {
      puVar7 = puVar9;
      func_0x00010c151920(puVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_112768144;
      func_0x00010c212f20(*(undefined8 *)(param_3 + lVar8));
      _objc_release(puVar7);
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_112768140));
      uVar4 = *(undefined8 *)(param_3 + lVar8);
    }
    func_0x00010c1a7f60(uVar4);
    puVar7 = puVar9;
    func_0x00010c140620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_112768148));
      uVar4 = *(undefined8 *)(param_3 + _DAT_11276814c);
    }
    else {
      puVar7 = puVar9;
      func_0x00010c140620(puVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11276814c;
      func_0x00010c212f20(*(undefined8 *)(param_3 + lVar8));
      _objc_release(puVar7);
      func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_112768148));
      uVar4 = *(undefined8 *)(param_3 + lVar8);
    }
    func_0x00010c1a7f60(uVar4);
    func_0x00010c1cbe20(param_3);
  }
LAB_107a1f2f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107a1ef78; end: 107a1f30f; -[SCStoryManagementSnapCarouselCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1ef78(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112768158;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_107a1f2f4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    uVar4 = param_3;
    func_0x00010c26d760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200(*(undefined8 *)(param_1 + _DAT_112768130),param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c270c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112768134),param_2,uVar4);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c26d8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      puVar6 = (undefined8 *)(param_1 + _DAT_11276812c);
      uVar2 = 0;
    }
    else {
      uVar4 = param_3;
      func_0x00010c26d8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = (undefined8 *)(param_1 + _DAT_11276812c);
      uVar2 = *puVar6;
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar2);
      _objc_release(uVar4);
      uVar2 = 0x4008000000000000;
    }
    uVar3 = *puVar6;
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar2);
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010c29c600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768138),param_2,1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276813c);
    }
    else {
      uVar1 = param_3;
      func_0x00010c29c600(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11276813c;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,uVar1);
      _objc_release(uVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768138),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
    }
    func_0x00010c1a7f60(uVar2,param_2,uVar4 == 0);
    uVar4 = param_3;
    func_0x00010c151920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768140),param_2,1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112768144);
    }
    else {
      uVar1 = param_3;
      func_0x00010c151920(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112768144;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,uVar1);
      _objc_release(uVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768140),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
    }
    func_0x00010c1a7f60(uVar2,param_2,uVar4 == 0);
    uVar4 = param_3;
    func_0x00010c140620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768148),param_2,1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276814c);
    }
    else {
      uVar1 = param_3;
      func_0x00010c140620(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11276814c;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,uVar1);
      _objc_release(uVar1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112768148),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
    }
    func_0x00010c1a7f60(uVar2,param_2,uVar4 == 0);
    func_0x00010c1cbe20(param_1);
  }
LAB_107a1f2f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a1f310; end: 107a1f3df; -[SCStoryManagementSnapCarouselCell _onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1f310(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d5ee0;
  uVar4 = *(ulong *)(param_1 + _DAT_112768158);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112768160);
  uVar3 = uVar1;
  if (42.0 <= *(double *)(param_1 + _DAT_11276815c)) {
    func_0x00010c0ee600(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfeb560();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107a1f3e0; end: 107a1f51b; -[SCStoryManagementSnapCarouselCell updateCellBasedOnHorizontalOffsetFromCenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1f3e0(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010be36360();
  if (*(double *)(param_2 + _DAT_11276815c) != param_1) {
    *(double *)(param_2 + _DAT_11276815c) = param_1;
    dVar8 = (double)NEON_fminnm(param_1 / 42.0,0x3ff0000000000000);
    dVar7 = (1.0 - dVar8) + dVar8 * 0.800000011920929;
    _CGAffineTransformMakeScale(&uStack_90,dVar7,dVar7);
    lVar4 = (long)_DAT_112768128;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar4),param_3,&uStack_c0);
    func_0x00010c1677c0((1.0 - dVar8) + dVar8 * 0.6000000238418579,*(undefined8 *)(param_2 + lVar4))
    ;
    lVar5 = (long)_DAT_112768148;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
    func_0x00010c074c20();
    lVar6 = (long)_DAT_11276814c;
    lVar4 = *(long *)(param_2 + lVar6);
    func_0x00010c26b700(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar5),param_3,dVar8 == 1.0 || lVar4 == 0);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c074c20(uVar3);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar6),param_3,uVar3);
    iVar2 = (int)*(undefined8 *)(param_2 + lVar5);
    func_0x00010c074c20();
    if (iVar1 != iVar2) {
      func_0x00010c1cbe20(param_2);
    }
  }
  return;
}



/* Entry: 107a1f51c; end: 107a1f5df; -[SCStoryManagementSnapCarouselCell _horizontalOffsetFromCenter] */

double FUN_107a1f51c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = param_5;
  func_0x0001008cd514();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_5);
  func_0x00010bf51460(uVar2,param_6,uVar1);
  _objc_release(uVar2);
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  func_0x00010bfb68e0(uVar1);
  _CGRectGetMidX();
  param_1 = param_1 - dVar3;
  dVar3 = -param_1;
  if (0.0 <= param_1) {
    dVar3 = param_1;
  }
  _objc_release(uVar1);
  return dVar3;
}



/* Entry: 107a1f5e0; end: 107a1f5ef; -[SCStoryManagementSnapCarouselCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1f5e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768158);
}



/* Entry: 107a1f5f0; end: 107a1f5ff; -[SCStoryManagementSnapCarouselCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1f5f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768160);
}



/* Entry: 107a1f600; end: 107a1f63f; -[SCStoryManagementSnapCarouselCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1f600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768160;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a1f640; end: 107a1f64f; -[SCStoryManagementSnapCarouselCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a1f640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768154);
}



/* Entry: 107a1f650; end: 107a1f74f; -[SCStoryManagementSnapCarouselCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a1f650(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768154,0);
  _objc_storeStrong(param_1 + _DAT_112768160,0);
  _objc_storeStrong(param_1 + _DAT_112768158,0);
  _objc_storeStrong(param_1 + _DAT_112768150,0);
  _objc_storeStrong(param_1 + _DAT_11276814c,0);
  _objc_storeStrong(param_1 + _DAT_112768148,0);
  _objc_storeStrong(param_1 + _DAT_112768144,0);
  _objc_storeStrong(param_1 + _DAT_112768140,0);
  _objc_storeStrong(param_1 + _DAT_11276813c,0);
  _objc_storeStrong(param_1 + _DAT_112768138,0);
  _objc_storeStrong(param_1 + _DAT_112768134,0);
  _objc_storeStrong(param_1 + _DAT_112768130,0);
  _objc_storeStrong(param_1 + _DAT_11276812c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768128,0);
  return;
}



/* Entry: 107a1f750; end: 107a1fbef; -[SCStoryManagementSnapCarouselSectionController initWithCollectionView:dataSource:actionHandler:imageDownloader:collectionViewDelegate:delegate:] */

undefined8 *
FUN_107a1f750(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined **param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_88 = PTR_PTR_1126f9538;
  puVar1 = &uStack_90;
  puVar3 = PTR_s_init_1125d9248;
  uStack_90 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar9 = param_10;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_6);
    _objc_retain();
    func_0x00010c189840(param_6);
    _objc_release(param_6);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c18b5e0();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar3);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    dVar11 = (param_3 + -84.0) * 0.5;
    func_0x00010c181f80(0,dVar11,0,dVar11);
    _objc_release(puVar2);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    _objc_opt_class(PTR_PTR_1126d5ee8);
    func_0x00010c126000(puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010bf408e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar1 + 1;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c08cdc0();
    _objc_release(puVar2);
    _objc_retain(param_7);
    puVar10 = puVar1 + 2;
    uVar5 = *puVar10;
    *puVar10 = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 5,param_10);
    _objc_storeWeak(puVar1 + 6,param_11);
    uVar5 = puVar1[7];
    puVar1[7] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    puVar2 = puVar1 + 8;
    uVar5 = *puVar2;
    *puVar2 = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    puVar4 = puVar1 + 9;
    uVar5 = *puVar4;
    *puVar4 = puVar3;
    _objc_release(uVar5);
    uVar5 = *puVar2;
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4a0(*puVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d5ee0;
    _objc_alloc();
    func_0x00010c051d60();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6a480(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_initWeak(auStack_98,puVar1);
    uVar7 = *puVar10;
    func_0x00010c23fce0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107a1fbf0;
    puStack_a8 = &UNK_110842c58;
    ppuVar9 = &puStack_c0;
    puVar3 = auStack_98;
    _objc_copyWeak(auStack_a0,puVar3);
    uVar8 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 4);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_6);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)(param_6 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010be6b7c0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 107a1fbf0; end: 107a1fc37;  */

void FUN_107a1fbf0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b7c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a1fc38; end: 107a1fd0f; -[SCStoryManagementSnapCarouselSectionController _onSnapDataModels:] */

void FUN_107a1fc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1109f54a0);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a20190;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107a1fd10; end: 107a2018f;  */

void FUN_107a1fd10(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x000107d23718();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = lVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x000107d23490();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b4860;
  func_0x00010c258dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c105980();
  puVar10 = (undefined *)0x0;
  if ((lVar1 + 7U < 7) && ((1L << (lVar1 + 7U & 0x3f) & 0x45U) != 0)) {
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfb5a00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c105980();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 - 1U < 2) {
    func_0x00010c29c5c0(param_2);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c22d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar12);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  lVar1 = param_2;
  func_0x00010c105980();
  if ((lVar1 - 1U < 2) &&
     (lVar1 = param_2, func_0x00010c1518c0(), puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570,
     puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0, lVar1 != 0)) {
    func_0x00010c1518c0(param_2);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010c22d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar13);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  lVar1 = param_2;
  func_0x00010c105980();
  if ((lVar1 - 1U < 2) &&
     (lVar1 = param_2, func_0x00010c140600(), puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570,
     puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0, lVar1 != 0)) {
    func_0x00010c140600(param_2);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c22d980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar8 = PTR_PTR_1126b02a8;
  _objc_alloc();
  lVar1 = param_2;
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126d5ee0;
  _objc_alloc(PTR_PTR_1126d5ee0);
  func_0x00010c051d60();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107a20190; end: 107a201c7;  */

void FUN_107a20190(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a201c8; end: 107a2069b; -[SCStoryManagementSnapCarouselSectionController _onNewViewModels:announceUpdate:] */

void FUN_107a201c8(long param_1,undefined8 param_2,undefined **param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined1 auStack_1f8 [8];
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar3 = *(undefined ***)(param_1 + 0x38);
  func_0x00010bf51e00();
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x38) = param_3;
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar8 = ppuVar3;
  func_0x00010b813c80(ppuVar3,param_3,&PTR___NSConcreteGlobalBlock_110d622f0);
  _objc_release(&PTR___NSConcreteGlobalBlock_110d622f0);
  ppuVar9 = ppuVar8;
  func_0x00010c066900(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107a2069c;
  puStack_118 = &UNK_110866258;
  _objc_retain(puVar5);
  puStack_110 = puVar5;
  func_0x00010bf97bc0(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar9 = ppuVar8;
  func_0x00010bf6c000();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x107a206e8;
  puStack_140 = &UNK_110866258;
  _objc_retain(puVar6);
  puStack_138 = puVar6;
  func_0x00010bf97bc0(ppuVar9);
  _objc_release(ppuVar9);
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined8 *)0x0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  ppuVar10 = ppuVar8;
  func_0x00010c286820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010bf52a60();
  ppuVar9 = param_3;
  ppuVar15 = ppuVar3;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar15 = (undefined **)*puStack_190;
    do {
      ppuVar16 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_190 != ppuVar15) {
          _objc_enumerationMutation(ppuVar10);
        }
        puVar12 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        uVar4 = *(undefined8 *)(lStack_198 + (long)ppuVar16 * 8);
        func_0x00010c0e1e60(uVar4);
        func_0x00010bfed020(puVar12);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = (undefined **)(param_1 + 8);
        _objc_loadWeakRetained();
        ppuVar13 = ppuVar9;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        if (ppuVar13 == (undefined **)0x0) {
LAB_107a20480:
          func_0x00010befa120(puVar7);
        }
        else {
          func_0x00010c0d8ae0(uVar4);
          ppuVar14 = param_3;
          func_0x00010c0dfd40(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_DAT_1126a4fe8;
          _objc_retain(ppuVar13);
          ppuVar9 = ppuVar13;
          func_0x00010010fab4(ppuVar13,puVar2);
          ppuVar1 = ppuVar13;
          if ((int)ppuVar9 == 0) {
            ppuVar1 = (undefined **)0x0;
          }
          _objc_retain(ppuVar1);
          _objc_release(ppuVar13);
          if ((int)ppuVar9 == 0) {
            _objc_release(ppuVar14);
            goto LAB_107a20480;
          }
          func_0x00010c2226c0(ppuVar13);
          _objc_release(ppuVar13);
          _objc_release(ppuVar14);
        }
        _objc_release(ppuVar13);
        _objc_release(puVar12);
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar11 != ppuVar16);
      ppuVar11 = ppuVar10;
      func_0x00010bf52a60();
    } while (ppuVar11 != (undefined **)0x0);
  }
  _objc_release(ppuVar10);
  puVar12 = puVar7;
  func_0x00010bf529e0();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = puVar6;
    func_0x00010bf529e0();
    if (puVar12 == (undefined *)0x0) {
      puVar12 = puVar5;
      func_0x00010bf529e0();
      if (puVar12 == (undefined *)0x0) goto LAB_107a205f0;
    }
  }
  _objc_initWeak(auStack_1a8,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x107a20734;
  puStack_1d0 = &UNK_110850cf8;
  ppuVar9 = &puStack_1e8;
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  _objc_retain(puVar5);
  puStack_1c8 = puVar5;
  _objc_retain(puVar6);
  puStack_1c0 = puVar6;
  _objc_retain(puVar7);
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  uStack_208 = 0x107a2076c;
  puStack_200 = &UNK_110847580;
  ppuVar15 = &puStack_218;
  uStack_1f0 = param_4;
  puStack_1b8 = puVar7;
  _objc_copyWeak(auStack_1f8,auStack_1a8);
  func_0x00010c0f8420(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1c8);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
LAB_107a205f0:
  _objc_release(puStack_138);
  _objc_release(puStack_110);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar15 + 4);
  _objc_destroyWeak(ppuVar9 + 7);
  _objc_destroyWeak(auStack_1a8);
  __Unwind_Resume();
  puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(param_3[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107a2069c; end: 107a207a7;  */

void FUN_107a2069c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a207a8; end: 107a20883; -[SCStoryManagementSnapCarouselSectionController _handleCollectionViewUpdateWithInsertIndexPaths:deleteIndexPaths:reloadIndexPaths:] */

void FUN_107a207a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c066a40();
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6c100();
    _objc_release(lVar1);
  }
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c128de0();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a20884; end: 107a208af; -[SCStoryManagementSnapCarouselSectionController _onBatchUpdatesComplete] */

void FUN_107a20884(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c23f780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a208b0; end: 107a208b7; -[SCStoryManagementSnapCarouselSectionController collectionView:numberOfItemsInSection:] */

void FUN_107a208b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107a208b8; end: 107a2099f; -[SCStoryManagementSnapCarouselSectionController collectionView:cellForItemAtIndexPath:] */

void FUN_107a208b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea9d58,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010c0840e0();
  uVar3 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (uVar2 < uVar3) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010c0dfd40(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107a209a0; end: 107a20a2f; -[SCStoryManagementSnapCarouselSectionController scrollViewDidScroll:] */

void FUN_107a209a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  FUN_107a20a30();
  _objc_release(lVar1);
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152b20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a20a30; end: 107a20b1f;  */

void FUN_107a20a30(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c284340(*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107a20b20; end: 107a20b97; -[SCStoryManagementSnapCarouselSectionController scrollViewWillBeginDragging:] */

void FUN_107a20b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a20b98; end: 107a20c37; -[SCStoryManagementSnapCarouselSectionController scrollViewDidEndDragging:willDecelerate:] */

void FUN_107a20b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  FUN_107a20a30();
  _objc_release(lVar1);
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152aa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a20c38; end: 107a20cc7; -[SCStoryManagementSnapCarouselSectionController scrollViewDidEndDecelerating:] */

void FUN_107a20c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  FUN_107a20a30();
  _objc_release(lVar1);
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152a80();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a20cc8; end: 107a20d3f; -[SCStoryManagementSnapCarouselSectionController scrollViewDidEndScrollingAnimation:] */

void FUN_107a20cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c152ae0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a20d40; end: 107a20d9f; -[SCStoryManagementSnapCarouselSectionController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_107a20d40(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126d5ee8;
  _objc_opt_class(PTR_PTR_1126d5ee8);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c284340(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 107a20da0; end: 107a20dff; -[SCStoryManagementSnapCarouselSectionController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_107a20da0(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126d5ee8;
  _objc_opt_class(PTR_PTR_1126d5ee8);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c284340(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 107a20e00; end: 107a20e13; -[SCStoryManagementSnapCarouselSectionController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16] FUN_107a20e00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4066800000000000;
  auVar1._0_8_ = 0x4055000000000000;
  return auVar1;
}



/* Entry: 107a20e14; end: 107a20e1b; -[SCStoryManagementSnapCarouselSectionController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_107a20e14(void)

{
  return 0;
}



/* Entry: 107a20e1c; end: 107a20e23; -[SCStoryManagementSnapCarouselSectionController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_107a20e1c(void)

{
  return 0;
}



/* Entry: 107a20e24; end: 107a20ea7; -[SCStoryManagementSnapCarouselSectionController .cxx_destruct] */

void FUN_107a20e24(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a20ea8; end: 107a2103f; -[SCStoryManagementSnapViewersActionHandler initWithPresentingViewController:userPreferences:storyManagementView:friendProfileScopeExposer:webBrowsingScopeExposer:storiesConfigProvider:pageLauncher:optInDataProvider:] */

undefined1 *
FUN_107a20ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f9540;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
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
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a21040; end: 107a213af; -[SCStoryManagementSnapViewersActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107a21040(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar5 = 0;
          goto LAB_107a21254;
        }
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010be7a4e0(param_1);
      }
      else {
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010be97080(param_1);
      }
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_58,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(uVar2);
      _objc_retain(param_5);
      func_0x00010bfef0c0(uVar5);
      _objc_release(uVar5);
      _objc_release(param_5);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(uVar2);
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15c8;
    _objc_opt_class(PTR_PTR_1126b15c8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010be7b7a0(param_1);
  }
  _objc_release(uVar1);
  uVar5 = 1;
LAB_107a21254:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107a213b0; end: 107a21473;  */

void FUN_107a213b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a21474;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a21474; end: 107a214a7;  */

void FUN_107a21474(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be74700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a214a8; end: 107a2159b; -[SCStoryManagementSnapViewersActionHandler _presentFriendProfileForSnapchatter:] */

void FUN_107a214a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x00010c0159e0();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107a2159c; end: 107a215e3; -[SCStoryManagementSnapViewersActionHandler friendProfileDidDismiss:] */

void FUN_107a2159c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a215e4; end: 107a217b3; -[SCStoryManagementSnapViewersActionHandler _playFriendStoryWithId:fromSourceView:] */

void FUN_107a215e4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1b6e00();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b4d28;
  _objc_alloc(PTR_PTR_1126b4d28);
  func_0x00010c04dcc0();
  puVar3 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0(puVar3,param_3,7,0x3a,(long)(param_1 * 1000.0),0x43,puVar2,param_4,0,0);
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar5 = *(ulong *)(param_2 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c082ae0();
  func_0x00010bff7200(puVar4,param_3,param_5,lVar1,uVar6 & 0xffffffff,param_2,0,0,0,0);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126cb980;
  _objc_alloc(PTR_PTR_1126cb980);
  func_0x00010bff6ca0();
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107a217b4; end: 107a2187b; -[SCStoryManagementSnapViewersActionHandler _retryStoryPostWithClientId:] */

void FUN_107a217b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  ppuVar7 = &PTR____CFConstantStringClassReference_110ea9f58;
  _objc_retain(param_3);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar6);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  ppuVar2 = ppuVar7;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1 + 8;
    _objc_loadWeakRetained(puVar4);
    func_0x000108065c5c(puVar3,puVar4,1,*(undefined8 *)(puVar1 + 0x20),puVar1,0x13,0);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 107a2187c; end: 107a21913; -[SCStoryManagementSnapViewersActionHandler _presentBrowserForAttachmentUrl:] */

void FUN_107a2187c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x000108065c5c(puVar2,lVar1,1,*(undefined8 *)(param_1 + 0x20),param_1,0x13,0);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a21914; end: 107a2195b; -[SCStoryManagementSnapViewersActionHandler webBrowserDidDismiss:] */

void FUN_107a21914(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107a2195c; end: 107a2198b; -[SCStoryManagementSnapViewersActionHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_107a2195c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1b6e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a2198c; end: 107a2198f; -[SCStoryManagementSnapViewersActionHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_107a2198c(void)

{
  return;
}



/* Entry: 107a21990; end: 107a21993; -[SCStoryManagementSnapViewersActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_107a21990(void)

{
  return;
}


