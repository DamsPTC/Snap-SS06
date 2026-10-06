/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e6c828; end: 107e6c833; -[SCMemoriesCameraRollCollageCoolDownDataChangeRequest table] */

undefined * FUN_107e6c828(void)

{
  return &UNK_10f460af3;
}



/* Entry: 107e6c834; end: 107e6c87b; -[SCMemoriesCameraRollCollageCoolDownDataChangeRequest createTableWithSQLite:] */

void FUN_107e6c834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dee7f70,0xb0,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 107e6c87c; end: 107e6cceb; -[SCMemoriesCameraRollCollageCoolDownDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_107e6c87c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar6 = param_1;
  if (iVar2 == 1) {
    FUN_107e6c7c4(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar11 = puVar6;
    func_0x00010bf65420(puVar6);
    puVar7 = puVar6;
    func_0x00010c088dc0(puVar6);
    *(undefined1 *)(param_4 + 0x46) = 1;
    iVar2 = *(int *)(param_4 + 0x20);
    iVar3 = *(int *)(param_4 + 0x30);
    iVar4 = *(int *)(param_4 + 0x28);
    func_0x0001001ce1c8(param_4,6,puVar7,0);
    func_0x0001001ce354(param_4,4,puVar11,0);
    lVar8 = param_4;
    func_0x0001001ce548(param_4,(iVar2 - iVar3) + iVar4);
    _objc_release(puVar6);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar13;
    lVar8 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f460bc0);
    if (lVar8 == 0) goto LAB_107e6cc78;
    _sqlite3_bind_blob(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar5);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
    }
    _sqlite3_bind_int64(lVar8,2,uVar9);
    _sqlite3_step();
    if ((int)lVar8 != 0x65) goto LAB_107e6cc78;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x00010c1eeb60(puVar6);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d8030);
    func_0x00010c21c9a0(puVar11);
LAB_107e6cc60:
    _objc_release(puVar11);
    _objc_retain(puVar6);
    puVar11 = puVar6;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f460b7d);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d8030);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar11);
            _objc_release(puVar6);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107e6cc84;
          }
        }
      }
      puVar11 = (undefined *)0x0;
      goto LAB_107e6cc84;
    }
    FUN_107e6c7c4(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar11 = puVar6;
    func_0x00010bf65420(puVar6);
    puVar7 = puVar6;
    func_0x00010c088dc0(puVar6);
    *(undefined1 *)(param_4 + 0x46) = 1;
    iVar2 = *(int *)(param_4 + 0x20);
    iVar3 = *(int *)(param_4 + 0x30);
    iVar4 = *(int *)(param_4 + 0x28);
    func_0x0001001ce1c8(param_4,6,puVar7,0);
    func_0x0001001ce354(param_4,4,puVar11,0);
    lVar8 = param_4;
    func_0x0001001ce548(param_4,(iVar2 - iVar3) + iVar4);
    _objc_release(puVar6);
    func_0x0001001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar5 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f460c1d);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar5);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + uVar10);
      }
      _sqlite3_bind_int64(param_3,3,uVar9);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d8030);
        func_0x00010c21c9a0(puVar11);
        goto LAB_107e6cc60;
      }
    }
LAB_107e6cc78:
    puVar11 = (undefined *)0x0;
  }
  _objc_release(puVar6);
LAB_107e6cc84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 107e6ccec; end: 107e6ccf3; -[SCMemoriesCRFeaturedStoryNetworkCoordinatorServices memoriesCRFeaturedStoryNetworkCoordinator] */

undefined8 FUN_107e6ccec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e6ccf4; end: 107e6ccff; -[SCMemoriesCRFeaturedStoryNetworkCoordinatorServices .cxx_destruct] */

void FUN_107e6ccf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e6cd00; end: 107e6cd0b; -[SCMemoriesFeaturedStoryDataMutatorServices .cxx_destruct] */

void FUN_107e6cd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e6cd0c; end: 107e6cf4f; -[SCMemoriesFeaturedStoriesCarouselCellV2 initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107e6cd0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fb6c0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    func_0x00010c161020(puVar1);
    puVar2 = PTR_PTR_1126d8040;
    _objc_opt_new(PTR_PTR_1126d8040);
    func_0x00010c1f7ac0();
    puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c014040();
    lVar7 = (long)_DAT_1127706b8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1d8be0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,
                        *(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6940;
    _objc_alloc();
    puVar5 = PTR_PTR_1126b6948;
    _objc_opt_new(PTR_PTR_1126b6948);
    func_0x00010c059900();
    lVar7 = (long)_DAT_1127706bc;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c17e6a0(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  return puVar1;
}



/* Entry: 107e6cf50; end: 107e6cfd7;  */

void FUN_107e6cf50(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e6cfd8; end: 107e6d353; -[SCMemoriesFeaturedStoriesCarouselCellV2 setViewModel:carouselDataSource:memoriesExperimentService:featuredStoryActionHanlder:featuredDataLogging:galleryLogger:thumbnailDownloader:snapchattersDataFetcher:bitmojiAvatarProvider:bitmojiImageFetcher:memoriesEntryThumbnailGeneratorBuilder:memoriesCRFeaturedStoryThumbnailGeneratorBuilder:circumstanceEngine:memoriesChatMediaFeaturedStoryThumbnailGeneratorBuilder:memoriesUserDefaultsManager:memoriesGraphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6cfd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  lVar3 = (long)_DAT_1127706c0;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar3,param_4);
  _objc_storeWeak(param_1 + _DAT_1127706c4,param_6);
  _objc_release(param_6);
  _objc_storeWeak(param_1 + _DAT_1127706c8,param_7);
  _objc_release(param_7);
  _objc_storeWeak(param_1 + _DAT_1127706cc,param_9);
  _objc_release(param_9);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706d0);
  *(undefined8 *)(param_1 + _DAT_1127706d0) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706d4);
  *(undefined8 *)(param_1 + _DAT_1127706d4) = param_8;
  _objc_retain();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706d8);
  *(undefined8 *)(param_1 + _DAT_1127706d8) = param_11;
  _objc_retain(param_11);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706dc);
  *(undefined8 *)(param_1 + _DAT_1127706dc) = param_12;
  _objc_retain();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706e0);
  *(undefined8 *)(param_1 + _DAT_1127706e0) = param_13;
  _objc_retain(param_13);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706e4);
  *(undefined8 *)(param_1 + _DAT_1127706e4) = param_14;
  _objc_retain(param_14);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706e8);
  *(undefined8 *)(param_1 + _DAT_1127706e8) = param_15;
  _objc_retain(param_15);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706ec);
  *(undefined8 *)(param_1 + _DAT_1127706ec) = param_16;
  _objc_retain(param_16);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706f0);
  *(undefined8 *)(param_1 + _DAT_1127706f0) = param_17;
  _objc_retain(param_17);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706f4);
  *(undefined8 *)(param_1 + _DAT_1127706f4) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706f8);
  *(undefined8 *)(param_1 + _DAT_1127706f8) = param_18;
  _objc_retain(param_18);
  _objc_release(uVar2);
  func_0x00010bf1a480(param_1);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127706fc);
  *(undefined **)(param_1 + _DAT_1127706fc) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_18);
  _objc_release(param_5);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 107e6d354; end: 107e6d383; +[SCMemoriesFeaturedStoriesCarouselCellV2 cellSizeWithContainerWidth:circumstanceEngine:shouldUseNewLayout:] */

