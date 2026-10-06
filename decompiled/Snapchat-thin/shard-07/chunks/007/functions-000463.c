/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10589c50c; end: 10589c61b; -[SCMemoriesMashupFeaturedStoryManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10589c50c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b59c);
  _objc_destroyWeak(param_1 + _DAT_11272b598);
  _objc_destroyWeak(param_1 + _DAT_11272b594);
  _objc_destroyWeak(param_1 + _DAT_11272b590);
  _objc_destroyWeak(param_1 + _DAT_11272b58c);
  _objc_destroyWeak(param_1 + _DAT_11272b588);
  _objc_destroyWeak(param_1 + _DAT_11272b584);
  _objc_destroyWeak(param_1 + _DAT_11272b580);
  _objc_destroyWeak(param_1 + _DAT_11272b57c);
  _objc_destroyWeak(param_1 + _DAT_11272b578);
  _objc_destroyWeak(param_1 + _DAT_11272b574);
  _objc_destroyWeak(param_1 + _DAT_11272b570);
  _objc_destroyWeak(param_1 + _DAT_11272b56c);
  _objc_destroyWeak(param_1 + _DAT_11272b568);
  _objc_destroyWeak(param_1 + _DAT_11272b564);
  _objc_destroyWeak(param_1 + _DAT_11272b560);
  _objc_destroyWeak(param_1 + _DAT_11272b55c);
  _objc_destroyWeak(param_1 + _DAT_11272b558);
  _objc_destroyWeak(param_1 + _DAT_11272b554);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b550);
  return;
}



/* Entry: 10589c61c; end: 10589cb17; -[SCMemoriesMashupStyleFeaturedStoryMashupManager initWithMemoriesMashupSnapDocFactory:cloudFSService:snapDocEditorFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesProfile:memoriesDataObjectContext:memoriesFeaturedStoryDataMutator:grapheneRegistry:encryptedContentManager:circumstanceEngine:notificationPool:snapDocConverter:coordinator:snapRenderer:snapDocDownloadingService:docObjectContext:memoriesEncryptedDatabase:memoriesUserDefaultsManager:] */

undefined8 *
FUN_10589c61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_70 = PTR_PTR_1126eab10;
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
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 10589cb18; end: 10589cd97; -[SCMemoriesMashupStyleFeaturedStoryMashupManager generateMashupStyleFeaturedStoriesForNewCollectionsIfNecessaryWithServerRespondedCollections:allCollectionIds:context:origin:shouldEnableFailureCap:] */

void FUN_10589cb18(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = param_4;
  func_0x00010bf529e0();
  if ((puVar1 == puVar2) && (puVar1 = param_3, func_0x00010bf529e0(), puVar1 != (undefined *)0x0)) {
    *(undefined1 *)(param_1 + 0xd0) = param_7;
    puVar2 = PTR_PTR_1126ae6b8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10589cc84;
    puStack_68 = &UNK_1108ba078;
    lStack_60 = param_1;
    _objc_retain(param_4);
    puStack_58 = param_4;
    _objc_retain(param_3);
    puStack_50 = param_3;
    uStack_48 = param_5;
    func_0x00010bf54280(puVar2,param_2,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puStack_50);
    puVar2 = puStack_58;
  }
  else {
    puVar1 = PTR_PTR_1126ae6b8;
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10589cd98; end: 10589ced3; -[SCMemoriesMashupStyleFeaturedStoryMashupManager generateMashupForGalleryEntry:memoriesMashupModel:] */

void FUN_10589cd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10589ced4; end: 10589cf3f;  */

void FUN_10589ced4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1b560();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 10589cf40; end: 10589cf97; -[SCMemoriesMashupStyleFeaturedStoryMashupManager terminateFeaturedStoriesGenerationIfNeeded] */

void FUN_10589cf40(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10589cf98;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xa0),param_2,&puStack_38);
  return;
}



/* Entry: 10589cf98; end: 10589d0a7;  */

void FUN_10589cf98(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
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
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb8) = 1;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0xc0);
  _objc_retain(lVar6);
  puVar4 = auStack_c8;
  uVar5 = 0x10;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lStack_108 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010c06e0e0();
        if ((uVar2 & 1) == 0) {
          func_0x00010bf2dba0(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar4 = auStack_c8;
      uVar5 = 0x10;
      lVar1 = lVar6;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107e67df8(puVar3,puVar4,uVar5,in_x6,in_x5,in_x7,*(undefined8 *)(lVar6 + 0xb0),
                      &PTR____CFConstantStringClassReference_110e098b8,*(undefined8 *)(lVar6 + 0x50)
                      ,*(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x60),
                      *(undefined8 *)(lVar6 + 0xa0),*(undefined8 *)(lVar6 + 0x68),
                      &PTR____CFConstantStringClassReference_110e098d8,*(undefined8 *)(lVar6 + 0x90)
                      ,*(undefined1 *)(lVar6 + 0xd0));
  return;
}



/* Entry: 10589d0a8; end: 10589d127; -[SCMemoriesMashupStyleFeaturedStoryMashupManager featuredStoryGenerationDidComplete:generationResult:context:completionObserver:entrySource:collectionTitle:collectionCategory:] */

void FUN_10589d0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107e67df8(param_3,param_4,param_5,param_7,param_6,param_8,
                      *(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110e098b8,
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110e098d8,
                      *(undefined8 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0xd0));
  return;
}



/* Entry: 10589d128; end: 10589d25f; -[SCMemoriesMashupStyleFeaturedStoryMashupManager generateFeaturedStoryWithLocalEntry:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:observer:collectionCategory:itemOrder:groupName:priority:] */

void FUN_10589d128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10589d260;
  puStack_88 = &UNK_110868f80;
  uStack_60 = param_9;
  uStack_80 = param_3;
  lStack_78 = param_1;
  uStack_70 = param_4;
  uStack_68 = param_8;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10589d260; end: 10589d3b3;  */

void FUN_10589d260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10589d3b4;
  uStack_40 = 0x10589d3c4;
  uStack_38 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10589d3cc;
  puStack_70 = &UNK_1108ba818;
  puStack_58 = puStack_68;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_88,
                      &PTR___NSConcreteGlobalBlock_1108baf28);
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = puStack_58[5];
  func_0x00010bf97200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = puStack_58[5];
  puStack_58[5] = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be1b560(*(undefined8 *)(param_1 + 0x28));
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10589d3b4; end: 10589d3cb;  */

