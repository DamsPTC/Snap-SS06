/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b00b424; end: 10b00b42b; -[SCDiscoverFeedSavedStory officialBadgeType] */

undefined8 FUN_10b00b424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b00b42c; end: 10b00b433; -[SCDiscoverFeedSavedStory isFollowed] */

undefined1 FUN_10b00b42c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b00b434; end: 10b00b43b; -[SCDiscoverFeedSavedStory totalNumSnaps] */

undefined4 FUN_10b00b434(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b00b43c; end: 10b00b443; -[SCDiscoverFeedSavedStory businessId] */

undefined8 FUN_10b00b43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b00b444; end: 10b00b44b; -[SCDiscoverFeedSavedStory businessLogoURL] */

undefined8 FUN_10b00b444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b00b44c; end: 10b00b453; -[SCDiscoverFeedSavedStory compositeStoryId] */

undefined8 FUN_10b00b44c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b00b454; end: 10b00b45b; -[SCDiscoverFeedSavedStory storyTitle] */

undefined8 FUN_10b00b454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b00b45c; end: 10b00b463; -[SCDiscoverFeedSavedStory savedStoriesProfileMonetizedStatus] */

undefined1 FUN_10b00b45c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b00b464; end: 10b00b46b; -[SCDiscoverFeedSavedStory businessSubcategory] */

undefined8 FUN_10b00b464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b00b46c; end: 10b00b513; -[SCDiscoverFeedSavedStory .cxx_destruct] */

void FUN_10b00b46c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10b00b514; end: 10b00b52f; +[SCDiscoverFeedSavedStoryBuilder discoverFeedSavedStory] */

void FUN_10b00b514(void)

{
  _objc_alloc_init(PTR_PTR_1126d97e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00b530; end: 10b00b96b; +[SCDiscoverFeedSavedStoryBuilder discoverFeedSavedStoryFromExistingDiscoverFeedSavedStory:] */

void FUN_10b00b530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  
  puVar1 = PTR_PTR_1126d97e0;
  _objc_retain(param_3);
  func_0x00010bf81d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9a60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2bc360(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe8d80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2afa80(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c26e100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bb000(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b9d60(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c26e300();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2bb040(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c291e80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2bc2c0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c078f60(param_3);
  puVar17 = puVar15;
  func_0x00010c2b1040(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0e1a60(param_3);
  puVar18 = puVar17;
  func_0x00010c2b4b60(puVar17,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c073320(param_3);
  puVar19 = puVar18;
  func_0x00010c2b0800(puVar18,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c2768e0(param_3);
  puVar20 = puVar19;
  func_0x00010c2bb900(puVar19,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2a9a80(puVar20,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf24fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2a9ac0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2aabc0(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c25b6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2ba6e0(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c14bb20(param_3);
  puVar29 = puVar27;
  func_0x00010c2b77a0(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bf25300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar30 = puVar29;
  func_0x00010c2a9b20(puVar29,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar28);
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar16);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 10b00b96c; end: 10b00b9f3; -[SCDiscoverFeedSavedStoryBuilder build] */

void FUN_10b00b96c(void)

{
  _objc_alloc(PTR_PTR_1126d97b8);
  func_0x00010c04a1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00b9f4; end: 10b00ba2b; -[SCDiscoverFeedSavedStoryBuilder withSnaps:] */

long FUN_10b00b9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00ba2c; end: 10b00ba63; -[SCDiscoverFeedSavedStoryBuilder withUserId:] */

long FUN_10b00ba2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00ba64; end: 10b00ba9b; -[SCDiscoverFeedSavedStoryBuilder withImageThumbnail:] */

long FUN_10b00ba64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00ba9c; end: 10b00bad3; -[SCDiscoverFeedSavedStoryBuilder withThumbnailMetadata:] */

long FUN_10b00ba9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bad4; end: 10b00bb0b; -[SCDiscoverFeedSavedStoryBuilder withSpotlightEngagementMetadata:] */

long FUN_10b00bad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bb0c; end: 10b00bb43; -[SCDiscoverFeedSavedStoryBuilder withThumbnailSnapId:] */

long FUN_10b00bb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bb44; end: 10b00bb7b; -[SCDiscoverFeedSavedStoryBuilder withUserDisplayName:] */

long FUN_10b00bb44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bb7c; end: 10b00bb83; -[SCDiscoverFeedSavedStoryBuilder withIsOfficial:] */

void FUN_10b00bb7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b00bb84; end: 10b00bb8b; -[SCDiscoverFeedSavedStoryBuilder withOfficialBadgeType:] */

void FUN_10b00bb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b00bb8c; end: 10b00bb93; -[SCDiscoverFeedSavedStoryBuilder withIsFollowed:] */

void FUN_10b00bb8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b00bb94; end: 10b00bb9b; -[SCDiscoverFeedSavedStoryBuilder withTotalNumSnaps:] */

void FUN_10b00bb94(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return;
}



/* Entry: 10b00bb9c; end: 10b00bbd3; -[SCDiscoverFeedSavedStoryBuilder withBusinessId:] */

long FUN_10b00bb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bbd4; end: 10b00bc0b; -[SCDiscoverFeedSavedStoryBuilder withBusinessLogoURL:] */

long FUN_10b00bbd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bc0c; end: 10b00bc43; -[SCDiscoverFeedSavedStoryBuilder withCompositeStoryId:] */

long FUN_10b00bc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bc44; end: 10b00bc7b; -[SCDiscoverFeedSavedStoryBuilder withStoryTitle:] */

long FUN_10b00bc44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bc7c; end: 10b00bc83; -[SCDiscoverFeedSavedStoryBuilder withSavedStoriesProfileMonetizedStatus:] */

void FUN_10b00bc7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b00bc84; end: 10b00bcbb; -[SCDiscoverFeedSavedStoryBuilder withBusinessSubcategory:] */

long FUN_10b00bc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00bcbc; end: 10b00bd63; -[SCDiscoverFeedSavedStoryBuilder .cxx_destruct] */

void FUN_10b00bcbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10b00bd64; end: 10b00bf8f; -[SCDiscoverFeedPublicUser initWithCoder:] */

undefined1 * FUN_10b00bd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704240;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
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
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00bf90; end: 10b00c1bf; -[SCDiscoverFeedPublicUser initWithUserId:displayName:userName:emoji:isPopular:isOfficial:officialBadgeType:isFollowed:bitmojiAvatarId:bitmojiAvatarSelfieId:businessId:businessLogoURL:businessDeepLinkURL:publicStoriesProfileMonetizedStatus:] */

undefined8 *
FUN_10b00bf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_112704240;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    puVar1[6] = param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_17;
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b00c1c0; end: 10b00c1e3; -[SCDiscoverFeedPublicUser copyWithZone:] */

undefined8 FUN_10b00c1c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00c1e4; end: 10b00c333; -[SCDiscoverFeedPublicUser encodeWithCoder:] */

void FUN_10b00c1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4ae78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e550b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4ae98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f4aeb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4aef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f4af18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110de8298);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4af38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f4af78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f4af98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f4afb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f4b018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b00c334; end: 10b00c41b; -[SCDiscoverFeedPublicUser hash] */

undefined8 * FUN_10b00c334(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = (ulong)*(byte *)(param_1 + 9);
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_60 = (ulong)*(byte *)(param_1 + 10);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb);
  puVar3 = &uStack_98;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b00c594:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b00c5a0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         (puVar3[6] == param_3[6])) &&
        ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
         (*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb))))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[9];
                  if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[10];
                    if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = (undefined8 *)puVar3[0xb];
                      if (puVar6 != (undefined8 *)param_3[0xb]) {
                        func_0x00010c071ae0();
                        goto LAB_10b00c5a0;
                      }
                      goto LAB_10b00c594;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b00c5a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b00c41c; end: 10b00c5bb; -[SCDiscoverFeedPublicUser isEqual:] */

long FUN_10b00c41c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b00c594:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00c5a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if (lVar3 != *(long *)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_10b00c5a0;
                      }
                      goto LAB_10b00c594;
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
LAB_10b00c5a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00c5bc; end: 10b00c5c3; -[SCDiscoverFeedPublicUser userId] */

undefined8 FUN_10b00c5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00c5c4; end: 10b00c5cb; -[SCDiscoverFeedPublicUser displayName] */

undefined8 FUN_10b00c5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b00c5cc; end: 10b00c5d3; -[SCDiscoverFeedPublicUser userName] */

undefined8 FUN_10b00c5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00c5d4; end: 10b00c5db; -[SCDiscoverFeedPublicUser emoji] */

undefined8 FUN_10b00c5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b00c5dc; end: 10b00c5e3; -[SCDiscoverFeedPublicUser isPopular] */

undefined1 FUN_10b00c5dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b00c5e4; end: 10b00c5eb; -[SCDiscoverFeedPublicUser isOfficial] */

undefined1 FUN_10b00c5e4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b00c5ec; end: 10b00c5f3; -[SCDiscoverFeedPublicUser officialBadgeType] */

undefined8 FUN_10b00c5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b00c5f4; end: 10b00c5fb; -[SCDiscoverFeedPublicUser isFollowed] */

undefined1 FUN_10b00c5f4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b00c5fc; end: 10b00c603; -[SCDiscoverFeedPublicUser bitmojiAvatarId] */

undefined8 FUN_10b00c5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b00c604; end: 10b00c60b; -[SCDiscoverFeedPublicUser bitmojiAvatarSelfieId] */

undefined8 FUN_10b00c604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b00c60c; end: 10b00c613; -[SCDiscoverFeedPublicUser businessId] */

undefined8 FUN_10b00c60c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b00c614; end: 10b00c61b; -[SCDiscoverFeedPublicUser businessLogoURL] */

undefined8 FUN_10b00c614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b00c61c; end: 10b00c623; -[SCDiscoverFeedPublicUser businessDeepLinkURL] */

undefined8 FUN_10b00c61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b00c624; end: 10b00c62b; -[SCDiscoverFeedPublicUser publicStoriesProfileMonetizedStatus] */

undefined1 FUN_10b00c624(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b00c62c; end: 10b00c6af; -[SCDiscoverFeedPublicUser .cxx_destruct] */

void FUN_10b00c62c(long param_1)

{
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
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b00c6b0; end: 10b00c737; -[SCContentFeedIdentifier initWithCoder:] */

undefined1 * FUN_10b00c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00c738; end: 10b00c7af; -[SCContentFeedIdentifier initWithFeedType:] */

undefined1 * FUN_10b00c738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00c7b0; end: 10b00c7d3; -[SCContentFeedIdentifier copyWithZone:] */

undefined8 FUN_10b00c7b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00c7d4; end: 10b00c7eb; -[SCContentFeedIdentifier encodeWithCoder:] */

void FUN_10b00c7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110ed3158);
  return;
}



/* Entry: 10b00c7ec; end: 10b00c7f3; -[SCContentFeedIdentifier hash] */

void FUN_10b00c7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b00c7f4; end: 10b00c883; -[SCContentFeedIdentifier isEqual:] */

long FUN_10b00c7f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00c868;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b00c868;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b00c868;
    }
  }
  lVar3 = 1;
LAB_10b00c868:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00c884; end: 10b00c88b; -[SCContentFeedIdentifier feedType] */

undefined8 FUN_10b00c884(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b00c88c; end: 10b00c897; -[SCContentFeedIdentifier .cxx_destruct] */

void FUN_10b00c88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b00c898; end: 10b00cb47; -[SCDiscoverFeedFriendStory initWithStoryId:storyContentType:mostRecentUnviewedTimestamp:mostRecentViewedTimestamp:mostRecentStoryTimestamp:expirationDate:hasUnviewedStories:isStoryMuted:isStorySuggested:hasAddedFriendFromStorySuggestion:displayName:caption:thumbnail:totalNumSnaps:numOfUnviewedStories:contextBadgeHintFirst:contextBadgeHintHighestPriority:placeTagVenueId:snapchatterInfo:storyIdFp:] */

undefined8 *
FUN_10b00c898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_112704250;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._3_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_14;
    puVar1[0xc] = param_15;
    puVar1[0xd] = param_16;
    puVar1[0xe] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    puVar1[0x11] = param_20;
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b00cb48; end: 10b00cb6b; -[SCDiscoverFeedFriendStory copyWithZone:] */

undefined8 FUN_10b00cb48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00cb6c; end: 10b00cc7f; -[SCDiscoverFeedFriendStory hash] */

undefined8 * FUN_10b00cb6c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
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
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_c0 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_98 = (ulong)uVar1 & 0xff;
  uStack_90 = uVar10 >> 0x10 & 0xff;
  uStack_88 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_80 = (ulong)uVar8;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x88);
  puVar4 = &uStack_c8;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar4,0x14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b00ce60:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b00ce6c;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[3] == param_3[3] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
           (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
        (puVar4[0xb] == param_3[0xb])) &&
       (((puVar4[0xc] == param_3[0xc] && (puVar4[0xd] == param_3[0xd])) &&
        ((puVar4[0xe] == param_3[0xe] && (puVar4[0x11] == param_3[0x11])))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[4];
        if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[5];
          if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[6];
            if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[7];
              if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[8];
                if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  lVar6 = puVar4[9];
                  if ((lVar6 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    lVar6 = puVar4[10];
                    if ((lVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                      lVar6 = puVar4[0xf];
                      if ((lVar6 == param_3[0xf]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                        puVar7 = (undefined8 *)puVar4[0x10];
                        if (puVar7 != (undefined8 *)param_3[0x10]) {
                          func_0x00010c071ae0();
                          goto LAB_10b00ce6c;
                        }
                        goto LAB_10b00ce60;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b00ce6c:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b00cc80; end: 10b00ce87; -[SCDiscoverFeedFriendStory isEqual:] */

long FUN_10b00cc80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b00ce60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00ce6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
       (((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
        ((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
         (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x78);
                      if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x80);
                        if (lVar3 != *(long *)(param_3 + 0x80)) {
                          func_0x00010c071ae0();
                          goto LAB_10b00ce6c;
                        }
                        goto LAB_10b00ce60;
                      }
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
LAB_10b00ce6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00ce88; end: 10b00ce8f; -[SCDiscoverFeedFriendStory storyId] */

undefined8 FUN_10b00ce88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00ce90; end: 10b00ce97; -[SCDiscoverFeedFriendStory storyContentType] */

undefined8 FUN_10b00ce90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b00ce98; end: 10b00ce9f; -[SCDiscoverFeedFriendStory mostRecentUnviewedTimestamp] */

undefined8 FUN_10b00ce98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00cea0; end: 10b00cea7; -[SCDiscoverFeedFriendStory mostRecentViewedTimestamp] */

undefined8 FUN_10b00cea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b00cea8; end: 10b00ceaf; -[SCDiscoverFeedFriendStory mostRecentStoryTimestamp] */

undefined8 FUN_10b00cea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b00ceb0; end: 10b00ceb7; -[SCDiscoverFeedFriendStory expirationDate] */

undefined8 FUN_10b00ceb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b00ceb8; end: 10b00cebf; -[SCDiscoverFeedFriendStory hasUnviewedStories] */

undefined1 FUN_10b00ceb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b00cec0; end: 10b00cec7; -[SCDiscoverFeedFriendStory isStoryMuted] */

undefined1 FUN_10b00cec0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b00cec8; end: 10b00cecf; -[SCDiscoverFeedFriendStory isStorySuggested] */

undefined1 FUN_10b00cec8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b00ced0; end: 10b00ced7; -[SCDiscoverFeedFriendStory hasAddedFriendFromStorySuggestion] */

undefined1 FUN_10b00ced0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b00ced8; end: 10b00cedf; -[SCDiscoverFeedFriendStory displayName] */

undefined8 FUN_10b00ced8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b00cee0; end: 10b00cee7; -[SCDiscoverFeedFriendStory caption] */

undefined8 FUN_10b00cee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b00cee8; end: 10b00ceef; -[SCDiscoverFeedFriendStory thumbnail] */

undefined8 FUN_10b00cee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b00cef0; end: 10b00cef7; -[SCDiscoverFeedFriendStory totalNumSnaps] */

undefined8 FUN_10b00cef0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b00cef8; end: 10b00ceff; -[SCDiscoverFeedFriendStory numOfUnviewedStories] */

undefined8 FUN_10b00cef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b00cf00; end: 10b00cf07; -[SCDiscoverFeedFriendStory contextBadgeHintFirst] */

undefined8 FUN_10b00cf00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b00cf08; end: 10b00cf0f; -[SCDiscoverFeedFriendStory contextBadgeHintHighestPriority] */

undefined8 FUN_10b00cf08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b00cf10; end: 10b00cf17; -[SCDiscoverFeedFriendStory placeTagVenueId] */

undefined8 FUN_10b00cf10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b00cf18; end: 10b00cf1f; -[SCDiscoverFeedFriendStory snapchatterInfo] */

undefined8 FUN_10b00cf18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b00cf20; end: 10b00cf27; -[SCDiscoverFeedFriendStory storyIdFp] */

undefined8 FUN_10b00cf20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b00cf28; end: 10b00cfb7; -[SCDiscoverFeedFriendStory .cxx_destruct] */

void FUN_10b00cf28(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b00cfb8; end: 10b00d0c3; -[SCDiscoverFeedStorySnapchatterInfo initWithUserId:avatarId:selfieId:officialBadgeImage:] */

undefined1 *
FUN_10b00cfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112704258;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00d0c4; end: 10b00d0e7; -[SCDiscoverFeedStorySnapchatterInfo copyWithZone:] */

undefined8 FUN_10b00d0c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00d0e8; end: 10b00d173; -[SCDiscoverFeedStorySnapchatterInfo hash] */

undefined8 * FUN_10b00d0e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b00d224:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b00d230;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b00d230;
            }
            goto LAB_10b00d224;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b00d230:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b00d174; end: 10b00d24b; -[SCDiscoverFeedStorySnapchatterInfo isEqual:] */

long FUN_10b00d174(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b00d224:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00d230;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b00d230;
            }
            goto LAB_10b00d224;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b00d230:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00d24c; end: 10b00d253; -[SCDiscoverFeedStorySnapchatterInfo userId] */

undefined8 FUN_10b00d24c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b00d254; end: 10b00d25b; -[SCDiscoverFeedStorySnapchatterInfo avatarId] */

undefined8 FUN_10b00d254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00d25c; end: 10b00d263; -[SCDiscoverFeedStorySnapchatterInfo selfieId] */

undefined8 FUN_10b00d25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b00d264; end: 10b00d26b; -[SCDiscoverFeedStorySnapchatterInfo officialBadgeImage] */

undefined8 FUN_10b00d264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00d26c; end: 10b00d2b3; -[SCDiscoverFeedStorySnapchatterInfo .cxx_destruct] */

void FUN_10b00d26c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b00d2b4; end: 10b00d38b; -[SCContentUnviewableSnap initWithCoder:] */

undefined1 * FUN_10b00d2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704260;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00d38c; end: 10b00d463; -[SCContentUnviewableSnap initWithSnapId:downloadDate:sessionId:] */

undefined1 *
FUN_10b00d38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00d464; end: 10b00d487; -[SCContentUnviewableSnap copyWithZone:] */

undefined8 FUN_10b00d464(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00d488; end: 10b00d4fb; -[SCContentUnviewableSnap encodeWithCoder:] */

void FUN_10b00d488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f4b158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ebfff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b00d4fc; end: 10b00d57b; -[SCContentUnviewableSnap hash] */

undefined8 * FUN_10b00d4fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b00d614:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b00d620;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b00d620;
          }
          goto LAB_10b00d614;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b00d620:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b00d57c; end: 10b00d63b; -[SCContentUnviewableSnap isEqual:] */

long FUN_10b00d57c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b00d614:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00d620;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b00d620;
          }
          goto LAB_10b00d614;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b00d620:
  _objc_release(param_3);
  return lVar3;
}


