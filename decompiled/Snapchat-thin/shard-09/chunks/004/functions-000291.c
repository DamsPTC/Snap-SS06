/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d417c4; end: 106d418af; +[SCGalleryOperaMediaManagerHelper displayDateTitleForMonthlySnap:] */

void FUN_106d417c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010b5f7a24(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010bf657a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x00010c22d3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db2798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106d418b0; end: 106d41f53; -[SCMemoriesOperaMediaManagerBuilder initWithCircumstanceEngine:encryptedContentManager:memoriesCloudFS:memoriesDataObjectContext:memoriesLegacyLogger:memoriesMergedDataSource:memoriesSpectaclesContentDataSource:memoriesStreamingManager:musicMediaLoader:ngsmePlayerFactory:previewAssetVideoProviderFactory:snapDocManager:snapDocOperaParser:spectaclesAuxiliaryContentServices:userSession:userTrackedLogger:voiceoverMediaLoader:memoriesCachingMediaHelper:cachingMediaManager:gallerySearchIndexer:memoriesTrackingImageProcessCommandScopeExposer:audioProcessingSessionFactory:reverseAudioCache:snapDocDownloadingService:memoriesSnapDocEncryptionManager:memoriesExperimentService:creativeToolsMemoriesResources:grapheneRegistry:cameraConfig:coreConfigProvider:musicServices:cloudFSServices:genAIDreamsService:previewABProvider:] */

undefined8 *
FUN_106d418b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

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
  puStack_70 = PTR_PTR_1126f6958;
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
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x15,param_23);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_36;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
  }
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



/* Entry: 106d41f54; end: 106d41fcb; -[SCMemoriesOperaMediaManagerBuilder getOrBuildOperaMediaManager] */

void FUN_106d41f54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _os_unfair_lock_lock(param_1 + 0x110);
  lVar2 = *(long *)(param_1 + 0x108);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bdd59c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    *(long *)(param_1 + 0x108) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x108);
  }
  _objc_retain(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106d41fcc; end: 106d4204b; -[SCMemoriesOperaMediaManagerBuilder getOrBuildOperaMediaManagerForCameraRoll] */

void FUN_106d41fcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x120);
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d24e0;
    _objc_alloc();
    func_0x00010bffe560();
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(undefined **)(param_1 + 0x118) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x118);
  }
  _objc_retain(lVar3);
  _os_unfair_lock_unlock(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d4204c; end: 106d42193; -[SCMemoriesOperaMediaManagerBuilder _build] */

void FUN_106d4204c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar17 = PTR_PTR_1126d24e8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar21 = *(undefined8 *)(param_1 + 0x40);
  uVar19 = *(undefined8 *)(param_1 + 0x58);
  uVar20 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar15 = *(undefined8 *)(param_1 + 0x90);
  uVar22 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  uVar16 = *(undefined8 *)(param_1 + 0xa0);
  lVar18 = param_1 + 0xa8;
  _objc_loadWeakRetained();
  func_0x00010c008a20(puVar17,param_2,uVar14,uVar1,uVar2,uVar11,uVar9,uVar5,uVar19,uVar12,uVar10,
                      uVar3,uVar21,uVar4,uVar20,uVar13,uVar7,uVar6,uVar15,uVar22,uVar8,uVar16,lVar18
                      ,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),
                      *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x128),
                      *(undefined8 *)(param_1 + 0x130));
  _objc_release(lVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 106d42194; end: 106d42357; -[SCMemoriesOperaMediaManagerBuilder .cxx_destruct] */

void FUN_106d42194(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
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
  _objc_destroyWeak(param_1 + 0xa8);
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



/* Entry: 106d42358; end: 106d4239f; -[SCMemoriesOperaPresentContext initWithMemoriesOperaPresentOrigin:] */

void FUN_106d42358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6960;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106d423a0; end: 106d423a7; -[SCMemoriesOperaPresentContext memoriesOperaPresentOrigin] */

undefined8 FUN_106d423a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d423a8; end: 106d424fb; -[SCMemoriesOperaPresenterBuilderImpl initWithMemoriesMergedDataSource:memoriesOperaSessionPresenter:memoriesCloudFS:memoriesUserDefaultsManager:circumstanceEngine:memoriesExperimentService:] */

undefined1 *
FUN_106d423a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f6968;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d424fc; end: 106d42583; -[SCMemoriesOperaPresenterBuilderImpl buildCameraRollAndStoriesPresenterWithConfiguration:delegate:] */

void FUN_106d424fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d24f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02aa20();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d42584; end: 106d425fb; -[SCMemoriesOperaPresenterBuilderImpl buildWithConfiguration:delegate:] */

void FUN_106d42584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d24f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02aa40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d425fc; end: 106d4265b; -[SCMemoriesOperaPresenterBuilderImpl .cxx_destruct] */

void FUN_106d425fc(long param_1)

{
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



/* Entry: 106d4265c; end: 106d428df; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper initWithMemoriesOperaSessionPresenter:configuration:delegate:memoriesMergedDataSource:memoriesCloudFS:memoriesUserDefaultsManager:circumstanceEngine:memoriesExperimentService:] */

undefined8 *
FUN_106d4265c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126f6970;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_5);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    lVar4 = param_4;
    func_0x00010c2356a0();
    *(char *)(puVar1 + 0xc) = (char)lVar4;
    puVar3 = PTR_PTR_1126bf830;
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07e800();
    *(char *)((long)puVar1 + 0x61) = (char)puVar3;
    _objc_release(uVar2);
    lVar4 = param_4;
    func_0x00010c29e220();
    *(bool *)((long)puVar1 + 0x62) = lVar4 == 0x5b;
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



/* Entry: 106d428e0; end: 106d42923; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper dealloc] */

void FUN_106d428e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bed1b00();
  puStack_28 = PTR_PTR_1126f6970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d42924; end: 106d42963; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper isPresented] */

undefined8 FUN_106d42924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ab40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106d42964; end: 106d42f2b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper presentOperaFromViewController:pageHeight:items:initialIndex:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:initialItemId:sourcePageName:sourceView:topInset:transitionAnimator:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_106d42964(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar14 = param_1;
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bdd67e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_3 + 0x38);
  *(long *)(param_3 + 0x38) = lVar2;
  _objc_release(uVar12);
  uVar3 = *(ulong *)(param_3 + 0x38);
  func_0x00010bfb1100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cdc48;
  _objc_opt_class(PTR_PTR_1126cdc48);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar13 = *(undefined **)(param_3 + 0x40);
  uVar5 = uVar1;
  func_0x00010c0844e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar2 = param_3;
  func_0x00010becf080();
  uVar12 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010bf63f20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_stack_00000008);
  if (in_stack_00000008 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    if (lVar2 < 3) {
      if (lVar2 != 0) {
        if (lVar2 == 1) {
          puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
          puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010bfb68e0(in_stack_00000008);
          _CGRectGetWidth();
          uVar8 = 0;
          func_0x000108df6aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe7c60(uVar14,puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bf60(puVar13);
          _objc_release(puVar11);
          _objc_release(uVar8);
          _objc_release(puVar10);
          puVar11 = in_stack_00000008;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar11 == (undefined *)0x0) {
            func_0x00010bfb68e0(in_stack_00000008);
            func_0x00010c19f0e0(puVar13);
          }
          else {
            puVar11 = in_stack_00000008;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(in_stack_00000008);
            func_0x00010bf51460(puVar11);
            func_0x00010c19f0e0(puVar13);
            _objc_release(puVar11);
          }
        }
        else if (lVar2 == 2) {
          _objc_retain(in_stack_00000008);
          puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
          puVar11 = in_stack_00000008;
          _objc_opt_isKindOfClass(in_stack_00000008,puVar13);
          puVar10 = in_stack_00000008;
          if (((ulong)puVar11 & 1) != 0) {
            puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
            _objc_alloc();
            puVar13 = in_stack_00000008;
            func_0x00010bfe6ac0(in_stack_00000008);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01bf60();
            _objc_release(in_stack_00000008);
            _objc_release(puVar13);
            func_0x00010bf4cbe0(in_stack_00000008);
            func_0x00010c182220(puVar10);
            func_0x00010bfb68e0(in_stack_00000008);
            func_0x00010c19f0e0(puVar10);
          }
          puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
          puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010bfb68e0(in_stack_00000008);
          _CGRectGetWidth();
          uVar8 = 1;
          func_0x000108df6aa0(1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe7c60(uVar14,puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bf60();
          _objc_release(puVar13);
          _objc_release(uVar8);
          _objc_release(puVar11);
          func_0x00010bf20c00(puVar7);
          _CGRectGetMidX();
          puVar13 = puVar7;
          func_0x00010c08c0e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1842e0(uVar14);
          _objc_release(puVar13);
          func_0x00010c17d4c0(puVar7);
          puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
          puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010bfe7c80(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bf60(puVar13);
          _objc_release(puVar7);
          _objc_release(puVar11);
          _objc_release(puVar9);
          puVar11 = in_stack_00000008;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar11 == (undefined *)0x0) {
            func_0x00010bfb68e0(in_stack_00000008);
            func_0x00010c19f0e0(puVar13);
          }
          else {
            puVar11 = in_stack_00000008;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(in_stack_00000008);
            func_0x00010bf51460(puVar11);
            func_0x00010c19f0e0(puVar13);
            _objc_release(puVar11);
          }
          _objc_release(puVar10);
        }
        goto LAB_106d42afc;
      }
    }
    else if (4 < lVar2 - 3U) goto LAB_106d42afc;
    _objc_retain(in_stack_00000008);
    puVar13 = in_stack_00000008;
  }
LAB_106d42afc:
  _objc_release(in_stack_00000008);
  func_0x00010c10f0a0(param_1,param_2,uVar12);
  _objc_release(in_stack_00000010);
  _objc_release(param_5);
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000008);
  return;
}