void FUN_10589d3b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10589d3cc; end: 10589d403;  */

void FUN_10589d3cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10589d404; end: 10589d407;  */

void FUN_10589d404(void)

{
  return;
}



/* Entry: 10589d408; end: 10589da87; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _generateMashupFeaturedStoriesIfNecessaryWithCollections:featuredStoriesToConvert:context:completionObserver:] */

long FUN_10589d408(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar21 = param_3;
  func_0x00010bf529e0();
  lVar3 = param_4;
  func_0x00010bf529e0();
  if ((lVar21 == lVar3) && (lVar21 = param_3, func_0x00010bf529e0(), lVar21 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar4;
    _objc_release(uVar23);
    _objc_retain(param_3);
    lVar21 = param_3;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar21 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        lVar27 = *(long *)(lVar24 * 8);
        lVar5 = param_1;
        func_0x00010beb43c0();
        if ((int)lVar5 == 0) goto LAB_10589d9fc;
        lVar6 = lVar27;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar25 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar6);
            }
            lVar28 = *(long *)(lVar25 * 8);
            lVar7 = param_1;
            func_0x00010beb43c0();
            if ((int)lVar7 == 0) goto LAB_10589d9c8;
            lVar8 = lVar28;
            func_0x00010c0bc100();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar8;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (lVar7 != 0) {
              lVar29 = 0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(lVar8);
                }
                uVar26 = *(ulong *)(lVar29 * 8);
                lVar9 = param_1;
                func_0x00010beb43c0();
                if ((int)lVar9 == 0) goto LAB_10589d990;
                func_0x000107e65eb0();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar26;
                func_0x00010c0bc0e0();
                if ((int)uVar10 == 1) {
                  lVar9 = param_4;
                  func_0x00010bfb2040();
                  _objc_retainAutoreleasedReturnValue();
                  lVar11 = lVar28;
                  func_0x00010c0848e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar28;
                  func_0x00010c0d4f60();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR_PTR_1126af4d0;
                  uVar23 = *(undefined8 *)(param_1 + 0x40);
                  func_0x00010c269d40(uVar23);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfa7380();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar23);
                  puVar13 = puVar4;
                  func_0x00010c0ba200();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000107e6a278();
                  uVar10 = uVar26;
                  func_0x00010c0844e0(uVar26);
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar13;
                  func_0x00010bf4b900();
                  _objc_release(uVar10);
                  if (((ulong)puVar14 & 1) == 0) {
                    puVar14 = PTR_PTR_1126bf800;
                    func_0x00010bfbcd40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar26;
                    func_0x00010c0844e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = uVar10;
                    param_2 = lVar9;
                    func_0x000107e679c8();
                    if ((uVar15 & 1) == 0) {
                      puVar16 = PTR_PTR_1126bf808;
                      _objc_alloc();
                      uVar23 = *(undefined8 *)(param_1 + 0x40);
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      lVar17 = lVar27;
                      func_0x00010c2711a0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf977c0();
                      lVar18 = lVar27;
                      func_0x00010bf33240();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c067fc0();
                      lVar19 = lVar27;
                      func_0x00010bfcf800();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bf529e0();
                      func_0x00010c028a60(puVar16);
                      _objc_release(lVar19);
                      _objc_release(lVar18);
                      _objc_release(lVar17);
                      _objc_release(uVar23);
                      uVar23 = *(undefined8 *)(param_1 + 0xb0);
                      puVar20 = PTR_PTR_1126b60f8;
                      func_0x00010c0f2b40(PTR_PTR_1126b60f8);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(uVar23);
                      _objc_release(puVar20);
                      uVar23 = *(undefined8 *)(param_1 + 0x78);
                      func_0x00010c25e900(param_1);
                      func_0x00010bef7840(uVar23);
                      _objc_release(puVar16);
                    }
                    _objc_release(uVar10);
                    _objc_release(puVar14);
                  }
                  _objc_release(lVar12);
                  _objc_release(lVar11);
                  _objc_release(puVar13);
                  _objc_release(puVar4);
                  _objc_release(lVar9);
                }
                _objc_release(uVar26);
                lVar29 = lVar29 + 1;
              } while (lVar7 != lVar29);
              lVar7 = lVar8;
              func_0x00010bf52a60();
            }
LAB_10589d990:
            _objc_release(lVar8);
            lVar25 = lVar25 + 1;
          } while (lVar25 != lVar5);
          lVar5 = lVar6;
          func_0x00010bf52a60();
        }
LAB_10589d9c8:
        _objc_release(lVar6);
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar21);
      lVar21 = param_3;
      func_0x00010bf52a60();
    }
LAB_10589d9fc:
    _objc_release(param_3);
    lVar21 = *(long *)(param_1 + 0xb0);
    func_0x00010bf529e0();
    if (lVar21 != 0) goto LAB_10589da30;
  }
  param_2 = param_6;
  func_0x000107e67794(1,param_6,0);
LAB_10589da30:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf3fe40(uVar23);
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar23);
  _objc_release(param_2);
  return lVar21;
}



/* Entry: 10589da88; end: 10589daf7;  */

undefined8 FUN_10589da88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3fe40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10589daf8; end: 10589daff;  */

void FUN_10589daf8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10589db00; end: 10589db27; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _shouldKeepAddingCommand] */

void FUN_10589db00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c25e900();
                    /* WARNING: Could not recover jumptable at 0x00010c22daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_shouldAddCommandForCurrentType__1126690e0,param_1);
  return;
}



/* Entry: 10589db28; end: 10589db2f; -[SCMemoriesMashupStyleFeaturedStoryMashupManager subType] */

undefined8 FUN_10589db28(void)

{
  return 1;
}



/* Entry: 10589db30; end: 10589dd93; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _generateMashupForFeaturedStory:memoriesMashupModel:itemOrder:groupName:observer:] */

