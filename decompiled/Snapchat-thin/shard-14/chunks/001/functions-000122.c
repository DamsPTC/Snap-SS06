/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b005518; end: 10b00551f; -[SCDiscoverFeedStoryBuildingInfo requestId] */

undefined8 FUN_10b005518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b005520; end: 10b005527; -[SCDiscoverFeedStoryBuildingInfo responseTimestamp] */

undefined8 FUN_10b005520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b005528; end: 10b00552f; -[SCDiscoverFeedStoryBuildingInfo hpoData] */

undefined8 FUN_10b005528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b005530; end: 10b005537; -[SCDiscoverFeedStoryBuildingInfo feedType] */

undefined8 FUN_10b005530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b005538; end: 10b00553f; -[SCDiscoverFeedStoryBuildingInfo watchedStatesByEditionId] */

undefined8 FUN_10b005538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b005540; end: 10b005547; -[SCDiscoverFeedStoryBuildingInfo includeManagementInfo] */

undefined1 FUN_10b005540(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b005548; end: 10b00554f; -[SCDiscoverFeedStoryBuildingInfo isMentionsPublicStory] */

undefined1 FUN_10b005548(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b005550; end: 10b005557; -[SCDiscoverFeedStoryBuildingInfo region] */

undefined8 FUN_10b005550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b005558; end: 10b00559f; -[SCDiscoverFeedStoryBuildingInfo .cxx_destruct] */

void FUN_10b005558(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0055a0; end: 10b005767; -[SCDiscoverFeedStoryThumbnailMetadata initWithCoder:] */

undefined1 * FUN_10b0055a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b005768; end: 10b00595b; -[SCDiscoverFeedStoryThumbnailMetadata initWithThumbnailURL:thumbnailIv:mediaKey:mediaId:snapId:thumbnailContentObject:thumbnailCoKey:thumbnailCoIv:tileId:] */

undefined1 *
FUN_10b005768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_112704208;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
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



/* Entry: 10b00595c; end: 10b00597f; -[SCDiscoverFeedStoryThumbnailMetadata copyWithZone:] */

undefined8 FUN_10b00595c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b005980; end: 10b005a6b; -[SCDiscoverFeedStoryThumbnailMetadata encodeWithCoder:] */

void FUN_10b005980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e44c98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f4aa58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4aa78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ebbe58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4aa98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4aab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4aad8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f49158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b005a6c; end: 10b005b33; -[SCDiscoverFeedStoryThumbnailMetadata hash] */

undefined8 * FUN_10b005a6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b005c5c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b005c68;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_10b005c68;
                      }
                      goto LAB_10b005c5c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b005c68:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b005b34; end: 10b005c83; -[SCDiscoverFeedStoryThumbnailMetadata isEqual:] */

long FUN_10b005b34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b005c5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b005c68;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if (lVar3 != *(long *)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_10b005c68;
                      }
                      goto LAB_10b005c5c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b005c68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b005c84; end: 10b005c8b; -[SCDiscoverFeedStoryThumbnailMetadata thumbnailURL] */

undefined8 FUN_10b005c84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b005c8c; end: 10b005c93; -[SCDiscoverFeedStoryThumbnailMetadata thumbnailIv] */

undefined8 FUN_10b005c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b005c94; end: 10b005c9b; -[SCDiscoverFeedStoryThumbnailMetadata mediaKey] */

undefined8 FUN_10b005c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b005c9c; end: 10b005ca3; -[SCDiscoverFeedStoryThumbnailMetadata mediaId] */

undefined8 FUN_10b005c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b005ca4; end: 10b005cab; -[SCDiscoverFeedStoryThumbnailMetadata snapId] */

undefined8 FUN_10b005ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b005cac; end: 10b005cb3; -[SCDiscoverFeedStoryThumbnailMetadata thumbnailContentObject] */

undefined8 FUN_10b005cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b005cb4; end: 10b005cbb; -[SCDiscoverFeedStoryThumbnailMetadata thumbnailCoKey] */

undefined8 FUN_10b005cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b005cbc; end: 10b005cc3; -[SCDiscoverFeedStoryThumbnailMetadata thumbnailCoIv] */

undefined8 FUN_10b005cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b005cc4; end: 10b005ccb; -[SCDiscoverFeedStoryThumbnailMetadata tileId] */

undefined8 FUN_10b005cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b005ccc; end: 10b005d4f; -[SCDiscoverFeedStoryThumbnailMetadata .cxx_destruct] */

void FUN_10b005ccc(long param_1)

{
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



/* Entry: 10b005d50; end: 10b005dbb; +[SCDiscoverFeedStoryContent friendStoryWithFriendStory:] */

void FUN_10b005d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b005dbc; end: 10b005e27; +[SCDiscoverFeedStoryContent longformShowWithLongformShow:] */

void FUN_10b005dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b005e28; end: 10b005e93; +[SCDiscoverFeedStoryContent ourStoryWithOurStory:] */

void FUN_10b005e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b005e94; end: 10b005eff; +[SCDiscoverFeedStoryContent promotedStoryWithPromotedStory:] */

void FUN_10b005e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b005f00; end: 10b005f63; +[SCDiscoverFeedStoryContent publicUserStoryWithPublicUserStory:] */

void FUN_10b005f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b005f64; end: 10b005fcf; +[SCDiscoverFeedStoryContent publisherStoryWithPublisherStory:] */

void FUN_10b005f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b005fd0; end: 10b00603b; +[SCDiscoverFeedStoryContent savedStoryWithSavedStory:] */

void FUN_10b005fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b00603c; end: 10b0060a7; +[SCDiscoverFeedStoryContent singleSnapStoryWithSingleSnapStory:] */

void FUN_10b00603c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0060a8; end: 10b006113; +[SCDiscoverFeedStoryContent spotlightSharedStoryWithSpotlightSharedStory:] */

void FUN_10b0060a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b006114; end: 10b0063bf; -[SCDiscoverFeedStoryContent initWithCoder:] */

undefined8 * FUN_10b006114(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_112704210;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 1;
        lVar6 = 0x18;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 2;
        lVar6 = 0x20;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 3;
        lVar6 = 0x28;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 4;
        lVar6 = 0x30;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 5;
        lVar6 = 0x38;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 6;
        lVar6 = 0x40;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
        uVar5 = 7;
        lVar6 = 0x48;
        goto LAB_10b0062c4;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10b00634c;
      uVar5 = 8;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
LAB_10b0062c4:
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
      *(ulong *)((long)puVar1 + lVar6) = uVar2;
      _objc_release(uVar4);
    }
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b00634c:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b0063c0; end: 10b0063e3; -[SCDiscoverFeedStoryContent copyWithZone:] */

undefined8 FUN_10b0063c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0063e4; end: 10b00655f; -[SCDiscoverFeedStoryContent encodeWithCoder:] */

void FUN_10b0063e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (lVar2 < 2) {
      if (lVar2 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110f4aaf8;
        lVar2 = 0x10;
        ppuVar1 = &PTR____CFConstantStringClassReference_110f4ab18;
      }
      else {
        if (lVar2 != 1) goto LAB_10b00654c;
        ppuVar3 = &PTR____CFConstantStringClassReference_110f4ab38;
        lVar2 = 0x18;
        ppuVar1 = &PTR____CFConstantStringClassReference_110f4ab58;
      }
    }
    else if (lVar2 == 2) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f4ab78;
      lVar2 = 0x20;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4ab98;
    }
    else {
      if (lVar2 != 3) goto LAB_10b00654c;
      ppuVar3 = &PTR____CFConstantStringClassReference_110f4abb8;
      lVar2 = 0x28;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4abd8;
    }
LAB_10b00652c:
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  }
  else {
    if (lVar2 < 6) {
      if (lVar2 == 4) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e64bb8;
        lVar2 = 0x30;
        ppuVar1 = &PTR____CFConstantStringClassReference_110f4abf8;
      }
      else {
        if (lVar2 != 5) goto LAB_10b00654c;
        ppuVar3 = &PTR____CFConstantStringClassReference_110f4ac18;
        lVar2 = 0x38;
        ppuVar1 = &PTR____CFConstantStringClassReference_110f4ac38;
      }
      goto LAB_10b00652c;
    }
    if (lVar2 == 6) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f4ac58;
      lVar2 = 0x40;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4ac78;
      goto LAB_10b00652c;
    }
    if (lVar2 == 7) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f4ac98;
      lVar2 = 0x48;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4acb8;
      goto LAB_10b00652c;
    }
    if (lVar2 != 8) goto LAB_10b00654c;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f4acd8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b00654c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b006560; end: 10b00662b; -[SCDiscoverFeedStoryContent hash] */

