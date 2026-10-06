/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104efc004; end: 104efc007; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerRefetchLatestFeaturedStories] */

void FUN_104efc004(void)

{
  return;
}



/* Entry: 104efc008; end: 104efc00b; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerResetAllFeaturedStoriesViewProgress] */

void FUN_104efc008(void)

{
  return;
}



/* Entry: 104efc00c; end: 104efc00f; -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerInspectOriginalSnapsWithSnap:] */

void FUN_104efc00c(void)

{
  return;
}



/* Entry: 104efc010; end: 104efc017; -[SCMemoriesStoryEditorActionHandler operaPresenter] */

undefined8 FUN_104efc010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104efc018; end: 104efc02f; -[SCMemoriesStoryEditorActionHandler presentingViewController] */

void FUN_104efc018(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104efc030; end: 104efc03b; -[SCMemoriesStoryEditorActionHandler setPresentingViewController:] */

void FUN_104efc030(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 104efc03c; end: 104efc13b; -[SCMemoriesStoryEditorActionHandler .cxx_destruct] */

void FUN_104efc03c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104efc13c; end: 104efc1af; -[SCGrapheneMemoriesResurfaceMetric2 init] */

undefined1 * FUN_104efc13c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4ec8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104efc1b0; end: 104efc217; +[SCMemResurfaceSelectionMediaConfiguration descriptor] */

void FUN_104efc1b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a07548,
                        &PTR____CFConstantStringClassReference_110dba7b8,
                        &PTR_s_snapchat_memories_1130bb468,&PTR_s_selectionSizeToConfig_1130bb480,1,
                        0x10,0x1c);
    puRam00000001136b9148 = puVar1;
  }
  return;
}



/* Entry: 104efc218; end: 104efc29b; +[SCMemResurfaceSelectionMediaConfiguration_Config descriptor] */

undefined * FUN_104efc218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a07570,
                        &PTR____CFConstantStringClassReference_110dba7d8,
                        &PTR_s_snapchat_memories_1130bb468,&PTR_s_lensIdsArray_1130bb4a0,3,0x20,0x1c
                       );
    func_0x00010c228780();
    puRam00000001136b9150 = puVar1;
  }
  return puRam00000001136b9150;
}



/* Entry: 104efc29c; end: 104efc2a3; -[SCMemoriesComposerFeatureProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_104efc29c(void)

{
  return 0;
}



/* Entry: 104efc2a4; end: 104efc2af; -[SCMemoriesComposerFeatureProvider pushToValdiMarshaller:] */

undefined8 FUN_104efc2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1d8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010afa1d08();
  return param_3;
}



/* Entry: 104efc2b0; end: 104efc38f; -[SCMemoriesComposerFeatureProvider initWithMemoriesLocationDataProvider:memoriesOperaLauncher:presentingViewContoller:] */

undefined1 *
FUN_104efc2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4ed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104efc390; end: 104efc3ff; -[SCMemoriesComposerFeatureProvider getNearbySnapIdsWithMinLatitude:maxLatitude:minLongitude:maxLongitude:] */

