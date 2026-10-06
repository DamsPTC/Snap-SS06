/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fee230; end: 104fee2df; -[SCAuraBirthInfoPageViewController _onClickHeaderDismiss] */

void FUN_104fee230(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104fee288;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104fee2e0; end: 104fee32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fee2e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127191b8);
  puVar1 = PTR_PTR_1126b3928;
  func_0x00010bf3c8c0(PTR_PTR_1126b3928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fee330; end: 104fee47f; -[SCAuraBirthInfoPageViewController _onClickCompleteButtonWithMyBirthInfoBase64:] */

void FUN_104fee330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104fee3b8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104fee480; end: 104fee51f; -[SCAuraBirthInfoPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fee480(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127191bc,0);
  _objc_storeStrong(param_1 + _DAT_1127191d0,0);
  _objc_storeStrong(param_1 + _DAT_1127191d4,0);
  _objc_storeStrong(param_1 + _DAT_1127191cc,0);
  _objc_storeStrong(param_1 + _DAT_1127191c4,0);
  _objc_storeStrong(param_1 + _DAT_1127191c8,0);
  _objc_storeStrong(param_1 + _DAT_1127191c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127191b8,0);
  return;
}



/* Entry: 104fee520; end: 104fee5af; -[SCAuraBirthInfoPlaceSearchPageViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fee520(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e58e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126b3930;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127191d8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127191d8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fee5b0; end: 104fee5bb; -[SCAuraBirthInfoPlaceSearchPageViewController defaultProjectNameV2] */

undefined ** FUN_104fee5b0(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 104fee5bc; end: 104fee5c7; -[SCAuraBirthInfoPlaceSearchPageViewController defaultSubProjectName] */

undefined ** FUN_104fee5bc(void)

{
  return &PTR____CFConstantStringClassReference_110dc1df8;
}



/* Entry: 104fee5c8; end: 104fee6bf; -[SCAuraBirthInfoPlaceSearchPageViewController onSubscreenReadyWithCompletion:] */

void FUN_104fee5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c2954c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2a1520(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fee6c0; end: 104fee727;  */

void FUN_104fee6c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = lVar1;
    func_0x00010c2954c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fee728; end: 104fee7bb; -[SCAuraBirthInfoPlaceSearchPageViewController getSubscreenScrollView] */

void FUN_104fee728(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a4ee0);
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fee7bc; end: 104fee827; -[SCAuraBirthInfoPlaceSearchPageViewController getSubscreenSearchBoxView] */

void FUN_104fee7bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2954c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fee828; end: 104fee83b; -[SCAuraBirthInfoPlaceSearchPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fee828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127191d8,0);
  return;
}



/* Entry: 104fee83c; end: 104fee847; -[SCFeatureSettingsService isAuraBirthInfoSettingsBase64Set] */

void FUN_104fee83c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc1e58);
  return;
}



/* Entry: 104fee848; end: 104fee853; -[SCFeatureSettingsService auraBirthInfoSettingsBase64ServerParam] */

undefined ** FUN_104fee848(void)

{
  return &PTR____CFConstantStringClassReference_110dc1e58;
}



/* Entry: 104fee854; end: 104fee863; -[SCFeatureSettingsService setAuraBirthInfoSettingsBase64:] */

void FUN_104fee854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110dc1e58,param_3);
  return;
}



/* Entry: 104fee864; end: 104fee88b; -[SCFeatureSettingsService aura_birth_info_settings_base64_client_value:] */

void FUN_104fee864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104fee88c; end: 104fee8b3; -[SCFeatureSettingsService aura_birth_info_settings_base64_server_value:] */

void FUN_104fee88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104fee8b4; end: 104fee8c3; -[SCFeatureSettingsService auraBirthInfoSettingsBase64] */

void FUN_104fee8b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110dc1e58,0);
  return;
}



/* Entry: 104fee8c4; end: 104fee8cf; -[SCFeatureSettingsService isDisplayedBirthInfoPageVersionAvailable] */

void FUN_104fee8c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc1e78);
  return;
}



/* Entry: 104fee8d0; end: 104fee8db; -[SCFeatureSettingsService displayedBirthInfoPageVersionServerParam] */

undefined ** FUN_104fee8d0(void)

{
  return &PTR____CFConstantStringClassReference_110dc1e78;
}



/* Entry: 104fee8dc; end: 104fee8eb; -[SCFeatureSettingsService setDisplayedBirthInfoPageVersion:] */

void FUN_104fee8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dc1e78,param_3);
  return;
}



/* Entry: 104fee8ec; end: 104fee8f3; -[SCFeatureSettingsService aura_displayed_birth_info_page_version_client_value:] */

void FUN_104fee8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104fee8f4; end: 104fee8fb; -[SCFeatureSettingsService aura_displayed_birth_info_page_version_server_value:] */

void FUN_104fee8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104fee8fc; end: 104fee90b; -[SCFeatureSettingsService displayedBirthInfoPageVersion] */

void FUN_104fee8fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dc1e78,0);
  return;
}