undefined1  [16] FUN_107e6d354(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bf33ea0(PTR_PTR_1126d8048);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107e6d384; end: 107e6d477; -[SCMemoriesFeaturedStoriesCarouselCellV2 scrollToIndexPath:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d384(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_1127706b8;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010c0df2e0();
  if (0 < lVar1) {
    func_0x00010bf4d5e0(*(undefined8 *)(param_2 + lVar6));
    dVar7 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar6));
    _CGRectGetWidth();
    if (dVar7 < param_1) {
      uVar2 = *(ulong *)(param_2 + lVar6);
      func_0x00010bfed1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4b900();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        lVar1 = param_4;
        func_0x00010c0840e0();
        lVar5 = *(long *)(param_2 + lVar6);
        lVar4 = param_4;
        func_0x00010c1554e0(param_4);
        func_0x00010c0deec0(lVar5,param_3,lVar4);
        if (lVar1 < lVar5) {
          func_0x00010c1525a0(*(undefined8 *)(param_2 + lVar6),param_3,param_4,0x10,param_5);
          func_0x00010c08cdc0(*(undefined8 *)(param_2 + lVar6));
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e6d478; end: 107e6d487; -[SCMemoriesFeaturedStoriesCarouselCellV2 cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf33b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127706b8),PTR_s_cellForItemAtIndexPath__1125aa880);
  return;
}



/* Entry: 107e6d488; end: 107e6d4f3; -[SCMemoriesFeaturedStoriesCarouselCellV2 bindViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770700);
  *(undefined8 *)(param_1 + _DAT_112770700) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0f9240(*(undefined8 *)(param_1 + _DAT_1127706bc),param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e6d4f4; end: 107e6d4fb; -[SCMemoriesFeaturedStoriesCarouselCellV2 emptyViewForListAdapter:] */

undefined8 FUN_107e6d4f4(void)

{
  return 0;
}



/* Entry: 107e6d4fc; end: 107e6d643; -[SCMemoriesFeaturedStoriesCarouselCellV2 listAdapter:sectionControllerForObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d4fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d8050;
  _objc_alloc(PTR_PTR_1126d8050);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127706b8);
  lVar2 = param_1 + _DAT_1127706c0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_1127706c4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_1127706c8;
  _objc_loadWeakRetained(lVar4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127706d4);
  lVar5 = param_1 + _DAT_1127706cc;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bfff840(puVar1,param_2,uVar6,lVar2,lVar3,lVar4,uVar7,lVar5,
                      *(undefined8 *)(param_1 + _DAT_1127706d0),
                      *(undefined8 *)(param_1 + _DAT_1127706d8),
                      *(undefined8 *)(param_1 + _DAT_1127706dc),
                      *(undefined8 *)(param_1 + _DAT_1127706e0),
                      *(undefined8 *)(param_1 + _DAT_1127706e4),
                      *(undefined8 *)(param_1 + _DAT_1127706e8),
                      *(undefined8 *)(param_1 + _DAT_1127706ec),
                      *(undefined8 *)(param_1 + _DAT_1127706f0),
                      *(undefined8 *)(param_1 + _DAT_1127706f8),
                      *(undefined8 *)(param_1 + _DAT_1127706f4));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e6d644; end: 107e6d6ef; -[SCMemoriesFeaturedStoriesCarouselCellV2 objectsForListAdapter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long lStack_a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (*(long *)(param_1 + _DAT_112770700) == 0) {
    puVar3 = puVar1;
    func_0x00010bf51e00();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = *(long *)(param_1 + _DAT_112770700);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_107e6d6f0;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1 + _DAT_1127706c0;
  puStack_40 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  puVar13 = puVar3;
  func_0x00010c0808a0();
  puVar2 = puVar3;
  _objc_release();
  if ((int)puVar13 != 0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    unaff_x26 = (long)_DAT_1127706b8;
    puVar3 = *(undefined **)(puVar1 + unaff_x26);
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      unaff_x27 = *plStack_150;
      do {
        unaff_x28 = (undefined *)0x0;
        do {
          if (*plStack_150 != unaff_x27) {
            _objc_enumerationMutation(puVar3);
          }
          unaff_x22 = *(long *)(lStack_158 + (long)unaff_x28 * 8);
          unaff_x23 = *(long *)(puVar1 + unaff_x26);
          func_0x00010bfecfa0(unaff_x23,param_2,unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x23 != 0) {
            unaff_x24 = unaff_x23;
            func_0x00010c142240();
            unaff_x25 = unaff_x22;
            func_0x00010c29d560();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be17840(puVar1,param_2,unaff_x24,unaff_x25);
            _objc_release(unaff_x25);
          }
          func_0x00010c24eda0(unaff_x22);
          _objc_release(unaff_x23);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar2 != unaff_x28);
        puVar2 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_160,auStack_120,0x10);
        puVar13 = (undefined *)0x0;
      } while (puVar2 != (undefined *)0x0);
    }
    puVar2 = puVar3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_270;
  pcStack_168 = FUN_107e6d888;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lVar4 = *(long *)(puVar2 + _DAT_1127706b8);
  puStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = unaff_x22;
  puStack_188 = puVar13;
  puStack_180 = puVar3;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_40;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_228;
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    puVar13 = (undefined *)*puStack_260;
    do {
      unaff_x22 = 0;
      do {
        if ((undefined *)*puStack_260 != puVar13) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c256060(*(undefined8 *)(lStack_268 + unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (lVar5 != unaff_x22);
      puVar12 = auStack_228;
      lVar5 = lVar4;
      puVar11 = &uStack_270;
      func_0x00010bf52a60();
      puVar3 = (undefined *)0x0;
    } while (lVar5 != 0);
  }
  lVar5 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_107e6d984;
  puStack_2d0 = unaff_x28;
  lStack_2c8 = unaff_x27;
  lStack_2c0 = unaff_x26;
  lStack_2b8 = unaff_x25;
  lStack_2b0 = unaff_x24;
  lStack_2a8 = unaff_x23;
  lStack_2a0 = unaff_x22;
  puStack_298 = puVar13;
  puStack_290 = puVar3;
  lStack_288 = lVar4;
  ppuStack_280 = &ppuStack_170;
  _objc_retain(puVar12);
  puVar6 = *(undefined1 **)(lVar5 + _DAT_112770700);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar11 < puVar7) {
    puVar7 = puVar6;
    func_0x00010c0dfd40(puVar6,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar9 = *(undefined8 *)(lVar5 + _DAT_1127706d4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    lVar5 = lVar5 + _DAT_1127706c8;
    _objc_loadWeakRetained();
    puVar1 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126bf9b8;
    func_0x00010bf95f60(PTR_PTR_1126bf9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7a60(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126aeec0;
    puVar13 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_320 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_318 = 0xc2000000;
    uStack_310 = 0x107e6dbbc;
    puStack_308 = &UNK_110a10170;
    _objc_retain(puVar12);
    puStack_300 = puVar12;
    puStack_2f8 = puVar8;
    lStack_2f0 = lVar5;
    uStack_2e8 = uVar10;
    puStack_2d8 = (undefined1 *)puVar11;
    _objc_retain(puVar6);
    puStack_2e0 = puVar6;
    _objc_retain(uVar10);
    _objc_retain(lVar5);
    _objc_retain(puVar8);
    func_0x00010bf0caa0(puVar3,param_2,puVar1,puVar13,0,&puStack_320);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puStack_2e0);
    _objc_release(uStack_2e8);
    _objc_release(lStack_2f0);
    _objc_release(puStack_2f8);
    _objc_release(puStack_300);
    _objc_release(uVar10);
    _objc_release(lVar5);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
  _objc_release(puVar6);
  _objc_release(puVar12);
  return;
}



/* Entry: 107e6d6f0; end: 107e6d887; -[SCMemoriesFeaturedStoriesCarouselCellV2 startGeneratingUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d6f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + _DAT_1127706c0;
  _objc_loadWeakRetained();
  lVar14 = lVar2;
  func_0x00010c0808a0();
  lVar1 = lVar2;
  _objc_release();
  if ((int)lVar14 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x26 = (long)_DAT_1127706b8;
    lVar2 = *(long *)(param_1 + unaff_x26);
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x22 = *(long *)(lStack_128 + unaff_x28 * 8);
          unaff_x23 = *(long *)(param_1 + unaff_x26);
          func_0x00010bfecfa0(unaff_x23,param_2,unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x23 != 0) {
            unaff_x24 = unaff_x23;
            func_0x00010c142240();
            unaff_x25 = unaff_x22;
            func_0x00010c29d560();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be17840(param_1,param_2,unaff_x24,unaff_x25);
            _objc_release(unaff_x25);
          }
          func_0x00010c24eda0(unaff_x22);
          _objc_release(unaff_x23);
          unaff_x28 = unaff_x28 + 1;
        } while (lVar1 != unaff_x28);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
        lVar14 = 0;
      } while (lVar1 != 0);
    }
    lVar1 = lVar2;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_240;
  pcStack_138 = FUN_107e6d888;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar3 = *(long *)(lVar1 + _DAT_1127706b8);
  lStack_170 = unaff_x28;
  lStack_168 = unaff_x27;
  lStack_160 = unaff_x22;
  lStack_158 = lVar14;
  lStack_150 = lVar2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = auStack_1f8;
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_230;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_230 != lVar14) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c256060(*(undefined8 *)(lStack_238 + unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (lVar1 != unaff_x22);
      puVar13 = auStack_1f8;
      lVar1 = lVar3;
      puVar12 = &uStack_240;
      func_0x00010bf52a60();
      lVar2 = 0;
    } while (lVar1 != 0);
  }
  lVar1 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_107e6d984;
  lStack_2a0 = unaff_x28;
  lStack_298 = unaff_x27;
  lStack_290 = unaff_x26;
  lStack_288 = unaff_x25;
  lStack_280 = unaff_x24;
  lStack_278 = unaff_x23;
  lStack_270 = unaff_x22;
  lStack_268 = lVar14;
  lStack_260 = lVar2;
  lStack_258 = lVar3;
  ppuStack_250 = &puStack_140;
  _objc_retain(puVar13);
  puVar4 = *(undefined1 **)(lVar1 + _DAT_112770700);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar12 < puVar5) {
    puVar5 = puVar4;
    func_0x00010c0dfd40(puVar4,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar7 = *(undefined8 *)(lVar1 + _DAT_1127706d4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar1 = lVar1 + _DAT_1127706c8;
    _objc_loadWeakRetained();
    puVar10 = PTR_PTR_1126ae960;
    puVar9 = PTR_PTR_1126bf9b8;
    func_0x00010bf95f60(PTR_PTR_1126bf9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7a60(puVar10,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126aeec0;
    puVar11 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e8 = 0xc2000000;
    uStack_2e0 = 0x107e6dbbc;
    puStack_2d8 = &UNK_110a10170;
    _objc_retain(puVar13);
    puStack_2d0 = puVar13;
    puStack_2c8 = puVar6;
    lStack_2c0 = lVar1;
    uStack_2b8 = uVar8;
    puStack_2a8 = (undefined1 *)puVar12;
    _objc_retain(puVar4);
    puStack_2b0 = puVar4;
    _objc_retain(uVar8);
    _objc_retain(lVar1);
    _objc_retain(puVar6);
    func_0x00010bf0caa0(puVar9,param_2,puVar10,puVar11,0,&puStack_2f0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puStack_2b0);
    _objc_release(uStack_2b8);
    _objc_release(lStack_2c0);
    _objc_release(puStack_2c8);
    _objc_release(puStack_2d0);
    _objc_release(uVar8);
    _objc_release(lVar1);
    _objc_release(puVar6);
    _objc_release(puVar10);
  }
  _objc_release(puVar4);
  _objc_release(puVar13);
  return;
}



/* Entry: 107e6d888; end: 107e6d983; -[SCMemoriesFeaturedStoriesCarouselCellV2 stopGeneratingUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d888(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
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
  
  puVar11 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + _DAT_1127706b8);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_c8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_100;
    do {
      lVar14 = 0;
      do {
        if (*plStack_100 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c256060(*(undefined8 *)(lStack_108 + lVar14 * 8));
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      puVar12 = auStack_c8;
      lVar2 = lVar1;
      puVar11 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  puVar3 = *(undefined1 **)(lVar1 + _DAT_112770700);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar11 < puVar4) {
    puVar4 = puVar3;
    func_0x00010c0dfd40(puVar3,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_1127706d4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    lVar1 = lVar1 + _DAT_1127706c8;
    _objc_loadWeakRetained();
    puVar9 = PTR_PTR_1126ae960;
    puVar8 = PTR_PTR_1126bf9b8;
    func_0x00010bf95f60(PTR_PTR_1126bf9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7a60(puVar9,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126aeec0;
    puVar10 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x107e6dbbc;
    puStack_1a8 = &UNK_110a10170;
    _objc_retain(puVar12);
    puStack_1a0 = puVar12;
    puStack_198 = puVar5;
    lStack_190 = lVar1;
    uStack_188 = uVar7;
    puStack_178 = (undefined1 *)puVar11;
    _objc_retain(puVar3);
    puStack_180 = puVar3;
    _objc_retain(uVar7);
    _objc_retain(lVar1);
    _objc_retain(puVar5);
    func_0x00010bf0caa0(puVar8,param_2,puVar9,puVar10,0,&puStack_1c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puStack_180);
    _objc_release(uStack_188);
    _objc_release(lStack_190);
    _objc_release(puStack_198);
    _objc_release(puStack_1a0);
    _objc_release(uVar7);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(puVar9);
  }
  _objc_release(puVar3);
  _objc_release(puVar12);
  return;
}



/* Entry: 107e6d984; end: 107e6dd0b; -[SCMemoriesFeaturedStoriesCarouselCellV2 _fireGalleryCellViewWithCellIndex:storyViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6d984(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + _DAT_112770700);
  func_0x00010bfa3240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (param_3 < uVar2) {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127706d4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    param_1 = param_1 + _DAT_1127706c8;
    _objc_loadWeakRetained();
    puVar7 = PTR_PTR_1126ae960;
    puVar6 = PTR_PTR_1126bf9b8;
    func_0x00010bf95f60(PTR_PTR_1126bf9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7a60(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126aeec0;
    puVar8 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x107e6dbbc;
    puStack_98 = &UNK_110a10170;
    _objc_retain(param_4);
    uStack_90 = param_4;
    uStack_88 = uVar3;
    lStack_80 = param_1;
    uStack_78 = uVar5;
    uStack_68 = param_3;
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    _objc_retain(uVar5);
    _objc_retain(param_1);
    _objc_retain(uVar3);
    func_0x00010bf0caa0(puVar6,param_2,puVar7,puVar8,0,&puStack_b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(puVar7);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107e6dd0c; end: 107e6dd2b; -[SCMemoriesFeaturedStoriesCarouselCellV2 carouselDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6dd0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127706c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e6dd2c; end: 107e6dd3f; -[SCMemoriesFeaturedStoriesCarouselCellV2 setCarouselDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6dd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127706c0,param_3);
  return;
}



/* Entry: 107e6dd40; end: 107e6de7f; -[SCMemoriesFeaturedStoriesCarouselCellV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6dd40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127706c0);
  _objc_storeStrong(param_1 + _DAT_1127706fc,0);
  _objc_storeStrong(param_1 + _DAT_1127706f8,0);
  _objc_storeStrong(param_1 + _DAT_1127706f4,0);
  _objc_storeStrong(param_1 + _DAT_1127706f0,0);
  _objc_storeStrong(param_1 + _DAT_1127706e8,0);
  _objc_storeStrong(param_1 + _DAT_1127706ec,0);
  _objc_storeStrong(param_1 + _DAT_1127706e4,0);
  _objc_storeStrong(param_1 + _DAT_1127706e0,0);
  _objc_storeStrong(param_1 + _DAT_1127706d4,0);
  _objc_storeStrong(param_1 + _DAT_1127706dc,0);
  _objc_storeStrong(param_1 + _DAT_1127706d8,0);
  _objc_storeStrong(param_1 + _DAT_1127706d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127706cc);
  _objc_destroyWeak(param_1 + _DAT_1127706c8);
  _objc_destroyWeak(param_1 + _DAT_1127706c4);
  _objc_storeStrong(param_1 + _DAT_1127706bc,0);
  _objc_storeStrong(param_1 + _DAT_112770700,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127706b8,0);
  return;
}



/* Entry: 107e6de80; end: 107e6eaa7; -[SCMemoriesFeaturedStoryCellV2 initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107e6de80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_1126fb6c8;
  puVar1 = &uStack_120;
  puVar3 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_120 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar5 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277070c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277070c) = puVar2;
    _objc_release(uVar23);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar24 = (long)_DAT_112770710;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar23);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar24));
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08c0e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar23);
    uVar23 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08c0e0(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar23);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar23;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar23);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar25 = (long)_DAT_112770714;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar23);
    func_0x00010c1c8340(0,*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010bef9040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar25 = (long)_DAT_112770718;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar23);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010bef9040(puVar1);
    puVar2 = PTR_PTR_1126bb2a0;
    _objc_alloc();
    uVar26 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar27 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar28 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar29 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    lVar25 = (long)_DAT_11277071c;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar23);
    func_0x00010c16ce00(*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar25));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar17;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar23;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar9;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar13);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar23);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar17);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126bb2a0;
    _objc_alloc();
    func_0x00010c013de0(uVar26,uVar27,uVar28,uVar29);
    lVar25 = (long)_DAT_112770720;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar23);
    func_0x00010c16ce00(*(undefined8 *)((long)puVar1 + lVar25));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar25));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar13;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar17;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar23;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar23);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar13);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_initWeak(&uStack_128,puVar1);
    puVar2 = PTR_PTR_1126d8058;
    _objc_alloc();
    puVar3 = &uStack_128;
    _objc_copyWeak(auStack_130,puVar3);
    func_0x00010c013e20(uVar26,uVar27,uVar28,uVar29);
    lVar25 = (long)_DAT_112770724;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined **)((long)puVar1 + lVar25) = puVar2;
    _objc_release(uVar23);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar25));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar23;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar9;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar13;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar13);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar9);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar23);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_130);
    puVar5 = &uStack_128;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(&uStack_128);
  __Unwind_Resume();
  _objc_retain(puVar3);
  puVar5 = puVar5 + 4;
  _objc_loadWeakRetained();
  if (puVar5 != (undefined8 *)0x0) {
    func_0x00010be9f9c0(puVar5);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 107e6eaa8; end: 107e6eaf7;  */

void FUN_107e6eaa8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be9f9c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e6eaf8; end: 107e6eb6f; -[SCMemoriesFeaturedStoryCellV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6eaf8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb6c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010be22f20();
  if (lVar1 == 3) {
    *(undefined1 *)(param_1 + _DAT_112770730) = 1;
    func_0x00010be8d900(param_1);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112770730) = 0;
    func_0x00010be04f60(param_1);
  }
  return;
}



/* Entry: 107e6eb70; end: 107e6ebeb; -[SCMemoriesFeaturedStoryCellV2 setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6eb70(long param_1,undefined8 param_2,ulong param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb6c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHidden__1126479f8);
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + _DAT_112770734) == '\x01')) {
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11277071c));
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_112770720));
  }
  return;
}



/* Entry: 107e6ebec; end: 107e6ecb7; -[SCMemoriesFeaturedStoryCellV2 updateCornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6ebec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112770710;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112770728;
  lVar3 = *(long *)(param_1 + lVar2);
  if (lVar3 != 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(lVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107e6ecb8; end: 107e6ee67; -[SCMemoriesFeaturedStoryCellV2 prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6ecb8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fb6c8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010bfec280(*(undefined8 *)(param_1 + _DAT_11277070c));
  *(undefined1 *)(param_1 + _DAT_112770734) = 0;
  lVar4 = (long)_DAT_11277071c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  lVar4 = (long)_DAT_112770720;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  lVar4 = (long)_DAT_112770738;
  uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  ((undefined8 *)(param_1 + lVar4))[1] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  lVar4 = (long)_DAT_11277073c;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010bfa34e0();
  if (uVar2 < 3) {
    lVar3 = (long)*(int *)(&PTR_DAT_110a101f0)[uVar2];
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c256060(param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11277074c) = 0;
  *(undefined1 *)(param_1 + _DAT_112770750) = 0;
  lVar4 = (long)_DAT_112770724;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010bec3120(param_1);
  func_0x00010bec3960(param_1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_112770754));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112770758);
  *(undefined8 *)(param_1 + _DAT_112770758) = 0;
  _objc_release(uVar1);
  func_0x00010beaa200(0,param_1);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277072c));
  return;
}



/* Entry: 107e6ee68; end: 107e6ee97; +[SCMemoriesFeaturedStoryCellV2 cellHeightWithContainerWidth:circumstanceEngine:shouldUseNewLayout:] */

double FUN_107e6ee68(double param_1)

{
  int in_w3;
  
  if (in_w3 != 0) {
    return ((param_1 + -2.0) / 2.5) * 1.7777777777777777;
  }
  return 275.0;
}



/* Entry: 107e6ee98; end: 107e6eeff; +[SCMemoriesFeaturedStoryCellV2 cellSizeForFeaturedStoriesWithContainerWidth:numberOfStories:sectionInsets:cellSpacing:circumstanceEngine:shouldUseNewLayout:] */

undefined1  [16]
FUN_107e6ee98(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,int param_8)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  dVar1 = ((param_1 - param_3 * (double)(param_6 + -1)) + param_2 * -2.0) / (double)param_6;
  dVar2 = 225.0;
  if (225.0 <= dVar1) {
    dVar2 = dVar1;
  }
  if (param_8 != 0) {
    auVar3._0_8_ = (param_1 + param_3 * -2.0 + -param_2 * 2.0) / 2.5;
    auVar3._8_8_ = auVar3._0_8_ * 1.7777777777777777;
    return auVar3;
  }
  auVar4._8_8_ = 0x4071300000000000;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 107e6ef00; end: 107e6f357; -[SCMemoriesFeaturedStoryCellV2 setViewModel:snapchattersDataFetcher:numberOfStories:containerWidth:sectionInsets:cellSpacing:circumstanceEngine:memoriesGraphene:shouldUseNewLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6ef00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar7 = *(undefined8 *)(param_4 + _DAT_11277070c);
  _objc_retain(param_7);
  func_0x00010bfec280(uVar7);
  lVar5 = (long)_DAT_11277075c;
  _objc_retain(param_9);
  uVar7 = *(undefined8 *)(param_4 + lVar5);
  *(undefined8 *)(param_4 + lVar5) = param_9;
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126d8058;
  lVar4 = param_6;
  func_0x00010bf918a0(param_6);
  lVar8 = param_6;
  func_0x00010bf919c0(param_6);
  func_0x00010bfc8ec0(puVar2,param_5,param_9,lVar4,lVar8);
  *(undefined **)(param_4 + _DAT_112770760) = puVar2;
  lVar4 = (long)_DAT_112770738;
  func_0x00010bf340a0(param_1,param_2,param_3,PTR_PTR_1126d8048,param_5,param_8,
                      *(undefined8 *)(param_4 + lVar5),param_11);
  *(undefined8 *)(param_4 + lVar4) = param_1;
  ((undefined8 *)(param_4 + lVar4))[1] = param_2;
  lVar8 = (long)_DAT_112770724;
  func_0x00010c19e5c0(*(undefined8 *)(param_4 + lVar8),param_5,2);
  lVar5 = (long)_DAT_11277073c;
  _objc_retain(param_6);
  uVar7 = *(undefined8 *)(param_4 + lVar5);
  *(long *)(param_4 + lVar5) = param_6;
  _objc_release(uVar7);
  lVar4 = *(long *)(param_4 + lVar5);
  func_0x00010c1060a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar6 = *(undefined8 *)(param_4 + lVar8);
  uVar7 = *(undefined8 *)(param_4 + lVar5);
  if (lVar4 == 0) {
    func_0x00010c2711a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar6,param_5,uVar7);
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_4 + lVar8);
    uVar7 = *(undefined8 *)(param_4 + lVar5);
    func_0x00010c260dc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1060a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(uVar6,param_5,uVar7);
    _objc_release(uVar7);
    uVar6 = *(undefined8 *)(param_4 + lVar8);
    uVar7 = *(undefined8 *)(param_4 + lVar5);
    func_0x00010c106080(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c20f6c0(uVar6,param_5,uVar7);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_4 + lVar8);
  func_0x00010c245ca0(*(undefined8 *)(param_4 + lVar5));
  func_0x00010c1e4680(uVar7);
  *(undefined1 *)(param_4 + _DAT_11277074c) = 0;
  *(undefined1 *)(param_4 + _DAT_112770750) = 0;
  lVar4 = *(long *)(param_4 + lVar5);
  func_0x00010bfa34e0();
  if (lVar4 == 2) {
    lVar4 = (long)_DAT_112770748;
    func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar4),param_5,0);
    func_0x00010c256060(param_4);
    lVar8 = *(long *)(param_4 + lVar4);
    *(undefined8 *)(param_4 + lVar4) = 0;
  }
  else {
    lVar8 = param_6;
    if (lVar4 == 1) {
      lVar4 = (long)_DAT_112770744;
      func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar4),param_5,0);
      func_0x00010c256060(*(undefined8 *)(param_4 + lVar4));
      uVar7 = *(undefined8 *)(param_4 + lVar4);
      *(undefined8 *)(param_4 + lVar4) = 0;
      _objc_release(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf53c00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c113c80();
      func_0x00010c245ca0(param_6);
      ppuVar3 = &PTR____CFConstantStringClassReference_110ec17b8;
    }
    else {
      if (lVar4 != 0) goto LAB_107e6f25c;
      lVar4 = (long)_DAT_112770740;
      func_0x00010c18b5e0(*(undefined8 *)(param_4 + lVar4),param_5,0);
      func_0x00010c256060(*(undefined8 *)(param_4 + lVar4));
      uVar7 = *(undefined8 *)(param_4 + lVar4);
      *(undefined8 *)(param_4 + lVar4) = 0;
      _objc_release(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfa3200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c113c80();
      func_0x00010c245ca0(param_6);
      ppuVar3 = &PTR____CFConstantStringClassReference_110ec1798;
    }
    func_0x00010c14de00(puVar2,param_5,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_4 + _DAT_11277072c),param_5,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar8);
