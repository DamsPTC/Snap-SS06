/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cf5d04; end: 106cf5d07; -[SCMemoriesScreenshopTabController didTriggerRefetchLatestFeaturedStories] */

void FUN_106cf5d04(void)

{
  return;
}



/* Entry: 106cf5d08; end: 106cf5d0f; -[SCMemoriesScreenshopTabController pageViewName] */

undefined8 FUN_106cf5d08(void)

{
  return 0x81;
}



/* Entry: 106cf5d10; end: 106cf5d17; -[SCMemoriesScreenshopTabController galleryTabsOperaPresenterShouldUpdateList] */

undefined8 FUN_106cf5d10(void)

{
  return 0;
}



/* Entry: 106cf5d18; end: 106cf5d23; -[SCMemoriesScreenshopTabController galleryTabsOperaPresenterOperaPlaylistForItemId:] */

undefined * FUN_106cf5d18(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106cf5d24; end: 106cf5d27; -[SCMemoriesScreenshopTabController galleryTabsOperaPresenterDidDismissOpera] */

void FUN_106cf5d24(void)

{
  return;
}



/* Entry: 106cf5d28; end: 106cf5d33; -[SCMemoriesScreenshopTabController scrollContentInset] */

undefined8 FUN_106cf5d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106cf5d34; end: 106cf5d3f; -[SCMemoriesScreenshopTabController setScrollContentInset:] */

void FUN_106cf5d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x98) = param_1;
  *(undefined8 *)(param_5 + 0xa0) = param_2;
  *(undefined8 *)(param_5 + 0xa8) = param_3;
  *(undefined8 *)(param_5 + 0xb0) = param_4;
  return;
}



/* Entry: 106cf5d40; end: 106cf5d47; -[SCMemoriesScreenshopTabController scrollContentOffset] */

undefined8 FUN_106cf5d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106cf5d48; end: 106cf5d4f; -[SCMemoriesScreenshopTabController setScrollContentOffset:] */

void FUN_106cf5d48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 106cf5d50; end: 106cf5d57; -[SCMemoriesScreenshopTabController scrollContentDistanceToTop] */

undefined8 FUN_106cf5d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106cf5d58; end: 106cf5d5f; -[SCMemoriesScreenshopTabController visible] */

undefined1 FUN_106cf5d58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 106cf5d60; end: 106cf5d67; -[SCMemoriesScreenshopTabController setVisible:] */

void FUN_106cf5d60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 106cf5d68; end: 106cf5d6f; -[SCMemoriesScreenshopTabController focused] */

undefined1 FUN_106cf5d68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x72);
}



/* Entry: 106cf5d70; end: 106cf5d77; -[SCMemoriesScreenshopTabController loading] */

undefined1 FUN_106cf5d70(long param_1)

{
  return *(undefined1 *)(param_1 + 0x73);
}



/* Entry: 106cf5d78; end: 106cf5d7f; -[SCMemoriesScreenshopTabController setLoading:] */

void FUN_106cf5d78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73) = param_3;
  return;
}



/* Entry: 106cf5d80; end: 106cf5d87; -[SCMemoriesScreenshopTabController selectMode] */

undefined1 FUN_106cf5d80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x74);
}



/* Entry: 106cf5d88; end: 106cf5d8f; -[SCMemoriesScreenshopTabController setSelectMode:] */

void FUN_106cf5d88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x74) = param_3;
  return;
}



/* Entry: 106cf5d90; end: 106cf5da7; -[SCMemoriesScreenshopTabController delegate] */

void FUN_106cf5d90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cf5da8; end: 106cf5db3; -[SCMemoriesScreenshopTabController setDelegate:] */

void FUN_106cf5da8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 106cf5db4; end: 106cf5dbb; -[SCMemoriesScreenshopTabController tabType] */

undefined8 FUN_106cf5db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106cf5dbc; end: 106cf5e73; -[SCMemoriesScreenshopTabController .cxx_destruct] */