void FUN_10589db30(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x000108ec0efc();
  if ((uVar1 & 1) == 0) {
    uVar4 = 1;
  }
  else if (param_4 == 0) {
    uVar4 = 2;
  }
  else {
    uVar1 = param_3;
    func_0x00010c080ca0();
    if (((uVar1 & 1) != 0) && (uVar1 = param_3, func_0x00010bf3d240(), ((uint)uVar1 >> 1 & 1) == 0))
    {
      lVar2 = param_4;
      func_0x00010c241440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        func_0x000107e66360(param_7,4,&PTR____CFConstantStringClassReference_110e098b8);
      }
      else {
        lVar3 = lVar2;
        func_0x000107e666f0(lVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 200),
                            &PTR____CFConstantStringClassReference_110e098b8,
                            *(undefined8 *)(param_1 + 0xa0));
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_68,param_1);
        _objc_retain(param_7);
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(param_4);
        _objc_retain(param_3);
        _objc_retain(param_5);
        _objc_retain(param_6);
        func_0x00010c297260(lVar3);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_3);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_70);
        _objc_release(param_7);
        _objc_destroyWeak(auStack_68);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
      goto LAB_10589dd10;
    }
    uVar4 = 3;
  }
  func_0x000107e66360(param_7,uVar4,&PTR____CFConstantStringClassReference_110e098b8);
LAB_10589dd10:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10589dd94; end: 10589df3b;  */

void FUN_10589dd94(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),5,
                        &PTR____CFConstantStringClassReference_110e098b8);
  }
  else {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),0x10,
                          &PTR____CFConstantStringClassReference_110e098b8);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0bc0a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c26afc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(lVar1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c26afa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar5 == 0) {
        func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),6,
                            &PTR____CFConstantStringClassReference_110e098b8);
      }
      else {
        lVar4 = param_2;
        func_0x00010bf51e00(param_2);
        func_0x00010c0fdba0(*(undefined8 *)(param_1 + 0x28));
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0844e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1b580(lVar1);
        _objc_release(uVar6);
        _objc_release(lVar4);
      }
      _objc_release(lVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589df3c; end: 10589e18f; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _generateMashupForFeaturedStory:template:orderedSelectedOriginalSnaps:mashupPlacement:templateId:snapId:itemOrder:groupName:observer:] */

void FUN_10589df3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar7);
  func_0x000108ec10b8();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_11);
  _objc_retain(param_3);
  func_0x000107e614a0(param_5,0,uVar5,uVar2,uVar3,uVar1,uVar6,uVar4,0);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_11);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_11);
  _objc_release(param_3);
  return;
}



/* Entry: 10589e190; end: 10589e3b7;  */

void FUN_10589e190(long param_1,long param_2)

{
  long lVar1;
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
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),7,
                        &PTR____CFConstantStringClassReference_110e098b8);
  }
  else {
    _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbfa60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    uStack_60 = *(undefined4 *)(param_1 + 0x70);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar12);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10589e3b8; end: 10589e553;  */

void FUN_10589e3b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),0x10,
                        &PTR____CFConstantStringClassReference_110e098b8);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589e554; end: 10589e5df;  */

void FUN_10589e554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be05c60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10589e5e0; end: 10589e5fb;  */

void FUN_10589e5e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10589e5fc; end: 10589e933; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _downloadAndPersistMashupSnapDoc:mashupEntry:templateId:createdFromSnapIds:mashupPlacement:snapId:itemOrder:groupName:observer:] */

void FUN_10589e5fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (((param_3 == 0) || (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) ||
     (lVar1 = param_6, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x000107e66360(param_11,9,&PTR____CFConstantStringClassReference_110e098b8);
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126b25b8;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011280();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e6121c(puVar3,param_3,uVar6,uVar5,*(undefined8 *)(param_1 + 0x18),puVar2,
                        &PTR____CFConstantStringClassReference_110e098b8);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar5);
    _objc_initWeak(auStack_70,param_1);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_4);
    _objc_retain(param_11);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_78 = param_7;
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_11);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10589e934; end: 10589ea5b;  */

void FUN_10589e934(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 == 0) && (lVar3 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befb7e0();
      _objc_release(uVar4);
      iVar1 = (int)*(undefined8 *)(lVar2 + 0x60);
      func_0x000108ec109c();
      lVar3 = param_2;
      func_0x00010c23fe00(param_2);
      _objc_retainAutoreleasedReturnValue();
      if (iVar1 == 0) {
        func_0x00010be735a0(lVar2);
      }
      else {
        func_0x00010bece740(lVar2);
      }
      _objc_release(lVar3);
    }
    else {
      func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),10,
                          &PTR____CFConstantStringClassReference_110e098b8);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589ea5c; end: 10589ecab; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _transcodeMashup:mashupEntry:templateId:createdFromSnapIds:mashupPlacement:snapId:itemOrder:groupName:observer:] */

void FUN_10589ea5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000107e66360(param_11,0xf,&PTR____CFConstantStringClassReference_110e098b8);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12f680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xc0));
    uVar1 = uVar2;
    func_0x00010c13cb40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_11);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_11);
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10589ecac; end: 10589ed93;  */

