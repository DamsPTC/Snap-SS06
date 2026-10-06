/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061b2a4c; end: 1061b2a67;  */

void FUN_1061b2a4c(void)

{
  _objc_opt_new(PTR_PTR_1126c8830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061b2a68; end: 1061b2ba7; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow _lensCollectionsSendToButtonLayoutStrategy:] */

void FUN_1061b2a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1061b2b00;
  puStack_30 = &UNK_1109142a8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b2ba8; end: 1061b2c83;  */

void FUN_1061b2ba8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b2c84; end: 1061b2cf3;  */

void FUN_1061b2c84(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b2cf4; end: 1061b2d33; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow _lensExplorerStudySettings] */

void FUN_1061b2cf4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061b2d34; end: 1061b2e67; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_1061b2d34(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061b2e68; end: 1061b3543; -[SCCameraChatLensFeatureProviderPluginWorkflow initWithPriveFeatureContainer:cameraUIScope:applicationLifecycleEvents:userSession:grapheneRegistry:navigationServices:lensesFeatureServices:featureSettingsServices:currentPageTracker:lensLoggerServices:lensContentServices:lensFavoritesServices:lensPerformerServices:lensUnlockServices:lensExplorerNavigationServices:lensExplorerDataServices:lensExplorerConfigurableNavigationServices:userNetworkServices:lensMediaDownloaderFactory:userStorageServices:lensExplorerStudySettingsServices:lensCarouselStudySettingsServices:lensCarouselConfigProvider:lensFavoritesLoggingServices:lensFavoriteNotificationServices:lensExplorerBadgeServices:lensPickerServices:lensUserProvider:lensPreferences:cameraHardwareResource:deeplinkSendToScopeExposer:offPlatformLinkGenerationService:cameraUIServices:lensCarouselSettingsServices:arBarAdapterServices:arBar:lensCollectionTabBarObserver:lensCarouselFeatureServices:lensInfoButtonVisibility:lensesCameraCapturerStateUpdatesProvider:cameraModeActivationServices:] */

undefined8 *
FUN_1061b2e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  puStack_70 = PTR_PTR_1126f0280;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 7,param_4);
    _objc_storeWeak(puVar1 + 2,param_19);
    _objc_storeWeak(puVar1 + 3,param_17);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_storeWeak(puVar1 + 5,param_5);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_storeWeak(puVar1 + 8,param_16);
    _objc_storeWeak(puVar1 + 9,param_15);
    _objc_storeWeak(puVar1 + 10,param_14);
    _objc_storeWeak(puVar1 + 0xb,param_8);
    _objc_storeWeak(puVar1 + 0xc,param_13);
    _objc_storeWeak(puVar1 + 0xd,param_12);
    _objc_storeWeak(puVar1 + 0xe,param_9);
    _objc_storeWeak(puVar1 + 0xf,param_10);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = puVar2;
    _objc_retain();
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x10,param_20);
    _objc_storeWeak(puVar1 + 0x11,param_21);
    _objc_storeWeak(puVar1 + 0x12,param_22);
    _objc_storeWeak(puVar1 + 0x18,param_26);
    _objc_storeWeak(puVar1 + 0x19,param_27);
    _objc_storeWeak(puVar1 + 0x1a,param_28);
    _objc_storeWeak(puVar1 + 0x15,param_23);
    _objc_storeWeak(puVar1 + 0x14,param_24);
    _objc_storeWeak(puVar1 + 0x16,param_25);
    _objc_storeWeak(puVar1 + 0x17,param_18);
    _objc_storeWeak(puVar1 + 0x1b,param_29);
    _objc_storeWeak(puVar1 + 0x1c,param_30);
    _objc_storeWeak(puVar1 + 0x1d,param_31);
    _objc_retain(param_32);
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = param_32;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x20,param_33);
    _objc_retain(param_34);
    uVar3 = puVar1[0x21];
    puVar1[0x21] = param_34;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x22,param_35);
    _objc_storeWeak(puVar1 + 0x13,param_36);
    _objc_storeWeak(puVar1 + 0x23,param_37);
    _objc_retain(param_39);
    uVar3 = puVar1[0x25];
    puVar1[0x25] = param_39;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0x26,param_40);
    _objc_storeWeak(puVar1 + 0x24,param_38);
    _objc_retain(param_41);
    uVar3 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_storeWeak(puVar1 + 0x29,param_43);
    _objc_release(param_11);
  }
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
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



/* Entry: 1061b3544; end: 1061b356b;  */