void FUN_104efc390(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa81a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104efc400; end: 104efc49b;  */

void FUN_104efc400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  _objc_opt_new();
  _objc_retain();
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104efc49c; end: 104efc5bf;  */

void FUN_104efc49c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09ed60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c8ba0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104efc5c0; end: 104efc5c3;  */

void FUN_104efc5c0(void)

{
  return;
}



/* Entry: 104efc5c4; end: 104efc843; -[SCMemoriesComposerFeatureProvider getNearbySnapIdsWithRequestWithRequest:] */

void FUN_104efc5c4(double param_1,long param_2,undefined8 param_3,undefined *param_4)

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
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_4);
  func_0x00010c0c2b40(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  if (param_1 == 0.0) {
    puVar3 = PTR_PTR_1126b2240;
    _objc_alloc(PTR_PTR_1126b2240);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047fa0(puVar3,param_3,puVar9);
    func_0x00010c0860a0(puVar1,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar9 = *(undefined **)(param_2 + 8);
    puVar1 = param_4;
    func_0x00010bf20ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c264480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    puVar3 = param_4;
    dVar10 = param_1;
    func_0x00010bf20ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d6e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    puVar5 = param_4;
    dVar11 = dVar10;
    func_0x00010bf20ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c264480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    puVar7 = param_4;
    dVar12 = dVar11;
    func_0x00010bf20ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d6e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010bfa81a0(param_1,dVar10,dVar11,dVar12,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104efc844;
    puStack_90 = &UNK_11085a408;
    _objc_retain(param_4);
    puVar1 = puVar9;
    puStack_88 = param_4;
    func_0x00010c0b8600(puVar9,param_3,&puStack_a8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = puStack_88;
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104efc844; end: 104efc923;  */

void FUN_104efc844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_2);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_retain(puVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b2240;
  _objc_alloc(PTR_PTR_1126b2240);
  func_0x00010c047fa0();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104efc924; end: 104efca27;  */

void FUN_104efc924(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c0c2b40(*(undefined8 *)(param_2 + 0x20));
  uVar1 = param_3;
  func_0x00010c09ed60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if ((double)uVar2 <= param_1) {
    param_1 = (double)uVar2;
  }
  if (0.0 < param_1) {
    uVar4 = 0;
    do {
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      uVar1 = param_3;
      func_0x00010c09ed60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0c8ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar4 = uVar4 + 1;
    } while ((double)uVar4 < param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104efca28; end: 104efca2b;  */

void FUN_104efca28(void)

{
  return;
}



/* Entry: 104efca2c; end: 104efcbaf; -[SCMemoriesComposerFeatureProvider launchOperaPlayerWithOptions:] */

void FUN_104efca2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26e260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf6ab80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104efcbb0; end: 104efcc97;  */

void FUN_104efcbb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104efcc98;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104efcc98; end: 104efcd57;  */

void FUN_104efcc98(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c241420(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252020(*(undefined8 *)(param_2 + 0x20));
      func_0x00010c08ba40(uVar4,param_3,lVar2,uVar3,(long)param_1,0,*(undefined8 *)(param_2 + 0x28),
                          0,0,0);
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104efcd58; end: 104efcd9b; -[SCMemoriesComposerFeatureProvider .cxx_destruct] */

void FUN_104efcd58(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104efcd9c; end: 104efced3; -[SCMemoriesComposerServicesImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efcd9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2248;
  _objc_alloc(PTR_PTR_1126b2248);
  func_0x00010c02a680();
  puVar3 = auStack_48;
  _objc_loadWeakRetained();
  if (puVar3 == (undefined1 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(puVar3 + _DAT_112716a30);
  }
  _objc_retain(uVar4);
  func_0x00010bf9d660(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104efced4; end: 104efcf13;  */

void FUN_104efced4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0e9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104efcf14; end: 104efcfbf; -[SCMemoriesComposerServicesImplEntryPoint _featureProviderFactoryInitHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efcf14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_112716a28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0c8ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112716a2c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0c90a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b2250;
  _objc_alloc(PTR_PTR_1126b2250);
  func_0x00010c02a740();
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104efcfc0; end: 104efd007; -[SCMemoriesComposerServicesImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efcfc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112716a30,0);
  _objc_destroyWeak(param_1 + _DAT_112716a2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716a28);
  return;
}



/* Entry: 104efd008; end: 104efd0ab; -[SCMemoriesFeatureProviderFactory initWithMemoriesLocationDataProvider:memoriesOperaLauncher:] */

undefined1 *
FUN_104efd008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4ed8;
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



/* Entry: 104efd0ac; end: 104efd14b; -[SCMemoriesFeatureProviderFactory memoriesFeatureProviderWithPresentingViewController:] */

void FUN_104efd0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2258;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a760(puVar1,param_2,uVar2,uVar3,param_3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104efd14c; end: 104efd17b; -[SCMemoriesFeatureProviderFactory .cxx_destruct] */

void FUN_104efd14c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104efd17c; end: 104efd23b; -[SCMemoriesComposerThumbnailDownloadRequest initWithSnapId:targetSize:cropBox:opportunistic:] */

undefined1 *
FUN_104efd17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e4ee0;
  uStack_70 = param_7;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 104efd23c; end: 104efd243; -[SCMemoriesComposerThumbnailDownloadRequest snapId] */

undefined8 FUN_104efd23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104efd244; end: 104efd24b; -[SCMemoriesComposerThumbnailDownloadRequest targetSize] */

undefined1  [16] FUN_104efd244(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 104efd24c; end: 104efd257; -[SCMemoriesComposerThumbnailDownloadRequest cropBox] */

undefined8 FUN_104efd24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104efd258; end: 104efd25f; -[SCMemoriesComposerThumbnailDownloadRequest opportunistic] */

undefined1 FUN_104efd258(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104efd260; end: 104efd26b; -[SCMemoriesComposerThumbnailDownloadRequest .cxx_destruct] */

void FUN_104efd260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104efd26c; end: 104efd2d7; -[SCMemoriesComposerThumbnailDownloader supportedURLSchemes] */

void FUN_104efd26c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dba7f8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)pppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar1 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    if (puVar1 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar6 = param_1;
      _objc_release(puVar3);
      puVar3 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar7 = dVar6;
      _objc_release(puVar3);
      puVar3 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = dVar7;
      _objc_release(puVar3);
      puVar3 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar9 = dVar8;
      _objc_release(puVar3);
      dVar11 = *(double *)(PTR__CGRectZero_110347608 + 8);
      dVar10 = *(double *)PTR__CGRectZero_110347608;
      dVar12 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
      dVar13 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
      if ((0.0 < dVar7) && (0.0 < dVar8)) {
        puVar3 = (undefined1 *)pppuVar2;
        func_0x00010c0e00e0(pppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar11 = dVar9;
        _objc_release(puVar3);
        puVar3 = (undefined1 *)pppuVar2;
        func_0x00010c0e00e0(pppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(puVar3);
        dVar10 = dVar9;
        dVar12 = dVar7;
        dVar13 = dVar8;
      }
      puVar3 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(puVar3);
      _objc_alloc(PTR_PTR_1126b2260);
      func_0x00010c047e60(param_1,dVar6,dVar10,dVar11,dVar12,dVar13);
    }
    _objc_release(puVar1);
    _objc_release(pppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104efd2d8; end: 104efd52b; -[SCMemoriesComposerThumbnailDownloader requestPayloadWithURL:error:] */

void FUN_104efd2d8(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar5 = param_1;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar6 = dVar5;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar7 = dVar6;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar8 = dVar7;
    _objc_release(uVar2);
    dVar10 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar9 = *(double *)PTR__CGRectZero_110347608;
    dVar11 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar12 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    if ((0.0 < dVar6) && (0.0 < dVar7)) {
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar10 = dVar8;
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      dVar9 = dVar8;
      dVar11 = dVar6;
      dVar12 = dVar7;
    }
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b2260;
    _objc_alloc(PTR_PTR_1126b2260);
    func_0x00010c047e60(param_1,dVar5,dVar9,dVar10,dVar11,dVar12);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104efd52c; end: 104efd803; -[SCMemoriesComposerThumbnailDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_104efd52c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar9 = PTR_PTR_1126b2260;
  _objc_retain(param_3);
  _objc_opt_class(puVar9);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar9);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126af4b8;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26a0e0(param_3);
    func_0x00010c047e40();
    _objc_release(uVar2);
    func_0x00010bf5c660(param_3);
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    uStack_a8 = 0x2020000000;
    uStack_a0 = 0;
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x00010c1cafa0();
    func_0x00010c1e62c0(puVar4);
    func_0x00010c1c3080(puVar4);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ebca0(param_3);
    lVar6 = lVar5;
    func_0x00010c119aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    lVar8 = lVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
    puVar9 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(lVar8);
    _objc_release(param_6);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104efd804; end: 104efd8d7;  */

void FUN_104efd804(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_retain();
  iVar1 = (int)uVar2;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    _CGRectIsEmpty(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    if (iVar1 == 0) {
      uVar2 = param_2;
      func_0x00010c0b8600(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108543bc0(*(undefined8 *)(param_1 + 0x20),uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x000108543bc0(*(undefined8 *)(param_1 + 0x20),param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104efd8d8; end: 104efd97b;  */

void FUN_104efd8d8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2268;
  if (param_2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_2);
    func_0x00010bf5c680(uVar3,uVar4,uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    _objc_retain(puVar2);
    _objc_release(param_2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104efd97c; end: 104efd997;  */

void FUN_104efd97c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 104efd998; end: 104efdae3; +[SCMemoriesComposerThumbnailDownloader cropImage:toFractionRect:] */

void FUN_104efd998(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_7);
  puVar1 = param_7;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  puVar4 = param_7;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    _CGImageGetWidth();
    puVar3 = puVar1;
    _CGImageGetHeight();
    if ((puVar2 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
      dVar7 = (double)puVar3;
      dVar5 = (double)puVar2;
      param_1 = param_1 * dVar5;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      dVar6 = dVar5 - param_1;
      if (param_3 * dVar5 <= dVar5 - param_1) {
        dVar6 = param_3 * dVar5;
      }
      dVar5 = dVar7 - param_2 * dVar7;
      if (param_4 * dVar7 <= dVar5) {
        dVar5 = param_4 * dVar7;
      }
      if (((0.0 < dVar6) && (0.0 < dVar5)) &&
         (_CGImageCreateWithImageInRect(), puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68,
         puVar1 != (undefined *)0x0)) {
        func_0x00010c14e120(param_7);
        puVar3 = param_7;
        func_0x00010bfe8380(param_7);
        func_0x00010bfe9260(param_1,puVar2,param_6,puVar1,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(puVar1);
        if (puVar2 != (undefined *)0x0) {
          puVar4 = puVar2;
        }
        _objc_retain(puVar4);
        _objc_release(puVar2);
        goto LAB_104efdac0;
      }
    }
  }
  _objc_retain(param_7);
LAB_104efdac0:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104efdae4; end: 104efdaeb; -[SCMemoriesComposerThumbnailDownloader .cxx_destruct] */

void FUN_104efdae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104efdaec; end: 104efdb23; -[SCMemoriesComposerThumbnailDownloaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efdaec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112716a54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716a50);
  return;
}



/* Entry: 104efdb24; end: 104efdccb; -[SCMemoriesDirectorModeDraftEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efdb24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b2270;
  _objc_alloc(PTR_PTR_1126b2270);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112716a5c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010bfce360(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_104efdccc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018940(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  puVar5 = PTR_PTR_1126b2278;
  _objc_alloc(PTR_PTR_1126b2278);
  lVar6 = param_1;
  FUN_104efdccc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x000104efdcf0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018920(puVar5,param_2,puVar1,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x000104efdcf0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104efdccc; end: 104efdd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efdccc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112716a60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104efdd14; end: 104efdd57; -[SCMemoriesDirectorModeDraftEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efdd14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112716a60);
  _objc_destroyWeak(param_1 + _DAT_112716a5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716a58);
  return;
}



/* Entry: 104efdd58; end: 104efde47; -[SCMemoriesDirectorModeDraftProvidingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efdd58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112716a64;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104efde48;
  puStack_40 = &UNK_11085a4e8;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2288;
  _objc_alloc(PTR_PTR_1126b2288);
  func_0x00010c02a640();
  _objc_release(puVar2);
  _objc_release(lStack_38);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104efde48; end: 104efde77;  */

void FUN_104efde48(void)

{
  _objc_alloc(PTR_PTR_1126b2280);
  func_0x00010c02b1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104efde78; end: 104efde87; -[SCMemoriesDirectorModeDraftProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efde78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112716a64);
  return;
}



/* Entry: 104efde88; end: 104efdf2b; -[SCMemoriesDirectorModeDraftGridProvider initWithGridTabsService:currentPageTracker:] */

undefined1 *
FUN_104efde88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4ef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104efdf2c; end: 104efe007; -[SCMemoriesDirectorModeDraftGridProvider directorModeDraftGrid] */

void FUN_104efdf2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b2290;
    _objc_alloc_init(PTR_PTR_1126b2290);
    func_0x00010c1a81c0();
    func_0x00010c1a81a0(puVar1,param_2,1);
    func_0x00010c18e320(puVar1,param_2,1);
    func_0x00010c210120(puVar1,param_2,1);
    func_0x00010c202040(puVar1,param_2,0);
    puVar2 = PTR_PTR_1126b2298;
    _objc_alloc();
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c002940(puVar2,param_2,lVar4,puVar1,param_1,0xd,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104efe008; end: 104efe00b; -[SCMemoriesDirectorModeDraftGridProvider tabController:browseSelected:initialItemId:items:fromView:context:] */

void FUN_104efe008(void)

{
  return;
}



/* Entry: 104efe00c; end: 104efe00f; -[SCMemoriesDirectorModeDraftGridProvider tabController:browseSelected:initialItemId:items:fromView:context:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_104efe00c(void)

{
  return;
}



/* Entry: 104efe010; end: 104efe07b; -[SCMemoriesDirectorModeDraftGridProvider tabController:requestsSelectMode:isFromLongPress:] */

long FUN_104efe010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf7f2e0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104efe07c; end: 104efe083; -[SCMemoriesDirectorModeDraftGridProvider tabControllerRequestsNavigationToTab:] */

undefined8 FUN_104efe07c(void)

{
  return 0;
}



/* Entry: 104efe084; end: 104efe087; -[SCMemoriesDirectorModeDraftGridProvider tabControllerRequestsNavigationToTab:withAutoScrollItem:] */

void FUN_104efe084(void)

{
  return;
}



/* Entry: 104efe088; end: 104efe08b; -[SCMemoriesDirectorModeDraftGridProvider tabController:requestsAddToStorySelectModeForItem:] */

void FUN_104efe088(void)

{
  return;
}



/* Entry: 104efe08c; end: 104efe08f; -[SCMemoriesDirectorModeDraftGridProvider cameraRollTabControllerDidDisplayAlbumsPicker:] */

void FUN_104efe08c(void)

{
  return;
}



/* Entry: 104efe090; end: 104efe093; -[SCMemoriesDirectorModeDraftGridProvider cameraRollTabControllerDidDismissAlbumsPicker:] */

void FUN_104efe090(void)

{
  return;
}



/* Entry: 104efe094; end: 104efe097; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidChangeScrollContentOffsetWithTabController:contentOffset:] */

void FUN_104efe094(void)

{
  return;
}



/* Entry: 104efe098; end: 104efe09b; -[SCMemoriesDirectorModeDraftGridProvider tabController:didChangeDisplayedContent:] */

void FUN_104efe098(void)

{
  return;
}



/* Entry: 104efe09c; end: 104efe0c7; -[SCMemoriesDirectorModeDraftGridProvider tabController:didChangeSelected:forGalleryItem:] */

void FUN_104efe09c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104efe0c8; end: 104efe0f3; -[SCMemoriesDirectorModeDraftGridProvider tabController:didChangeSelected:forGallerySnapItem:] */

void FUN_104efe0c8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104efe0f4; end: 104efe11f; -[SCMemoriesDirectorModeDraftGridProvider tabController:didChangeSelected:forItems:snapItems:] */

void FUN_104efe0f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104efe120; end: 104efe123; -[SCMemoriesDirectorModeDraftGridProvider tabControllerWillBeginDragging:] */

void FUN_104efe120(void)

{
  return;
}



/* Entry: 104efe124; end: 104efe127; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidEndDragging:willDecelerate:] */

void FUN_104efe124(void)

{
  return;
}



/* Entry: 104efe128; end: 104efe12b; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidEndDecelerating:] */

void FUN_104efe128(void)

{
  return;
}



/* Entry: 104efe12c; end: 104efe12f; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidBeginEditing:] */

void FUN_104efe12c(void)

{
  return;
}



/* Entry: 104efe130; end: 104efe133; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidEndEditing:] */

void FUN_104efe130(void)

{
  return;
}



/* Entry: 104efe134; end: 104efe13b; -[SCMemoriesDirectorModeDraftGridProvider tabControllerTopInset:] */

undefined8 FUN_104efe134(void)

{
  return 0;
}



/* Entry: 104efe13c; end: 104efe143; -[SCMemoriesDirectorModeDraftGridProvider operaPresenterTopInset] */

undefined8 FUN_104efe13c(void)

{
  return 0;
}



/* Entry: 104efe144; end: 104efe14b; -[SCMemoriesDirectorModeDraftGridProvider tabControllerCollectionViewIsFullyVisible:] */

undefined8 FUN_104efe144(void)

{
  return 1;
}



/* Entry: 104efe14c; end: 104efe14f; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidPresentOpera:] */

void FUN_104efe14c(void)

{
  return;
}



/* Entry: 104efe150; end: 104efe153; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidDismissOpera:] */

void FUN_104efe150(void)

{
  return;
}



/* Entry: 104efe154; end: 104efe157; -[SCMemoriesDirectorModeDraftGridProvider tabController:didTapEditStory:isCreatingStoryFromSelection:] */

void FUN_104efe154(void)

{
  return;
}



/* Entry: 104efe158; end: 104efe15f; -[SCMemoriesDirectorModeDraftGridProvider displayedTabController] */

undefined8 FUN_104efe158(void)

{
  return 0;
}



/* Entry: 104efe160; end: 104efe163; -[SCMemoriesDirectorModeDraftGridProvider tabController:didTriggerCreateMashupForStory:] */

void FUN_104efe160(void)

{
  return;
}



/* Entry: 104efe164; end: 104efe167; -[SCMemoriesDirectorModeDraftGridProvider tabControllerDidFinishFirstDataLoad:] */

void FUN_104efe164(void)

{
  return;
}



/* Entry: 104efe168; end: 104efe17f; -[SCMemoriesDirectorModeDraftGridProvider containerViewController] */

void FUN_104efe168(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104efe180; end: 104efe18b; -[SCMemoriesDirectorModeDraftGridProvider setContainerViewController:] */

void FUN_104efe180(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104efe18c; end: 104efe1a3; -[SCMemoriesDirectorModeDraftGridProvider delegate] */

void FUN_104efe18c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104efe1a4; end: 104efe1af; -[SCMemoriesDirectorModeDraftGridProvider setDelegate:] */

void FUN_104efe1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104efe1b0; end: 104efe1fb; -[SCMemoriesDirectorModeDraftGridProvider .cxx_destruct] */

void FUN_104efe1b0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104efe1fc; end: 104efe32b; -[SCMemoriesDirectorModeDraftViewController initWithGridProvider:currentPageTracker:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104efe1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e4ef8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112716a7c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c181a60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_112716a80;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)((long)puVar1 + (long)_DAT_112716a84);
    _objc_storeWeak(puVar3,param_5);
    func_0x000108dfdadc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104efe32c; end: 104efe38b; -[SCMemoriesDirectorModeDraftViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efe32c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112716a84;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0c8820();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126e4ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104efe38c; end: 104efe82b; -[SCMemoriesDirectorModeDraftViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efe38c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126e4ef8;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar1);
  _objc_release(puVar2);
  lVar9 = (long)_DAT_112716a7c;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf7f2c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4d1a0(param_1);
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf7f2c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf7f2c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar3);
  _objc_release(uVar4);
  puStack_f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = *(long *)(param_1 + lVar9);
  func_0x00010bf7f2c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  lStack_c0 = lVar5;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  lStack_d0 = lVar5;
  lStack_90 = lVar5;
  func_0x00010bf7f2c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_f0 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uStack_108 = uVar3;
  uStack_88 = uVar3;
  func_0x00010bf7f2c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_120 = uVar6;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = uVar6;
  func_0x00010bf7f2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f8);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(lStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_b8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  lVar1 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104efe82c;
  puStack_158 = PTR_PTR_1126e4ef8;
  lStack_160 = lVar1;
  uStack_150 = uVar4;
  uStack_148 = uVar3;
  uStack_140 = uVar7;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_160,PTR_s_viewWillAppear__1126853f0);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112716a7c);
  func_0x00010bf7f2c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdf00();
  _objc_release(uVar3);
  func_0x00010b817710(lVar1);
  func_0x000108df58d4();
  return;
}



/* Entry: 104efe82c; end: 104efe8af; -[SCMemoriesDirectorModeDraftViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efe82c(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4ef8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112716a7c);
  func_0x00010bf7f2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdf00();
  _objc_release(uVar1);
  func_0x00010b817710(param_1);
  func_0x000108df58d4();
  return;
}



/* Entry: 104efe8b0; end: 104efe94b; -[SCMemoriesDirectorModeDraftViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efe8b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4ef8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112716a80);
    func_0x00010c0f2220(param_1);
    func_0x00010c24fc40(uVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 104efe94c; end: 104efe953; -[SCMemoriesDirectorModeDraftViewController pageViewName] */

undefined8 FUN_104efe94c(void)

{
  return 0x73;
}



/* Entry: 104efe954; end: 104efe987; -[SCMemoriesDirectorModeDraftViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_104efe954(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4ef8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_didSelectDismissalActionWithHead_1125bc3f8);
  return;
}



/* Entry: 104efe988; end: 104efea37; -[SCMemoriesDirectorModeDraftViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104efe988(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *(long *)(param_3 + _DAT_112716a7c);
  _objc_retain(param_5);
  func_0x00010bf7f2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_5);
  if (param_5 == lVar1) {
    func_0x00010bf4cdc0(lVar1);
    func_0x00010befda00(lVar1);
    bVar3 = param_2 + param_1 <= 0.0;
  }
  else {
    bVar3 = true;
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 104efea38; end: 104efeaa3; -[SCMemoriesDirectorModeDraftViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efea38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if (param_4 == 1) {
    param_1 = param_1 + _DAT_112716a84;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0c8820();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104efeaa4; end: 104efeaab; -[SCMemoriesDirectorModeDraftViewController directorModeDraftGrid:requestsSelectMode:isFromLongPress:] */

undefined8 FUN_104efeaa4(void)

{
  return 0;
}



/* Entry: 104efeaac; end: 104efeaaf; -[SCMemoriesDirectorModeDraftViewController directorModeDraftGridDidChangeSelectedGalleryItems] */

void FUN_104efeaac(void)

{
  return;
}



/* Entry: 104efeab0; end: 104efebb7; -[SCMemoriesDirectorModeDraftViewController _loadDirectorModeDraftsGrid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efeab0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0834c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c09c7a0(param_3);
    func_0x00010c2237c0(param_3);
    func_0x00010c1facc0(param_3);
    func_0x00010bf31fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(param_1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_3 + (long)_DAT_112716a84);
  _objc_storeStrong(param_3 + (long)_DAT_112716a80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + (long)_DAT_112716a7c,0);
  return;
}



/* Entry: 104efebb8; end: 104efec03; -[SCMemoriesDirectorModeDraftViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104efebb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112716a84);
  _objc_storeStrong(param_1 + _DAT_112716a80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112716a7c,0);
  return;
}