void FUN_10589ecac(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xc0);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x30),0xe,
                        &PTR____CFConstantStringClassReference_110e098b8);
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0));
    lVar2 = param_2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == 0) && (lVar2 != 0)) {
      func_0x00010be735a0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x000107e664b4(*(undefined8 *)(param_1 + 0x30),param_3,
                          &PTR____CFConstantStringClassReference_110e098b8);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589ed94; end: 10589eefb; -[SCMemoriesMashupStyleFeaturedStoryMashupManager _persistTranscodedMashupSnapDoc:mashupEntry:templateId:createdFromSnapIds:mashupPlacement:snapId:itemOrder:groupName:observer:] */

void FUN_10589ed94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3d240(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e66da8(param_3,param_4,param_5,0,param_6,param_7,puVar1,param_8,param_9,param_10,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110e098b8,param_11,0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10589eefc; end: 10589f033; -[SCMemoriesMashupStyleFeaturedStoryMashupManager .cxx_destruct] */

void FUN_10589eefc(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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



/* Entry: 10589f034; end: 10589f31b; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl initWithCircumstanceEngine:userStorageServices:memoriesMashupStyleMashupFeaturedStoryManager:memoriesMashupStyleCollageFeaturedStoryManager:memoriesMashupStyleCRCollageFeaturedStoryManager:memoriesMashupStyleCRMashupFeaturedStoryManager:memoriesMashupStyleGenAIFeaturedStoryManager:featuredStoriesGenerationCoordinatorServices:memoriesCRFeaturedStoryManager:memoriesFeaturedStorySnapGenerator:memoriesExperimentService:] */

undefined8 *
FUN_10589f034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126eab18;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[4];
    puVar2[4] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[5];
    puVar2[5] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[7];
    puVar2[7] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[8];
    puVar2[8] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[9];
    puVar2[9] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[10];
    puVar2[10] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_14;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar2[1];
    puVar2[1] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    *(undefined2 *)((long)puVar2 + 0x14) = 1;
    *(undefined1 *)((long)puVar2 + 0x16) = 1;
    *(undefined4 *)(puVar2 + 2) = 0x10101;
    *(undefined1 *)(puVar2 + 0x11) = 0;
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[4];
    func_0x000108ec1338();
    *(undefined1 *)(puVar2 + 6) = uVar1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    func_0x00010bec73c0(puVar2);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10589f31c; end: 10589f38f; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl beginCollageFeaturedStoriesGenerationIfNecessary:] */

void FUN_10589f31c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108ec0f2c(*(undefined8 *)(param_2 + 0x20));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10589f390;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_1;
  uStack_28 = param_4;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_58);
  return;
}



/* Entry: 10589f390; end: 10589f457;  */

void FUN_10589f390(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
    uVar1 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10589f458;
    puStack_48 = &UNK_110848c48;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010058c530(uVar1,uVar2,&puStack_60);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10589f458; end: 10589f467;  */

void FUN_10589f458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMashupStyleFeaturedStor_112564708,1,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10589f468; end: 10589f4db; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl beginMashupFeaturedStoriesGenerationIfNecessary:] */

void FUN_10589f468(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108ec0fa0(*(undefined8 *)(param_2 + 0x20));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10589f4dc;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_1;
  uStack_28 = param_4;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_58);
  return;
}



/* Entry: 10589f4dc; end: 10589f5a3;  */

void FUN_10589f4dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x11) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x11) = 0;
    uVar1 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10589f5a4;
    puStack_48 = &UNK_110848c48;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010058c530(uVar1,uVar2,&puStack_60);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10589f5a4; end: 10589f5b3;  */

void FUN_10589f5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMashupStyleFeaturedStor_112564708,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10589f5b4; end: 10589f60b; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl beginCRCollageFeaturedStoriesGenerationIfNecessary:] */

void FUN_10589f5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10589f60c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10589f60c; end: 10589f63f;  */

void FUN_10589f60c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x13) = 1;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x12) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x12) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMashupStyleFeaturedStor_112564708,3,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10589f640; end: 10589f697; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl beginCRMashupFeaturedStoriesGenerationIfNecessary:] */

void FUN_10589f640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10589f698;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10589f698; end: 10589f6cb;  */

void FUN_10589f698(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x15) = 1;
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x14) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMashupStyleFeaturedStor_112564708,2,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10589f6cc; end: 10589f723; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl beginGenAIFeaturedStoriesGenerationIfNecessary:] */

void FUN_10589f6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10589f724;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10589f724; end: 10589f773;  */

void FUN_10589f724(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x16) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x20);
    func_0x000108ec1230();
    if (iVar1 == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x20);
  }
  *(undefined1 *)(lVar2 + 0x16) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__generateMashupStyleFeaturedStor_112564708,4,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10589f774; end: 10589f873; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl terminateMashupStyleFeaturedStoriesGenerationIfNecessary] */

void FUN_10589f774(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b460();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10589f874;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 10589f874; end: 10589f887;  */

void FUN_10589f874(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x13) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x15) = 0;
  return;
}



/* Entry: 10589f888; end: 10589fc03; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl _generateMashupStyleFeaturedStories:origin:] */

void FUN_10589f888(undefined *param_1,undefined1 *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_148 [8];
  ulong uStack_140;
  undefined1 auStack_138 [8];
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
  puVar1 = param_1;
  if ((long)param_3 < 3) {
    if (1 < param_3) {
      if ((param_3 != 2) || (param_1[0x15] != '\x01')) goto LAB_10589fb9c;
      puVar1 = *(undefined **)(param_1 + 0x50);
      goto LAB_10589fabc;
    }
LAB_10589f8f8:
    func_0x00010be1dd80(param_1);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar9 = *(long *)(param_1 + 0x80);
    _objc_retain(lVar9);
    lVar2 = lVar9;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          lVar10 = *(long *)(lStack_128 + lVar7 * 8);
          func_0x00010bf33360();
          uVar3 = *(ulong *)(param_1 + 0x70);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c22de20();
          if ((uVar4 & 1) == 0) {
            if ((lVar10 == 0x31) || (lVar10 == 0x43)) {
              _objc_release(uVar3);
            }
            else {
              _objc_release(uVar3);
              if (lVar10 != 0x45) goto LAB_10589f9ac;
            }
          }
          else {
            _objc_release(uVar3);
LAB_10589f9ac:
            func_0x00010befa120(puVar1);
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar9;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar9);
    puVar8 = puVar1;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar1;
      func_0x00010c0b8600(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010be1efa0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bfbfaa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
  }
  else {
    if (param_3 != 3) {
      if (param_3 != 4) goto LAB_10589fb9c;
      goto LAB_10589f8f8;
    }
    if (param_1[0x13] != '\x01') goto LAB_10589fb9c;
    puVar1 = *(undefined **)(param_1 + 0x48);
LAB_10589fabc:
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bfbfa80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  if (puVar8 != (undefined *)0x0) {
    _objc_initWeak(auStack_138,param_1);
    puVar1 = puVar8;
    func_0x00010c0e0ea0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_138;
    _objc_copyWeak(auStack_148,param_2);
    puVar5 = puVar1;
    uStack_140 = param_3;
    func_0x00010c25ff60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar8);
    puVar1 = puVar8;
  }
LAB_10589fb9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf3fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_collectionId_1125ad938);
  return;
}



/* Entry: 10589fc04; end: 10589fc0b;  */

void FUN_10589fc04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_collectionId_1125ad938);
  return;
}



/* Entry: 10589fc0c; end: 10589fcc3;  */

void FUN_10589fc0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589fcc4; end: 10589fce7;  */