void FUN_1061b3544(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061b356c; end: 1061b363b; -[SCCameraChatLensFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1061b356c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c092b00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,uVar1,10);
  _objc_release(uVar1);
  _objc_release(param_4);
  param_1 = param_1 + 0x118;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf08e40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,lVar3,0xc);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061b363c; end: 1061b3643; -[SCCameraChatLensFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_1061b363c(void)

{
  return 0;
}



/* Entry: 1061b3644; end: 1061b364b; -[SCCameraChatLensFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_1061b3644(void)

{
  return 2;
}



/* Entry: 1061b364c; end: 1061b402b; -[SCCameraChatLensFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1061b364c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
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
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
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
  undefined8 uVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined **ppuVar43;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be4ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be4ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c8840;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126c8800;
  _objc_alloc();
  lVar6 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar7 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar9 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar10 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar11 = param_1 + 200;
  _objc_loadWeakRetained();
  lVar12 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar13 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  lVar14 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar15 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar16 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  lVar17 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar18 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar19 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar20 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010be4b300();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010be4ab00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c093320();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b3e0();
  uVar26 = param_1 + 0xb0;
  _objc_loadWeakRetained();
  uVar27 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c280320();
  if ((uVar28 & 1) == 0) {
    lStack_3e0 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lStack_3e8 = lStack_3e0;
    func_0x00010c093320();
    _objc_retainAutoreleasedReturnValue();
    lStack_3f0 = lStack_3e8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b3e0();
  }
  lVar29 = param_1 + 0xb0;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280320();
  lVar31 = param_1 + 0xb0;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280320();
  lVar33 = param_1;
  func_0x00010be4b300();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010be4a740();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + 0x100;
  _objc_loadWeakRetained();
  lVar36 = param_1 + 0x110;
  _objc_loadWeakRetained();
  lVar37 = param_1 + 0x120;
  _objc_loadWeakRetained();
  lVar38 = param_1 + 0x130;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c08d660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbce0();
  uVar40 = *(undefined8 *)(param_1 + 0x150);
  *(undefined **)(param_1 + 0x150) = puVar5;
  _objc_release(uVar40);
  _objc_retain(puVar5);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  if ((uVar28 & 1) == 0) {
    _objc_release(lStack_3f0);
    _objc_release(lStack_3e8);
    _objc_release(lStack_3e0);
  }
  _objc_release(uVar27);
  _objc_release(uVar26);
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
  lVar6 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1;
  func_0x00010be4a6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46f40(puVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1061b402c;
  puStack_90 = &UNK_11084ea10;
  lStack_88 = param_1;
  _objc_retain(param_4);
  ppuVar41 = &puStack_a8;
  uStack_80 = param_4;
  FUN_1061b402c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar42 = ppuVar41;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1061b4248;
  puStack_b8 = &UNK_11084ed60;
  ppuVar43 = ppuVar42;
  lStack_b0 = param_1;
  (*(code *)ppuVar42[2])();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar42);
  _objc_release(ppuVar41);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1061b4290;
  puStack_e8 = &UNK_11084ea10;
  lStack_e0 = param_1;
  _objc_retain(param_4);
  ppuVar41 = &puStack_100;
  uStack_d8 = param_4;
  FUN_1061b4290();
  _objc_retainAutoreleasedReturnValue();
  ppuVar42 = ppuVar41;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1061b452c;
  puStack_110 = &UNK_11084ed60;
  lStack_108 = param_1;
  (*(code *)ppuVar42[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar42);
  _objc_release(ppuVar41);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1061b4574;
  puStack_148 = &UNK_11084e830;
  lStack_140 = param_1;
  _objc_retain(param_4);
  uStack_138 = param_4;
  lStack_130 = lVar2;
  _objc_retain(lVar2);
  ppuVar42 = &puStack_160;
  FUN_1061b4574(ppuVar42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb7c0(param_3);
  _objc_release(ppuVar42);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1061b4984;
  puStack_180 = &UNK_11084e830;
  lStack_178 = param_1;
  _objc_retain(param_4);
  uStack_170 = param_4;
  _objc_retain(param_5);
  ppuVar42 = &puStack_198;
  uStack_168 = param_5;
  FUN_1061b4984(ppuVar42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb900(param_3);
  _objc_release(ppuVar42);
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_1061b5238;
  puStack_1c8 = &UNK_1109143c8;
  lStack_1c0 = param_1;
  _objc_retain(param_4);
  uStack_1b8 = param_4;
  _objc_retain(param_5);
  uStack_1b0 = param_5;
  ppuStack_1a8 = ppuVar43;
  puStack_1a0 = puVar4;
  _objc_retain();
  _objc_retain(ppuVar43);
  ppuVar42 = &puStack_1e0;
  FUN_1061b5238(ppuVar42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169dc0(param_3);
  _objc_release(ppuVar42);
  puStack_218 = puVar1;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1061b5480;
  puStack_200 = &UNK_11084e830;
  lStack_1f8 = param_1;
  _objc_retain(param_4);
  uStack_1f0 = param_4;
  _objc_retain(param_5);
  ppuVar42 = &puStack_218;
  uStack_1e8 = param_5;
  FUN_1061b5480(ppuVar42);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd5c0(param_3);
  _objc_release(ppuVar42);
  puStack_250 = puVar1;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_1061b568c;
  puStack_238 = &UNK_11084e830;
  lStack_230 = param_1;
  _objc_retain(param_4);
  uStack_228 = param_4;
  uStack_220 = param_5;
  _objc_retain(param_5);
  ppuVar42 = &puStack_250;
  FUN_1061b568c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1773e0(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar42);
  puStack_280 = puVar1;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_1061b5898;
  puStack_268 = &UNK_11084ea10;
  lStack_260 = param_1;
  uStack_258 = param_4;
  _objc_retain(param_4);
  ppuVar42 = &puStack_280;
  FUN_1061b5898();
  _objc_retainAutoreleasedReturnValue();
  ppuVar41 = ppuVar42;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar41[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar41);
  _objc_release(ppuVar42);
  _objc_release(uStack_258);
  _objc_release(uStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  _objc_release(puStack_1a0);
  _objc_release(ppuStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_d8);
  _objc_release(ppuVar43);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar3);
  return;
}



/* Entry: 1061b402c; end: 1061b4197;  */

void FUN_1061b402c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b4198;
  puStack_68 = &UNK_1109142d8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b4198; end: 1061b4217;  */

void FUN_1061b4198(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1 + 0x118;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf08e40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061b4218; end: 1061b428f;  */

bool FUN_1061b4218(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b4290; end: 1061b43fb;  */

void FUN_1061b4290(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b43fc;
  puStack_68 = &UNK_110914308;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b43fc; end: 1061b44fb;  */

void FUN_1061b43fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c8810;
    _objc_alloc(PTR_PTR_1126c8810);
    lVar1 = param_1 + 0x130;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c278c20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023080(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1061b44fc; end: 1061b4573;  */

bool FUN_1061b44fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b4574; end: 1061b46f7;  */

void FUN_1061b4574(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061b46f8;
  puStack_70 = &UNK_110914338;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b46f8; end: 1061b4953;  */

void FUN_1061b46f8(long param_1,undefined8 param_2)

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
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c8808;
    _objc_alloc();
    lVar3 = lVar1 + 0x130;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0xd0;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c092ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c092bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + 0x38;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf2bbc0();
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    lVar11 = lVar1 + 0x68;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c094e60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + 0xb8;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + 0x48;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + 0x88;
    _objc_loadWeakRetained();
    lVar17 = lVar1 + 0x90;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar1 + 0x110;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar1 + 0x120;
    _objc_loadWeakRetained();
    func_0x00010c022fc0(puVar2,param_2,lVar4,lVar6,lVar8,lVar10,uVar22,lVar12,lVar13,lVar15,lVar16,
                        lVar18,lVar20,lVar21,0);
    puVar23 = puVar2;
    func_0x00010c09ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
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
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1061b4954; end: 1061b4983;  */

bool FUN_1061b4954(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b4984; end: 1061b4b07;  */

void FUN_1061b4984(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dabc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061b4b08;
  puStack_70 = &UNK_110914368;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b4b08; end: 1061b4dbb;  */

void FUN_1061b4b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR_PTR_1126c8848;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061b4dbc;
    puStack_88 = &UNK_11084e7d0;
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar17);
    ppuVar3 = &puStack_a0;
    uStack_80 = uVar17;
    FUN_1061b4dbc();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2 + 0x130;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1061b4f08;
    puStack_b0 = &UNK_11084e7d0;
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar17);
    ppuVar6 = &puStack_c8;
    uStack_a8 = uVar17;
    FUN_1061b4f08();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1061b5054;
    puStack_d8 = &UNK_11084e7d0;
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar17);
    ppuVar7 = &puStack_f0;
    uStack_d0 = uVar17;
    FUN_1061b5054();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2 + 0xe8;
    _objc_loadWeakRetained();
    lVar9 = lVar2 + 0xe0;
    _objc_loadWeakRetained();
    lVar10 = lVar2 + 0x78;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdca5c0();
    lVar12 = lVar2 + 0xb0;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280340();
    lVar14 = lVar2 + 0x148;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0240a0(puVar16,param_2,ppuVar3,0,lVar5,ppuVar6,ppuVar7,lVar8,lVar9,lVar11,1);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(ppuVar7);
    _objc_release(uStack_d0);
    _objc_release(ppuVar6);
    _objc_release(uStack_a8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(ppuVar3);
    _objc_release(uStack_80);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1061b4dbc; end: 1061b4e97;  */

void FUN_1061b4dbc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b4e98; end: 1061b4f07;  */

void FUN_1061b4e98(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b4f08; end: 1061b4fe3;  */

void FUN_1061b4f08(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b4fe4; end: 1061b5053;  */

void FUN_1061b4fe4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c091780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b5054; end: 1061b512f;  */

void FUN_1061b5054(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b5130; end: 1061b519f;  */

void FUN_1061b5130(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c098840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b51a0; end: 1061b5237;  */

uint FUN_1061b51a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c093320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf9b3e0();
    uVar5 = (uint)lVar4 ^ 1;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1061b5238; end: 1061b53f3;  */

void FUN_1061b5238(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1061b53f4;
  puStack_90 = &UNK_110914398;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar5;
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_68);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b53f4; end: 1061b547f;  */

void FUN_1061b53f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdcf040(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b5480; end: 1061b5603;  */

void FUN_1061b5480(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061b5604;
  puStack_70 = &UNK_11084e9b0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b5604; end: 1061b568b;  */

void FUN_1061b5604(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010be63d20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b568c; end: 1061b580f;  */

void FUN_1061b568c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf5c420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061b5810;
  puStack_70 = &UNK_11084e9b0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b5810; end: 1061b5897;  */

void FUN_1061b5810(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bdd9560(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b5898; end: 1061b5a03;  */

void FUN_1061b5898(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b5a04;
  puStack_68 = &UNK_1109143f8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b5a04; end: 1061b5b9b;  */

void FUN_1061b5a04(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar13;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c8850;
    _objc_alloc();
    lVar1 = param_1 + 0x130;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be4a680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x120;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c27eec0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + 0xb0;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c2802e0();
    func_0x00010c022f20((double)lVar12,puVar13,param_2,lVar2,lVar4,lVar6,lVar7,lVar9);
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
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1061b5b9c; end: 1061b5c93;  */

bool FUN_1061b5b9c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1 + 0xb0;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c280320();
    if ((int)lVar4 == 0) {
      bVar1 = false;
    }
    else {
      uVar5 = param_1 + 0xb0;
      _objc_loadWeakRetained();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c280300();
      if ((uVar7 & 1) == 0) {
        lVar4 = param_1 + 0x120;
        _objc_loadWeakRetained(lVar4);
        lVar8 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar8 != 0;
        _objc_release();
        _objc_release(lVar4);
      }
      else {
        bVar1 = false;
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1061b5c94; end: 1061b5cdb;  */

void FUN_1061b5c94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0667a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061b5cdc; end: 1061b5d7b; -[SCCameraChatLensFeatureProviderPluginWorkflow _arBarBottomUIArbitrator:arBarFeature:collectionUIContender:] */

void FUN_1061b5cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    func_0x00010befa120(puVar1,param_2,param_5);
  }
  func_0x00010bef8360(puVar1,param_2,param_4);
  puVar2 = PTR_PTR_1126c8858;
  _objc_alloc(PTR_PTR_1126c8858);
  func_0x00010c002b00();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b5d7c; end: 1061b5eb3; -[SCCameraChatLensFeatureProviderPluginWorkflow _ngsBarArbitrator:] */

void FUN_1061b5d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar10;
  func_0x00010bf08e60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126b0178;
  _objc_alloc();
  puVar7 = puVar1;
  func_0x00010c002b00();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_1061b5eb4;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar1 = puVar7;
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c093800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c071800();
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if ((int)puVar5 != 0) {
      puVar4 = puVar7;
      func_0x00010c11a2a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c093800();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = 1;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126c8860;
    _objc_alloc();
    puVar8 = puVar1;
    func_0x00010c002b00();
    _objc_release(puVar1);
    puVar6 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pcStack_a8 = FUN_1061b6004;
      puStack_d0 = puVar5;
      puStack_c8 = puVar4;
      puStack_c0 = puVar1;
      puStack_b8 = puVar7;
      ppuStack_b0 = &puStack_60;
      _objc_retain(puVar8);
      _objc_retain(uVar9);
      puVar4 = PTR_PTR_1126ae720;
      uVar10 = *(undefined8 *)(puVar6 + 0x128);
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_1061b60e4;
      puStack_f0 = &UNK_110914428;
      puStack_e8 = puVar8;
      uStack_e0 = uVar9;
      uStack_d8 = uVar10;
      _objc_retain(uVar9);
      _objc_retain(puVar8);
      _objc_retain(uVar10);
      func_0x00010bf11fe0(puVar4,param_2,&puStack_108);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_e0);
      _objc_release(puStack_e8);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(puVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061b5eb4; end: 1061b6003; -[SCCameraChatLensFeatureProviderPluginWorkflow _cameraTooltipArbitrator:] */

void FUN_1061b5eb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c093800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c071800();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar3 != 0) {
    lVar1 = param_3;
    func_0x00010c11a2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c093800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  puVar5 = PTR_PTR_1126c8860;
  _objc_alloc();
  puVar6 = puVar4;
  func_0x00010c002b00();
  _objc_release(puVar4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_1061b6004;
    lStack_80 = lVar3;
    puStack_78 = puVar5;
    puStack_70 = puVar4;
    lStack_68 = param_3;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_retain(param_4);
    puVar5 = PTR_PTR_1126ae720;
    uVar7 = *(undefined8 *)(lVar1 + 0x128);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1061b60e4;
    puStack_a0 = &UNK_110914428;
    puStack_98 = puVar6;
    uStack_90 = param_4;
    uStack_88 = uVar7;
    _objc_retain(param_4);
    _objc_retain(puVar6);
    _objc_retain(uVar7);
    func_0x00010bf11fe0(puVar5,param_2,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_90);
    _objc_release(puStack_98);
    _objc_release(uVar7);
    _objc_release(param_4);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061b6004; end: 1061b60e3; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensCollectionUIContenders:collectionUIContender:lensCarouselConfigProvider:] */

void FUN_1061b6004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061b60e4;
  puStack_50 = &UNK_110914428;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = uVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b60e4; end: 1061b645f;  */

void FUN_1061b60e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR_PTR_1126c8818;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c096a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c8818;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar5;
  func_0x00010c093c40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar20;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140300();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c091720();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c093b00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c096aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar20);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010befa120(puVar1);
  }
  lVar18 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar18 != 0) {
    uVar19 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar19);
  }
  puVar4 = PTR_PTR_1126c8818;
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar20;
  func_0x00010c092b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140300(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(uVar20);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914458);
  return;
}



/* Entry: 1061b6460; end: 1061b6473; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensFavoritesLayoutStrategy] */

void FUN_1061b6460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914458);
  return;
}



/* Entry: 1061b6474; end: 1061b6497;  */

void FUN_1061b6474(void)

{
  _objc_alloc(PTR_PTR_1126c8820);
  func_0x00010c037be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061b6498; end: 1061b64d7; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensExplorerStudySettings] */

void FUN_1061b6498(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061b64d8; end: 1061b64eb; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensExplorerButtonStrategy:] */

void FUN_1061b64d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914478);
  return;
}



/* Entry: 1061b64ec; end: 1061b6507;  */

void FUN_1061b64ec(void)

{
  _objc_opt_new(PTR_PTR_1126c8830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061b6508; end: 1061b6663; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensLeftFromFavoritesButtonLayoutStrategy:isForCollectionsBackButton:] */

void FUN_1061b6508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1061b65b0;
  puStack_48 = &UNK_110914258;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b6664; end: 1061b673f;  */

void FUN_1061b6664(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b6740; end: 1061b67af;  */

void FUN_1061b6740(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b67b0; end: 1061b68ef; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensCollectionsSendToButtonLayoutStrategy:] */

void FUN_1061b67b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1061b6848;
  puStack_30 = &UNK_1109142a8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b68f0; end: 1061b69cb;  */

void FUN_1061b68f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b69cc; end: 1061b6a3b;  */

void FUN_1061b69cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b6a3c; end: 1061b6a4f; -[SCCameraChatLensFeatureProviderPluginWorkflow _lensCloseButtonV2LayoutStrategy] */

void FUN_1061b6a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914498);
  return;
}



/* Entry: 1061b6a50; end: 1061b6a73;  */

void FUN_1061b6a50(void)

{
  _objc_alloc(PTR_PTR_1126c8868);
  func_0x00010bfee540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061b6a74; end: 1061b6ae3; -[SCCameraChatLensFeatureProviderPluginWorkflow _alwaysOnCarouselEnabled] */

long FUN_1061b6a74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf02120();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1061b6ae4; end: 1061b6c67; -[SCCameraChatLensFeatureProviderPluginWorkflow .cxx_destruct] */

void FUN_1061b6ae4(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_destroyWeak(param_1 + 0x118);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061b6c68; end: 1061b6d9f;  */

void FUN_1061b6c68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c8878;
    _objc_alloc(PTR_PTR_1126c8878);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1061b6da0;
    puStack_60 = &UNK_11084e7d0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    ppuVar2 = &puStack_78;
    uStack_58 = uVar5;
    FUN_1061b6da0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0xb8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023400(puVar6,param_2,ppuVar2,lVar4,uVar5,*(undefined8 *)(lVar1 + 0x98),
                        *(undefined8 *)(lVar1 + 0xf0));
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1061b6da0; end: 1061b6e7b;  */

void FUN_1061b6da0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b6e7c; end: 1061b6eeb;  */

void FUN_1061b6e7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c091780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b6eec; end: 1061b6f1b;  */

bool FUN_1061b6eec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b6f1c; end: 1061b7057;  */

void FUN_1061b6f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c8880;
    _objc_alloc(PTR_PTR_1126c8880);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1061b7058;
    puStack_60 = &UNK_11084e7d0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    ppuVar2 = &puStack_78;
    uStack_58 = uVar5;
    FUN_1061b7058(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c092ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0xc0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024060(puVar6,param_2,ppuVar2,lVar4,uVar5,*(undefined8 *)(lVar1 + 0x98),
                        *(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0x100));
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1061b7058; end: 1061b7133;  */

void FUN_1061b7058(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b7134; end: 1061b71a3;  */

void FUN_1061b7134(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b71a4; end: 1061b71db;  */

byte FUN_1061b71a4(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa1);
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1061b71dc; end: 1061b7413;  */

void FUN_1061b71dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126c8888;
    _objc_alloc();
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c093ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c093c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c093b20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x70;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c093320();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c093ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d6760(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c094480();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + 0x60;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024000(puVar17,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,uVar11,lVar13,uVar14,lVar16,
                        *(undefined8 *)(param_1 + 0x98),*(undefined1 *)(param_1 + 0xa3));
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1061b7414; end: 1061b744b;  */

byte FUN_1061b7414(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa2);
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1061b744c; end: 1061b7687;  */

void FUN_1061b744c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126c8888;
    _objc_alloc();
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c093ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c093c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c093b20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x70;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c093320();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c093ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0d6760(uVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c094480();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1 + 0x60;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c024000(puVar17,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,uVar11,lVar13,uVar14,lVar16,
                        *(undefined8 *)(param_1 + 0x98),*(byte *)(param_1 + 0xa6) ^ 1);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 1061b7688; end: 1061b76bf;  */

byte FUN_1061b7688(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa4);
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1061b76c0; end: 1061b772f;  */

void FUN_1061b76c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf2b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b7730; end: 1061b787f;  */

void FUN_1061b7730(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c8898;
    _objc_alloc();
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x108);
    uVar11 = *(undefined8 *)(param_1 + 0x98);
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c094480();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xe8);
    lVar7 = param_1 + 0x90;
    _objc_loadWeakRetained();
    func_0x00010c009d40(puVar10,param_2,lVar1,uVar2,uVar8,uVar11,lVar4,lVar6,uVar9,lVar7,
                        *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x100));
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1061b7880; end: 1061b78b7;  */

byte FUN_1061b7880(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa5);
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1061b78b8; end: 1061b7a07;  */

void FUN_1061b78b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c8898;
    _objc_alloc();
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x108);
    uVar11 = *(undefined8 *)(param_1 + 0x98);
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c094480();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xe8);
    lVar7 = param_1 + 0x90;
    _objc_loadWeakRetained();
    func_0x00010c009d40(puVar10,param_2,lVar1,uVar2,uVar8,uVar11,lVar4,lVar6,uVar9,lVar7,
                        *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x100));
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1061b7a08; end: 1061b7a3f;  */

byte FUN_1061b7a08(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa6);
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1061b7a40; end: 1061b7a9f;  */

void FUN_1061b7a40(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c092bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b7aa0; end: 1061b7b3f;  */

void FUN_1061b7aa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c88a0;
    _objc_alloc(PTR_PTR_1126c88a0);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    lVar1 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb4c0(puVar3,param_2,uVar4,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b7b40; end: 1061b7c87; -[SCCameraCommonLensFeatureConfigurator .cxx_destruct] */

void FUN_1061b7b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061b7c88; end: 1061b8333; -[SCCameraLiveLensPreviewCameraFeatureProviderPluginWorkflow initWithPrivateFeatureContainer:cameraUIScope:cameraUIServices:lensCollectionsModularMode:applicationLifecycleEvents:userSession:navigationServices:lensFavoritesServices:lensContentServices:currentPageTracker:grapheneRegistry:lensPerformerServices:lensLoggerServices:lensExplorerConfigurableNavigatonServices:lensExplorerNavigatonServices:lensUnlockServices:userNetworkServices:blockListedFeatures:lensExplorerStudySettingsServices:lensFavoritesLoggingServices:lensFavoriteNotificationServices:lensExplorerBadgeServices:lensPickerServices:cameraHardwareResource:deeplinkSendToScopeExposer:offPlatformLinkGenerationService:lensInfoButtonVisibility:lensCarouselConfigProvider:lensCarouselFeatureServices:lensesFeatureServices:arBarAdapterServices:arBar:enableARBar:lensExplorerDataServices:lensMediaDownloaderServices:userStorageServices:lensPreferences:lensUserProvider:featureSettingsServices:lensesCameraCapturerStateUpdatesProvider:cameraModeActivationServices:lensCarouselSettingsServices:] */

undefined8 *
FUN_1061b7c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  puStack_70 = PTR_PTR_1126f0290;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 0x19) = param_6;
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_storeWeak(puVar1 + 3,param_7);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_storeWeak(puVar1 + 7,param_3);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_storeWeak(puVar1 + 0xc,param_13);
    _objc_storeWeak(puVar1 + 0xd,param_14);
    _objc_storeWeak(puVar1 + 0x10,param_15);
    _objc_storeWeak(puVar1 + 0xe,param_16);
    _objc_storeWeak(puVar1 + 0xf,param_17);
    _objc_storeWeak(puVar1 + 0x11,param_18);
    _objc_storeWeak(puVar1 + 0x12,param_19);
    _objc_storeWeak(puVar1 + 0x17,param_21);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar1[0x16] = param_20;
    _objc_storeWeak(puVar1 + 0xb,param_22);
    _objc_storeWeak(puVar1 + 0x14,param_23);
    _objc_storeWeak(puVar1 + 0x13,param_24);
    _objc_storeWeak(puVar1 + 0x15,param_25);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1b,param_27);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_30;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1f,param_31);
    _objc_storeWeak(puVar1 + 0x20,param_32);
    _objc_storeWeak(puVar1 + 0x21,param_33);
    _objc_storeWeak(puVar1 + 0x22,param_34);
    *(undefined1 *)(puVar1 + 0x23) = param_35;
    _objc_storeWeak(puVar1 + 0x24,param_37);
    _objc_storeWeak(puVar1 + 0x25,param_38);
    _objc_storeWeak(puVar1 + 0x26,param_39);
    _objc_storeWeak(puVar1 + 0x28,param_40);
    _objc_storeWeak(puVar1 + 0x29,param_41);
    _objc_storeWeak(puVar1 + 0x2a,param_42);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_43;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2c,param_44);
    _objc_storeWeak(puVar1 + 0x2d,param_45);
    _objc_release(param_12);
  }
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061b8334; end: 1061b835b;  */

void FUN_1061b8334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061b835c; end: 1061b842b; -[SCCameraLiveLensPreviewCameraFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1061b835c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c092b00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,uVar1,10);
  _objc_release(uVar1);
  _objc_release(param_4);
  param_1 = param_1 + 0x108;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf08e40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,lVar3,0xc);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061b842c; end: 1061b8433; -[SCCameraLiveLensPreviewCameraFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_1061b842c(void)

{
  return 0;
}



/* Entry: 1061b8434; end: 1061b843b; -[SCCameraLiveLensPreviewCameraFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_1061b8434(void)

{
  return 2;
}



/* Entry: 1061b843c; end: 1061b8c53; -[SCCameraLiveLensPreviewCameraFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1061b843c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
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
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be4ac40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27ff80();
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c093320();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b3e0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(uVar3);
  puVar8 = PTR_PTR_1126c8800;
  _objc_alloc();
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar7 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar9 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar10 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  lVar11 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar12 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar13 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar14 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar15 = param_1 + 0x98;
  _objc_loadWeakRetained();
  lVar16 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar17 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar18 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar19 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  lVar20 = param_1;
  func_0x00010be4aca0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010be4aca0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010be4b300();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010be4ab00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c093320();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b3e0();
  uVar27 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ff80();
  uVar28 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ff80();
  lVar29 = param_1;
  func_0x00010be4b300();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010be4a740();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  lVar32 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar33 = param_1 + 0x110;
  _objc_loadWeakRetained();
  lVar34 = param_1 + 0xf8;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c08d660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbce0();
  uVar36 = *(undefined8 *)(param_1 + 0x138);
  *(undefined **)(param_1 + 0x138) = puVar8;
  _objc_release(uVar36);
  _objc_retain(puVar8);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
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
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010be4a6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46f40(puVar8);
  _objc_release(lVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1061b8c54;
  puStack_90 = &UNK_11084ea10;
  lStack_88 = param_1;
  _objc_retain(param_4);
  ppuVar38 = &puStack_a8;
  uStack_80 = param_4;
  FUN_1061b8c54();
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar38;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1061b8ec4;
  puStack_b8 = &UNK_11084ed60;
  lStack_b0 = param_1;
  (*(code *)ppuVar37[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar37);
  _objc_release(ppuVar38);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1061b8f0c;
  puStack_e8 = &UNK_11084ea10;
  lStack_e0 = param_1;
  _objc_retain(param_4);
  ppuVar38 = &puStack_100;
  uStack_d8 = param_4;
  FUN_1061b8f0c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar37 = ppuVar38;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1061b91a8;
  puStack_110 = &UNK_11084ed60;
  lStack_108 = param_1;
  (*(code *)ppuVar37[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar37);
  _objc_release(ppuVar38);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1061b91f0;
  puStack_148 = &UNK_11084e830;
  lStack_140 = param_1;
  _objc_retain(param_4);
  uStack_138 = param_4;
  lStack_130 = lVar2;
  _objc_retain(lVar2);
  ppuVar37 = &puStack_160;
  FUN_1061b91f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb7c0(param_3);
  _objc_release(ppuVar37);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1061b9618;
  puStack_178 = &UNK_11084ea10;
  lStack_170 = param_1;
  _objc_retain(param_4);
  ppuVar37 = &puStack_190;
  uStack_168 = param_4;
  FUN_1061b9618();
  _objc_retainAutoreleasedReturnValue();
  ppuVar38 = ppuVar37;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x1061b9934;
  puStack_1a0 = &UNK_11084ed60;
  lStack_198 = param_1;
  (*(code *)ppuVar38[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar38);
  _objc_release(ppuVar37);
  puStack_1f0 = puVar1;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_1061b997c;
  puStack_1d8 = &UNK_11084e830;
  lStack_1d0 = param_1;
  uStack_1c8 = param_4;
  uStack_1c0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  ppuVar37 = &puStack_1f0;
  FUN_1061b997c(ppuVar37);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb900(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar37);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_168);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_d8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(puVar8);
  return;
}



/* Entry: 1061b8c54; end: 1061b8dbf;  */

void FUN_1061b8c54(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b8dc0;
  puStack_68 = &UNK_1109145d8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b8dc0; end: 1061b8e8b;  */

void FUN_1061b8dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c88a8;
    _objc_alloc(PTR_PTR_1126c88a8);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0xf8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061980(puVar5,param_2,lVar2,0,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061b8e8c; end: 1061b8f0b;  */

byte FUN_1061b8e8c(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 200);
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1061b8f0c; end: 1061b9077;  */

void FUN_1061b8f0c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b9078;
  puStack_68 = &UNK_110914308;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b9078; end: 1061b9177;  */

void FUN_1061b9078(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c8810;
    _objc_alloc(PTR_PTR_1126c8810);
    lVar1 = param_1 + 0xf8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c278c20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023080(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1061b9178; end: 1061b91ef;  */

bool FUN_1061b9178(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b91f0; end: 1061b9373;  */

void FUN_1061b91f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061b9374;
  puStack_70 = &UNK_110914338;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b9374; end: 1061b95e7;  */

void FUN_1061b9374(long param_1,undefined8 param_2)

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
  undefined *puVar24;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c8808;
    _objc_alloc();
    lVar3 = lVar1 + 0xf8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0x98;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c092ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + 0x70;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c092bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + 8;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010bf2bbc0();
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    lVar11 = lVar1 + 0x80;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c094e60();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1 + 0x120;
    _objc_loadWeakRetained();
    lVar14 = lVar1 + 0x68;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + 0x128;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0c4b20();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + 0x130;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar1 + 0x110;
    _objc_loadWeakRetained();
    func_0x00010c022fc0(puVar2,param_2,lVar4,lVar6,lVar8,lVar10,uVar23,lVar12,lVar13,lVar15,lVar17,
                        lVar19,lVar21,lVar22,0);
    puVar24 = puVar2;
    func_0x00010c09ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
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
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 1061b95e8; end: 1061b9617;  */

bool FUN_1061b95e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b9618; end: 1061b9783;  */

void FUN_1061b9618(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b9784;
  puStack_68 = &UNK_1109143f8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b9784; end: 1061b98eb;  */

void FUN_1061b9784(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c8850;
    _objc_alloc(PTR_PTR_1126c8850);
    lVar1 = param_1 + 0xf8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be4a680(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x110;
    _objc_loadWeakRetained(lVar7);
    lVar8 = param_1 + 0x100;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c27eec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022f20(0x4044000000000000,puVar10,param_2,lVar2,lVar4,lVar6,lVar7,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1061b98ec; end: 1061b997b;  */

long FUN_1061b98ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010beb3740(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061b997c; end: 1061b9aff;  */

void FUN_1061b997c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dabc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061b9b00;
  puStack_70 = &UNK_110914368;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b9b00; end: 1061b9d9f;  */

void FUN_1061b9b00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126c8848;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061b9da0;
    puStack_88 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    ppuVar3 = &puStack_a0;
    uStack_80 = uVar14;
    FUN_1061b9da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2 + 0xf8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c08d660();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1061b9eec;
    puStack_b0 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    ppuVar6 = &puStack_c8;
    uStack_a8 = uVar14;
    FUN_1061b9eec();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1061ba038;
    puStack_d8 = &UNK_11084e7d0;
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar14);
    ppuVar7 = &puStack_f0;
    uStack_d0 = uVar14;
    FUN_1061ba038(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2 + 0x140;
    _objc_loadWeakRetained();
    lVar9 = lVar2 + 0x148;
    _objc_loadWeakRetained();
    lVar10 = lVar2 + 0x150;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdca5c0();
    uVar14 = *(undefined8 *)(lVar2 + 0xf0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ffa0();
    lVar12 = lVar2 + 0x160;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0240a0(puVar15,param_2,ppuVar3,0,lVar5,ppuVar6,ppuVar7,lVar8,lVar9,lVar11,1);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar14);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(ppuVar7);
    _objc_release(uStack_d0);
    _objc_release(ppuVar6);
    _objc_release(uStack_a8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(ppuVar3);
    _objc_release(uStack_80);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}