/* Entry: 106d42f2c; end: 106d42fbf; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper currentViewItem] */

void FUN_106d42f2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = uVar2;
  func_0x00010c0844e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106d42fc0; end: 106d430a7; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper updateOperaPlaylistWithItems:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:isCurrentItemInItemsArray:] */

void FUN_106d42fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd67e0(param_1,param_2,param_3,0,param_4,param_5,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bf63f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284140(uVar2,param_2,lVar1,param_6);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d430a8; end: 106d430db; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper resumePlayback] */

void FUN_106d430a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d430dc; end: 106d43127; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper forceDismiss] */

void FUN_106d430dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(uVar1);
  func_0x00010bed1b00(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d43128; end: 106d43173; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper dismissAtOnce] */

void FUN_106d43128(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf831e0();
  _objc_release(uVar1);
  func_0x00010bed1b00(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d43174; end: 106d431d7; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper navigateToItem:] */

undefined8 FUN_106d43174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0d5fe0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106d431d8; end: 106d4320b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper navigateToNextGroupAfterDeferredNavigation] */

void FUN_106d431d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d4320c; end: 106d432f7; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper operaPresenterDidOpenView] */

void FUN_106d4320c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106d4ace0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0844e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf53c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c0eaec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106d432f8; end: 106d432fb; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper operaPresenterWillOpenViewWithOperaItem:] */

void FUN_106d432f8(void)

{
  return;
}



/* Entry: 106d432fc; end: 106d43327; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper operaPresenterDidPresent] */

void FUN_106d432fc(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eaee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d43328; end: 106d43427; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper operaPresenterDidDismiss] */

void FUN_106d43328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106d4ace0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0844e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0ff460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf53c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eae20();
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d43428; end: 106d4346f; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper operaPresenterOverrideTransitionMode] */

undefined8 FUN_106d43428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf60be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becf080(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106d43470; end: 106d4349b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper operaPresenterRequestMemoriesJumpToDreamTab] */

void FUN_106d43470(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eaf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d4349c; end: 106d43597; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _transitionModeForItem:] */

ulong FUN_106d4349c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(uVar1);
    uVar2 = uVar1;
    func_0x00010c0eaf60();
    _objc_release(uVar1);
    goto LAB_106d43568;
  }
  uVar2 = *(ulong *)(param_1 + 0x68);
  func_0x00010c072c20();
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010bfbd100(), uVar2 == 1)) {
    uVar2 = param_3;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (uVar2 < 9) {
      if ((1L << (uVar2 & 0x3f) & 0x6aU) != 0) {
LAB_106d43590:
        uVar2 = 1;
        goto LAB_106d43568;
      }
      if ((1L << (uVar2 & 0x3f) & 0x191U) == 0) goto LAB_106d43568;
    }
    else if (uVar2 == 9999) goto LAB_106d43590;
  }
  uVar2 = 4;
LAB_106d43568:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106d43598; end: 106d43a4b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _playbackItemsFromGalleryItems:initialIndex:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:initialItemId:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_106d43598(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  func_0x00010bf529e0();
  puVar8 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    puVar6 = puVar8;
    do {
      puVar2 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126af4c0;
      _objc_opt_class(PTR_PTR_1126af4c0);
      puVar3 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar8);
      puVar4 = PTR_PTR_1126af4c0;
      puVar8 = puVar2;
      puVar5 = param_1;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        _objc_opt_class(PTR__OBJC_CLASS___PHAsset_1126bd898);
        puVar3 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar4);
        puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar2);
          _objc_opt_class(puVar4);
          puVar3 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            puVar8 = (undefined *)0x0;
          }
          _objc_retain(puVar8);
          _objc_release(puVar2);
          puVar4 = PTR_PTR_1126cdc58;
          _objc_alloc(PTR_PTR_1126cdc58);
          puVar5 = puVar8;
          func_0x00010c09da80(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff4220(puVar4);
          _objc_release(puVar8);
          func_0x00010befa120(puVar1);
LAB_106d437a4:
          _objc_release(puVar4);
          goto LAB_106d437a8;
        }
        puVar4 = PTR_PTR_1126bf7e0;
        _objc_opt_class(PTR_PTR_1126bf7e0);
        puVar3 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar4);
        puVar4 = PTR_PTR_1126bf7e0;
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar2);
          _objc_opt_class(puVar4);
          puVar3 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            puVar8 = (undefined *)0x0;
          }
          _objc_retain(puVar8);
          _objc_release(puVar2);
          func_0x00010bdea1c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106d436e0;
        }
        puVar8 = PTR_PTR_1126cfb60;
        _objc_opt_class(PTR_PTR_1126cfb60);
        puVar4 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar8);
        puVar8 = PTR_PTR_1126cfb60;
        if (((ulong)puVar4 & 1) != 0) {
          _objc_retain(puVar2);
          _objc_opt_class(puVar8);
          puVar4 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar8);
          puVar8 = puVar2;
          if (((ulong)puVar4 & 1) == 0) {
            puVar8 = (undefined *)0x0;
          }
          _objc_retain(puVar8);
          _objc_release(puVar2);
          puVar5 = puVar8;
          func_0x00010bf97060(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar4 = param_1;
          func_0x00010bec4c40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1);
          goto LAB_106d437a4;
        }
      }
      else {
        _objc_retain(puVar2);
        _objc_opt_class(puVar4);
        puVar3 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar4);
        if (((ulong)puVar3 & 1) == 0) {
          puVar8 = (undefined *)0x0;
        }
        _objc_retain(puVar8);
        _objc_release(puVar2);
        func_0x00010bec4c40(param_1);
        _objc_retainAutoreleasedReturnValue();
LAB_106d436e0:
        _objc_release(puVar8);
        func_0x00010befa160(puVar1);