void FUN_106cf5dbc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 106cf5e74; end: 106cf5edf; -[SCMemoriesScreenshopTabEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf5e74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdf2dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf2de0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11275c7dc),param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cf5ee0; end: 106cf613b; -[SCMemoriesScreenshopTabEntryPoint _createScreenshopDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf5ee0(long param_1,undefined8 param_2)

{
  long lVar1;
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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar1 = param_1 + _DAT_11275c7e0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d2248;
  _objc_alloc();
  lVar17 = (long)_DAT_11275c7e4;
  lVar1 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0fa3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c0d0080();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11275c7e8;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11275c7ec;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11275c7f0;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11275c7f4;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11275c7f8;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010c0d7fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0426c0(puVar4,param_2,lVar5,lVar6,lVar7,lVar10,lVar12,lVar14,lVar16,lVar17,lVar3);
  _objc_release(lVar17);
  _objc_release(param_1);
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
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cf613c; end: 106cf616b;  */

void FUN_106cf613c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106cf616c; end: 106cf6387; -[SCMemoriesScreenshopTabEntryPoint _createScreenshopTabServicesWithDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf616c(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126d2250;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275c7f0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275c7fc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf2a9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11275c7ec;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11275c800;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11275c7f8;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11275c804;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11275c808;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f120(puVar1,param_2,lVar3,lVar5,lVar8,lVar10,lVar12,lVar14,lVar16,
                      *(undefined8 *)(param_1 + _DAT_11275c80c),
                      *(undefined8 *)(param_1 + _DAT_11275c810),param_3);
  _objc_release(param_3);
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



/* Entry: 106cf6388; end: 106cf63c3; -[SCMemoriesScreenshopTabEntryPoint end] */

void FUN_106cf6388(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f67b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cf63c4; end: 106cf64a3; -[SCMemoriesScreenshopTabEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cf63c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c7dc,0);
  _objc_storeStrong(param_1 + _DAT_11275c810,0);
  _objc_storeStrong(param_1 + _DAT_11275c80c,0);
  _objc_destroyWeak(param_1 + _DAT_11275c7e0);
  _objc_destroyWeak(param_1 + _DAT_11275c7f8);
  _objc_destroyWeak(param_1 + _DAT_11275c804);
  _objc_destroyWeak(param_1 + _DAT_11275c808);
  _objc_destroyWeak(param_1 + _DAT_11275c800);
  _objc_destroyWeak(param_1 + _DAT_11275c7ec);
  _objc_destroyWeak(param_1 + _DAT_11275c7fc);
  _objc_destroyWeak(param_1 + _DAT_11275c7f0);
  _objc_destroyWeak(param_1 + _DAT_11275c7e8);
  _objc_destroyWeak(param_1 + _DAT_11275c7e4);
  _objc_destroyWeak(param_1 + _DAT_11275c7f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275c814);
  return;
}



/* Entry: 106cf64a4; end: 106cf6883; -[SCMemoriesScreenshopTabServices initWithUserTrackedLogger:composerCameraRollProvider:featureSettingsService:grapheneRegistry:configProvider:userPreferences:composerBlizzardLogger:screenshopComposerScopeExposer:webBrowsingScopeExposer:dataSource:] */

undefined8 *
FUN_106cf64a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126f67b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 10) = 0;
    *(undefined1 *)((long)puVar1 + 0x52) = 0;
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0768;
    _objc_alloc();
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012180();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b0308;
    _objc_alloc();
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a840();
    uVar4 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2258;
    _objc_alloc();
    func_0x00010c05f140();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x14];
    func_0x00010bfca3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
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



/* Entry: 106cf6884; end: 106cf68cb;  */

void FUN_106cf6884(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cf68cc; end: 106cf698b; -[SCMemoriesScreenshopTabServices setUpActionHandlerWithUIContainer:workFlowDelegate:screenshopTabStatusObservable:] */

void FUN_106cf68cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + 0x38,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfc2d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cf698c; end: 106cf69db; -[SCMemoriesScreenshopTabServices dealloc] */

void FUN_106cf698c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x70));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x78));
  puStack_28 = PTR_PTR_1126f67b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106cf69dc; end: 106cf6ad7; -[SCMemoriesScreenshopTabServices initializeActionHandler] */