/* Entry: 104fee90c; end: 104feec3b; -[SCAuraDataManager initWithUserSession:auraServiceClient:docObjectContext:auraBirthInfoDataManager:displayNameProvider:usernameProvider:snapchattersDataFetcher:clock:] */

undefined8 *
FUN_104fee90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126e58f0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    uVar5 = puVar1[2];
    _objc_retain(uVar5);
    uVar2 = puVar1[9];
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3938;
    _objc_alloc();
    _objc_retain(uVar5);
    _objc_retain(uVar2);
    func_0x00010c0213e0(0x4008000000000000);
    uVar4 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b3938;
    _objc_alloc();
    _objc_retain(uVar2);
    _objc_retain(uVar5);
    func_0x00010c0213e0(0x4008000000000000);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar5);
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



/* Entry: 104feec3c; end: 104feed1f;  */

void FUN_104feec3c(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b3940;
  _objc_opt_class(PTR_PTR_1126b3940);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c2661c0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104feed20; end: 104feed33;  */

void FUN_104feed20(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104feed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104feed34; end: 104feee17;  */

void FUN_104feed34(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b3948;
  _objc_opt_class(PTR_PTR_1126b3948);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c265f40(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104feee18; end: 104feee2b;  */

void FUN_104feee18(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104feee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104feee2c; end: 104feef5b; -[SCAuraDataManager updateMyAuraDataWithCompletionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_104feee2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104feef5c; end: 104feef93;  */

void FUN_104feef5c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104feef94; end: 104fef5d7; -[SCAuraDataManager _updateMyAuraDataWithCompletionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_104feef94(long param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  uint uStack_160;
  uint uStack_15c;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  uint uStack_130;
  uint uStack_12c;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar3 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = *(undefined ***)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c0d45e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010c0d4560();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 == (undefined **)0x0 || ppuVar6 == (undefined **)0x0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104fef5d8;
    puStack_98 = &UNK_11085adb8;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x104fef630;
    puStack_e0 = &UNK_110861978;
    lStack_d8 = param_1;
    ppuStack_d0 = ppuVar5;
    ppuStack_c8 = ppuVar6;
    lStack_90 = param_1;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    _objc_retain(param_5);
    uStack_b8 = param_5;
    func_0x00010c0f8500(ppuVar4);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    ppuVar11 = ppuVar4;
  }
  else {
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_104fef79c;
    puStack_110 = &UNK_1108619a8;
    ppuVar7 = ppuVar4;
    ppuStack_108 = ppuVar4;
    lStack_100 = param_1;
    func_0x00010bfab6c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar5;
    FUN_104fef7f0(ppuVar5,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010c106cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    ppuVar11 = *(undefined ***)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    ppuVar13 = ppuVar12;
    func_0x00010c08fa60();
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar14 = *(undefined ***)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar14;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar14);
      ppuVar12 = ppuVar13;
    }
    ppuVar13 = ppuVar8;
    param_2 = puVar10;
    FUN_104fef8e8(ppuVar8,puVar10,ppuVar12,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar7;
    func_0x00010c08a340();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar14 == (undefined **)0x0) {
      uVar18 = 1;
    }
    else {
      ppuVar15 = ppuVar7;
      func_0x00010c08a340(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar13;
      func_0x00010c071cc0();
      _objc_release(ppuVar15);
      uVar18 = (uint)ppuVar11 ^ 1;
    }
    _objc_release(ppuVar14);
    uVar19 = *(undefined8 *)(param_1 + 0x40);
    dVar21 = 600.0;
    func_0x00010c0d8200(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    ppuVar14 = ppuVar7;
    func_0x00010c0d9f00();
    dVar22 = (double)(long)ppuVar14;
    bVar1 = dVar22 < dVar21;
    _objc_release(uVar19);
    uVar20 = (uint)bVar1;
    if ((uVar18 & 1) == 0 && uVar20 == 0) {
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc0000000;
      pcStack_140 = FUN_104fefb20;
      puStack_138 = &UNK_1108619d8;
      uStack_130 = uVar18;
      uStack_12c = uVar20;
      func_0x000104ff1e94(&puStack_150);
      func_0x00010be3dc60(param_1);
    }
    else {
      puVar9 = PTR_PTR_1126b3940;
      _objc_opt_new(PTR_PTR_1126b3940);
      puVar16 = puVar9;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar16;
      func_0x0001091893ac();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebd20(puVar9);
      _objc_release(puVar17);
      _objc_release(puVar16);
      ppuVar11 = ppuVar7;
      func_0x00010c2667e0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c210d80(puVar9);
      _objc_release(ppuVar11);
      func_0x00010c160c80(puVar9);
      func_0x00010c170300(puVar9);
      puVar16 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c18fd80((float)dVar22,puVar9);
      _objc_release(puVar16);
      func_0x00010c1caa80(puVar9);
      uVar19 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar13;
      FUN_104fefbbc(ppuVar13,puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(uVar19);
      _objc_initWeak(auStack_158,param_1);
      uVar19 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c11de00(uVar19);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_104fefd18;
      puStack_198 = &UNK_1108619f8;
      ppuVar11 = &puStack_1b0;
      param_2 = auStack_158;
      _objc_copyWeak(auStack_168,param_2);
      uStack_15c = (uint)bVar1;
      ppuStack_190 = ppuVar13;
      ppuStack_188 = ppuVar4;
      uStack_160 = uVar18;
      _objc_retain(param_3);
      lStack_180 = param_3;
      _objc_retain(param_4);
      uStack_178 = param_4;
      _objc_retain(param_5);
      uStack_170 = param_5;
      func_0x00010c0f85e0(uVar2);
      _objc_release(uVar19);
      _objc_release(uStack_170);
      _objc_release(uStack_178);
      _objc_release(lStack_180);
      _objc_destroyWeak(auStack_168);
      _objc_destroyWeak(auStack_158);
      _objc_release(ppuVar14);
      _objc_release(puVar9);
    }
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(puVar10);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 9);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume();
  uVar19 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001050049b8(param_2,uVar19);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar19);
  return;
}



/* Entry: 104fef5d8; end: 104fef6c3;  */

void FUN_104fef5d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001050049b8(param_2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fef6c4; end: 104fef79b;  */

void FUN_104fef6c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0x20) != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0x28) != 0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc1ef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fef79c; end: 104fef7ef;  */

void FUN_104fef79c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105004630(uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fef7f0; end: 104fef8e7;  */

void FUN_104fef7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3950;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c2bedc0(param_2);
  func_0x00010c2278a0(puVar1);
  func_0x00010c0d0e40(param_2);
  func_0x00010c1c8fc0(puVar1);
  func_0x00010bf65700(param_2);
  _objc_release(param_2);
  func_0x00010c189d40(puVar1);
  func_0x00010bfe4780(param_3);
  func_0x00010c1a9320(puVar1);
  func_0x00010c0ce8c0(param_3);
  func_0x00010c1c8500(puVar1);
  func_0x00010c08b3c0(param_3);
  func_0x00010c1b9120(puVar1);
  func_0x00010c0b55a0(param_3);
  _objc_release(param_3);
  func_0x00010c1be5e0(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fef8e8; end: 104fefb1f;  */

void FUN_104fef8e8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0x1032547698badcfe;
  uStack_b0 = 0xefcdab8967452301;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c2bedc0();
    uStack_c4 = (undefined4)lVar1;
    func_0x000100122910(&uStack_b0,&uStack_c4,4);
    lVar1 = param_1;
    func_0x00010c0d0e40();
    uStack_c8 = (undefined4)lVar1;
    func_0x000100122910(&uStack_b0,&uStack_c8,4);
    lVar1 = param_1;
    func_0x00010bf65700();
    uStack_cc = (undefined4)lVar1;
    func_0x000100122910(&uStack_b0,&uStack_cc,4);
    lVar1 = param_1;
    func_0x00010bfe4740();
    uStack_d0 = (undefined4)lVar1;
    func_0x000100122910(&uStack_b0,&uStack_d0,4);
    lVar1 = param_1;
    func_0x00010c0ce880();
    uStack_d4 = (undefined4)lVar1;
    func_0x000100122910(&uStack_b0,&uStack_d4,4);
    func_0x00010c08aca0(param_1);
    auStack_c0[0] =
         CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(uVar10,CONCAT13(uVar9,CONCAT12(
                                                  uVar8,CONCAT11(uVar7,uVar6)))))));
    func_0x000100122910(&uStack_b0,auStack_c0,8);
    func_0x00010c09abe0(param_1);
    uStack_e0 = CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(uVar10,CONCAT13(uVar9,
                                                  CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))))));
    func_0x000100122910(&uStack_b0,&uStack_e0,8);
  }
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bdc3520();
    lVar2 = param_2;
    func_0x00010c08fa60(param_2);
    func_0x000100122910(&uStack_b0,lVar1,lVar2);
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x000100122910(&uStack_b0,lVar1,lVar2);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,&uStack_b0);
  }
  func_0x000100122a24(auStack_c0,&uStack_b0);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104fefb20; end: 104fefbbb;  */