LAB_107e6f25c:
  lVar4 = param_6;
  func_0x00010bf977c0(param_6);
  func_0x00010be4eb20(param_4,param_5,lVar4,param_7);
  _objc_release(param_7);
  lVar4 = param_4;
  func_0x00010be22f20(param_4);
  func_0x00010c245ca0(*(undefined8 *)(param_4 + lVar5));
  func_0x00010beaa200(param_4,param_5,lVar4);
  iVar1 = (int)*(undefined8 *)(param_4 + lVar5);
  func_0x00010bfdb660();
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  func_0x00010bedee40(param_4,param_5,uVar7);
  lVar4 = param_6;
  func_0x00010bf4c440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar4 = param_6;
    func_0x00010c234360();
    if ((int)lVar4 != 0) {
      func_0x00010b5f35a0(param_10);
    }
    lVar4 = param_6;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar8 == 0) {
      func_0x00010b5f35f4(param_10);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107e6f358; end: 107e6f367; -[SCMemoriesFeaturedStoryCellV2 _updateSaveButtonWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f57d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770724),PTR_s_setSaveButtonLoadingState__11265b018);
  return;
}



/* Entry: 107e6f368; end: 107e6f443; -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailFromEntrySource:snapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f368(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_3 - 0x13 < 0x42) {
LAB_107e6f3b8:
    lVar2 = (long)_DAT_11277073c;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c234360();
    if (iVar1 != 0) {
      lVar2 = *(long *)(param_1 + lVar2);
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) goto LAB_107e6f3f0;
    }
  }
  else {
    if (0x12 < param_3) {
      if (param_3 != 0xffffd8f1) goto LAB_107e6f3f0;
      goto LAB_107e6f3b8;
    }
    if ((1 << (ulong)(param_3 & 0x1f) & 0x3ffdfU) != 0) goto LAB_107e6f3b8;
    if (param_3 != 5) {
LAB_107e6f438:
      func_0x00010be4eb00(param_1);
      goto LAB_107e6f3f0;
    }
    lVar2 = *(long *)(param_1 + _DAT_11277073c);
    func_0x00010bf34400();
    if (lVar2 == 0) {
      func_0x00010be4e2a0(param_1);
      goto LAB_107e6f438;
    }
  }
  func_0x00010be4eb40(param_1);
LAB_107e6f3f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e6f444; end: 107e6f4b3; -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f444(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277073c);
  func_0x00010bfa34e0();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be4eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadThumbnailGeneratorForChatMe_112571480)
    ;
    return;
  }
  if (lVar1 != 1) {
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__loadThumbnailGeneratorForRegula_112571488);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be4eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadThumbnailGeneratorForCRFeat_112571478);
  return;
}



/* Entry: 107e6f4b4; end: 107e6f5d3; -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGeneratorForRegularFeaturedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f4b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(ulong *)(param_2 + _DAT_11277075c);
  func_0x000108ec197c();
  lVar6 = (long)_DAT_11277073c;
  uVar2 = *(undefined8 *)(param_2 + lVar6);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf4c440(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa3200();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_2;
  func_0x00010c0c8900();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c234360(uVar4);
  lVar6 = (long)_DAT_112770738;
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010b690ad8(*(undefined8 *)(param_2 + lVar6),((undefined8 *)(param_2 + lVar6))[1],param_1)
  ;
  lVar6 = lVar3;
  func_0x00010bf23120(lVar3,param_3,uVar2,uVar4,6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112770740;
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  *(long *)(param_2 + lVar7) = lVar6;
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(lVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar7),param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107e6f5d4; end: 107e6f6a7; -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGeneratorForCRFeaturedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f5d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_2;
  func_0x00010c0c7f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277073c);
  func_0x00010bf53c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112770738;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010b690ad8(*(undefined8 *)(param_2 + lVar4),((undefined8 *)(param_2 + lVar4))[1],param_1)
  ;
  lVar4 = lVar1;
  func_0x00010bf23380();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112770744;
  uVar5 = *(undefined8 *)(param_2 + lVar6);
  *(long *)(param_2 + lVar6) = lVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar6),PTR_s_setDelegate__112640798,param_2);
  return;
}



/* Entry: 107e6f6a8; end: 107e6f77b; -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGeneratorForChatMediaFeaturedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f6a8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_2;
  func_0x00010c0c8400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277073c);
  func_0x00010bf36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112770738;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010b690ad8(*(undefined8 *)(param_2 + lVar4),((undefined8 *)(param_2 + lVar4))[1],param_1)
  ;
  lVar4 = lVar1;
  func_0x00010bf22b40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112770748;
  uVar5 = *(undefined8 *)(param_2 + lVar6);
  *(long *)(param_2 + lVar6) = lVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar6),PTR_s_setDelegate__112640798,param_2);
  return;
}



/* Entry: 107e6f77c; end: 107e6f897; -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailFromDownloading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f77c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_112770764;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277073c);
  func_0x00010c26da40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c136b00(lVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107e6f898; end: 107e6f913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f898(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_11277071c;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
    if (*(char *)(param_1 + _DAT_112770734) == '\x01') {
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e6f914; end: 107e6fa2f; -[SCMemoriesFeaturedStoryCellV2 _loadOverlayFromDownloading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6f914(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_112770764;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277073c);
  func_0x00010c26da40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c136b00(lVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107e6fa30; end: 107e6faab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fa30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = (long)_DAT_112770720;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
    if (*(char *)(param_1 + _DAT_112770734) == '\x01') {
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e6faac; end: 107e6fabb; -[SCMemoriesFeaturedStoryCellV2 _stopListenToThumbnailUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6faac(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112770768) = 0;
  return;
}



/* Entry: 107e6fabc; end: 107e6facf; -[SCMemoriesFeaturedStoryCellV2 _startListenToThumbnailUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fabc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112770768) = 1;
  return;
}



/* Entry: 107e6fad0; end: 107e6fb87; -[SCMemoriesFeaturedStoryCellV2 _startSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fad0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277076c;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112770710));
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 107e6fb88; end: 107e6fc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fb88(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107e6fc68; end: 107e6fc77; -[SCMemoriesFeaturedStoryCellV2 _stopSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fc68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277076c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 107e6fc78; end: 107e6fd9b; -[SCMemoriesFeaturedStoryCellV2 _setViewingState:viewProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fc78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      lVar1 = (long)_DAT_112770724;
      func_0x00010c12dd80(*(undefined8 *)(param_1 + lVar1));
      func_0x00010c12b580(*(undefined8 *)(param_1 + lVar1));
      func_0x00010bec1960(param_1);
      goto LAB_107e6fd6c;
    }
    if (param_3 != 1) goto LAB_107e6fd0c;
    func_0x00010bec3960(param_1);
    lVar1 = (long)_DAT_112770724;
    func_0x00010c12dd80(*(undefined8 *)(param_1 + lVar1));
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        func_0x00010bec3960(param_1);
        lVar1 = (long)_DAT_112770724;
        func_0x00010c12dd80(*(undefined8 *)(param_1 + lVar1));
        func_0x00010c12e780(*(undefined8 *)(param_1 + lVar1));
        func_0x00010befaae0(*(undefined8 *)(param_1 + lVar1));
        func_0x00010bec3120(param_1);
        goto LAB_107e6fd6c;
      }
LAB_107e6fd0c:
      lVar1 = (long)_DAT_112770724;
      goto LAB_107e6fd6c;
    }
    func_0x00010bec3960(param_1);
    func_0x00010be04f60(param_1);
    lVar1 = (long)_DAT_112770724;
    func_0x00010bf86260(*(undefined8 *)(param_1 + lVar1));
  }
  func_0x00010c12b580(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bec0320(param_1);
LAB_107e6fd6c:
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1));
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010be22f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setUpGradientWithCellState__112664ab0,param_1);
  return;
}



/* Entry: 107e6fd9c; end: 107e6fe17; -[SCMemoriesFeaturedStoryCellV2 _getState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e6fd9c(double param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277073c;
  uVar1 = *(ulong *)(param_2 + lVar4);
  func_0x00010c234360();
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_2 + lVar4);
    func_0x00010c245cc0();
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      func_0x00010c245ca0(*(undefined8 *)(param_2 + lVar4));
      if ((param_1 <= 0.0) ||
         (func_0x00010c245ca0(*(undefined8 *)(param_2 + lVar4)), 1.0 <= param_1)) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 107e6fe18; end: 107e6fe27; -[SCMemoriesFeaturedStoryCellV2 _removeSubtitleIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fe18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770724),PTR_s_removeSubtitle_112629400);
  return;
}



/* Entry: 107e6fe28; end: 107e6fe4b; -[SCMemoriesFeaturedStoryCellV2 _displaySubtitleIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fe28(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112770730) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf865f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770724),PTR_s_displaySubtitle_1125bf320);
  return;
}



/* Entry: 107e6fe4c; end: 107e7000f; -[SCMemoriesFeaturedStoryCellV2 _handleLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e6fe4c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c252440();
  if (lVar2 < 3) {
    if (lVar2 == 0) goto LAB_107e6ff0c;
    if (lVar2 != 1) {
      if (lVar2 == 2) {
        lVar2 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,lVar2);
        _objc_release(lVar2);
        param_1 = param_1 - *(double *)(param_3 + _DAT_112770770);
        param_2 = param_2 - ((double *)(param_3 + _DAT_112770770))[1];
        if (1.0 < SQRT(param_2 * param_2 + param_1 * param_1)) {
          func_0x00010c14c8a0(param_5);
        }
      }
      goto LAB_107e6fff8;
    }
    pdVar1 = (double *)(param_3 + _DAT_112770770);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,lVar2);
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    _objc_release(lVar2);
    func_0x00010c1a8860(param_3,param_4,1);
    dVar6 = *pdVar1;
    dVar7 = pdVar1[1];
    uVar5 = 0;
  }
  else {
    if (1 < lVar2 - 4U) {
      if (lVar2 == 3) {
        func_0x00010c1a8860(param_3,param_4,0);
        func_0x00010bf02f20(*(undefined8 *)PTR__CGPointZero_110347540,
                            *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_3,param_4,1);
        uVar3 = param_3 + _DAT_112770774;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        func_0x00010bfa3340();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          func_0x00010be9f9c0(param_3,param_4,&PTR____CFConstantStringClassReference_110ec18f8);
        }
      }
      goto LAB_107e6fff8;
    }
LAB_107e6ff0c:
    func_0x00010c1a8860(param_3,param_4,0);
    dVar6 = *(double *)PTR__CGPointZero_110347540;
    dVar7 = *(double *)(PTR__CGPointZero_110347540 + 8);
    uVar5 = 1;
  }
  func_0x00010bf02f20(dVar6,dVar7,param_3,param_4,uVar5);
LAB_107e6fff8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107e70010; end: 107e700eb; -[SCMemoriesFeaturedStoryCellV2 _handleActionMenuLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70010(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c068780();
  if (((uint)lVar1 >> 1 & 1) != 0) {
    lVar1 = param_3;
    func_0x00010c252440();
    if (lVar1 - 2U < 3) {
      param_1 = param_1 + _DAT_112770774;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfa3340();
      _objc_release(param_1);
    }
    else if (lVar1 == 1) {
      func_0x00010c14c8a0(*(undefined8 *)(param_1 + _DAT_112770714));
      uVar2 = param_1 + _DAT_112770774;
      _objc_loadWeakRetained();
      uVar3 = uVar2;
      func_0x00010bfa3340();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        func_0x00010be9f9c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ec1938);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e700ec; end: 107e701af; -[SCMemoriesFeaturedStoryCellV2 gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e700ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112770774;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa3320();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    if ((*(long *)(param_1 + _DAT_112770714) != param_3) &&
       (*(long *)(param_1 + _DAT_112770718) != param_3)) {
LAB_107e70188:
      uVar3 = 1;
      goto LAB_107e70194;
    }
    lVar1 = param_1;
    func_0x00010c068780();
    if (lVar1 != 0) {
      func_0x00010c09ef00(param_3,param_2,param_1);
      func_0x00010bf2d580();
      if ((int)param_1 != 0) goto LAB_107e70188;
    }
  }
  uVar3 = 0;
LAB_107e70194:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107e701b0; end: 107e70207; -[SCMemoriesFeaturedStoryCellV2 gestureRecognizer:shouldReceiveTouch:] */