void FUN_106cf69dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010be65b00(param_1);
  func_0x00010be657e0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106cf6ad8; end: 106cf6b2f;  */

void FUN_106cf6ad8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c267c40(param_2);
    func_0x00010be2c380(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cf6b30; end: 106cf6b37; -[SCMemoriesScreenshopTabServices getCommerceOnboardingShownCount] */

void FUN_106cf6b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_commerceScreenshopOnboardingShow_1125ae330);
  return;
}



/* Entry: 106cf6b38; end: 106cf6b3f; -[SCMemoriesScreenshopTabServices screenshopAdsDataPermissionEnabled] */

void FUN_106cf6b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1514f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_screenshopAdsDataPermission_112631f58);
  return;
}



/* Entry: 106cf6b40; end: 106cf6b47; -[SCMemoriesScreenshopTabServices screenshopEnabled] */

void FUN_106cf6b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c151690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_screenshopEnabled_112631fc0);
  return;
}



/* Entry: 106cf6b48; end: 106cf6c97; -[SCMemoriesScreenshopTabServices screenshotTappedWithCameraRollItem:thumbnailCell:] */

void FUN_106cf6b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(param_1 + 0x51) = 1;
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf00820(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf00820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c0844e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bfecde0(uVar1,param_2,uVar5);
  uVar7 = param_4;
  func_0x00010b9688dc(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c10d660(lVar2,param_2,uVar3,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106cf6c98; end: 106cf6c9f;  */

void FUN_106cf6c98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localIdentifier_1126050b0);
  return;
}



/* Entry: 106cf6ca0; end: 106cf6d27; -[SCMemoriesScreenshopTabServices shoppableScreenshotTappedWithCameraRollItem:thumbnailCell:] */

void FUN_106cf6ca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    lVar1 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be49b00(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cf6d28; end: 106cf6d4f; -[SCMemoriesScreenshopTabServices shoppingPermissionButtonTapped] */

void FUN_106cf6d28(long param_1)

{
  func_0x00010bfd2780(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010be582d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logScreenshopPermissionGranted_112573a50);
  return;
}



/* Entry: 106cf6d50; end: 106cf6e57; -[SCMemoriesScreenshopTabServices shoppingLearnMoreButtonTapped] */

void FUN_106cf6d50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar4 = puVar3;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cf6e58; end: 106cf6ef3;  */

void FUN_106cf6e58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e83bb8;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e83bb8,
                      &PTR____CFConstantStringClassReference_110e83bd8,
                      &PTR____CFConstantStringClassReference_110e83bf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c520(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106cf6ef4; end: 106cf6f1b; -[SCMemoriesScreenshopTabServices shoppingGetStartedButtonTapped] */

void FUN_106cf6ef4(long param_1)

{
  func_0x00010bfd2780(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010be582d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logScreenshopPermissionGranted_112573a50);
  return;
}



/* Entry: 106cf6f1c; end: 106cf6f27; -[SCMemoriesScreenshopTabServices shoppableSeeMoreButtonTapped] */

void FUN_106cf6f1c(long param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be58430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logSeeMoreButtonTapped_112573aa8);
  return;
}



/* Entry: 106cf6f28; end: 106cf6f2b; -[SCMemoriesScreenshopTabServices newUserAdsPermissionTryItNowButtonTapped] */

void FUN_106cf6f28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_newUseGrantAdsPermission_112613ec8);
  return;
}



/* Entry: 106cf6f2c; end: 106cf6f2f; -[SCMemoriesScreenshopTabServices newUserAdsPermissionGreatButtonTapped] */

void FUN_106cf6f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_newUseGrantAdsPermission_112613ec8);
  return;
}



/* Entry: 106cf6f30; end: 106cf6f5b; -[SCMemoriesScreenshopTabServices newUseGrantAdsPermission] */

void FUN_106cf6f30(long param_1,undefined8 param_2)