void FUN_104fefb20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x24));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc1f18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104fefbbc; end: 104fefd17;  */

void FUN_104fefbbc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  func_0x00010c0d3c80();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010bf06a40(param_1);
        func_0x00010bf64920(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(param_1);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_2;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(lVar2);
  param_2 = param_2 + 0x48;
  _objc_loadWeakRetained(param_2);
  func_0x00010be25d80();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fefd18; end: 104fefdb3;  */

void FUN_104fefd18(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25d80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fefdb4; end: 104fefec3; -[SCAuraDataManager updateFriendAuraDataWithFriendUserId:] */

void FUN_104fefdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c08fa60(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fefec4; end: 104feff1f;  */

void FUN_104fefec4(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed8700();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104feff20; end: 104ff0077; -[SCAuraDataManager updateFriendAuraDataWithFriendSnapchatter:completionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_104feff20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff0078; end: 104ff00af;  */

void FUN_104ff0078(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff00b0; end: 104ff07b7; -[SCAuraDataManager _updateFriendAuraDataWithFriendSnapchatter:completionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_104ff00b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x27;
  undefined **unaff_x28;
  double dVar14;
  double dVar15;
  undefined4 uStack_384;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined **ppuStack_368;
  undefined4 uStack_360;
  undefined4 uStack_350;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined1 uStack_2f1;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2d8;
  undefined2 uStack_2d6;
  undefined1 *puStack_2b8;
  undefined ***pppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  uint uStack_1d4;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [8];
  uint uStack_130;
  uint uStack_12c;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  uint uStack_100;
  uint uStack_fc;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = param_3;
  func_0x000100bf119c();
  if ((uVar3 & 1) == 0) {
    if (param_6 != 0) {
      unaff_x23 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,unaff_x23);
      _objc_release(unaff_x23);
    }
  }
  else {
    uVar3 = param_3;
    func_0x00010901d430();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      unaff_x23 = (undefined *)0x0;
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5);
      }
    }
    else {
      uVar3 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = *(undefined ***)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined **)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010c0d45e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1d0 = ppuVar4;
      ppuStack_1b0 = ppuVar6;
      func_0x00010c0d4560();
      _objc_retainAutoreleasedReturnValue();
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_104ff07b8;
      puStack_b8 = &UNK_1108619a8;
      puStack_1e0 = puVar5;
      ppuStack_1c8 = ppuVar4;
      uStack_1c0 = uVar3;
      puStack_b0 = puVar5;
      uStack_a8 = uVar3;
      func_0x00010bfab6c0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1a0 = (undefined **)0x0;
      puStack_198 = puVar5;
      if ((ppuStack_1b0 != (undefined **)0x0) && (ppuStack_1c8 != (undefined **)0x0)) {
        ppuVar6 = ppuStack_1b0;
        FUN_104fef7f0(ppuStack_1b0,ppuStack_1c8);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1a0 = ppuVar6;
      }
      puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010c106cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puStack_1b8 = puVar7;
      _objc_release(puVar5);
      lVar8 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      lStack_190 = lVar9;
      _objc_release(lVar8);
      lVar9 = lStack_190;
      func_0x00010c08fa60();
      if (lVar9 == 0) {
        lVar8 = *(long *)(param_1 + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_190);
        _objc_release(lVar8);
        lStack_190 = lVar9;
      }
      unaff_x24 = ppuStack_1d0;
      func_0x00010c06d320();
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc0000000;
      uStack_e8 = 0x104ff07c4;
      puStack_e0 = &UNK_110861a88;
      uStack_d8 = SUB81(unaff_x24,0);
      ppuVar6 = ppuStack_1a0;
      FUN_104fef8e8(ppuStack_1a0,puStack_1b8,lStack_190,&puStack_f8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puStack_198;
      ppuStack_1a8 = ppuVar6;
      func_0x00010c08a340();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        uStack_1d4 = 1;
      }
      else {
        unaff_x27 = puStack_198;
        func_0x00010c08a340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppuStack_1a8;
        func_0x00010c071cc0();
        _objc_release(unaff_x27);
        uStack_1d4 = (uint)unaff_x28 ^ 1;
      }
      _objc_release(puVar5);
      unaff_x25 = *(undefined8 *)(param_1 + 0x40);
      dVar14 = 600.0;
      func_0x00010c0d8200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      puVar5 = puStack_198;
      func_0x00010c0d9f00();
      dVar15 = (double)(long)puVar5;
      bVar1 = dVar15 < dVar14;
      unaff_x23 = (undefined *)(ulong)bVar1;
      _objc_release(unaff_x25);
      if ((uStack_1d4 & 1) == 0 && bVar1 == 0) {
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc0000000;
        pcStack_110 = FUN_104ff07d8;
        puStack_108 = &UNK_1108619d8;
        uStack_100 = uStack_1d4;
        uStack_fc = (uint)bVar1;
        func_0x000104ff1e94(&puStack_120);
        func_0x00010be3dc60(param_1);
      }
      else {
        unaff_x27 = PTR_PTR_1126b3948;
        _objc_opt_new();
        puVar5 = unaff_x27;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x0001091893ac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ebd20(unaff_x27);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar5 = puStack_198;
        func_0x00010c2667e0(puStack_198);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c210d80(unaff_x27);
        _objc_release(puVar5);
        func_0x00010c160c80(unaff_x27);
        uVar3 = uStack_1c0;
        func_0x0001091893ac(uStack_1c0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19fd60(unaff_x27);
        _objc_release(uVar3);
        if (ppuStack_1a0 != (undefined **)0x0) {
          func_0x00010c170300(unaff_x27);
        }
        puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        func_0x00010c18fd80((float)dVar15,unaff_x27);
        _objc_release(puVar5);
        func_0x00010c1caa80(unaff_x27);
        func_0x00010c1caa00(unaff_x27);
        uStack_a0 = uStack_1c0;
        uVar10 = *(undefined8 *)(param_1 + 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_98 = uVar10;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppuStack_1a8;
        FUN_104fefbbc(ppuStack_1a8,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(uVar10);
        _objc_initWeak(auStack_128,param_1);
        unaff_x25 = *(undefined8 *)(param_1 + 0x58);
        param_1 = *(long *)(param_1 + 0x48);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        uStack_178 = 0x104ff0874;
        puStack_170 = &UNK_110861aa8;
        unaff_x28 = &puStack_188;
        _objc_copyWeak(auStack_138,auStack_128);
        uStack_168 = uStack_1c0;
        ppuStack_160 = ppuStack_1a8;
        uStack_12c = (uint)bVar1;
        uStack_130 = uStack_1d4;
        puStack_158 = puStack_1e0;
        _objc_retain(param_4);
        uStack_150 = param_4;
        _objc_retain(param_5);
        lStack_148 = param_5;
        _objc_retain(param_6);
        lStack_140 = param_6;
        func_0x00010c0f85e0(unaff_x25);
        _objc_release(param_1);
        _objc_release(lStack_140);
        _objc_release(lStack_148);
        _objc_release(uStack_150);
        _objc_destroyWeak(auStack_138);
        _objc_destroyWeak(auStack_128);
        _objc_release(unaff_x24);
        _objc_release(unaff_x27);
      }
      _objc_release(ppuStack_1a8);
      _objc_release(lStack_190);
      _objc_release(puStack_1b8);
      _objc_release(ppuStack_1a0);
      _objc_release(puStack_198);
      _objc_release(ppuStack_1c8);
      _objc_release(ppuStack_1b0);
      _objc_release(puStack_1e0);
      _objc_release(ppuStack_1d0);
      _objc_release(uStack_1c0);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 10);
  _objc_destroyWeak(auStack_128);
  uVar3 = param_3;
  __Unwind_Resume();
  lVar9 = *(long *)(uVar3 + 0x20);
  uVar10 = *(undefined8 *)(uVar3 + 0x28);
  pcStack_1e8 = FUN_104ff07b8;
  ppuStack_240 = unaff_x28;
  puStack_238 = unaff_x27;
  lStack_230 = param_1;
  uStack_228 = unaff_x25;
  ppuStack_220 = unaff_x24;
  puStack_218 = unaff_x23;
  lStack_210 = param_6;
  lStack_208 = param_5;
  uStack_200 = param_4;
  uStack_1f8 = param_3;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(uVar10);
  func_0x00010c08fa60(uVar10);
  _objc_opt_class(PTR_PTR_1126b3b98);
  if (lVar9 == 0) {
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_280,lVar9);
  }
  puVar11 = &uStack_2f1;
  func_0x000105007648();
  uStack_360 = 0xf;
  uStack_350 = 0x100;
  _objc_retain(uVar10);
  ppuStack_368 = &PTR_DAT_110862760;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  plStack_308 = (long *)0x0;
  uStack_310 = 0;
  plStack_300 = (long *)0x0;
  uStack_2d6 = *(undefined2 *)(puVar11 + 0x1a);
  uStack_2e8 = 10;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110862700;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  puStack_380 = (undefined8 *)0x0;
  puStack_378 = (undefined8 *)0x0;
  uStack_370 = 0;
  uStack_384 = 0;
  puVar12 = &uStack_280;
  uStack_338 = uVar10;
  puStack_2b8 = puVar11;
  pppuStack_2b0 = &ppuStack_368;
  func_0x0001000e77a0(puVar12,&ppuStack_2f0,&puStack_380,&uStack_384);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  if (puStack_380 != (undefined8 *)0x0) {
    puStack_378 = puStack_380;
    __ZdlPv();
  }
  plVar2 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110862700;
  plStack_288 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_380 = &uStack_2a8;
  func_0x000100105004(&puStack_380);
  plVar2 = plStack_300;
  ppuStack_368 = &PTR_DAT_110862760;
  plStack_300 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_308;
  plStack_308 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_380 = &uStack_320;
  func_0x000100105004(&puStack_380);
  _objc_release(uStack_338);
  func_0x0001000e76e0(&uStack_258);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(uVar10);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104ff07b8; end: 104ff07d7;  */

void FUN_104ff07b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  func_0x00010c08fa60(uVar2);
  _objc_opt_class(PTR_PTR_1126b3b98);
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar1);
  }
  puVar4 = &uStack_111;
  func_0x000105007648();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(uVar2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar5 = &uStack_a0;
  uStack_158 = uVar2;
  puStack_d8 = puVar4;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar5,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar3 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104ff07d8; end: 104ff090b;  */

void FUN_104ff07d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x24));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc1f18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ff090c; end: 104ff0c33; -[SCAuraDataManager _handleAstrologySyncResponse:error:friendUserId:paramsHash:paramsHashChanged:ttlExpired:docObjectContext:completionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_104ff090c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined1 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  double dVar3;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    dVar3 = 600.0;
    func_0x00010c0d8200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(uVar1);
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104ff0cd0;
    puStack_d8 = &UNK_110861af8;
    uStack_a8 = param_5 != 0;
    _objc_retain(param_3);
    uStack_d0 = param_3;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    _objc_retain(param_6);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_104ff0d04;
    puStack_128 = &UNK_110861b48;
    uStack_f8 = param_5 != 0;
    uStack_c0 = param_6;
    ppuStack_b8 = ppuVar2;
    lStack_b0 = (long)dVar3;
    _objc_retain(param_3);
    uStack_120 = param_3;
    uStack_f7 = param_7;
    uStack_f6 = param_8;
    _objc_retain(param_11);
    uStack_108 = param_11;
    _objc_retain(param_5);
    lStack_118 = param_5;
    lStack_110 = param_1;
    _objc_retain(param_12);
    uStack_100 = param_12;
    _objc_retain(ppuVar2);
    func_0x00010c0f8500(param_9,param_2,&puStack_f0,param_10,&puStack_140);
    _objc_release(uStack_100);
    _objc_release(lStack_118);
    _objc_release(uStack_108);
    _objc_release(uStack_120);
    _objc_release(ppuStack_b8);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(uStack_d0);
  }
  else {
    if (param_5 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc1f98;
    }
    else {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dc1f78);
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_104ff0c34;
    puStack_88 = &UNK_110861ad8;
    uStack_80 = param_7;
    uStack_7f = param_8;
    func_0x000104ff1e94(&puStack_a0);
    func_0x00010be3dc60(param_1,param_2,param_4,param_10,param_11,param_12);
  }
  _objc_release(ppuVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff0c34; end: 104ff0ccf;  */

void FUN_104ff0c34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x21));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc1fb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ff0cd0; end: 104ff0d03;  */

void FUN_104ff0cd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    func_0x00010c08fa60(uVar4);
    uVar1 = uVar3;
    func_0x00010c0fa6a0();
    uVar2 = uVar3;
    func_0x00010bf435c0();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_10500554c;
    puStack_78 = &UNK_110862680;
    _objc_retain(uVar3);
    puStack_70 = (undefined *)uVar3;
    uStack_60 = uVar6;
    _objc_retain(uVar5);
    uStack_58._0_2_ = CONCAT11((int)uVar2 != 7,(int)uVar1 != 5);
    puStack_68 = (undefined *)uVar5;
    func_0x000105004abc(param_2,uVar4,&puStack_90);
    _objc_release(puStack_68);
    _objc_release(puStack_70);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_2);
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(uVar3);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  func_0x00010c08fa60(uVar6);
  func_0x00010c0fa6a0();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = (undefined *)0xc2000000;
  puStack_70 = &UNK_1050052ac;
  puStack_68 = &UNK_110862650;
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  _objc_retain(uVar5);
  uStack_58 = uVar5;
  func_0x000105004abc(param_2,uVar6,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ff0d04; end: 104ff0e07;  */

void FUN_104ff0d04(long param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000104ff1eb8();
    uStack_26 = (undefined1)iVar1;
  }
  else {
    func_0x00010c0fa6a0();
    uStack_26 = iVar1 != 5;
  }
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_104ff0e08;
  puStack_30 = &UNK_110861b28;
  uStack_28 = *(undefined2 *)(param_1 + 0x49);
  uStack_25 = (undefined1)param_2;
  func_0x000104ff1e94(&puStack_48);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc2018;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
    _objc_release(ppuVar2);
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  }
  return;
}