uint FUN_107e701b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 107e70208; end: 107e7021f; -[SCMemoriesFeaturedStoryCellV2 gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107e70208(long param_1,undefined8 param_2,long param_3)

{
  return param_3 != *(long *)(param_1 + _DAT_112770718);
}



/* Entry: 107e70220; end: 107e70223; -[SCMemoriesFeaturedStoryCellV2 bindViewModel:] */

void FUN_107e70220(void)

{
  return;
}



/* Entry: 107e70224; end: 107e7029b; -[SCMemoriesFeaturedStoryCellV2 startGeneratingUpdates] */

/* WARNING: Possible PIC construction at 0x000107e70284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e70288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70224(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112770734) = 1;
  uVar1 = *(ulong *)(param_1 + _DAT_11277073c);
  func_0x00010bfa34e0();
  if (uVar1 < 3) {
    func_0x00010c24eda0(*(undefined8 *)(param_1 + *(int *)(&PTR_DAT_110a101f0)[uVar1]));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277071c),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 107e7029c; end: 107e7030f; -[SCMemoriesFeaturedStoryCellV2 stopGeneratingUpdates] */

/* WARNING: Possible PIC construction at 0x000107e702f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107e702fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7029c(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112770734) = 0;
  uVar1 = *(ulong *)(param_1 + _DAT_11277073c);
  func_0x00010bfa34e0();
  if (uVar1 < 3) {
    func_0x00010c256060(*(undefined8 *)(param_1 + *(int *)(&PTR_DAT_110a101f0)[uVar1]));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277071c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 107e70310; end: 107e7033b; -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70310(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + _DAT_112770740) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277071c),PTR_s_setImage__1126481e8,param_4);
  return;
}



/* Entry: 107e7033c; end: 107e7054b; -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7033c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (*(long *)(param_1 + _DAT_112770740) == param_3) {
    lVar4 = param_6;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11277073c);
      func_0x00010c234360();
      if (iVar2 != 0) {
        lVar4 = param_6;
        func_0x00010bfaea20(param_6,param_2,&PTR___NSConcreteGlobalBlock_110a101d0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar5 = lVar4;
        func_0x000108dfdb9c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c276520();
        func_0x00010c14de00(puVar3,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        func_0x00010c20f6c0(*(undefined8 *)(param_1 + _DAT_112770724),param_2,puVar3);
        func_0x00010be04f60(param_1);
        _objc_release(puVar3);
        _objc_release(lVar4);
      }
    }
    if (param_4 == 0) {
      if ((*(byte *)(param_1 + _DAT_112770750) & 1) != 0) goto LAB_107e70520;
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112770750) = 1;
    }
    lVar5 = (long)_DAT_11277071c;
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11277074c;
    if ((lVar4 == 0) ||
       (cVar1 = *(char *)(param_1 + lVar7), _objc_release(),
       puVar3 = PTR__OBJC_CLASS___UIView_1126aec20, cVar1 != '\x01')) {
      *(undefined1 *)(param_1 + lVar7) = 1;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,param_4);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_107e7056c;
      puStack_68 = &UNK_110841f80;
      lStack_60 = param_1;
      _objc_retain(param_4);
      lStack_58 = param_4;
      func_0x00010c27ac60(0x3fd3333333333333,puVar3,param_2,uVar6,0x500000,&puStack_80,0);
      _objc_release(lStack_58);
    }
  }
LAB_107e70520:
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107e7054c; end: 107e7056b;  */

bool FUN_107e7054c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 107e7056c; end: 107e705e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7056c(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277071c;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) &&
     (cVar1 = *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112770768), _objc_release(),
     cVar1 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e705e4; end: 107e70663; -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didFailToUpdateStoryThumbnailForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e705e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + _DAT_112770740) == param_3) &&
     ((*(byte *)(param_1 + _DAT_112770750) & 1) == 0)) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277071c),param_2,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e70664; end: 107e706db; -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70664(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11277071c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) &&
     (func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,param_4), param_4 != 0)) {
    *(undefined1 *)(param_1 + _DAT_112770750) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107e706dc; end: 107e707f7; -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateMemoriesCRFeaturedStoryThumbnailWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e706dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + _DAT_112770744)) {
    lVar4 = (long)_DAT_11277071c;
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277074c;
    if ((lVar3 == 0) ||
       (cVar1 = *(char *)(param_1 + lVar6), _objc_release(),
       puVar2 = PTR__OBJC_CLASS___UIView_1126aec20, cVar1 != '\x01')) {
      *(undefined1 *)(param_1 + lVar6) = 1;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107e707f8;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_1;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010c27ac60(0x3fd3333333333333,puVar2,param_2,uVar5,0x500000,&puStack_70,0);
      _objc_release(uStack_48);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107e707f8; end: 107e7086f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e707f8(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277071c;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) &&
     (cVar1 = *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112770768), _objc_release(),
     cVar1 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e70870; end: 107e7098b; -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateChatMediaThumbnailWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70870(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + _DAT_112770748)) {
    lVar4 = (long)_DAT_11277071c;
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277074c;
    if ((lVar3 == 0) ||
       (cVar1 = *(char *)(param_1 + lVar6), _objc_release(),
       puVar2 = PTR__OBJC_CLASS___UIView_1126aec20, cVar1 != '\x01')) {
      *(undefined1 *)(param_1 + lVar6) = 1;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107e7098c;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_1;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010c27ac60(0x3fd3333333333333,puVar2,param_2,uVar5,0x500000,&puStack_70,0);
      _objc_release(uStack_48);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107e7098c; end: 107e70a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7098c(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277071c;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) &&
     (cVar1 = *(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112770768), _objc_release(),
     cVar1 != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107e70a04; end: 107e70a07; -[SCMemoriesFeaturedStoryCellV2 setSelected:selectOverlayImage:snapIds:] */

void FUN_107e70a04(void)

{
  return;
}



/* Entry: 107e70a08; end: 107e70a0b; -[SCMemoriesFeaturedStoryCellV2 setSelectMode:] */

void FUN_107e70a08(void)

{
  return;
}



/* Entry: 107e70a0c; end: 107e70a0f; -[SCMemoriesFeaturedStoryCellV2 setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_107e70a0c(void)

{
  return;
}



/* Entry: 107e70a10; end: 107e70adf; -[SCMemoriesFeaturedStoryCellV2 animateLongTapForTouchLocation:reverse:] */

void FUN_107e70a10(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar2 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar2 = 0x3fee666666666666;
  }
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar2;
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107e70ae0; end: 107e70b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CGAffineTransformMakeScale
              (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(lVar1 + _DAT_112770710),param_2,&uStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107e70b50; end: 107e70b57; -[SCMemoriesFeaturedStoryCellV2 interactionMode] */

undefined8 FUN_107e70b50(void)

{
  return 3;
}



/* Entry: 107e70b58; end: 107e70bcb; -[SCMemoriesFeaturedStoryCellV2 canSelectAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107e70b58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_3 + _DAT_11277073c);
  func_0x00010bf34400();
  if (lVar2 == 1) {
    lVar2 = (long)_DAT_112770724;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar2));
    uVar3 = *(undefined8 *)(param_3 + lVar2);
    func_0x00010c230a60(uVar3);
    uVar1 = (uint)uVar3 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107e70bcc; end: 107e70c7f; -[SCMemoriesFeaturedStoryCellV2 _sendOutActionWithIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ec1958);
  if ((int)uVar1 != 0) {
    func_0x00010bedee40(param_1,param_2,1);
  }
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(param_3);
  param_1 = param_1 + _DAT_112770778;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0140();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107e70c80; end: 107e70c8f; -[SCMemoriesFeaturedStoryCellV2 disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e70c80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770704);
}



/* Entry: 107e70c90; end: 107e70c9f; -[SCMemoriesFeaturedStoryCellV2 setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70c90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112770704) = param_3;
  return;
}



/* Entry: 107e70ca0; end: 107e70cbf; -[SCMemoriesFeaturedStoryCellV2 gestureHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70ca0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770774);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e70cc0; end: 107e70cd3; -[SCMemoriesFeaturedStoryCellV2 setGestureHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770774,param_3);
  return;
}



/* Entry: 107e70cd4; end: 107e70cf3; -[SCMemoriesFeaturedStoryCellV2 thumbnailDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70cd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770764);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e70cf4; end: 107e70d07; -[SCMemoriesFeaturedStoryCellV2 setThumbnailDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770764,param_3);
  return;
}



/* Entry: 107e70d08; end: 107e70d27; -[SCMemoriesFeaturedStoryCellV2 featuredStoryActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70d08(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e70d28; end: 107e70d3b; -[SCMemoriesFeaturedStoryCellV2 setFeaturedStoryActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70d28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770778,param_3);
  return;
}



/* Entry: 107e70d3c; end: 107e70d5b; -[SCMemoriesFeaturedStoryCellV2 featuredDataLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70d3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277077c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e70d5c; end: 107e70d6f; -[SCMemoriesFeaturedStoryCellV2 setFeaturedDataLogging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277077c,param_3);
  return;
}



/* Entry: 107e70d70; end: 107e70d7f; -[SCMemoriesFeaturedStoryCellV2 bitmojiFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e70d70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770754);
}



/* Entry: 107e70d80; end: 107e70dbf; -[SCMemoriesFeaturedStoryCellV2 setBitmojiFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770754;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e70dc0; end: 107e70dcf; -[SCMemoriesFeaturedStoryCellV2 memoriesEntryThumbnailGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e70dc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770780);
}



/* Entry: 107e70dd0; end: 107e70e0f; -[SCMemoriesFeaturedStoryCellV2 setMemoriesEntryThumbnailGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770780;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e70e10; end: 107e70e1f; -[SCMemoriesFeaturedStoryCellV2 memoriesCRFeaturedStoryThumbnailGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e70e10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770784);
}



/* Entry: 107e70e20; end: 107e70e5f; -[SCMemoriesFeaturedStoryCellV2 setMemoriesCRFeaturedStoryThumbnailGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112770784;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e70e60; end: 107e70e7f; -[SCMemoriesFeaturedStoryCellV2 memoriesChatMediaThumbnailGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70e60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112770788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e70e80; end: 107e70e93; -[SCMemoriesFeaturedStoryCellV2 setMemoriesChatMediaThumbnailGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70e80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112770788,param_3);
  return;
}



/* Entry: 107e70e94; end: 107e70ea3; -[SCMemoriesFeaturedStoryCellV2 viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e70e94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277073c);
}



/* Entry: 107e70ea4; end: 107e70eb3; -[SCMemoriesFeaturedStoryCellV2 circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e70ea4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277075c);
}



/* Entry: 107e70eb4; end: 107e70ef3; -[SCMemoriesFeaturedStoryCellV2 setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277075c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e70ef4; end: 107e7107f; -[SCMemoriesFeaturedStoryCellV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e70ef4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277075c,0);
  _objc_storeStrong(param_1 + _DAT_11277073c,0);
  _objc_destroyWeak(param_1 + _DAT_112770788);
  _objc_storeStrong(param_1 + _DAT_112770784,0);
  _objc_storeStrong(param_1 + _DAT_112770780,0);
  _objc_storeStrong(param_1 + _DAT_112770754,0);
  _objc_destroyWeak(param_1 + _DAT_11277077c);
  _objc_destroyWeak(param_1 + _DAT_112770778);
  _objc_destroyWeak(param_1 + _DAT_112770764);
  _objc_destroyWeak(param_1 + _DAT_112770774);
  _objc_storeStrong(param_1 + _DAT_11277072c,0);
  _objc_storeStrong(param_1 + _DAT_112770718,0);
  _objc_storeStrong(param_1 + _DAT_112770714,0);
  _objc_storeStrong(param_1 + _DAT_112770748,0);
  _objc_storeStrong(param_1 + _DAT_112770744,0);
  _objc_storeStrong(param_1 + _DAT_112770740,0);
  _objc_storeStrong(param_1 + _DAT_112770758,0);
  _objc_storeStrong(param_1 + _DAT_11277076c,0);
  _objc_storeStrong(param_1 + _DAT_112770724,0);
  _objc_storeStrong(param_1 + _DAT_112770720,0);
  _objc_storeStrong(param_1 + _DAT_11277071c,0);
  _objc_storeStrong(param_1 + _DAT_112770728,0);
  _objc_storeStrong(param_1 + _DAT_112770710,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277070c,0);
  return;
}



/* Entry: 107e71080; end: 107e710d3; -[SCMemoriesFtrStoriesCollectionViewFlowLayout init] */

undefined1 * FUN_107e71080(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb6d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1f7ac0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e710d4; end: 107e7111b; -[SCMemoriesFtrStoriesCollectionViewFlowLayout flipsHorizontallyInOppositeLayoutDirection] */

bool FUN_107e710d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x1;
}