void FUN_10589fcc4(long param_1)

{
  if (*(ulong *)(param_1 + 0x28) < 5) {
    *(undefined1 *)
     (*(long *)(param_1 + 0x20) + *(long *)(&UNK_10ddbff18 + *(ulong *)(param_1 + 0x28) * 8)) = 0;
  }
  return;
}



/* Entry: 10589fce8; end: 10589fd9f;  */

void FUN_10589fce8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x000108ec1030();
      if ((uVar1 & 1) == 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x11) = 1;
      }
    }
    else if (lVar2 == 1) {
      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 1;
    }
  }
  else if (lVar2 == 2) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x14) = 1;
  }
  else if (lVar2 == 3) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x12) = 1;
  }
  else if (lVar2 == 4) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x16) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10589fda0; end: 10589fee7; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl _subscribeToCRFeaturedStories] */

void FUN_10589fda0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10589fee8; end: 10589ff93;  */

void FUN_10589fee8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10589ff94; end: 1058a00bf;  */

void FUN_10589ff94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058a00c0; end: 1058a00c3;  */

void FUN_1058a00c0(void)

{
  return;
}



/* Entry: 1058a00c4; end: 1058a0113; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl _getFeaturedStoryManagerForSubtype:] */

void FUN_1058a00c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0x38;
  }
  else if (param_3 == 4) {
    lVar1 = 0x58;
  }
  else {
    if (param_3 != 1) goto _objc_autoreleaseReturnValue;
    lVar1 = 0x40;
  }
  func_0x00010c269d40(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058a0114; end: 1058a0237; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl _getCollectionsIfNeeded] */

void FUN_1058a0114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if ((*(char *)(param_1 + 0x88) == '\x01') && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf87660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000106793668();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058a0238;
  puStack_40 = &UNK_1108bb108;
  puStack_38 = puVar3;
  _objc_retain();
  func_0x00010bf97e80(uVar2,param_2,&puStack_58);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar4;
  _objc_release(uVar5);
  _objc_release(puStack_38);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058a0238; end: 1058a0277;  */

void FUN_1058a0238(long param_1,undefined8 param_2)

{
  func_0x000106793b5c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058a0278; end: 1058a0377; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowImpl .cxx_destruct] */

void FUN_1058a0278(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058a0378; end: 1058a06db; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowServiceProvider _createWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058a0378(long param_1,undefined8 param_2)

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
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126bf960;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11272b67c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_78 = 0;
    lVar15 = 0;
  }
  else {
    uStack_78 = param_1 + _DAT_11272b680;
    _objc_loadWeakRetained();
    lVar15 = param_1 + _DAT_11272b674;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar15;
  func_0x00010c0c8de0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11272b668;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar16;
  func_0x00010c0c84e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c8500();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c8da0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11272b66c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010c0c8d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11272b678;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar18;
  func_0x00010c0c8d80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11272b670;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c0c8e00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
    lVar20 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_11272b684;
    _objc_loadWeakRetained();
    lVar20 = param_1 + _DAT_11272b688;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar20;
  func_0x00010c0c7f20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11272b68c;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar21;
  func_0x00010bfc0b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272b690;
    _objc_loadWeakRetained();
  }
  lVar13 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffecc0(puVar1,param_2,lVar2,uStack_78,lVar3,lVar7,lVar8,lVar9,lVar10,lVar22,lVar11,
                      lVar12,lVar13);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar22);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(uStack_78);
  _objc_release(lVar2);
  _objc_release(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058a06dc; end: 1058a078b; -[SCMemoriesMashupStyleFeaturedStoriesGenerationWorkflowServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058a06dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b690);
  _objc_destroyWeak(param_1 + _DAT_11272b68c);
  _objc_destroyWeak(param_1 + _DAT_11272b688);
  _objc_destroyWeak(param_1 + _DAT_11272b684);
  _objc_destroyWeak(param_1 + _DAT_11272b680);
  _objc_destroyWeak(param_1 + _DAT_11272b67c);
  _objc_destroyWeak(param_1 + _DAT_11272b678);
  _objc_destroyWeak(param_1 + _DAT_11272b674);
  _objc_destroyWeak(param_1 + _DAT_11272b670);
  _objc_destroyWeak(param_1 + _DAT_11272b66c);
  _objc_destroyWeak(param_1 + _DAT_11272b668);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b664);
  return;
}



/* Entry: 1058a078c; end: 1058a0a2f; -[SCMemoriesSoundSyncFeaturedStoryManager initWithSnapDocManager:memoriesMashupSnapDocFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:coreConfigProvider:dataObjectContext:memoriesProfile:mergedDataSource:cloudFS:] */

undefined8 *
FUN_1058a078c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126eab20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
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



/* Entry: 1058a0a30; end: 1058a0eef; -[SCMemoriesSoundSyncFeaturedStoryManager convertedFeaturedStory:] */