{
  func_0x00010c1f7680(*(undefined8 *)(param_1 + 8),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c22ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shoppingGetStartedButtonTapped_112668dc0);
  return;
}



/* Entry: 106cf6f5c; end: 106cf6f63; -[SCMemoriesScreenshopTabServices existingUserGrantAdsPermission] */

void FUN_106cf6f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa0),PTR_s_handleAdsPermissionGranted_1125d1a38);
  return;
}



/* Entry: 106cf6f64; end: 106cf700f; -[SCMemoriesScreenshopTabServices shoppableCategoryTappedWithCameraRollItem:category:] */

void FUN_106cf6f64(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    lVar1 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be49b20(param_1,param_2,lVar2,param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cf7010; end: 106cf709f; -[SCMemoriesScreenshopTabServices _makeComposerCameraRollLibraryWithProvider:] */

void FUN_106cf7010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0fb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0093c0();
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0b7000(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106cf70a0; end: 106cf712f; -[SCMemoriesScreenshopTabServices _lazyLaunchScreenshopCatalogForAssetId:] */

void FUN_106cf70a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b88;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c22cce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c7de0(puVar1,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010be6cfa0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf7130; end: 106cf71df; -[SCMemoriesScreenshopTabServices _lazyLaunchScreenshopCatelogForAssetId:forCategory:] */

void FUN_106cf7130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5b88;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22cd00(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c7de0(puVar1,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010be6cfa0(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf71e0; end: 106cf724b; -[SCMemoriesScreenshopTabServices _openCatalogWithEntryType:categoryName:] */

void FUN_106cf71e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5b90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c010580();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf724c; end: 106cf7297; -[SCMemoriesScreenshopTabServices _handleCatalogClose] */

void FUN_106cf724c(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106cf7298; end: 106cf72f3; -[SCMemoriesScreenshopTabServices _logScreenshopPermissionGranted] */

void FUN_106cf7298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2260;
  _objc_alloc_init(PTR_PTR_1126d2260);
  func_0x00010c1a4200();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf72f4; end: 106cf7347; -[SCMemoriesScreenshopTabServices _logSeeMoreButtonTapped] */

void FUN_106cf72f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2268;
  _objc_alloc_init(PTR_PTR_1126d2268);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf7348; end: 106cf73a3; -[SCMemoriesScreenshopTabServices _handleScreenshotsTabDidChangeFocus:] */

void FUN_106cf7348(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x52) = 1;
    if (((*(byte *)(param_1 + 0x50) & 1) == 0) && (*(char *)(param_1 + 0x51) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c151850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x58),PTR_s_screenshopSessionStart_112632030);
      return;
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x52) = 1;
    return;
  }
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x51);
  if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c151830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_screenshopSessionEnd_112632028);
  return;
}



/* Entry: 106cf73a4; end: 106cf742b; -[SCMemoriesScreenshopTabServices _handleMemoriesTabStatusType:] */

void FUN_106cf73a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 4) {
    func_0x00010c189880(*(undefined8 *)(param_1 + 0xa0),param_2,0);
    uVar1 = 0;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 2) {
        func_0x00010c189880(*(undefined8 *)(param_1 + 0xa0),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be2a210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__handleGalleryViewWillDisappear_112568220);
        return;
      }
      return;
    }
    func_0x00010c189880(*(undefined8 *)(param_1 + 0xa0),param_2,1);
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleScreenshotsTabDidChangeFo_112569820,uVar1);
  return;
}



/* Entry: 106cf742c; end: 106cf742f; -[SCMemoriesScreenshopTabServices _handleGalleryViewWillDisappear] */

void FUN_106cf742c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be27050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCatalogClose_1125675b0);
  return;
}



/* Entry: 106cf7430; end: 106cf74cb; -[SCMemoriesScreenshopTabServices _observeAppStateChanges] */

void FUN_106cf7430(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cf74cc; end: 106cf74e3; -[SCMemoriesScreenshopTabServices _willEnterForeground] */

void FUN_106cf74cc(long param_1)

{
  if (*(char *)(param_1 + 0x52) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c151850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_screenshopSessionStart_112632030);
    return;
  }
  return;
}



