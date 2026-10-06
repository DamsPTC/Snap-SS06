/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b008670; end: 10b008677; -[SCDiscoverFeedPublicUserStory businessSubcategory] */

undefined8 FUN_10b008670(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b008678; end: 10b00874f; -[SCDiscoverFeedPublicUserStory .cxx_destruct] */

void FUN_10b008678(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b008750; end: 10b00876b; +[SCDiscoverFeedPublicUserStoryBuilder discoverFeedPublicUserStory] */

void FUN_10b008750(void)

{
  _objc_alloc_init(PTR_PTR_1126c6d80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00876c; end: 10b008d7b; +[SCDiscoverFeedPublicUserStoryBuilder discoverFeedPublicUserStoryFromExistingDiscoverFeedPublicUserStory:] */

void FUN_10b00876c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined *puVar42;
  undefined *puVar43;
  
  puVar1 = PTR_PTR_1126c6d80;
  _objc_retain(param_3);
  func_0x00010bf81c00();
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
  func_0x00010c26e300();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2bb040(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2ac7a0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2bc3c0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2acd60(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c07a6a0(param_3);
  puVar19 = puVar17;
  func_0x00010c2b1180(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c078f60(param_3);
  puVar20 = puVar19;
  func_0x00010c2b1040(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c238c20(param_3);
  puVar21 = puVar20;
  func_0x00010c2b8e80(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0e1a60(param_3);
  puVar22 = puVar21;
  func_0x00010c2b4b60(puVar21,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c073320(param_3);
  puVar23 = puVar22;
  func_0x00010c2b0800(puVar22,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar23;
  func_0x00010c2a9360(puVar23,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c2768e0(param_3);
  puVar26 = puVar24;
  func_0x00010c2bb900(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2764a0(param_3);
  puVar27 = puVar26;
  func_0x00010c2bb800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf866c0(param_3);
  puVar28 = puVar27;
  func_0x00010c2ac7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bf1ade0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar28;
  func_0x00010c2a93c0(puVar28,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c1053e0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar29;
  func_0x00010c2b58c0(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar31;
  func_0x00010c2a9a80(puVar31,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010bf24fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar33;
  func_0x00010c2a9ac0(puVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010bf24e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar35;
  func_0x00010c2a9a60(puVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010bf20ec0(param_3);
  puVar39 = puVar37;
  func_0x00010c2a98a0(puVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010c15e620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar39;
  func_0x00010c2b8340(puVar39,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = param_3;
  func_0x00010c11a980(param_3);
  puVar42 = puVar40;
  func_0x00010c2b6400(puVar40,param_2,uVar41);
  _objc_retainAutoreleasedReturnValue();
  uVar41 = param_3;
  func_0x00010bf25300(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar43 = puVar42;
  func_0x00010c2a9b20(puVar42,param_2,uVar41);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar41);
  _objc_release(puVar42);
  _objc_release(puVar40);
  _objc_release(uVar38);
  _objc_release(puVar39);
  _objc_release(puVar37);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(uVar30);
  _objc_release(puVar29);
  _objc_release(uVar25);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(uVar18);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar43);
  return;
}



/* Entry: 10b008d7c; end: 10b008e2b; -[SCDiscoverFeedPublicUserStoryBuilder build] */

void FUN_10b008d7c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d5b88);
  func_0x00010c04a200(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b008e2c; end: 10b008e63; -[SCDiscoverFeedPublicUserStoryBuilder withSnaps:] */

long FUN_10b008e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008e64; end: 10b008e9b; -[SCDiscoverFeedPublicUserStoryBuilder withUserId:] */

long FUN_10b008e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008e9c; end: 10b008ed3; -[SCDiscoverFeedPublicUserStoryBuilder withImageThumbnail:] */

long FUN_10b008e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008ed4; end: 10b008f0b; -[SCDiscoverFeedPublicUserStoryBuilder withThumbnailMetadata:] */

long FUN_10b008ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008f0c; end: 10b008f43; -[SCDiscoverFeedPublicUserStoryBuilder withThumbnailSnapId:] */

long FUN_10b008f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008f44; end: 10b008f7b; -[SCDiscoverFeedPublicUserStoryBuilder withDisplayName:] */

long FUN_10b008f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008f7c; end: 10b008fb3; -[SCDiscoverFeedPublicUserStoryBuilder withUserName:] */

long FUN_10b008f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008fb4; end: 10b008feb; -[SCDiscoverFeedPublicUserStoryBuilder withEmoji:] */

long FUN_10b008fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b008fec; end: 10b008ff3; -[SCDiscoverFeedPublicUserStoryBuilder withIsPopular:] */

void FUN_10b008fec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b008ff4; end: 10b008ffb; -[SCDiscoverFeedPublicUserStoryBuilder withIsOfficial:] */

void FUN_10b008ff4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x49) = param_3;
  return;
}



/* Entry: 10b008ffc; end: 10b009003; -[SCDiscoverFeedPublicUserStoryBuilder withShowOfficialBadge:] */

void FUN_10b008ffc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4a) = param_3;
  return;
}



/* Entry: 10b009004; end: 10b00900b; -[SCDiscoverFeedPublicUserStoryBuilder withOfficialBadgeType:] */

void FUN_10b009004(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b00900c; end: 10b009013; -[SCDiscoverFeedPublicUserStoryBuilder withIsFollowed:] */

void FUN_10b00900c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b009014; end: 10b00904b; -[SCDiscoverFeedPublicUserStoryBuilder withBitmojiAvatarId:] */

long FUN_10b009014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00904c; end: 10b009053; -[SCDiscoverFeedPublicUserStoryBuilder withTotalNumSnaps:] */

void FUN_10b00904c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b009054; end: 10b00905b; -[SCDiscoverFeedPublicUserStoryBuilder withTotalDurationSecs:] */

void FUN_10b009054(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 10b00905c; end: 10b009063; -[SCDiscoverFeedPublicUserStoryBuilder withDisplayTimestampSecs:] */

void FUN_10b00905c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 10b009064; end: 10b00909b; -[SCDiscoverFeedPublicUserStoryBuilder withBitmojiAvatarSelfieId:] */

long FUN_10b009064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00909c; end: 10b0090d3; -[SCDiscoverFeedPublicUserStoryBuilder withPostSubscribeSuggestions:] */

long FUN_10b00909c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0090d4; end: 10b00910b; -[SCDiscoverFeedPublicUserStoryBuilder withBusinessId:] */

long FUN_10b0090d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00910c; end: 10b009143; -[SCDiscoverFeedPublicUserStoryBuilder withBusinessLogoURL:] */

long FUN_10b00910c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b009144; end: 10b00917b; -[SCDiscoverFeedPublicUserStoryBuilder withBusinessDeepLinkURL:] */

long FUN_10b009144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00917c; end: 10b009183; -[SCDiscoverFeedPublicUserStoryBuilder withBrandFriendliness:] */

void FUN_10b00917c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 10b009184; end: 10b0091bb; -[SCDiscoverFeedPublicUserStoryBuilder withSequenceInfo:] */

long FUN_10b009184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0091bc; end: 10b0091c3; -[SCDiscoverFeedPublicUserStoryBuilder withPublicStoriesProfileMonetizedStatus:] */

void FUN_10b0091bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10b0091c4; end: 10b0091fb; -[SCDiscoverFeedPublicUserStoryBuilder withBusinessSubcategory:] */

long FUN_10b0091c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0091fc; end: 10b0092d3; -[SCDiscoverFeedPublicUserStoryBuilder .cxx_destruct] */

void FUN_10b0091fc(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10b0092d4; end: 10b009397; -[SCDiscoverFeedSingleSnapStoryLensMetadata initWithCoder:] */

undefined1 * FUN_10b0092d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704228;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
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



/* Entry: 10b009398; end: 10b00944b; -[SCDiscoverFeedSingleSnapStoryLensMetadata initWithLensId:friendPlayCount:friendUserIds:] */

undefined1 *
FUN_10b009398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00944c; end: 10b00946f; -[SCDiscoverFeedSingleSnapStoryLensMetadata copyWithZone:] */

undefined8 FUN_10b00944c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b009470; end: 10b0094e3; -[SCDiscoverFeedSingleSnapStoryLensMetadata encodeWithCoder:] */

void FUN_10b009470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f4b058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4b078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0094e4; end: 10b009563; -[SCDiscoverFeedSingleSnapStoryLensMetadata hash] */

undefined8 * FUN_10b0094e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b0095f4:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b009600;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b009600;
        }
        goto LAB_10b0095f4;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b009600:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b009564; end: 10b00961b; -[SCDiscoverFeedSingleSnapStoryLensMetadata isEqual:] */

long FUN_10b009564(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0095f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b009600;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b009600;
        }
        goto LAB_10b0095f4;
      }
    }
    lVar3 = 0;
  }
LAB_10b009600:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00961c; end: 10b009623; -[SCDiscoverFeedSingleSnapStoryLensMetadata lensId] */

undefined8 FUN_10b00961c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b009624; end: 10b00962b; -[SCDiscoverFeedSingleSnapStoryLensMetadata friendPlayCount] */

undefined8 FUN_10b009624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00962c; end: 10b009633; -[SCDiscoverFeedSingleSnapStoryLensMetadata friendUserIds] */

undefined8 FUN_10b00962c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b009634; end: 10b009663; -[SCDiscoverFeedSingleSnapStoryLensMetadata .cxx_destruct] */

void FUN_10b009634(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b009664; end: 10b00967f; +[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder discoverFeedSingleSnapStoryLensMetadata] */

void FUN_10b009664(void)

{
  _objc_alloc_init(PTR_PTR_1126df328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b009680; end: 10b00977b; +[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder discoverFeedSingleSnapStoryLensMetadataFromExistingDiscoverFeedSingleSnapStoryLensMetadata:] */

void FUN_10b009680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126df328;
  _objc_retain(param_3);
  func_0x00010bf81f40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2880(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfb8680(param_3);
  puVar5 = puVar3;
  func_0x00010c2ae6e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfb9160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = puVar5;
  func_0x00010c2ae740(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b00977c; end: 10b0097af; -[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder build] */

void FUN_10b00977c(void)

{
  _objc_alloc(PTR_PTR_1126d97c0);
  func_0x00010c0244a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0097b0; end: 10b0097e7; -[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder withLensId:] */

long FUN_10b0097b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0097e8; end: 10b0097ef; -[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder withFriendPlayCount:] */

void FUN_10b0097e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b0097f0; end: 10b009827; -[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder withFriendUserIds:] */

long FUN_10b0097f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b009828; end: 10b009857; -[SCDiscoverFeedSingleSnapStoryLensMetadataBuilder .cxx_destruct] */

void FUN_10b009828(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b009858; end: 10b009aab; -[SCDiscoverFeedSingleSnapStory initWithCoder:] */

undefined1 * FUN_10b009858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704230;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b009aac; end: 10b009d53; -[SCDiscoverFeedSingleSnapStory initWithSnaps:imageThumbnail:thumbnailMetadata:thumbnailSnapId:displayName:snapDescription:businessProfileId:businessLogoURL:officialBadgeType:compositeStoryId:userIdToHide:timedAdPlacements:lensMetadata:] */

undefined8 *
FUN_10b009aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain();
  puStack_68 = PTR_PTR_112704230;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
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
    puVar1[9] = param_11;
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
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 10b009d54; end: 10b009d77; -[SCDiscoverFeedSingleSnapStory copyWithZone:] */

undefined8 FUN_10b009d54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b009d78; end: 10b009eb3; -[SCDiscoverFeedSingleSnapStory encodeWithCoder:] */

void FUN_10b009d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f4acf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4ae58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4ad38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4b098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ea89d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4af98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f4aef8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110e79438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f4b0b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f4b0d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f179f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b009eb4; end: 10b009fab; -[SCDiscoverFeedSingleSnapStory hash] */

undefined8 * FUN_10b009eb4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b00a12c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b00a138;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48)))
    {
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
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x58);
                        if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x60);
                          if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            puVar6 = *(undefined1 **)((long)puVar3 + 0x68);
                            if (puVar6 != *(undefined1 **)(param_3 + 0x68)) {
                              func_0x00010c071ae0();
                              goto LAB_10b00a138;
                            }
                            goto LAB_10b00a12c;
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
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b00a138:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b009fac; end: 10b00a153; -[SCDiscoverFeedSingleSnapStory isEqual:] */

long FUN_10b009fac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b00a12c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00a138;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) {
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
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if (lVar3 != *(long *)(param_3 + 0x68)) {
                              func_0x00010c071ae0();
                              goto LAB_10b00a138;
                            }
                            goto LAB_10b00a12c;
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
      }
    }
    lVar3 = 0;
  }
LAB_10b00a138:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00a154; end: 10b00a15b; -[SCDiscoverFeedSingleSnapStory snaps] */

undefined8 FUN_10b00a154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b00a15c; end: 10b00a163; -[SCDiscoverFeedSingleSnapStory imageThumbnail] */

undefined8 FUN_10b00a15c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00a164; end: 10b00a16b; -[SCDiscoverFeedSingleSnapStory thumbnailMetadata] */

undefined8 FUN_10b00a164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b00a16c; end: 10b00a173; -[SCDiscoverFeedSingleSnapStory thumbnailSnapId] */

undefined8 FUN_10b00a16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00a174; end: 10b00a17b; -[SCDiscoverFeedSingleSnapStory displayName] */

undefined8 FUN_10b00a174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b00a17c; end: 10b00a183; -[SCDiscoverFeedSingleSnapStory snapDescription] */

undefined8 FUN_10b00a17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b00a184; end: 10b00a18b; -[SCDiscoverFeedSingleSnapStory businessProfileId] */

undefined8 FUN_10b00a184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b00a18c; end: 10b00a193; -[SCDiscoverFeedSingleSnapStory businessLogoURL] */

undefined8 FUN_10b00a18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b00a194; end: 10b00a19b; -[SCDiscoverFeedSingleSnapStory officialBadgeType] */

undefined8 FUN_10b00a194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b00a19c; end: 10b00a1a3; -[SCDiscoverFeedSingleSnapStory compositeStoryId] */

undefined8 FUN_10b00a19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b00a1a4; end: 10b00a1ab; -[SCDiscoverFeedSingleSnapStory userIdToHide] */

undefined8 FUN_10b00a1a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b00a1ac; end: 10b00a1b3; -[SCDiscoverFeedSingleSnapStory timedAdPlacements] */

undefined8 FUN_10b00a1ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b00a1b4; end: 10b00a1bb; -[SCDiscoverFeedSingleSnapStory lensMetadata] */

undefined8 FUN_10b00a1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b00a1bc; end: 10b00a263; -[SCDiscoverFeedSingleSnapStory .cxx_destruct] */

void FUN_10b00a1bc(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b00a264; end: 10b00a27f; +[SCDiscoverFeedSingleSnapStoryBuilder discoverFeedSingleSnapStory] */

void FUN_10b00a264(void)

{
  _objc_alloc_init(PTR_PTR_1126d97d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00a280; end: 10b00a60b; +[SCDiscoverFeedSingleSnapStoryBuilder discoverFeedSingleSnapStoryFromExistingDiscoverFeedSingleSnapStory:] */

void FUN_10b00a280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  
  puVar1 = PTR_PTR_1126d97d0;
  _objc_retain(param_3);
  func_0x00010bf81f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9a60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe8d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2afa80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c26e100();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bb000(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c26e300();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bb040(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2ac7a0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b9280(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2a9ae0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2a9ac0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0e1a60(param_3);
  puVar19 = puVar17;
  func_0x00010c2b4b60(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010c2aabc0(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c292540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c2bc380(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010c26fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c2bb220(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c094fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar26 = puVar24;
  func_0x00010c2b2a40(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar18);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 10b00a60c; end: 10b00a667; -[SCDiscoverFeedSingleSnapStoryBuilder build] */

void FUN_10b00a60c(void)

{
  _objc_alloc(PTR_PTR_1126d97c8);
  func_0x00010c04a160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00a668; end: 10b00a69f; -[SCDiscoverFeedSingleSnapStoryBuilder withSnaps:] */

long FUN_10b00a668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a6a0; end: 10b00a6d7; -[SCDiscoverFeedSingleSnapStoryBuilder withImageThumbnail:] */

long FUN_10b00a6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a6d8; end: 10b00a70f; -[SCDiscoverFeedSingleSnapStoryBuilder withThumbnailMetadata:] */

long FUN_10b00a6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a710; end: 10b00a747; -[SCDiscoverFeedSingleSnapStoryBuilder withThumbnailSnapId:] */

long FUN_10b00a710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a748; end: 10b00a77f; -[SCDiscoverFeedSingleSnapStoryBuilder withDisplayName:] */

long FUN_10b00a748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a780; end: 10b00a7b7; -[SCDiscoverFeedSingleSnapStoryBuilder withSnapDescription:] */

long FUN_10b00a780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a7b8; end: 10b00a7ef; -[SCDiscoverFeedSingleSnapStoryBuilder withBusinessProfileId:] */

long FUN_10b00a7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a7f0; end: 10b00a827; -[SCDiscoverFeedSingleSnapStoryBuilder withBusinessLogoURL:] */

long FUN_10b00a7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a828; end: 10b00a82f; -[SCDiscoverFeedSingleSnapStoryBuilder withOfficialBadgeType:] */

void FUN_10b00a828(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b00a830; end: 10b00a867; -[SCDiscoverFeedSingleSnapStoryBuilder withCompositeStoryId:] */

long FUN_10b00a830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a868; end: 10b00a89f; -[SCDiscoverFeedSingleSnapStoryBuilder withUserIdToHide:] */

long FUN_10b00a868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a8a0; end: 10b00a8d7; -[SCDiscoverFeedSingleSnapStoryBuilder withTimedAdPlacements:] */

long FUN_10b00a8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a8d8; end: 10b00a90f; -[SCDiscoverFeedSingleSnapStoryBuilder withLensMetadata:] */

long FUN_10b00a8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00a910; end: 10b00a9b7; -[SCDiscoverFeedSingleSnapStoryBuilder .cxx_destruct] */

void FUN_10b00a910(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b00a9b8; end: 10b00ac5b; -[SCDiscoverFeedSavedStory initWithCoder:] */

undefined1 * FUN_10b00a9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704238;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0xc) = (int)uVar2;
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00ac5c; end: 10b00af3f; -[SCDiscoverFeedSavedStory initWithSnaps:userId:imageThumbnail:thumbnailMetadata:spotlightEngagementMetadata:thumbnailSnapId:userDisplayName:isOfficial:officialBadgeType:isFollowed:totalNumSnaps:businessId:businessLogoURL:compositeStoryId:storyTitle:savedStoriesProfileMonetizedStatus:businessSubcategory:] */

undefined8 *
FUN_10b00ac5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain();
  puStack_68 = PTR_PTR_112704238;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    puVar1[9] = param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_13;
    *(undefined4 *)((long)puVar1 + 0xc) = param_14;
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
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_19;
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b00af40; end: 10b00af63; -[SCDiscoverFeedSavedStory copyWithZone:] */

undefined8 FUN_10b00af40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00af64; end: 10b00b0ef; -[SCDiscoverFeedSavedStory encodeWithCoder:] */

void FUN_10b00af64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4acf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4ae58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ed36d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f4ad38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f4b0f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4aeb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f4aef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f4af18);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f49238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f4af78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f4af98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110e79438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f4b118);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f4b138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f4b038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b00b0f0; end: 10b00b1fb; -[SCDiscoverFeedSavedStory hash] */

undefined8 * FUN_10b00b0f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_58 = *(undefined8 *)(param_1 + 0x50);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  lStack_60 = (long)*(int *)(param_1 + 0xc);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b00b3bc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b00b3c8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + 8) == param_3[8] &&
          (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))) &&
         (*(char *)((long)puVar3 + 9) == param_3[9])) &&
        ((*(int *)((long)puVar3 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(char *)((long)puVar3 + 10) == param_3[10])))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x50);
                    if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x58);
                      if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x60);
                        if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x68);
                          if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            puVar6 = *(undefined1 **)((long)puVar3 + 0x70);
                            if (puVar6 != *(undefined1 **)(param_3 + 0x70)) {
                              func_0x00010c071ae0();
                              goto LAB_10b00b3c8;
                            }
                            goto LAB_10b00b3bc;
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
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b00b3c8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b00b1fc; end: 10b00b3e3; -[SCDiscoverFeedSavedStory isEqual:] */

long FUN_10b00b1fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b00b3bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b00b3c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) {
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
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if (lVar3 != *(long *)(param_3 + 0x70)) {
                              func_0x00010c071ae0();
                              goto LAB_10b00b3c8;
                            }
                            goto LAB_10b00b3bc;
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
      }
    }
    lVar3 = 0;
  }
LAB_10b00b3c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00b3e4; end: 10b00b3eb; -[SCDiscoverFeedSavedStory snaps] */

undefined8 FUN_10b00b3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00b3ec; end: 10b00b3f3; -[SCDiscoverFeedSavedStory userId] */

undefined8 FUN_10b00b3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b00b3f4; end: 10b00b3fb; -[SCDiscoverFeedSavedStory imageThumbnail] */

undefined8 FUN_10b00b3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00b3fc; end: 10b00b403; -[SCDiscoverFeedSavedStory thumbnailMetadata] */

undefined8 FUN_10b00b3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b00b404; end: 10b00b40b; -[SCDiscoverFeedSavedStory spotlightEngagementMetadata] */

undefined8 FUN_10b00b404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b00b40c; end: 10b00b413; -[SCDiscoverFeedSavedStory thumbnailSnapId] */

undefined8 FUN_10b00b40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b00b414; end: 10b00b41b; -[SCDiscoverFeedSavedStory userDisplayName] */

undefined8 FUN_10b00b414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b00b41c; end: 10b00b423; -[SCDiscoverFeedSavedStory isOfficial] */

undefined1 FUN_10b00b41c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