/* Entry: 104ff0e08; end: 104ff0eef;  */

void FUN_104ff0e08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x21));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x22));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x23));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc1fd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ff0ef0; end: 104ff104b; -[SCAuraDataManager _invokeCompletionWithError:completionQueue:successCompletionHandler:failureCompletionHandler:] */

void FUN_104ff0ef0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    if (param_5 == 0) goto LAB_104ff1018;
    if (param_4 == 0) {
      (**(code **)(param_5 + 0x10))(param_5);
      goto LAB_104ff1018;
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x104ff105c;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_68 = param_5;
    func_0x00010007380c(param_4,&puStack_88);
    lVar1 = lStack_68;
  }
  else {
    if (param_6 == 0) goto LAB_104ff1018;
    if (param_4 == 0) {
      (**(code **)(param_6 + 0x10))(param_6,param_3);
      goto LAB_104ff1018;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104ff104c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_6);
    lStack_38 = param_6;
    _objc_retain(param_3);
    lStack_40 = param_3;
    func_0x00010007380c(param_4,&puStack_60);
    _objc_release(lStack_40);
    lVar1 = lStack_38;
  }
  _objc_release(lVar1);
LAB_104ff1018:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff104c; end: 104ff1067;  */

void FUN_104ff104c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ff1058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ff1068; end: 104ff1167; -[SCAuraDataManager fetchMyPersonalityProfileWithCompletionQueue:completionHandler:] */