/* Entry: 106cf74e4; end: 106cf74fb; -[SCMemoriesScreenshopTabServices _didEnterBackground] */

void FUN_106cf74e4(long param_1)

{
  if (*(char *)(param_1 + 0x52) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c151830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x58),PTR_s_screenshopSessionEnd_112632028);
    return;
  }
  return;
}



/* Entry: 106cf74fc; end: 106cf75c3; -[SCMemoriesScreenshopTabServices _oberveDataSourceChanges] */

void FUN_106cf74fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106cf75c4; end: 106cf7637;  */

void FUN_106cf75c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf1f3c0(param_2);
    func_0x00010c28aa80(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cf7638; end: 106cf763b; -[SCMemoriesScreenshopTabServices screenshopPageShouldDismiss] */

void FUN_106cf7638(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be27050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCatalogClose_1125675b0);
  return;
}



/* Entry: 106cf763c; end: 106cf7683; -[SCMemoriesScreenshopTabServices webBrowserDidDismiss:] */

void FUN_106cf763c(long param_1)

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



/* Entry: 106cf7684; end: 106cf768b; -[SCMemoriesScreenshopTabServices shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106cf7684(void)

{
  return 0;
}



/* Entry: 106cf768c; end: 106cf7697; -[SCMemoriesScreenshopTabServices pushToValdiMarshaller:] */

void FUN_106cf768c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 106cf7698; end: 106cf769f; -[SCMemoriesScreenshopTabServices commerceTooltips] */

undefined8 FUN_106cf7698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106cf76a0; end: 106cf76a7; -[SCMemoriesScreenshopTabServices composerBlizzardLogger] */

undefined8 FUN_106cf76a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106cf76a8; end: 106cf76af; -[SCMemoriesScreenshopTabServices commerceEventLogger] */

undefined8 FUN_106cf76a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106cf76b0; end: 106cf76b7; -[SCMemoriesScreenshopTabServices shoppableScreenshotsAssetObervable] */

undefined8 FUN_106cf76b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106cf76b8; end: 106cf76bf; -[SCMemoriesScreenshopTabServices dataSource] */

undefined8 FUN_106cf76b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106cf76c0; end: 106cf77ab; -[SCMemoriesScreenshopTabServices .cxx_destruct] */

void FUN_106cf76c0(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cf77ac; end: 106cf77f3; -[SCMemoriesScreenshopTabStatus initWithSCMemoriesTabStatusType:] */

void FUN_106cf77ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f67c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106cf77f4; end: 106cf785b; -[SCMemoriesScreenshopTabStatus tabStatusType] */

undefined8 FUN_106cf77f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cf785c; end: 106cf7867; -[SCFeatureSettingsService getCommerceFavoritesPDPTooltipShownCount] */

void FUN_106cf785c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e83cd8);
  return;
}



/* Entry: 106cf7868; end: 106cf7873; -[SCFeatureSettingsService commerceFavoritesPDPTooltipShownCountServerParam] */

undefined ** FUN_106cf7868(void)

{
  return &PTR____CFConstantStringClassReference_110e83cd8;
}



/* Entry: 106cf7874; end: 106cf7883; -[SCFeatureSettingsService setCommerceFavoritesPDPTooltipShownCount:] */

void FUN_106cf7874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e83cd8,param_3);
  return;
}



/* Entry: 106cf7884; end: 106cf788b; -[SCFeatureSettingsService COMMERCE_FAVORITES_PDP_TOOLTIP_SHOWN_COUNT_client_value:] */

void FUN_106cf7884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106cf788c; end: 106cf7893; -[SCFeatureSettingsService COMMERCE_FAVORITES_PDP_TOOLTIP_SHOWN_COUNT_server_value:] */

void FUN_106cf788c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106cf7894; end: 106cf78a3; -[SCFeatureSettingsService commerceFavoritesPDPTooltipShownCount] */

void FUN_106cf7894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e83cd8,0);
  return;
}