void FUN_10b006560(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
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
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_112704210;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00662c; end: 10b00666f; -[SCDiscoverFeedStoryContent internalInit] */

void FUN_10b00662c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b006670; end: 10b0067cf; -[SCDiscoverFeedStoryContent isEqual:] */

long FUN_10b006670(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0067a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0067b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_10b0067b4;
                      }
                      goto LAB_10b0067a8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0067b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0067d0; end: 10b0069af; -[SCDiscoverFeedStoryContent matchPublicUserStory:singleSnapStory:ourStory:longformShow:publisherStory:promotedStory:savedStory:friendStory:spotlightSharedStory:] */

void FUN_10b0067d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 == 0) goto LAB_10b006950;
        lVar2 = 0x10;
        lVar1 = param_3;
      }
      else {
        if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10b006950;
        lVar2 = 0x18;
        lVar1 = param_4;
      }
    }
    else if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_10b006950;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
    else {
      if ((lVar1 != 3) || (param_6 == 0)) goto LAB_10b006950;
      lVar2 = 0x28;
      lVar1 = param_6;
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
      if (param_7 == 0) goto LAB_10b006950;
      lVar2 = 0x30;
      lVar1 = param_7;
    }
    else {
      if ((lVar1 != 5) || (param_8 == 0)) goto LAB_10b006950;
      lVar2 = 0x38;
      lVar1 = param_8;
    }
  }
  else if (lVar1 == 6) {
    if (param_9 == 0) goto LAB_10b006950;
    lVar2 = 0x40;
    lVar1 = param_9;
  }
  else if (lVar1 == 7) {
    if (param_10 == 0) goto LAB_10b006950;
    lVar2 = 0x48;
    lVar1 = param_10;
  }
  else {
    if ((lVar1 != 8) || (param_11 == 0)) goto LAB_10b006950;
    lVar2 = 0x50;
    lVar1 = param_11;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b006950:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0069b0; end: 10b006a33; -[SCDiscoverFeedStoryContent .cxx_destruct] */

void FUN_10b0069b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b006a34; end: 10b006d27; -[SCDiscoverFeedOurStory initWithCoder:] */

undefined1 *
FUN_10b006a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704218;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x80) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b006d28; end: 10b007053; -[SCDiscoverFeedOurStory initWithSnaps:imageThumbnail:videoStreamingThumbnail:thumbnailSnapId:title:category:displayTimestampSecs:emoji:displayGeoInfo:logoURL:miniProfileTitle:miniProfileDescription:miniProfileIconUrl:totalNumSnaps:totalDurationSecs:isSensitive:isShareable:isPartnered:adPlacementMetadata:needDeltaFetch:] */