LAB_106d437a8:
        _objc_release(puVar5);
      }
      if (param_1[0x60] == '\x01') {
        bVar7 = param_1[0x61];
      }
      else {
        bVar7 = 0;
      }
      puVar8 = puVar6;
      if ((param_4 == puVar9) && ((bVar7 & 1) == 0)) {
        puVar8 = puVar1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar2);
      puVar9 = puVar9 + 1;
      puVar4 = param_3;
      func_0x00010bf529e0();
      puVar6 = puVar8;
    } while (puVar9 < puVar4);
  }
  puVar9 = puVar1;
  if (((param_1[0x60] & 1) != 0) && (param_1[0x61] == '\x01')) {
    puVar6 = puVar1;
    func_0x00010c246ca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar9;
    func_0x00010bfb1920(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  puVar6 = puVar9;
  func_0x00010bf51e00(puVar9);
  func_0x00010c0087a0(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d43a4c; end: 106d43acf;  */

undefined8 FUN_106d43a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  FUN_106d43ad0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_106d43ad0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106d43ad0; end: 106d43bef;  */

void FUN_106d43ad0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126cdc40;
  _objc_opt_class(PTR_PTR_1126cdc40);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126cdc50;
  _objc_retain(param_1);
  _objc_opt_class(puVar2);
  uVar7 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar3 = param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  uVar7 = 0;
  if (uVar1 != 0 || uVar3 != 0) {
    uVar4 = param_1;
    func_0x00010c0ff4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c240f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106d43bf0; end: 106d43e87; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _storyPlaylistGroupFromMemoriesEntry:galleryItemIdToSnapsMap:initialSnapId:isInitialGalleryItem:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

undefined *
FUN_106d43bf0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar6 = param_1;
  func_0x00010be74d80();
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == (undefined *)0x0) || (param_6 == 0)) {
    func_0x00010c245cc0(param_3);
    puVar1 = param_1;
    func_0x00010be16a40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    puVar1 = puVar6;
    func_0x00010bfece40();
    if (puVar1 == (undefined *)0x7fffffffffffffff) {
      puVar1 = (undefined *)0x0;
    }
    else {
      _objc_retain(param_5);
      puVar1 = param_5;
    }
    _objc_release(param_5);
  }
  if ((param_1[0x60] == '\x01') && (param_1[0x61] == '\x01')) {
    _objc_retain(param_3);
    puVar3 = puVar6;
    func_0x00010c0b8620(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126cdc40;
    _objc_alloc();
    puVar3 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbdda0(param_3);
    func_0x00010c07b240(param_3);
    puVar4 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01fe60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined **)(param_3 + 0x20);
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(puVar6);
  _objc_release(param_2);
  return puVar6;
}



/* Entry: 106d43e88; end: 106d43ed3;  */

undefined8 FUN_106d43e88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106d43ed4; end: 106d440fb;  */

undefined *
FUN_106d43ed4(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c240f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c240f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    param_3 = puVar8;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(uVar4);
      puVar8 = PTR_PTR_1126cdc40;
      _objc_alloc();
      func_0x00010bfbdda0();
      param_5 = *(undefined **)(param_1 + 0x20);
      func_0x00010c07b240();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      param_6 = 0;
      param_3 = puVar1;
      func_0x00010c01fe60();
      _objc_release(uVar4);
      _objc_release(puVar5);
      _objc_release(puVar1);
      goto LAB_106d440ac;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_106d440ac:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_3);
    _objc_retain(param_5);
    puVar1 = param_2;
    func_0x00010be74d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      if ((param_5 == (undefined *)0x0) || (param_6 == 0)) {
        puVar2 = param_3;
        func_0x00010c29eac0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        puVar5 = param_2;
        func_0x00010be16a40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_5);
        puVar2 = puVar1;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = param_5;
      }
      _objc_release(puVar2);
      if ((param_2[0x60] == '\x01') && (param_2[0x61] == '\x01')) {
        _objc_retain(param_3);
        puVar8 = puVar1;
        func_0x00010c0b8620(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_3;
      }
      else {
        puVar2 = PTR_PTR_1126cdc50;
        _objc_alloc();
        func_0x00010bfe5ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01ffa0();
        _objc_release(param_3);
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      func_0x00010bf0af00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      _objc_release(puVar6);
      return puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 106d440fc; end: 106d4437b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _crFeaturedStoryPlaylistGroupFromCRFeaturedStory:galleryItemIdToPHAssetsMap:initialPHAssetId:isInitialGalleryItem:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

undefined *
FUN_106d440fc(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010be74d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    if ((param_5 == (undefined *)0x0) || (param_6 == 0)) {
      puVar2 = param_3;
      func_0x00010c29eac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      puVar3 = param_1;
      func_0x00010be16a40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_5);
      puVar2 = puVar1;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = param_5;
    }
    _objc_release(puVar2);
    if ((param_1[0x60] == '\x01') && (param_1[0x61] == '\x01')) {
      _objc_retain(param_3);
      puVar4 = puVar1;
      func_0x00010c0b8620(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
    }
    else {
      puVar2 = PTR_PTR_1126cdc50;
      _objc_alloc();
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ffa0();
      _objc_release(param_3);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bf0af00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    _objc_release(param_2);
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106d4437c; end: 106d443e3;  */

undefined8 FUN_106d4437c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106d443e4; end: 106d445c7;  */

void FUN_106d443e4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c240f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c240f60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    param_3 = puVar7;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126cdc50;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar1;
      param_4 = puVar5;
      func_0x00010c01ffa0();
      _objc_release(puVar5);
      _objc_release(puVar1);
      goto LAB_106d4457c;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_106d4457c:
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    puVar1 = param_4;
    func_0x00010bf529e0();
    puVar7 = (undefined *)0x0;
    if ((-1 < (long)param_3) && (puVar1 != (undefined *)0x0)) {
      puVar1 = param_4;
      func_0x00010bf529e0();
      if (puVar1 < param_3) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar1 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
    }
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d445c8; end: 106d44663; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _findLastViewedItemId:playbackItems:] */

void FUN_106d445c8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bf529e0();
  uVar3 = 0;
  if ((-1 < (long)param_3) && (uVar2 != 0)) {
    uVar2 = param_4;
    func_0x00010bf529e0();
    if (uVar2 < param_3) {
      uVar3 = 0;
    }
    else {
      lVar1 = 0;
      if (param_3 != 0) {
        lVar1 = param_3 - 1;
      }
      uVar2 = param_4;
      func_0x00010c0dfd40(param_4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106d44664; end: 106d44ae3; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _playbackItemsFromMemoriesEntry:galleryItemIdToSnapsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_106d44664(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar13 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = lVar1;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa73c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  uVar13 = param_3;
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010b5fca54();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar13);
  uVar13 = uVar4;
  FUN_106d44ae4(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar13);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf529e0();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar5 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      if (uVar7 == 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108018b38(uVar5,uVar12);
        _objc_release(uVar12);
      }
      _objc_release(uVar7);
      puVar14 = PTR_PTR_1126d2500;
      _objc_alloc();
      func_0x00010bf529e0(uVar4);
      func_0x00010c0480a0();
      uVar7 = uVar5;
      func_0x00010c241220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar8 = uVar5;
        func_0x00010bf8b0c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lStack_78 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
      }
      else {
        _objc_retain(lVar1);
        lStack_78 = lVar1;
      }
      _objc_release(lVar1);
      _objc_release(uVar7);
      if (((*(char *)(param_1 + 0x60) == '\x01') && ((*(byte *)(param_1 + 0x61) & 1) != 0)) ||
         (*(char *)(param_1 + 0x62) == '\x01')) {
        _objc_release(puVar14);
        puVar14 = (undefined *)0x0;
      }
      puVar9 = PTR_PTR_1126cdc18;
      _objc_alloc();
      uVar7 = uVar5;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010bf97200(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfbdda0();
      uVar10 = uVar5;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b240(param_3);
      uVar11 = uVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5fa088();
      func_0x00010c2a5040();
      func_0x00010bfe0640();
      func_0x00010c01fe40(puVar9);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar7);
      func_0x00010befa120(puVar6);
      _objc_release(puVar9);
      _objc_release(lStack_78);
      _objc_release(puVar14);
      _objc_release(uVar5);
      uVar13 = uVar13 + 1;
      uVar5 = uVar4;
      func_0x00010bf529e0();
    } while (uVar13 < uVar5);
  }
  puVar14 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106d44ae4; end: 106d44b3b;  */

void FUN_106d44ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c0b8600(param_1,param_2,&PTR___NSConcreteGlobalBlock_110977b08);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d44b3c; end: 106d44d8b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _playbackItemsFromCRFeaturedStory:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_106d44b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106d44c68;
    puStack_58 = &UNK_110977aa8;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_5);
    lVar3 = lVar2;
    uStack_48 = param_5;
    func_0x00010c0b8600(lVar2,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d44d8c; end: 106d44f03; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _updateItemIdToItemMapWithItems:] */

void FUN_106d44d8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = auStack_e8;
  uVar5 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar4,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar5 = uVar6;
        func_0x00010bfbd0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,uVar6,uVar5);
        _objc_release(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar4 = auStack_e8;
      uVar5 = 0x10;
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar4,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar6);
  lVar2 = param_3;
  func_0x00010be65e20(param_1,param_2,param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(uVar5);
  _objc_retain(lVar2);
  func_0x00010bed9f60(param_3,param_2,lVar2);
  func_0x00010be74d60(param_3,param_2,lVar2,puVar4,uVar5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106d44f04; end: 106d44fdb; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _buildPlaybackItemsAndUpdateItemIdToItemMapWithItems:initialIndex:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:initialItemId:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_106d44f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bed9f60(param_1,param_2,param_3);
  func_0x00010be74d60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106d44fdc; end: 106d451cf; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _observeChangesForItems:] */

void FUN_106d44fdc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar11;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_1;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = &uStack_130;
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_120;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR_DAT_1126a4ec8;
        unaff_x24 = *(long *)(lStack_128 + unaff_x20 * 8);
        _objc_retain(unaff_x24);
        lVar4 = unaff_x24;
        func_0x00010010fab4(unaff_x24,puVar5);
        unaff_x23 = unaff_x24;
        if ((int)lVar4 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(unaff_x24);
        if (unaff_x23 != 0) {
          lVar4 = unaff_x24;
          func_0x00010bf97200(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            unaff_x24 = lStack_138;
            func_0x00010be65e00();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 != 0) {
              func_0x00010c1d0640(puVar2);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(lVar4);
        }
        _objc_release(unaff_x23);
        unaff_x20 = unaff_x20 + 1;
      } while (lVar3 != unaff_x20);
      puVar8 = &uStack_130;
      lVar3 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(lStack_138 + 0x50);
  *(undefined **)(lStack_138 + 0x50) = puVar5;
  _objc_release(uVar9);
  _objc_release(puVar2);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106d451d0;
  lStack_180 = unaff_x24;
  lStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar2;
  lStack_160 = unaff_x20;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if (puVar8 == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar1 = (undefined1)*(undefined8 *)(lVar3 + 0x28);
    func_0x000108ec16f8();
    _objc_initWeak(auStack_188,lVar3);
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
    _objc_retain(uVar10);
    _objc_initWeak(auStack_190,uVar10);
    uVar6 = *(undefined8 *)(lVar3 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    uStack_198 = uVar1;
    _objc_copyWeak(auStack_1a8,auStack_190);
    _objc_copyWeak(auStack_1a0,auStack_188);
    uVar9 = uVar6;
    func_0x00010c0e0800(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_1a8);
    _objc_release(puVar8);
    _objc_destroyWeak(auStack_190);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_188);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 106d451d0; end: 106d4536f; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _observeChangesForEntry:] */

void FUN_106d451d0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x000108ec16f8();
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_50,uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uStack_58 = uVar1;
    _objc_copyWeak(auStack_68,auStack_50);
    _objc_copyWeak(auStack_60,auStack_48);
    uVar5 = uVar2;
    func_0x00010c0e0800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_68);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106d45370; end: 106d456c7;  */

void FUN_106d45370(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined8 auStack_e8 [5];
  undefined8 auStack_c0 [5];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar2 == 0) goto LAB_106d45590;
    lVar7 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bfa73c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar4;
    FUN_106d44ae4();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106d456c8;
    puStack_80 = &UNK_11085ae98;
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    _objc_retain(param_2);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    lStack_78 = param_2;
    _objc_retain(uVar10);
    uStack_70 = uVar10;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(lVar7);
    lStack_60 = lVar7;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    _objc_release(lStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar7);
LAB_106d454c0:
    _objc_release(lVar4);
  }
  else {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf97200(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c0720c0();
      _objc_release(lVar4);
      _objc_release(uVar3);
      pcVar9 = FUN_106d45804;
      puVar8 = auStack_c0;
      if ((param_2 != 0) && ((int)uVar10 != 0)) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c07b240();
        lVar4 = param_2;
        func_0x00010c07b240();
        if (iVar1 == (int)lVar4) {
          uVar5 = param_3;
          func_0x00010bf4b900();
          uVar6 = param_3;
          func_0x00010bf4b900();
          if (((uVar5 & 1) != 0) || ((int)uVar6 != 0)) {
            lVar7 = *(long *)(lVar2 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar7;
            func_0x00010bfa73c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            lVar7 = lVar4;
            FUN_106d44ae4();
            _objc_retainAutoreleasedReturnValue();
            puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_120 = 0xc2000000;
            pcStack_118 = FUN_106d45814;
            puStack_110 = &UNK_1109297f0;
            lStack_108 = lVar2;
            _objc_retain(param_2);
            uStack_f0 = (undefined1)uVar5;
            uStack_ef = (undefined1)uVar6;
            lStack_100 = param_2;
            lStack_f8 = lVar7;
            _objc_retain(lVar7);
            func_0x000100162d98("APPSTORE",&puStack_128);
            _objc_release(lStack_f8);
            _objc_release(lStack_100);
            _objc_release(lVar7);
            goto LAB_106d454c0;
          }
          goto LAB_106d45588;
        }
        pcVar9 = (code *)0x106d4580c;
        puVar8 = auStack_e8;
      }
      *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puVar8[1] = 0xc2000000;
      puVar8[2] = pcVar9;
      puVar8[3] = &UNK_110842e18;
      puVar8[4] = lVar2;
      func_0x000100162d98("APPSTORE");
    }
  }
LAB_106d45588:
  _objc_release(lVar2);
LAB_106d45590:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d456c8; end: 106d45803;  */

void FUN_106d456c8(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar6 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0(uVar6,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((lVar1 != 0) && ((uVar7 & 1) != 0)) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c07b240();
      iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c07b240();
      if (iVar2 == iVar3) {
        uVar6 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf4b900(uVar6,param_2,&PTR____CFConstantStringClassReference_110f6e858);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf4b900(uVar5,param_2,&PTR____CFConstantStringClassReference_110e0a438);
        if (((uVar6 & 1) != 0) || ((int)uVar5 != 0)) {
          uVar7 = *(ulong *)(lVar4 + 0x48);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf97200(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar7,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar6 = uVar7;
          func_0x00010c080280(uVar7,param_2,*(undefined8 *)(param_1 + 0x38));
          if ((uVar6 & 1) == 0) {
            func_0x00010bfb4a60(lVar4);
          }
          _objc_release(uVar7);
        }
        goto LAB_106d45764;
      }
    }
    func_0x00010bfb4a60(lVar4);
  }
LAB_106d45764:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106d45804; end: 106d45813;  */

void FUN_106d45804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb4a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_forceDismiss_1125cac40);
  return;
}



/* Entry: 106d45814; end: 106d4588b;  */

void FUN_106d45814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c080280(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
  if ((uVar2 & 1) == 0) {
    func_0x00010bfb4a60(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d4588c; end: 106d4597f; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper _unobserveMergedDataSourceChanges] */

long FUN_106d4588c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c281a60(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + 0x68);
}



/* Entry: 106d45980; end: 106d45987; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper configuration] */

undefined8 FUN_106d45980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106d45988; end: 106d4599f; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper delegate] */

void FUN_106d45988(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d459a0; end: 106d459ab; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper setDelegate:] */

void FUN_106d459a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 106d459ac; end: 106d45a5b; -[SCMemoriesOperaSessionCRAndStoryPresenterWrapper .cxx_destruct] */

void FUN_106d459ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 106d45a5c; end: 106d45a63;  */

void FUN_106d45a5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106d45a64; end: 106d45b23;  */

void FUN_106d45a64(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(param_1);
    uVar1 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d45b24; end: 106d45d7b;  */

void FUN_106d45b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108018b38(param_1,param_3);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126cdc18;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  uVar4 = param_6;
  func_0x00010c241340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar5 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar7 = param_1;
  func_0x00010c0e0160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240(param_2);
  _objc_release(param_2);
  uVar8 = param_1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa088();
  func_0x00010c2a5040();
  func_0x00010bfe0640();
  _objc_release(param_1);
  func_0x00010c01fe40(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  FUN_106d45a64(param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d45d7c; end: 106d460c7;  */

void FUN_106d45d7c(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar9 = param_1;
  func_0x00010bf529e0();
  if (uVar9 != 0) {
    uVar9 = 0;
    puVar7 = (undefined *)0x0;
    do {
      uVar3 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_retain(param_3);
      _objc_retain(puVar1);
      _objc_retain(puVar2);
      _objc_retain(uVar3);
      _objc_retain(puVar1);
      _objc_retain(param_3);
      _objc_retain(uVar3);
      _objc_retain(puVar1);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      _objc_retain(uVar3);
      _objc_retain(puVar1);
      _objc_retain(puVar2);
      func_0x00010c0bfe60(uVar5);
      puVar6 = puVar7;
      if (param_2 == uVar9) {
        puVar6 = puVar1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_release(puVar1);
      _objc_release(uVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(param_3);
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar9 = uVar9 + 1;
      uVar3 = param_1;
      func_0x00010bf529e0();
      puVar7 = puVar6;
    } while (uVar9 < uVar3);
    if (puVar6 != (undefined *)0x0) goto LAB_106d46040;
  }
  puVar6 = puVar1;
  func_0x00010bfb1920(puVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106d46040:
  puVar7 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  puVar8 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c0087a0(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d460c8; end: 106d46603;  */

void FUN_106d460c8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010c071a80();
  if ((int)lVar10 == 0) goto LAB_106d46580;
  lVar10 = param_3;
  func_0x00010bf97860();
  func_0x00010b5fa33c();
  if (lVar10 < 4) {
    if (lVar10 - 2U < 2) {
      lVar10 = param_2;
      func_0x00010c0d21e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = &uStack_128;
      uStack_128 = 0;
      uStack_118 = 0x2020000000;
      uVar1 = *(ulong *)(param_1 + 0x38);
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      if (uVar2 < 2) {
        uStack_110 = false;
      }
      else {
        lVar3 = lVar10;
        func_0x00010c08fa60();
        uStack_110 = lVar3 != 0;
      }
      _objc_release(uVar1);
      lVar9 = *(long *)(param_1 + 0x38);
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar9);
          }
          if ((*(byte *)(puStack_120 + 3) & 1) == 0) goto LAB_106d46498;
          uVar4 = *(undefined8 *)(lVar12 * 8);
          _objc_retain(lVar10);
          func_0x00010c0bfe60(uVar4);
          _objc_release(lVar10);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        lVar3 = lVar9;
        func_0x00010bf52a60();
      }
LAB_106d46498:
      _objc_release(lVar9);
      if (*(char *)(puStack_120 + 3) == '\x01') {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bfceb20();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cdc38;
        _objc_alloc();
        func_0x00010bf97860();
        func_0x00010c07b240();
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        FUN_106d46604(uVar8,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01fe80();
        _objc_release(uVar8);
        FUN_106d45a64(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar5);
        _objc_release(puVar5);
        _objc_release(uVar4);
      }
      else {
        FUN_106d45b24(param_2,param_3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
      }
      __Block_object_dispose(&uStack_128,8);
      _objc_release(lVar10);
      goto LAB_106d46580;
    }
    if (lVar10 == 0) {
LAB_106d46188:
      FUN_106d45b24(param_2,param_3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                    *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      goto LAB_106d46580;
    }
    if (lVar10 != 1) goto LAB_106d46580;
LAB_106d46204:
    puVar5 = PTR_PTR_1126cdc40;
    _objc_alloc();
    lVar10 = *(long *)(param_1 + 0x38);
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97860();
    func_0x00010c07b240();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    FUN_106d46604(uVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01fea0();
    _objc_release(lVar3);
  }
  else {
    if (lVar10 != 4) {
      if (lVar10 != 5) {
        if (lVar10 != 8) goto LAB_106d46580;
        lVar10 = param_2;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar10 == 0) goto LAB_106d46580;
        goto LAB_106d46188;
      }
      goto LAB_106d46204;
    }
    puVar5 = PTR_PTR_1126cdc38;
    _objc_alloc();
    lVar10 = param_3;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97860();
    func_0x00010c07b240();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    FUN_106d46604(uVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01fe80();
  }
  _objc_release(uVar4);
  _objc_release(lVar10);
  FUN_106d45a64(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar5);
  _objc_release(puVar5);
LAB_106d46580:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = uVar8;
  _objc_retain();
  _objc_retain(uVar8);
  lVar6 = param_2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar6);
  lVar10 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      uVar13 = *(undefined8 *)(lVar12 * 8);
      _objc_retain(uVar8);
      _objc_retain(puVar5);
      _objc_retain(param_2);
      func_0x00010c0bfe60(uVar13);
      _objc_release(param_2);
      _objc_release(puVar5);
      _objc_release(uVar8);
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    lVar10 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  if ((*(byte *)(lVar10 + 0x18) & 1) != 0) {
    uVar11 = (undefined1)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c0d21e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  *(undefined1 *)(lVar10 + 0x18) = 0;
  return;
}



/* Entry: 106d46604; end: 106d4681f;  */

void FUN_106d46604(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(param_2);
      _objc_retain(puVar3);
      _objc_retain(param_1);
      func_0x00010c0bfe60(uVar10);
      _objc_release(param_1);
      _objc_release(puVar3);
      _objc_release(param_2);
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar7 + 0x18) & 1) != 0) {
    uVar8 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d21e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  *(undefined1 *)(lVar7 + 0x18) = 0;
  return;
}



/* Entry: 106d46820; end: 106d4688f;  */

void FUN_106d46820(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d21e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 0;
  return;
}



/* Entry: 106d46890; end: 106d468bf;  */

void FUN_106d46890(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 106d468c0; end: 106d46953;  */

void FUN_106d468c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cdc58;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c09da80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4220(puVar1);
  _objc_release(param_2);
  func_0x00010befa120(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d46954; end: 106d46f17;  */

void FUN_106d46954(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar14 = *(undefined8 *)(lVar13 * 8);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108018b38(uVar14,uVar4);
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126cdc18;
      _objc_alloc();
      uVar4 = uVar14;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97860();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c241340();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar14;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      uVar9 = uVar14;
      func_0x00010c0e0160(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b240(param_3);
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5fa088();
      func_0x00010c2a5040();
      func_0x00010bfe0640();
      func_0x00010c01fe40(puVar5);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(uVar14);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar12);
      _objc_release(uVar4);
      lVar13 = lVar13 + 1;
    } while (lVar3 != lVar13);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126cdc30;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  func_0x00010c07b240();
  puVar10 = puVar2;
  func_0x00010bf51e00();
  func_0x00010c01fe80();
  _objc_release(puVar10);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar10 = puVar5;
  FUN_106d45a64(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(puVar10);
  _objc_retain(uVar4);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108018b38(uVar4,uVar12);
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126cdc18;
  _objc_alloc();
  uVar12 = uVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c241340();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar9 = uVar4;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240(puVar10);
  _objc_release(puVar10);
  uVar6 = uVar4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa088();
  func_0x00010c2a5040();
  func_0x00010bfe0640();
  _objc_release(uVar4);
  func_0x00010c01fe40(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(puVar5);
  _objc_release(uVar12);
  FUN_106d45a64(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d46f18; end: 106d47067; -[SCMemoriesOperaSessionSnapsPresenterWrapper initWithMemoriesOperaSessionPresenter:memoriesCloudFS:configuration:circumstanceEngine:delegate:] */

undefined1 *
FUN_106d46f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6978;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d47068; end: 106d470a7; -[SCMemoriesOperaSessionSnapsPresenterWrapper isPresented] */

undefined8 FUN_106d47068(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ab40();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106d470a8; end: 106d472c3; -[SCMemoriesOperaSessionSnapsPresenterWrapper presentOperaFromViewController:groups:initialIndex:pageHeight:sourcePageName:sourceView:topInset:shouldDismissPresentingOpera:] */

void FUN_106d470a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x000108ec1770();
  uVar2 = param_6;
  if (iVar1 == 0) {
    FUN_106d45d7c(param_6,param_7,*(undefined8 *)(param_3 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf63f20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb1100(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3 + 0x30;
    _objc_loadWeakRetained();
    func_0x00010c0eaf40();
    param_3 = param_3 + 0x30;
    _objc_loadWeakRetained();
    func_0x00010c10f0a0(param_1,param_2,uVar3);
    _objc_release(param_3);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_9);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_9);
    _objc_release(param_5);
  }
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106d472c4; end: 106d473cb;  */

void FUN_106d472c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_106d45d7c(uVar2,*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar2);
  return;
}



/* Entry: 106d473cc; end: 106d474f3;  */

void FUN_106d473cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf63f20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb1100(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  lVar6 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0eaf40();
  lVar8 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained();
  func_0x00010c10f0a0(uVar11,uVar12,uVar3,param_2,uVar4,uVar5,uVar9,uVar1,uVar2,uVar10,lVar7,0,lVar8
                      ,*(undefined1 *)(param_1 + 0x58));
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d474f4; end: 106d476af; -[SCMemoriesOperaSessionSnapsPresenterWrapper updateGroups:] */

void FUN_106d474f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000108ec1770();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    FUN_106d45d7c(param_3,0,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf63f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284ee0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar4);
    uVar2 = param_3;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106d476b0; end: 106d4770f;  */

void FUN_106d476b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf63f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284ee0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d47710; end: 106d47743; -[SCMemoriesOperaSessionSnapsPresenterWrapper dismiss] */

void FUN_106d47710(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d47744; end: 106d4774b; -[SCMemoriesOperaSessionSnapsPresenterWrapper configuration] */

undefined8 FUN_106d47744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d4774c; end: 106d47763; -[SCMemoriesOperaSessionSnapsPresenterWrapper delegate] */

void FUN_106d4774c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d47764; end: 106d4776f; -[SCMemoriesOperaSessionSnapsPresenterWrapper setDelegate:] */

void FUN_106d47764(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106d47770; end: 106d477cb; -[SCMemoriesOperaSessionSnapsPresenterWrapper .cxx_destruct] */

void FUN_106d47770(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d477cc; end: 106d479e7;  */

void FUN_106d477cc(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108018b38(param_2,uVar9);
  _objc_release(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126cdc18;
  _objc_alloc();
  uVar9 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c241340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar6 = param_2;
  func_0x00010c0e0160(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b240(param_3);
  _objc_release(param_3);
  uVar7 = param_2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa088();
  func_0x00010c2a5040();
  func_0x00010bfe0640();
  _objc_release(param_2);
  func_0x00010c01fe40(puVar1);
  func_0x00010befa120(uVar8);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106d479e8; end: 106d479f3;  */

void FUN_106d479e8(void)

{
  return;
}



/* Entry: 106d479f4; end: 106d47a67; -[SCMemoriesLegacyOperaLaunchServices initWithOperaPresenterBuilder:] */

undefined1 * FUN_106d479f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6980;
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



/* Entry: 106d47a68; end: 106d47a6f; -[SCMemoriesLegacyOperaLaunchServices operaPresenterBuilder] */

undefined8 FUN_106d47a68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d47a70; end: 106d47a7b; -[SCMemoriesLegacyOperaLaunchServices .cxx_destruct] */

void FUN_106d47a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d47a7c; end: 106d47b1f; -[SCMemoriesOperaDependencyServices initWithMemoriesOperaActionHandlerSessionBuilder:memoriesOperaMediaManagerBuilder:] */

undefined1 *
FUN_106d47a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6988;
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



/* Entry: 106d47b20; end: 106d47b27; -[SCMemoriesOperaDependencyServices memoriesOperaActionHandlerSessionBuilder] */

undefined8 FUN_106d47b20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d47b28; end: 106d47b2f; -[SCMemoriesOperaDependencyServices memoriesOperaMediaManagerBuilder] */

undefined8 FUN_106d47b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d47b30; end: 106d47b5f; -[SCMemoriesOperaDependencyServices .cxx_destruct] */

void FUN_106d47b30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d47b60; end: 106d47ce3;  */

void FUN_106d47b60(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  puVar3 = PTR_PTR_1126d2508;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c23d0a0(param_4);
  uVar1 = param_6;
  func_0x00010c2a5040(param_6);
  dVar6 = (double)(int)uVar1;
  uVar1 = param_6;
  func_0x00010bfe0640(param_6);
  dVar7 = (double)(int)uVar1;
  func_0x00010c14e3c0(param_3);
  func_0x00010c104360(param_3);
  _objc_release(param_3);
  func_0x00010c14e580(param_1,param_2,dVar6,dVar7,puVar3);
  uVar1 = param_6;
  func_0x00010c2a5040(param_6);
  uVar2 = param_6;
  func_0x00010bfe0640(param_6);
  puVar3 = PTR_PTR_1126d2510;
  _objc_alloc(PTR_PTR_1126d2510);
  uVar4 = param_6;
  func_0x00010c2a5040(param_6);
  uVar5 = param_6;
  func_0x00010bfe0640(param_6);
  _objc_release(param_6);
  func_0x00010c01ca80(dVar6 / (double)(int)uVar4,dVar7 / (double)(int)uVar5,
                      (param_1 + dVar6 * 0.5) / (double)(int)uVar1,
                      (param_2 + dVar7 * 0.5) / (double)(int)uVar2,0,0x3ff0000000000000,puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106d47ce4; end: 106d48a57;  */

void FUN_106d47ce4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_448;
  long lStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_9;
  _objc_retain();
  _dispatch_group_create();
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_106d48a58;
  uStack_1a0 = 0x106d48a68;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_106d48a58;
  uStack_1d0 = 0x106d48a68;
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_198 = puVar2;
  _objc_opt_new();
  uVar3 = param_6;
  puStack_1c8 = puVar20;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar2;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_448 = puVar20;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(puVar2);
  puVar2 = puStack_448;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar2;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar20;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar20);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (puVar19 != (undefined *)0x0) {
      puVar20 = param_3;
      func_0x00010c0ef4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar20;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar19;
      func_0x00010bfc1320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_448);
      _objc_release(puVar4);
      _objc_release(puVar19);
      _objc_release(puVar20);
      puStack_448 = puVar2;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  puVar20 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar20;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar19;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar20);
  puVar20 = puVar4;
  func_0x00010bf52a60();
  if (puVar20 != (undefined *)0x0) {
    lVar18 = *plStack_220;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar18) {
          _objc_enumerationMutation(puVar4);
        }
        uVar16 = *(undefined8 *)(lStack_228 + (long)puVar19 * 8);
        func_0x00010bfe5e40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(uVar16);
        puVar19 = puVar19 + 1;
      } while (puVar20 != puVar19);
      puVar20 = puVar4;
      func_0x00010bf52a60();
    } while (puVar20 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar20 = puStack_448;
  func_0x00010bf529e0();
  do {
    puVar19 = puVar20;
    puVar20 = puVar19 + -1;
    if ((long)puVar20 < 0) break;
    puVar4 = puStack_448;
    func_0x00010c0dfd40(puStack_448);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar15;
    func_0x00010bf1f3c0();
    _objc_release(puVar15);
    _objc_release(puVar5);
    _objc_release(puVar4);
  } while (((ulong)puVar6 & 1) == 0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((long)puVar20 < 0) {
    lStack_440 = 0;
  }
  else {
    puVar15 = (undefined *)0x0;
    lStack_440 = 0;
    do {
      puVar6 = puStack_448;
      func_0x00010c0dfd40(puStack_448);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar7 != (undefined *)0x0) {
        func_0x00010befa120(puVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
        puVar6 = puVar7;
        func_0x00010c06c000();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar6;
        func_0x00010bf1f3c0();
        if (((ulong)puVar21 & 1) == 0) {
          _objc_release(puVar6);
          lStack_440 = lStack_440 + 1;
        }
        else {
          puVar21 = puVar7;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar21;
          func_0x00010b777420();
          _objc_release(puVar21);
          _objc_release(puVar6);
          lVar18 = 1;
          if (puVar8 == (undefined *)0xffffffffa970ec1f) {
            lVar18 = 2;
          }
          lStack_440 = lVar18 + lStack_440;
        }
      }
      _objc_release(puVar7);
      puVar15 = puVar15 + 1;
    } while (puVar19 != puVar15);
  }
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  puVar19 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar19;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  puVar19 = puVar15;
  func_0x00010bf52a60();
  uVar17 = (uint)((ulong)puVar20 >> 0x3f) ^ 1;
  if (puVar19 != (undefined *)0x0) {
    lVar18 = *plStack_260;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar18) {
          _objc_enumerationMutation(puVar15);
        }
        uVar9 = *(ulong *)(lStack_268 + (long)puVar20 * 8);
        func_0x00010c06c000();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf1f3c0();
        _objc_release(uVar9);
        if ((uVar10 & 1) != 0) {
          uVar17 = 1;
          goto LAB_106d48300;
        }
        puVar20 = puVar20 + 1;
      } while (puVar19 != puVar20);
      puVar19 = puVar15;
      func_0x00010bf52a60();
    } while (puVar19 != (undefined *)0x0);
  }
LAB_106d48300:
  _objc_release(puVar15);
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  if (uVar17 != 0) {
    puVar19 = param_3;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar19;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar20 = puVar15;
  }
  puVar19 = puVar20;
  func_0x00010bf529e0();
  puVar6 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  puVar19 = puVar19 + lStack_440;
  puVar15 = puVar19;
  if (0 < (long)puVar19) {
    do {
      uVar16 = puStack_1b8[5];
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar16);
      _objc_release(puVar7);
      uVar16 = puStack_1e8[5];
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar16);
      _objc_release(puVar7);
      puVar15 = puVar15 + -1;
    } while (puVar15 != (undefined *)0x0);
  }
  puVar15 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x000107ff9c0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = puVar4;
  func_0x00010bf529e0();
  if (puVar15 != (undefined *)0x0) {
    _dispatch_group_create();
    _dispatch_group_enter(uVar1);
    for (puVar21 = (undefined *)0x0; puVar8 = puVar4, func_0x00010bf529e0(), puVar21 < puVar8;
        puVar21 = puVar21 + 1) {
      _objc_autoreleasePoolPush();
      puVar11 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x000108d3ee18();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) {
        _dispatch_group_enter(puVar15);
        puVar13 = PTR_PTR_1126b2718;
        _objc_alloc(PTR_PTR_1126b2718);
        func_0x00010c0044c0();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_190 = puVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2d8 = 0xc2000000;
        pcStack_2d0 = FUN_106d48a70;
        puStack_2c8 = &UNK_110977cd8;
        _objc_retain(puVar15);
        lStack_280 = lStack_440;
        puStack_2c0 = puVar15;
        puStack_288 = puVar19;
        _objc_retain(puVar5);
        uStack_278 = SUB84(puVar21,0);
        puStack_2b8 = puVar5;
        _objc_retain(puVar11);
        puStack_2b0 = puVar11;
        _objc_retain(param_1);
        uStack_2a8 = param_1;
        _objc_retain(puVar12);
        puStack_298 = &uStack_1c0;
        puStack_290 = &uStack_1f0;
        puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_300 = 0xc2000000;
        pcStack_2f8 = FUN_106d48dbc;
        puStack_2f0 = &UNK_11085b900;
        puStack_2a0 = puVar12;
        _objc_retain(puVar15);
        puStack_2e8 = puVar15;
        func_0x00010bfa7640(puVar13);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puStack_2e8);
        _objc_release(puStack_2a0);
        _objc_release(uStack_2a8);
        _objc_release(puStack_2b0);
        _objc_release(puStack_2b8);
        _objc_release(puStack_2c0);
      }
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_autoreleasePoolPop(puVar8);
    }
    puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_328 = 0xc2000000;
    uStack_320 = 0x106d48dd0;
    puStack_318 = &UNK_110842e18;
    _objc_retain(uVar1);
    uStack_310 = uVar1;
    func_0x000100bc0718(puVar15,PTR___dispatch_main_q_11034be20,&puStack_330);
    _objc_release(uStack_310);
    _objc_release(puVar15);
  }
  puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_398 = 0xc2000000;
  pcStack_390 = FUN_106d48dd8;
  puStack_388 = &UNK_110977d68;
  _objc_retain(uVar1);
  uStack_380 = uVar1;
  _objc_retain(param_1);
  uStack_378 = param_1;
  _objc_retain(puVar7);
  puStack_340 = &uStack_1f0;
  puStack_338 = &uStack_1c0;
  puStack_370 = puVar7;
  _objc_retain(param_6);
  uStack_368 = param_6;
  _objc_retain(uVar3);
  uStack_360 = uVar3;
  _objc_retain(param_3);
  puStack_358 = param_3;
  _objc_retain(param_7);
  uStack_350 = param_7;
  _objc_retain(param_4);
  lStack_348 = param_4;
  func_0x00010bf97e80(puVar20);
  puStack_3c8 = &uStack_3d0;
  uStack_3d0 = 0;
  uStack_3c0 = 0x3032000000;
  pcStack_3b8 = FUN_106d48a58;
  uStack_3b0 = 0x106d48a68;
  puVar19 = PTR_PTR_1126b33c0;
  _objc_alloc_init();
  puVar15 = puVar6;
  puStack_3a8 = puVar19;
  func_0x00010c11de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_438 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_430 = 0xc2000000;
  pcStack_428 = FUN_106d499fc;
  puStack_420 = &UNK_110977dd8;
  puStack_3e8 = &uStack_3d0;
  puStack_3e0 = &uStack_1c0;
  puStack_3d8 = &uStack_1f0;
  uStack_3f0 = param_9;
  uStack_418 = param_5;
  uStack_410 = param_1;
  puStack_408 = param_3;
  uStack_400 = param_2;
  uStack_3f8 = param_8;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_5);
  func_0x000100bc0718(uVar1,puVar15,&puStack_438);
  _objc_release(puVar15);
  _objc_release(uStack_3f0);
  _objc_release(uStack_3f8);
  _objc_release(uStack_400);
  _objc_release(puStack_408);
  _objc_release(uStack_410);
  _objc_release(uStack_418);
  __Block_object_dispose(&uStack_3d0,8);
  _objc_release(puStack_3a8);
  _objc_release(lStack_348);
  _objc_release(uStack_350);
  _objc_release(puStack_358);
  _objc_release(uStack_360);
  _objc_release(uStack_368);
  _objc_release(puStack_370);
  _objc_release(uStack_378);
  _objc_release(uStack_380);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puStack_448);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(puStack_1c8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(puStack_198);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1f0,8);
    lVar18 = 8;
    __Block_object_dispose(&uStack_1c0);
    __Unwind_Resume();
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
    *(undefined8 *)(lVar18 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 106d48a58; end: 106d48a6f;  */

void FUN_106d48a58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106d48a70; end: 106d48dbb;  */

void FUN_106d48a70(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_autoreleasePoolPush();
  lVar2 = param_2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b2720;
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010bfe7300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (puVar3 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126cdc70;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfe5e40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e84e38;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e84e38);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c241220(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf03840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(ppuVar5);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      FUN_106d47b60(uVar4,puVar3,puVar7,*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28));
      if (1 < *(ulong *)(param_1 + 0x60)) {
        lVar2 = param_2;
        func_0x00010bf8ba20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = param_2;
          func_0x00010bf8ba20();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b2720;
          func_0x00010c14d040();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126cdc70;
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010bfe5e40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = &PTR____CFConstantStringClassReference_110e84e58;
          func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e84e58);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c241220(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf03840(puVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(ppuVar5);
          _objc_release(uVar6);
          uVar6 = *(undefined8 *)(param_1 + 0x40);
          FUN_106d47b60(uVar6,puVar8,puVar10,*(undefined8 *)(param_1 + 0x38));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28));
          func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
          _objc_release(uVar6);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(lVar2);
        }
      }
      _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar4);
      _objc_release(puVar7);
      _objc_release(puVar3);
      goto LAB_106d48d88;
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
LAB_106d48d88:
  _objc_autoreleasePoolPop(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d48dbc; end: 106d48dd7;  */

void FUN_106d48dbc(long param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) == 0) && (param_2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d48dd8; end: 106d48f5b;  */

void FUN_106d48dd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_group_enter(uVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar9);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106d48f5c; end: 106d49427;  */

void FUN_106d48f5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106d49428;
  puStack_b8 = &UNK_110977d08;
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = uVar14;
  _objc_retain(uVar15);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = uVar15;
  _objc_retain(uVar14);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  uStack_88 = *(undefined8 *)(param_1 + 0x70);
  uStack_90 = *(undefined8 *)(param_1 + 0x68);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = uVar14;
  _objc_retain(uVar15);
  ppuVar2 = &puStack_d0;
  uStack_98 = uVar15;
  _objc_retainBlock();
  ppuVar3 = *(undefined ***)(param_1 + 0x40);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c0779a0();
  if (((ulong)ppuVar6 & 1) == 0) {
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c06f740();
    _objc_release(uVar15);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    if ((int)uVar14 != 0) {
      ppuVar4 = *(undefined ***)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0ef4a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bfedce0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010bf5cd00(ppuVar4,param_2,uVar17,uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar5);
      _objc_release(ppuVar4);
      ppuVar6 = *(undefined ***)(param_1 + 0x40);
      func_0x00010bf5d860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      if ((ppuVar3 != (undefined **)0x0) &&
         (ppuVar6 = ppuVar4, func_0x00010bf2d360(ppuVar4,param_2,ppuVar3), (int)ppuVar6 != 0)) {
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar15;
        func_0x00010c10f5a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar5;
        func_0x00010c06c020();
        _objc_release(uVar5);
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        if ((int)uVar15 == 0) {
          puStack_120 = puVar1;
          uStack_118 = 0xc2000000;
          uStack_110 = 0x106d49874;
          puStack_108 = &UNK_11085b810;
          _objc_retain(ppuVar2);
          ppuStack_100 = ppuVar2;
          func_0x00010bfe92c0(ppuVar3,param_2,ppuVar4,1,9,uVar14,uVar5,&puStack_120);
          ppuVar6 = ppuStack_100;
        }
        else {
          puStack_f8 = puVar1;
          uStack_f0 = 0xc2000000;
          pcStack_e8 = FUN_106d49868;
          puStack_e0 = &UNK_11085b810;
          _objc_retain(ppuVar2);
          ppuStack_d8 = ppuVar2;
          func_0x00010bf03680(ppuVar3,param_2,ppuVar4,1,9,uVar14,uVar5,&puStack_f8);
          ppuVar6 = ppuStack_d8;
        }
        _objc_release(ppuVar6);
        _objc_release(uVar14);
        _objc_release(ppuVar4);
        goto LAB_106d49370;
      }
      goto LAB_106d49038;
    }
  }
  else {
LAB_106d49038:
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  uVar7 = *(ulong *)(param_1 + 0x40);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0779a0();
  if ((uVar9 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x20);
    func_0x00010c27dde0();
    if (lVar10 != 0x3cedc99) {
      func_0x00010c27dde0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126b2710;
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf59960(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26fd20(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0ef4a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar5;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x106d49880;
  puStack_130 = &UNK_11085b810;
  _objc_retain(ppuVar2);
  ppuStack_128 = ppuVar2;
  func_0x00010bfe7b80(puVar1,param_2,uVar14,uVar15,uVar11,uVar12,uVar17,uVar16,&puStack_148);
  _objc_release(uVar17);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar15);
  ppuVar3 = ppuStack_128;
LAB_106d49370:
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  return;
}



/* Entry: 106d49428; end: 106d49527;  */

void FUN_106d49428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106d49528;
  puStack_78 = &UNK_110870228;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  return;
}



/* Entry: 106d49528; end: 106d49867;  */

void FUN_106d49528(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (*(long *)(param_3 + 0x20) == 0) goto LAB_106d4983c;
  puVar1 = *(undefined **)(param_3 + 0x28);
  func_0x00010c2540c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_3 + 0x28);
  func_0x00010c27dde0();
  puVar3 = *(undefined **)(param_3 + 0x28);
  if (lVar2 == 0x3f08826) {
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puVar1 = puVar3;
LAB_106d4961c:
    _objc_release(puVar4);
  }
  else {
    func_0x00010c27dde0();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x633a0a8c) {
      puVar4 = *(undefined **)(param_3 + 0x28);
      func_0x00010bfee000();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010bfedfc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_4,&PTR____CFConstantStringClassReference_110dd4898);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar6);
      puVar1 = puVar5;
      goto LAB_106d4961c;
    }
  }
  puVar3 = PTR_PTR_1126cdc70;
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03840(puVar3,param_4,puVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c128360(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar11 = (double)SUB84(param_1,0);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c1280e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar12 = (double)SUB84(param_1,0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c104260(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c2be880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar13 = (double)SUB84(param_1,0);
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c104260(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c2beba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar14 = (double)SUB84(param_1,0);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  lVar2 = *(long *)(param_3 + 0x38);
  func_0x00010c27dd80();
  if (lVar2 - 1U < 2) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar11 = (param_1 * dVar11) / param_1;
    dVar12 = (param_2 * dVar12) / param_2;
    dVar13 = ((param_1 - param_1) * 0.5 + param_1 * dVar13) / param_1;
    param_1 = (param_2 - param_2) * 0.5 + param_2 * dVar14;
    dVar14 = param_1 / param_2;
  }
  fVar10 = SUB84(param_1,0);
  puVar5 = PTR_PTR_1126d2510;
  _objc_alloc(PTR_PTR_1126d2510);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c141a80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar15 = (double)fVar10;
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c14e120(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  func_0x00010c01ca80(dVar11,dVar12,dVar13,dVar14,dVar15,(double)fVar10,puVar5,param_4,puVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x28),param_4,
                      puVar5,*(undefined8 *)(param_3 + 0x58));
  func_0x00010c1d04c0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x50) + 8) + 0x28),param_4,
                      *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x58));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_106d4983c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_3 + 0x40));
  return;
}



/* Entry: 106d49868; end: 106d4988b;  */

void FUN_106d49868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d49870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106d4988c; end: 106d499fb;  */

void FUN_106d4988c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 106d499fc; end: 106d49c8b;  */

void FUN_106d499fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bfec280(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0ef4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfbf380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106d49b08;
  puStack_58 = &UNK_11090f5b8;
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  uStack_50 = uVar3;
  uStack_48 = uVar1;
  _objc_retain(uVar3);
  func_0x00010007380c(uVar2,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 106d49c8c; end: 106d49d7b;  */

void FUN_106d49c8c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}