/* Entry: 106cf78a4; end: 106cf78af; -[SCFeatureSettingsService getCommerceFavoritesProfileTooltipShownCount] */

void FUN_106cf78a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e83cf8);
  return;
}



/* Entry: 106cf78b0; end: 106cf78bb; -[SCFeatureSettingsService commerceFavoritesProfileTooltipShownCountServerParam] */

undefined ** FUN_106cf78b0(void)

{
  return &PTR____CFConstantStringClassReference_110e83cf8;
}



/* Entry: 106cf78bc; end: 106cf78cb; -[SCFeatureSettingsService setCommerceFavoritesProfileTooltipShownCount:] */

void FUN_106cf78bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e83cf8,param_3);
  return;
}



/* Entry: 106cf78cc; end: 106cf78d3; -[SCFeatureSettingsService COMMERCE_FAVORITES_PROFILE_TOOLTIP_SHOWN_COUNT_client_value:] */

void FUN_106cf78cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106cf78d4; end: 106cf78db; -[SCFeatureSettingsService COMMERCE_FAVORITES_PROFILE_TOOLTIP_SHOWN_COUNT_server_value:] */

void FUN_106cf78d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106cf78dc; end: 106cf78eb; -[SCFeatureSettingsService commerceFavoritesProfileTooltipShownCount] */

void FUN_106cf78dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e83cf8,0);
  return;
}



/* Entry: 106cf78ec; end: 106cf78f7; -[SCFeatureSettingsService getCommerceScreenshopSwipingTooltipShownCount] */

void FUN_106cf78ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e83d18);
  return;
}



/* Entry: 106cf78f8; end: 106cf7903; -[SCFeatureSettingsService commerceScreenshopSwipingTooltipShownCountServerParam] */

undefined ** FUN_106cf78f8(void)

{
  return &PTR____CFConstantStringClassReference_110e83d18;
}



/* Entry: 106cf7904; end: 106cf7913; -[SCFeatureSettingsService setCommerceScreenshopSwipingTooltipShownCount:] */

void FUN_106cf7904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e83d18,param_3);
  return;
}



/* Entry: 106cf7914; end: 106cf791b; -[SCFeatureSettingsService COMMERCE_SCREENSHOP_SWIPING_TOOLTIP_SHOWN_COUNT_client_value:] */

void FUN_106cf7914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106cf791c; end: 106cf7923; -[SCFeatureSettingsService COMMERCE_SCREENSHOP_SWIPING_TOOLTIP_SHOWN_COUNT_server_value:] */

void FUN_106cf791c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106cf7924; end: 106cf7933; -[SCFeatureSettingsService commerceScreenshopSwipingTooltipShownCount] */

void FUN_106cf7924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e83d18,0);
  return;
}



/* Entry: 106cf7934; end: 106cf793f; -[SCFeatureSettingsService getCommerceScreenshopOnContextTooltipShownCount] */

void FUN_106cf7934(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e83d38);
  return;
}



/* Entry: 106cf7940; end: 106cf794b; -[SCFeatureSettingsService commerceScreenshopOnContextTooltipShownCountServerParam] */

undefined ** FUN_106cf7940(void)

{
  return &PTR____CFConstantStringClassReference_110e83d38;
}



/* Entry: 106cf794c; end: 106cf795b; -[SCFeatureSettingsService setCommerceScreenshopOnContextTooltipShownCount:] */

void FUN_106cf794c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e83d38,param_3);
  return;
}



/* Entry: 106cf795c; end: 106cf7963; -[SCFeatureSettingsService COMMERCE_SCREENSHOP_ON_CONTEXT_TOOLTIP_SHOWN_COUNT_client_value:] */

void FUN_106cf795c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106cf7964; end: 106cf796b; -[SCFeatureSettingsService COMMERCE_SCREENSHOP_ON_CONTEXT_TOOLTIP_SHOWN_COUNT_server_value:] */

void FUN_106cf7964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106cf796c; end: 106cf797b; -[SCFeatureSettingsService commerceScreenshopOnContextTooltipShownCount] */

void FUN_106cf796c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e83d38,0);
  return;
}