void FUN_104ff1068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
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



/* Entry: 104ff1168; end: 104ff119b;  */

void FUN_104ff1168(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff119c; end: 104ff12c3; -[SCAuraDataManager _fetchMyPersonalityProfileWithCompletionQueue:completionHandler:] */

void FUN_104ff119c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ff12c4;
  puStack_68 = &UNK_1108619a8;
  uStack_60 = uVar3;
  lStack_58 = param_1;
  _objc_retain();
  uVar2 = uVar3;
  func_0x00010bfab6c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ff1318;
  puStack_98 = &UNK_11084aaa8;
  uStack_90 = uVar2;
  uStack_88 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_b0);
  _objc_release(param_3);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 104ff12c4; end: 104ff1317;  */

void FUN_104ff12c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105004630(uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104ff1318; end: 104ff136f;  */

void FUN_104ff1318(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0fa680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdbae0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ff1370; end: 104ff149f; -[SCAuraDataManager fetchFriendPersonalityProfileWithFriendUserId:completionQueue:completionHandler:] */

void FUN_104ff1370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff14a0; end: 104ff14d7;  */

void FUN_104ff14a0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff14d8; end: 104ff1627; -[SCAuraDataManager _fetchFriendPersonalityProfileWithFriendUserId:completionQueue:completionHandler:] */

void FUN_104ff14d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ff1628;
  puStack_68 = &UNK_1108619a8;
  uStack_60 = uVar3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bfab6c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ff1634;
  puStack_98 = &UNK_11084aaa8;
  uStack_90 = uVar2;
  uStack_88 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_b0);
  _objc_release(param_4);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 104ff1628; end: 104ff1633;  */

void FUN_104ff1628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  func_0x00010c08fa60(uVar2);
  _objc_opt_class(PTR_PTR_1126b3b98);
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar1);
  }
  puVar4 = &uStack_111;
  func_0x000105007648();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(uVar2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar5 = &uStack_a0;
  uStack_158 = uVar2;
  puStack_d8 = puVar4;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar5,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar3 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104ff1634; end: 104ff168b;  */

void FUN_104ff1634(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0fa680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdbae0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ff168c; end: 104ff17bb; -[SCAuraDataManager fetchFriendCompatibilityProfileWithFriendUserId:completionQueue:completionHandler:] */

void FUN_104ff168c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff17bc; end: 104ff17f3;  */

void FUN_104ff17bc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be113e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff17f4; end: 104ff1943; -[SCAuraDataManager _fetchFriendCompatibilityProfileWithFriendUserId:completionQueue:completionHandler:] */

void FUN_104ff17f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ff1944;
  puStack_68 = &UNK_1108619a8;
  uStack_60 = uVar3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010bfab6c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ff1950;
  puStack_98 = &UNK_11084aaa8;
  uStack_90 = uVar2;
  uStack_88 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_b0);
  _objc_release(param_4);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 104ff1944; end: 104ff194f;  */

void FUN_104ff1944(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  func_0x00010c08fa60(uVar2);
  _objc_opt_class(PTR_PTR_1126b3b98);
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar1);
  }
  puVar4 = &uStack_111;
  func_0x000105007648();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(uVar2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar5 = &uStack_a0;
  uStack_158 = uVar2;
  puStack_d8 = puVar4;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar5,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar3 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104ff1950; end: 104ff19a7;  */

void FUN_104ff1950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf435a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdb8c0(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ff19a8; end: 104ff1a5b; -[SCAuraDataManager setHasSeenMyPersonalityProfileDiviningPage] */

void FUN_104ff19a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ff1a5c; end: 104ff1abb;  */

void FUN_104ff1a5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee60e0(lVar1,param_2,uVar2,&PTR___NSConcreteGlobalBlock_110861b98);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ff1abc; end: 104ff1acb;  */

void FUN_104ff1abc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x14) = 1;
  }
  return;
}