void FUN_1058a0a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ec19fc();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126af4c0;
  puVar8 = PTR_PTR_1126ae6b8;
  if ((uVar2 & 1) == 0) {
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1058a0e9c;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6f00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar8 = PTR_PTR_1126ae6b8;
  if (puVar6 < (undefined *)0x2) {
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puStack_c0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
LAB_1058a0d5c:
      _objc_initWeak(auStack_68,param_1);
      puVar11 = *(undefined **)(param_1 + 0x10);
      func_0x00010c269d40(puVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf53c00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar11;
      func_0x00010bfc0280(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_3);
      _objc_retain(puStack_b8);
      _objc_retain(puStack_c0);
      uStack_70 = 0x32;
      puVar8 = puVar9;
      func_0x00010bfb26a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_c0);
      _objc_release(puStack_b8);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar9);
      _objc_release(uVar3);
      _objc_release(puVar11);
      _objc_destroyWeak(auStack_68);
    }
    else {
      puStack_b8 = puVar6;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126af4d0;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar8 = puVar12;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar8;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puVar12;
      func_0x00010bfb1920(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf2a8a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar3 = param_3;
      func_0x00010bf53c00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0fa980();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x000107fe998c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = uVar10;
      func_0x00010c0720c0();
      _objc_release(uVar10);
      _objc_release(puVar9);
      if ((int)uVar3 == 0) goto LAB_1058a0d5c;
      func_0x00010c113c80(puVar6);
      func_0x00010c245cc0(puVar6);
      func_0x00010bde97c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae6b8;
      puVar9 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(param_1);
    }
    _objc_release(puVar12);
    _objc_release(puStack_c0);
    _objc_release(puStack_b8);
  }
  else {
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_1058a0e9c:
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1058a0ef0; end: 1058a1097;  */

void FUN_1058a0ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1058a1098;
  uStack_70 = 0x1058a10a8;
  uStack_68 = 0;
  _objc_copyWeak(auStack_a0,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_98 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_2);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058a1098; end: 1058a10af;  */

void FUN_1058a1098(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058a10b0; end: 1058a11e7;  */

void FUN_1058a10b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,param_1 + 0x40);
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 1058a11e8; end: 1058a1257;  */

void FUN_1058a11e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be73260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058a1258; end: 1058a129f;  */

void FUN_1058a1258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058a12a0; end: 1058a17b7; -[SCMemoriesSoundSyncFeaturedStoryManager _persistInLocalDB:featuredStoryToConvert:entryId:snapIdToReplace:entrySource:observer:] */

void FUN_1058a12a0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = param_4;
  func_0x00010bf53c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf90fc0();
  _objc_release(uVar4);
  if ((int)uVar5 == 0) {
    puVar1 = param_4;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0fa980();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x000107fe998c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR_PTR_1126bf820;
    _objc_alloc(PTR_PTR_1126bf820);
    puVar8 = param_4;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c113c80(param_4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046fa0(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c14ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_initWeak(auStack_a8,param_1);
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(param_4);
    _objc_retain(param_8);
    uVar4 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  else {
    puVar7 = PTR_PTR_1126bf810;
    _objc_alloc();
    func_0x00010c0066e0();
    puVar6 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010bf53c00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c14aa60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1058a17b8;
    puStack_88 = &UNK_1108bb1c8;
    _objc_retain(param_8);
    uStack_80 = param_8;
    lStack_78 = param_1;
    _objc_retain(param_4);
    puStack_70 = param_4;
    func_0x00010c297260(puVar2);
    puVar1 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_70);
    uVar5 = uStack_80;
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058a17b8; end: 1058a197f;  */

/* WARNING: Possible PIC construction at 0x0001058a1930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001058a1934) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1058a17b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af4c0;
  if (param_3 == 0) {
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_2);
    puVar1 = PTR_PTR_1126af4d0;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c113c80(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bde97c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1058a1980; end: 1058a1a7f;  */

void FUN_1058a1980(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058a1a80; end: 1058a1b8f;  */

void FUN_1058a1a80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfbcca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfbd940(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c113c80(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bde97c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b80();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058a1b90; end: 1058a1beb;  */

void FUN_1058a1b90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1058a1bec; end: 1058a1cf3; -[SCMemoriesSoundSyncFeaturedStoryManager _convertedFeaturedStory:entry:snaps:priority:numberOfItemsViewed:] */

void FUN_1058a1bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bf968;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c050f00();
  puVar2 = PTR_PTR_1126bf970;
  _objc_alloc(PTR_PTR_1126bf970);
  uVar3 = param_4;
  func_0x00010bf97200(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = param_5;
  func_0x00010bf529e0();
  _objc_release(param_5);
  func_0x00010c03dce0(0,puVar2,param_2,puVar1,0,0,0,0,uVar3,param_6,uVar4,param_7,0);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058a1cf4; end: 1058a1ddb; -[SCMemoriesSoundSyncFeaturedStoryManager .cxx_destruct] */

void FUN_1058a1cf4(long param_1)

{
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



/* Entry: 1058a1ddc; end: 1058a20c7; -[SCMemoriesSoundSyncFeaturedStoryManagerServiceProvider _memoriesSoundSyncFeaturedStoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058a1ddc(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126bf980;
  _objc_alloc();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11272b6cc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar16;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11272b6c8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar17;
  func_0x00010c0c8d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11272b6d0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar18;
  func_0x00010c14a940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11272b6d4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar19;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_1058a20c8();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_1058a20c8();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x0001058a20ec();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x0001058a20ec();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272b6e0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar20;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272b6e4;
    _objc_loadWeakRetained();
  }
  lVar15 = param_1;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047800(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7,lVar9,lVar11,lVar13,lVar14,lVar15
                     );
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar20);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058a20c8; end: 1058a210f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058a20c8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272b6d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058a2110; end: 1058a21cf; -[SCMemoriesSoundSyncFeaturedStoryManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058a2110(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b6e4);
  _objc_destroyWeak(param_1 + _DAT_11272b6e0);
  _objc_destroyWeak(param_1 + _DAT_11272b6dc);
  _objc_destroyWeak(param_1 + _DAT_11272b6d8);
  _objc_destroyWeak(param_1 + _DAT_11272b6d4);
  _objc_destroyWeak(param_1 + _DAT_11272b6d0);
  _objc_destroyWeak(param_1 + _DAT_11272b6cc);
  _objc_destroyWeak(param_1 + _DAT_11272b6c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b6c4);
  return;
}



/* Entry: 1058a21d0; end: 1058a222b; -[SCMemoriesMediaRetrievalServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058a21d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b6f8);
  _objc_destroyWeak(param_1 + _DAT_11272b6f4);
  _objc_destroyWeak(param_1 + _DAT_11272b6f0);
  _objc_destroyWeak(param_1 + _DAT_11272b6ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b6e8);
  return;
}



/* Entry: 1058a222c; end: 1058a23b3; -[SCMemoriesMediaRetriever initWithMemoriesCloudFS:encryptedContentManager:dataObjectContext:snapDocManager:] */

undefined1 *
FUN_1058a222c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126eab28;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058a23b4; end: 1058a23c3; -[SCMemoriesMediaRetriever retrieveMediaForSnapId:shouldReportProgress:representation:] */

void FUN_1058a23b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be658b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__observableForSnapId_shouldRepor_112576fc8,param_3,param_4,1,0,param_5);
  return;
}



/* Entry: 1058a23c4; end: 1058a23d7; -[SCMemoriesMediaRetriever retrieveLocalMediaIfExistsForSnapId:representation:] */

void FUN_1058a23c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be658b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__observableForSnapId_shouldRepor_112576fc8,param_3,0,1,1,param_4);
  return;
}



/* Entry: 1058a23d8; end: 1058a23eb; -[SCMemoriesMediaRetriever retrieveVideoMediaForSnapId:representation:] */

void FUN_1058a23d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be658b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__observableForSnapId_shouldRepor_112576fc8,param_3,0,0,0,param_4);
  return;
}



/* Entry: 1058a23ec; end: 1058a2527; -[SCMemoriesMediaRetriever _observableForSnapId:shouldReportProgress:shouldDecryptData:localOnly:representation:] */

void FUN_1058a23ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  uStack_5f = param_5;
  uStack_5e = param_6;
  _objc_retain(param_7);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058a2528; end: 1058a2647;  */

void FUN_1058a2528(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be96920();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058a2648; end: 1058a2723;  */

void FUN_1058a2648(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058a2724; end: 1058a2873; -[SCMemoriesMediaRetriever _retrieveMediaWithProgressFor:shouldReportProgress:shouldDecryptData:localOnly:representation:observer:] */

void FUN_1058a2724(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_7);
  uStack_60 = param_6;
  uStack_5f = param_4;
  uStack_5e = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a2874; end: 1058a2d0b;  */

void FUN_1058a2874(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af4d0;
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    goto LAB_1058a2c78;
  }
  uVar2 = *(undefined8 *)(puVar1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar9 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126af4c0;
  if (puVar3 == (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    FUN_1058a2d0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar9 = puVar4;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (puVar9 == (undefined *)0x8) {
      puVar11 = puVar4;
      func_0x00010bf97200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010be0a9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar9 = PTR_PTR_1126af5d0;
      if (puVar5 != (undefined *)0x0) {
        puVar9 = puVar4;
        func_0x00010bf97200(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010bde1800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar6 = PTR_PTR_1126bc800;
        uVar2 = *(undefined8 *)(puVar1 + 0x18);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar7 = puVar6;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x000108020568();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        puVar9 = PTR_PTR_1126af5d0;
        if (puVar8 != (undefined *)0x0) {
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar9 = puVar11;
          puVar11 = puVar8;
          goto LAB_1058a2ad4;
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        FUN_1058a2d0c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar2);
        _objc_release(puVar9);
        _objc_release(puVar7);
        func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar6);
        _objc_release(puVar5);
        goto LAB_1058a2c64;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_1058a2d0c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar9);
      _objc_release(puVar11);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      puVar9 = puVar1;
      func_0x00010bde1820();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined *)0x0;
LAB_1058a2ad4:
      if ((*(char *)(param_1 + 0x40) == '\x01') &&
         (puVar6 = puVar9, func_0x00010c06cde0(), puVar5 = PTR_PTR_1126af5d0,
         ((ulong)puVar6 & 1) == 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        FUN_1058a2d0c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa01c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar2);
        _objc_release(puVar5);
        _objc_release(puVar6);
        func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        puVar5 = PTR_PTR_1126af5d0;
        if (puVar9 == (undefined *)0x0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          FUN_1058a2d0c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa01c0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar2);
          _objc_release(puVar5);
          _objc_release(puVar6);
          _objc_release(puVar9);
          func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
          goto LAB_1058a2c64;
        }
        func_0x00010be05ee0(puVar1);
      }
      _objc_release(puVar9);
LAB_1058a2c64:
      _objc_release(puVar11);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_1058a2c78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058a2d0c; end: 1058a2dcb;  */

undefined * FUN_1058a2d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e09978;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e09958;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  ppuVar2 = ppuVar3;
  func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f72778);
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar3;
    func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f72798);
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuVar2 = ppuVar3;
      func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f727b8);
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar2 = ppuVar3;
        func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f727d8);
        if (((ulong)ppuVar2 & 1) == 0) {
          ppuVar2 = ppuVar3;
          func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f72858);
          if (((ulong)ppuVar2 & 1) == 0) {
            ppuVar2 = ppuVar3;
            func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f727f8);
            if (((ulong)ppuVar2 & 1) == 0) {
              ppuVar2 = ppuVar3;
              func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110f72818);
              uVar4 = 0x10;
              if ((int)ppuVar2 == 0) {
                uVar4 = 0;
              }
              puVar5 = (undefined *)(ulong)uVar4;
            }
            else {
              puVar5 = (undefined *)0xe;
            }
          }
          else {
            puVar5 = (undefined *)0x12;
          }
        }
        else {
          puVar5 = (undefined *)0xd;
        }
      }
      else {
        puVar5 = (undefined *)0x4;
      }
    }
    else {
      puVar5 = (undefined *)0x2;
    }
  }
  else {
    puVar5 = (undefined *)0x1;
  }
  _objc_release(ppuVar3);
  return puVar5;
}