undefined8 *
FUN_10b006d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined1 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain();
  puStack_80 = PTR_PTR_112704218;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    puVar1[8] = param_1;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_17;
    puVar1[0x10] = param_2;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 9) = param_18._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_18._2_1_;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_21;
  }
  _objc_release(param_20);
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
  return puVar1;
}



/* Entry: 10b007054; end: 10b007077; -[SCDiscoverFeedOurStory copyWithZone:] */

undefined8 FUN_10b007054(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b007078; end: 10b00723f; -[SCDiscoverFeedOurStory encodeWithCoder:] */

void FUN_10b007078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4acf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4ad18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4ad38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110dbb078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110efd978);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x40),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f4ad58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e550b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f4ad78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110ed3458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f4ad98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f4adb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f4add8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f49238);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x80),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f4adf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f495b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ed31d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f4ae18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f4a258);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f4ae38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b007240; end: 10b007393; -[SCDiscoverFeedOurStory hash] */

undefined8 * FUN_10b007240(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_98 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb);
  puVar4 = &uStack_c8;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar4,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b0075d4:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0075e0;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((puVar4[0xf] == param_3[0xf] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
         (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
        ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
         (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) {
      dVar10 = ABS((double)puVar4[8] - (double)param_3[8]);
      dVar9 = ABS((double)puVar4[8] + (double)param_3[8]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar9 = ABS((double)puVar4[0x10] - (double)param_3[0x10]);
        if ((((((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS((double)puVar4[0x10] + (double)param_3[0x10]) * 2.220446049250313e-16))
              && ((lVar6 = puVar4[2], lVar6 == param_3[2] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            && (((((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                    ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                   ((lVar6 = puVar4[7], lVar6 == param_3[7] ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
                 ((lVar6 = puVar4[9], lVar6 == param_3[9] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                ((((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 (((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((lVar6 = puVar4[0xd], lVar6 == param_3[0xd] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) &&
           ((lVar6 = puVar4[0xe], lVar6 == param_3[0xe] || (func_0x00010c071ae0(), (int)lVar6 != 0))
           )) {
          puVar8 = (undefined8 *)puVar4[0x11];
          if (puVar8 != (undefined8 *)param_3[0x11]) {
            func_0x00010c071ae0();
            goto LAB_10b0075e0;
          }
          goto LAB_10b0075d4;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b0075e0:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b007394; end: 10b0075fb; -[SCDiscoverFeedOurStory isEqual:] */

long FUN_10b007394(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0075d4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0075e0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
      dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar5 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
        if ((((((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                        2.220446049250313e-16)) &&
              ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            (((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
               ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                 ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
                 (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
              ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
               ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              (((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
               ((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))) &&
           ((lVar4 = *(long *)(param_1 + 0x70), lVar4 == *(long *)(param_3 + 0x70) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x88);
          if (lVar4 != *(long *)(param_3 + 0x88)) {
            func_0x00010c071ae0();
            goto LAB_10b0075e0;
          }
          goto LAB_10b0075d4;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b0075e0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0075fc; end: 10b007603; -[SCDiscoverFeedOurStory snaps] */

undefined8 FUN_10b0075fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b007604; end: 10b00760b; -[SCDiscoverFeedOurStory imageThumbnail] */

undefined8 FUN_10b007604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b00760c; end: 10b007613; -[SCDiscoverFeedOurStory videoStreamingThumbnail] */

undefined8 FUN_10b00760c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b007614; end: 10b00761b; -[SCDiscoverFeedOurStory thumbnailSnapId] */

undefined8 FUN_10b007614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b00761c; end: 10b007623; -[SCDiscoverFeedOurStory title] */

undefined8 FUN_10b00761c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b007624; end: 10b00762b; -[SCDiscoverFeedOurStory category] */

undefined8 FUN_10b007624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b00762c; end: 10b007633; -[SCDiscoverFeedOurStory displayTimestampSecs] */

undefined8 FUN_10b00762c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b007634; end: 10b00763b; -[SCDiscoverFeedOurStory emoji] */

undefined8 FUN_10b007634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b00763c; end: 10b007643; -[SCDiscoverFeedOurStory displayGeoInfo] */

undefined8 FUN_10b00763c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b007644; end: 10b00764b; -[SCDiscoverFeedOurStory logoURL] */

undefined8 FUN_10b007644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b00764c; end: 10b007653; -[SCDiscoverFeedOurStory miniProfileTitle] */

undefined8 FUN_10b00764c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b007654; end: 10b00765b; -[SCDiscoverFeedOurStory miniProfileDescription] */

undefined8 FUN_10b007654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b00765c; end: 10b007663; -[SCDiscoverFeedOurStory miniProfileIconUrl] */

undefined8 FUN_10b00765c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b007664; end: 10b00766b; -[SCDiscoverFeedOurStory totalNumSnaps] */

undefined8 FUN_10b007664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b00766c; end: 10b007673; -[SCDiscoverFeedOurStory totalDurationSecs] */

undefined8 FUN_10b00766c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b007674; end: 10b00767b; -[SCDiscoverFeedOurStory isSensitive] */

undefined1 FUN_10b007674(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b00767c; end: 10b007683; -[SCDiscoverFeedOurStory isShareable] */

undefined1 FUN_10b00767c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b007684; end: 10b00768b; -[SCDiscoverFeedOurStory isPartnered] */

undefined1 FUN_10b007684(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b00768c; end: 10b007693; -[SCDiscoverFeedOurStory adPlacementMetadata] */

undefined8 FUN_10b00768c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b007694; end: 10b00769b; -[SCDiscoverFeedOurStory needDeltaFetch] */

undefined1 FUN_10b007694(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b00769c; end: 10b00774f; -[SCDiscoverFeedOurStory .cxx_destruct] */

void FUN_10b00769c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b007750; end: 10b007af7; -[SCDiscoverFeedPublicUserStory initWithCoder:] */

undefined1 *
FUN_10b007750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704220;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x10) = (int)uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x68) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x70) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x14) = (int)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b007af8; end: 10b007ecf; -[SCDiscoverFeedPublicUserStory initWithSnaps:userId:imageThumbnail:thumbnailMetadata:thumbnailSnapId:displayName:userName:emoji:isPopular:isOfficial:showOfficialBadge:officialBadgeType:isFollowed:bitmojiAvatarId:totalNumSnaps:totalDurationSecs:displayTimestampSecs:bitmojiAvatarSelfieId:postSubscribeSuggestions:businessId:businessLogoURL:businessDeepLinkURL:brandFriendliness:sequenceInfo:publicStoriesProfileMonetizedStatus:businessSubcategory:] */

undefined8 *
FUN_10b007af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28,
             undefined1 param_29,undefined4 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_31);
  puStack_80 = PTR_PTR_112704220;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 9) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_13._2_1_;
    puVar1[0xb] = param_15;
    *(undefined1 *)((long)puVar1 + 0xb) = param_16;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 2) = param_19;
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_2;
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x14) = param_26;
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_29;
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_31);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b007ed0; end: 10b007ef3; -[SCDiscoverFeedPublicUserStory copyWithZone:] */

undefined8 FUN_10b007ed0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b007ef4; end: 10b008133; -[SCDiscoverFeedPublicUserStory encodeWithCoder:] */

void FUN_10b007ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4acf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4ae58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4ad38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f4ae78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110e550b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4ae98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f4aeb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f4aed8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f4aef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f4af18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110de8298);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f49238);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x68),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f4adf8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x70),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f4ad58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f4af38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f4af58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f4af78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f4af98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f4afb8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110f4afd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f4aff8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f4b018);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f4b038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b008134; end: 10b0082bf; -[SCDiscoverFeedPublicUserStory hash] */

undefined8 * FUN_10b008134(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uStack_b8 = (ulong)*(byte *)(param_1 + 8);
  uStack_b0 = (ulong)*(byte *)(param_1 + 9);
  uStack_a8 = (ulong)*(byte *)(param_1 + 10);
  lVar6 = *(long *)(param_1 + 0x58);
  uStack_90 = *(undefined8 *)(param_1 + 0x60);
  lStack_a0 = -lVar6;
  if (-1 < lVar6) {
    lStack_a0 = lVar6;
  }
  uStack_98 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  lStack_88 = (long)*(int *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_f8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,0x1a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b008580:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b00858c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
         ((puVar4[0xb] == param_3[0xb] &&
          (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_3 + 2) &&
        ((*(int *)((long)puVar4 + 0x14) == *(int *)((long)param_3 + 0x14) &&
         (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))))))) {
      dVar9 = ABS((double)puVar4[0xd] - (double)param_3[0xd]);
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS((double)puVar4[0xd] + (double)param_3[0xd]) * 2.220446049250313e-16)) {
        dVar9 = ABS((double)puVar4[0xe] - (double)param_3[0xe]);
        if (((((dVar9 < 2.2250738585072014e-308) ||
              (dVar9 < ABS((double)puVar4[0xe] + (double)param_3[0xe]) * 2.220446049250313e-16)) &&
             ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            && ((((((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                   ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                  ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 ((lVar6 = puVar4[7], lVar6 == param_3[7] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                ((((lVar6 = puVar4[8], lVar6 == param_3[8] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((lVar6 = puVar4[9], lVar6 == param_3[9] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 ((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))))))) &&
           (((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] || (func_0x00010c071ae0(), (int)lVar6 != 0)
             ) && ((((lVar6 = puVar4[0xf], lVar6 == param_3[0xf] ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                    ((lVar6 = puVar4[0x10], lVar6 == param_3[0x10] ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                   ((((lVar6 = puVar4[0x11], lVar6 == param_3[0x11] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                     ((lVar6 = puVar4[0x12], lVar6 == param_3[0x12] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                    (((lVar6 = puVar4[0x13], lVar6 == param_3[0x13] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                     ((lVar6 = puVar4[0x14], lVar6 == param_3[0x14] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))))) {
          puVar8 = (undefined8 *)puVar4[0x15];
          if (puVar8 != (undefined8 *)param_3[0x15]) {
            func_0x00010c071ae0();
            goto LAB_10b00858c;
          }
          goto LAB_10b008580;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b00858c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b0082c0; end: 10b0085a7; -[SCDiscoverFeedPublicUserStory isEqual:] */

long FUN_10b0082c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b008580:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00858c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       ((*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10) &&
        ((*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
        if (((((dVar4 < 2.2250738585072014e-308) ||
              (dVar4 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                       2.220446049250313e-16)) &&
             ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
           (((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              (((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))) {
          lVar3 = *(long *)(param_1 + 0xa8);
          if (lVar3 != *(long *)(param_3 + 0xa8)) {
            func_0x00010c071ae0();
            goto LAB_10b00858c;
          }
          goto LAB_10b008580;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b00858c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0085a8; end: 10b0085af; -[SCDiscoverFeedPublicUserStory snaps] */

undefined8 FUN_10b0085a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0085b0; end: 10b0085b7; -[SCDiscoverFeedPublicUserStory userId] */

undefined8 FUN_10b0085b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0085b8; end: 10b0085bf; -[SCDiscoverFeedPublicUserStory imageThumbnail] */

undefined8 FUN_10b0085b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0085c0; end: 10b0085c7; -[SCDiscoverFeedPublicUserStory thumbnailMetadata] */

undefined8 FUN_10b0085c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0085c8; end: 10b0085cf; -[SCDiscoverFeedPublicUserStory thumbnailSnapId] */

undefined8 FUN_10b0085c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0085d0; end: 10b0085d7; -[SCDiscoverFeedPublicUserStory displayName] */

undefined8 FUN_10b0085d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0085d8; end: 10b0085df; -[SCDiscoverFeedPublicUserStory userName] */

undefined8 FUN_10b0085d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0085e0; end: 10b0085e7; -[SCDiscoverFeedPublicUserStory emoji] */

undefined8 FUN_10b0085e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0085e8; end: 10b0085ef; -[SCDiscoverFeedPublicUserStory isPopular] */

undefined1 FUN_10b0085e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0085f0; end: 10b0085f7; -[SCDiscoverFeedPublicUserStory isOfficial] */

undefined1 FUN_10b0085f0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0085f8; end: 10b0085ff; -[SCDiscoverFeedPublicUserStory showOfficialBadge] */

undefined1 FUN_10b0085f8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b008600; end: 10b008607; -[SCDiscoverFeedPublicUserStory officialBadgeType] */

undefined8 FUN_10b008600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b008608; end: 10b00860f; -[SCDiscoverFeedPublicUserStory isFollowed] */

undefined1 FUN_10b008608(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b008610; end: 10b008617; -[SCDiscoverFeedPublicUserStory bitmojiAvatarId] */

undefined8 FUN_10b008610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b008618; end: 10b00861f; -[SCDiscoverFeedPublicUserStory totalNumSnaps] */

undefined4 FUN_10b008618(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b008620; end: 10b008627; -[SCDiscoverFeedPublicUserStory totalDurationSecs] */

undefined8 FUN_10b008620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b008628; end: 10b00862f; -[SCDiscoverFeedPublicUserStory displayTimestampSecs] */

undefined8 FUN_10b008628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b008630; end: 10b008637; -[SCDiscoverFeedPublicUserStory bitmojiAvatarSelfieId] */

undefined8 FUN_10b008630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b008638; end: 10b00863f; -[SCDiscoverFeedPublicUserStory postSubscribeSuggestions] */

undefined8 FUN_10b008638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b008640; end: 10b008647; -[SCDiscoverFeedPublicUserStory businessId] */

undefined8 FUN_10b008640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b008648; end: 10b00864f; -[SCDiscoverFeedPublicUserStory businessLogoURL] */

undefined8 FUN_10b008648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b008650; end: 10b008657; -[SCDiscoverFeedPublicUserStory businessDeepLinkURL] */

undefined8 FUN_10b008650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b008658; end: 10b00865f; -[SCDiscoverFeedPublicUserStory brandFriendliness] */

undefined4 FUN_10b008658(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b008660; end: 10b008667; -[SCDiscoverFeedPublicUserStory sequenceInfo] */

undefined8 FUN_10b008660(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b008668; end: 10b00866f; -[SCDiscoverFeedPublicUserStory publicStoriesProfileMonetizedStatus] */

undefined1 FUN_10b008668(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