/* Entry: 104ff1acc; end: 104ff1ba3; -[SCAuraDataManager setHasSeenFriendPersonalityProfileDiviningPage:] */

void FUN_104ff1acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff1ba4; end: 104ff1bdf;  */

void FUN_104ff1ba4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee60e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff1be0; end: 104ff1bef;  */

void FUN_104ff1be0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x14) = 1;
  }
  return;
}



/* Entry: 104ff1bf0; end: 104ff1cc7; -[SCAuraDataManager setHasSeenFriendCompatibilityProfileDiviningPage:] */

void FUN_104ff1bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff1cc8; end: 104ff1d03;  */

void FUN_104ff1cc8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee60e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff1d04; end: 104ff1d13;  */

void FUN_104ff1d04(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x15) = 1;
  }
  return;
}



/* Entry: 104ff1d14; end: 104ff1de7; -[SCAuraDataManager _upsertAuraDataForOwner:update:] */

void FUN_104ff1d14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ff1de8;
  puStack_48 = &UNK_110861bf8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ff1de8; end: 104ff1df7;  */

void FUN_104ff1de8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(lVar2);
  func_0x00010c08fa60(uVar1);
  lVar3 = param_2;
  func_0x000105004630(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3ba0;
  if (lVar3 == 0) {
    func_0x000105007f98(PTR_PTR_1126b3ba0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001050082fc(PTR_PTR_1126b3ba0,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar4 != (undefined *)0x0) {
    _objc_setProperty_nonatomic_copy(puVar4);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ff1df8; end: 104ff1f0b; -[SCAuraDataManager .cxx_destruct] */

void FUN_104ff1df8(long param_1)

{
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



/* Entry: 104ff1f0c; end: 104ff2047; -[SCAuraDiviningPageViewController initWithViewModel:delegate:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ff1f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e58f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112719208;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271920c),param_4);
    lVar4 = (long)_DAT_112719210;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112719214;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c219b20(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ff2048; end: 104ff2487; -[SCAuraDiviningPageViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff2048(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112719208;
  uVar6 = *(ulong *)(param_1 + lVar8);
  puVar1 = PTR_PTR_1126b3958;
  _objc_opt_class(PTR_PTR_1126b3958);
  _objc_opt_isKindOfClass(uVar6,puVar1);
  if ((uVar6 & 1) == 0) {
    puVar7 = *(undefined1 **)(param_1 + lVar8);
    puVar1 = PTR_PTR_1126b3970;
    _objc_opt_class(PTR_PTR_1126b3970);
    _objc_opt_isKindOfClass(puVar7,puVar1);
    if (((ulong)puVar7 & 1) != 0) {
      _objc_initWeak(auStack_90,param_1);
      puVar3 = PTR_PTR_1126b3978;
      _objc_alloc();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x104ff24fc;
      puStack_f0 = &UNK_11084d688;
      unaff_x25 = &puStack_108;
      _objc_copyWeak(auStack_e8,auStack_90);
      puStack_130 = puVar1;
      uStack_128 = 0xc2000000;
      uStack_120 = 0x104ff2544;
      puStack_118 = &UNK_1108434b0;
      puVar1 = auStack_90;
      _objc_copyWeak(auStack_110,puVar1);
      func_0x00010c059760();
      puVar4 = PTR_PTR_1126b3980;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112719210);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40();
      _objc_release(uVar9);
      _objc_release(uVar2);
      uVar9 = *(undefined8 *)(param_1 + _DAT_112719214);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067a20(uVar9);
      _objc_release(puVar5);
      func_0x00010c222380(param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_e8);
      puVar7 = auStack_90;
      _objc_destroyWeak();
      unaff_x26 = &puStack_130;
    }
  }
  else {
    _objc_initWeak(auStack_90,param_1);
    puVar3 = PTR_PTR_1126b3960;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104ff2488;
    puStack_a0 = &UNK_11084d688;
    unaff_x25 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104ff24d0;
    puStack_c8 = &UNK_1108434b0;
    puVar1 = auStack_90;
    _objc_copyWeak(auStack_c0,puVar1);
    func_0x00010c059760();
    puVar4 = PTR_PTR_1126b3968;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112719210);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40();
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112719214);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(uVar9);
    _objc_release(puVar5);
    func_0x00010c222380(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    puVar7 = auStack_90;
    _objc_destroyWeak();
    unaff_x26 = &puStack_e0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar7);
  _objc_retain(puVar1);
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bed3680();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104ff2488; end: 104ff256f;  */

void FUN_104ff2488(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff2570; end: 104ff25b7; -[SCAuraDiviningPageViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff2570(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112719218) & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_11271920c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf87160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ff25b8; end: 104ff2677; -[SCAuraDiviningPageViewController _updateAuraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff25b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271920c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf871e0(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 104ff2678; end: 104ff267f;  */

void FUN_104ff2678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__diviningPageDidFail_11255eea0);
  return;
}



/* Entry: 104ff2680; end: 104ff2743; -[SCAuraDiviningPageViewController _diviningPageDidComplete] */

void FUN_104ff2680(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104ff26d8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104ff2744; end: 104ff277b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff2744(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271920c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf87180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ff277c; end: 104ff283f; -[SCAuraDiviningPageViewController _diviningPageDidFail] */

void FUN_104ff277c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104ff27d4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104ff2840; end: 104ff2877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff2840(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271920c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf871a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ff2878; end: 104ff2883; -[SCAuraDiviningPageViewController defaultProjectNameV2] */

undefined ** FUN_104ff2878(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 104ff2884; end: 104ff288f; -[SCAuraDiviningPageViewController defaultSubProjectName] */

undefined ** FUN_104ff2884(void)

{
  return &PTR____CFConstantStringClassReference_110dc1df8;
}



/* Entry: 104ff2890; end: 104ff2893; -[SCAuraDiviningPageViewController cardToExpandTransition] */

void FUN_104ff2890(void)

{
  return;
}



/* Entry: 104ff2894; end: 104ff289f; -[SCAuraDiviningPageViewController cardTransitionWillBeginWithView:] */

void FUN_104ff2894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ff28a0; end: 104ff28fb; -[SCAuraDiviningPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ff28a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719214,0);
  _objc_storeStrong(param_1 + _DAT_112719210,0);
  _objc_destroyWeak(param_1 + _DAT_11271920c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719208,0);
  return;
}