/* Entry: 1058a2dcc; end: 1058a2eab; -[SCMemoriesMediaRetriever _protoAssetTypeFromRepresentation:] */

undefined4 FUN_1058a2dcc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f72778);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f72798);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f727b8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f727d8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f72858);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f727f8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f72818);
              uVar2 = 0x10;
              if ((int)uVar1 == 0) {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0xe;
            }
          }
          else {
            uVar2 = 0x12;
          }
        }
        else {
          uVar2 = 0xd;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1058a2eac; end: 1058a2f57; -[SCMemoriesMediaRetriever _entryAssetForRepresentation:entryId:] */

void FUN_1058a2eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be834c0(param_1,param_2,param_3);
  puVar3 = PTR_PTR_1126bc808;
  if ((int)lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4f80(puVar3,param_2,param_4,lVar1,uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058a2f58; end: 1058a3033; -[SCMemoriesMediaRetriever _cloudFSFileForEntryId:entryAsset:] */

void FUN_1058a2f58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf0b260(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf0b760();
    _objc_release(param_4);
    if ((uint)lVar3 < 0x16) {
      func_0x00010b697928(lVar3);
    }
    else {
      lVar3 = -0x4524111;
    }
    uVar2 = uVar4;
    func_0x00010c13a860(uVar4,param_2,param_3,lVar1,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058a3034; end: 1058a32a7; -[SCMemoriesMediaRetriever _cloudFSFileForSnap:representation:] */

void FUN_1058a3034(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f726f8);
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72718);
    if ((uVar1 & 1) != 0) {
LAB_1058a30bc:
      uVar3 = 0;
      goto LAB_1058a30c0;
    }
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72738);
    if ((int)uVar1 == 0) {
      uVar1 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72758);
      if ((int)uVar1 == 0) {
        uVar1 = param_4;
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72778);
        if ((int)uVar1 == 0) {
          uVar1 = param_4;
          func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72798);
          if ((int)uVar1 == 0) {
            uVar1 = param_4;
            func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f727b8);
            if ((int)uVar1 == 0) {
              uVar1 = param_4;
              func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f727d8);
              if ((int)uVar1 == 0) {
                uVar1 = param_4;
                func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72858
                                   );
                if ((int)uVar1 == 0) {
                  uVar1 = param_4;
                  func_0x00010c0720c0(param_4,param_2,
                                      &PTR____CFConstantStringClassReference_110f727f8);
                  if ((int)uVar1 == 0) {
                    uVar1 = param_4;
                    func_0x00010c0720c0(param_4,param_2,
                                        &PTR____CFConstantStringClassReference_110f72818);
                    if ((int)uVar1 == 0) goto LAB_1058a30bc;
                    uVar2 = *(undefined8 *)(param_1 + 8);
                    func_0x00010c269d40(uVar2);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    uVar2 = *(undefined8 *)(param_1 + 8);
                    func_0x00010c269d40(uVar2);
                    _objc_retainAutoreleasedReturnValue();
                  }
                }
                else {
                  uVar2 = *(undefined8 *)(param_1 + 8);
                  func_0x00010c269d40(uVar2);
                  _objc_retainAutoreleasedReturnValue();
                }
              }
              else {
                uVar2 = *(undefined8 *)(param_1 + 8);
                func_0x00010c269d40(uVar2);
                _objc_retainAutoreleasedReturnValue();
              }
            }
            else {
              uVar2 = *(undefined8 *)(param_1 + 8);
              func_0x00010c269d40(uVar2);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            uVar2 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40(uVar2);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          uVar2 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar2);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = uVar2;
      func_0x00010c13a8e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c13ac80();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_1058a30c0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058a32a8; end: 1058a33cb; -[SCMemoriesMediaRetriever _fileURLForFile:representation:] */

void FUN_1058a32a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72718);
  if (((uVar1 & 1) == 0) &&
     ((((((uVar1 = param_4,
          func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f726f8),
          (uVar1 & 1) != 0 ||
          (uVar1 = param_4,
          func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72738),
          (uVar1 & 1) != 0)) ||
         (uVar1 = param_4,
         func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72758),
         (uVar1 & 1) != 0)) ||
        ((uVar1 = param_4,
         func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72778),
         (uVar1 & 1) != 0 ||
         (uVar1 = param_4,
         func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72798),
         (uVar1 & 1) != 0)))) ||
       ((uVar1 = param_4,
        func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f727b8),
        (uVar1 & 1) != 0 ||
        ((uVar1 = param_4,
         func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f727d8),
         (uVar1 & 1) != 0 ||
         (uVar1 = param_4,
         func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72858),
         (uVar1 & 1) != 0)))))) ||
      ((uVar1 = param_4,
       func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f727f8),
       (uVar1 & 1) != 0 ||
       (uVar1 = param_4,
       func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f72818),
       (int)uVar1 != 0)))))) {
    uVar2 = param_3;
    func_0x00010bfad280(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058a33cc; end: 1058a36d3; -[SCMemoriesMediaRetriever _downloadFile:snap:snapDoc:shouldReportProgress:shouldDecryptData:representation:observer:] */

void FUN_1058a33cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puStack_118;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  if (param_6 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1058a36d4;
    puStack_80 = &UNK_110846710;
    puStack_118 = &uStack_78;
    _objc_retain(param_9);
    uStack_78 = param_9;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_copyWeak(auStack_a8,auStack_70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_a0 = param_7;
  _objc_retain(param_5);
  lVar4 = param_3;
  func_0x00010bf89240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_8);
  _objc_release(param_9);
  if (param_6 != 0) {
    _objc_release(*puStack_118);
  }
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058a36d4; end: 1058a3783;  */

void FUN_1058a36d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bf998;
  _objc_alloc(PTR_PTR_1126bf998);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b3c0(puVar1,param_3,puVar2,1,0);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x20),param_3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058a3784; end: 1058a3977;  */

void FUN_1058a3784(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126af5d0;
  if (param_2 == 0) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar6);
      _objc_release(puVar3);
      _objc_release(uVar2);
      lVar4 = lVar1;
      func_0x00010be15ae0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (*(char *)(param_1 + 0x50) == '\x01') {
        if (*(long *)(param_1 + 0x40) == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010bfaca80(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf93dc0();
          _objc_release(uVar2);
          func_0x00010bde3580(lVar1);
        }
        else {
          func_0x00010bde35a0(lVar1);
        }
      }
      else {
        func_0x00010bde38a0(lVar1);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar1);
  }
  else if ((param_2 == 2) || (param_2 == 1)) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    FUN_1058a2d0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058a3978; end: 1058a3aa3; -[SCMemoriesMediaRetriever _completeWithDecryptedDataFromSnapDoc:representation:observer:] */

void FUN_1058a3978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0018;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047840(puVar1,param_2,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010be834c0(param_1,param_2,param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1058a3aa4;
  puStack_58 = &UNK_1108bb318;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c13e8a0(puVar1,param_2,param_1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 1058a3aa4; end: 1058a3baf;  */

/* WARNING: Possible PIC construction at 0x0001058a3b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001058a3b28) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1058a3aa4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126af5d0;
  if ((param_2 == 0) || (param_5 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_1;
    FUN_1058a2d0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc(PTR_PTR_1126bf998);
    func_0x00010c03b3c0();
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1058a3bb0; end: 1058a3e43; -[SCMemoriesMediaRetriever _completeWithDecryptedDataForSnap:cloudFile:representation:encryptionHint:observer:] */

void FUN_1058a3bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1058a3d04;
  puStack_60 = &UNK_1108b71b0;
  uStack_58 = param_7;
  _objc_retain(param_7);
  func_0x00010c135220(uVar3,param_2,param_3,param_4,0,param_5,puVar1,uVar2,&puStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(param_7);
  return;
}


