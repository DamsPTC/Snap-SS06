/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aff5568; end: 10aff5573; -[SCDiscoverFeedStorySnapLoggingInfo .cxx_destruct] */

void FUN_10aff5568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aff5574; end: 10aff59bb; -[SCDiscoverFeedStory initWithCoder:] */

undefined1 *
FUN_10aff5574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112704108;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0x18) = uVar4;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0x1c) = uVar4;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(ulong *)((long)puVar1 + 0x80) = CONCAT44(uVar5,uVar4);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x13) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x14) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x15) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 0x20) = uVar4;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff59bc; end: 10aff5e17; -[SCDiscoverFeedStory initWithCompositeStoryId:storyDedupeFp:storyType:tileAspectRatio:isSubscribed:isSubscribable:isOptedInNotifications:isFeatured:featuredBannerText:debugInfo:storyContent:storyLoggingInfo:responseTimestamp:responsePosition:score:rankShouldBeFixed:isSensitive:isUnsafeForSpotlight:qualifiedBrandSafeStory:isFullyViewed:hideAfterWatch:clientDisplayInfo:latestUpdateTimestampSecs:operaContext:hasUpNextRecommendations:isMarkedSubscribedInStoryResponse:hostUserId:storyHomingSection:spotlightRepliesEnabled:liveSpotlightRepliesCount:isFragmentedStory:embeddings:isCreatorMonetizable:similarStoryIdFpsArray:derivedAdsEngagementScore:derivedSccV3Tags:] */

undefined8 *
FUN_10aff59bc(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined1 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32,
             undefined1 param_33,undefined4 param_34,undefined8 param_35,undefined1 param_36,
             undefined4 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_32);
  _objc_retain(param_35);
  _objc_retain(param_38);
  _objc_retain(param_39);
  puStack_90 = PTR_PTR_112704108;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    *(undefined4 *)(puVar1 + 3) = param_1;
    *(undefined1 *)(puVar1 + 1) = param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_11;
    *(undefined1 *)((long)puVar1 + 10) = param_12;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x1c) = param_2;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_21;
    *(undefined1 *)((long)puVar1 + 0xd) = param_21._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_21._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_21._3_1_;
    *(undefined1 *)(puVar1 + 2) = param_22;
    puVar1[0xd] = param_20;
    puVar1[0xe] = param_23;
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x10] = param_3;
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x11) = (undefined1)param_26;
    *(undefined1 *)((long)puVar1 + 0x12) = param_26._1_1_;
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x13) = param_30;
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x14) = param_33;
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x15) = param_36;
    uVar2 = param_38;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 4) = param_4;
    uVar2 = param_39;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_35);
  _objc_release(param_32);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 10aff5e18; end: 10aff5e3b; -[SCDiscoverFeedStory copyWithZone:] */

undefined8 FUN_10aff5e18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff5e3c; end: 10aff6143; -[SCDiscoverFeedStory encodeWithCoder:] */

void FUN_10aff5e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e79438);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ea8938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ea8958);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f494b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f490d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ed3258);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f494d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f494f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f49518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110edcf38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f49538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110ea8a18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f49558);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f49578);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x1c),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e89378);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f49598);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f495b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f495d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110f495f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f491f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f49618);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f49638);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x80),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f49658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f49678);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110f49698);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                      &PTR____CFConstantStringClassReference_110ed3278);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110ed3538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110ed3578);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x13),
                      &PTR____CFConstantStringClassReference_110f496b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f496d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110ed3598);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f496f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x15),
                      &PTR____CFConstantStringClassReference_110f49718);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f49738);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f49758);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f49778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff6144; end: 10aff636b; -[SCDiscoverFeedStory hash] */

undefined8 * FUN_10aff6144(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined4 uVar11;
  float fVar12;
  ulong uVar13;
  double dVar14;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_148 = *(undefined8 *)(param_1 + 0x38);
  uStack_150 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = (ulong)*(uint *)(param_1 + 0x18) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_140 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar11 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar11 >> 0x18),
                                          (uint6)(byte)((uint)uVar11 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar11) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar11 >> 8),(short)uVar8);
  uVar13 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar13)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_138 = (ulong)uVar1 & 0xff;
  uStack_130 = uVar8 >> 0x10 & 0xff;
  uStack_128 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_120 = (ulong)uVar10;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_158 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_118 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_b8 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = (ulong)*(uint *)(param_1 + 0x1c) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_e8 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar11 >> 0x18),
                                          (uint6)(byte)((uint)uVar11 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar11) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar11 >> 8),(short)uVar8);
  uVar13 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar13 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar13)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_e0 = (ulong)uVar1 & 0xff;
  uStack_d8 = uVar8 >> 0x10 & 0xff;
  uStack_d0 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_c8 = (ulong)uVar10;
  uStack_c0 = (ulong)*(byte *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uStack_b0 = uVar4;
  func_0x00010bfde980();
  uStack_98 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_90 = (ulong)*(byte *)(param_1 + 0x12);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 0x13);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 0x15);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar8 = (ulong)*(uint *)(param_1 + 0x20) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_48 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  puVar5 = &uStack_158;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar5,0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10aff66fc:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff6708;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((((((ulong)puVar6 & 1) != 0) &&
          ((((puVar5[6] == param_3[6] && (puVar5[7] == param_3[7])) &&
            (*(char *)(puVar5 + 1) == *(char *)(param_3 + 1))) &&
           ((*(char *)((long)puVar5 + 9) == *(char *)((long)param_3 + 9) &&
            (*(char *)((long)puVar5 + 10) == *(char *)((long)param_3 + 10))))))) &&
         (*(char *)((long)puVar5 + 0xb) == *(char *)((long)param_3 + 0xb))) &&
        (((puVar5[0xd] == param_3[0xd] &&
          (*(char *)((long)puVar5 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
         ((*(char *)((long)puVar5 + 0xd) == *(char *)((long)param_3 + 0xd) &&
          (((*(char *)((long)puVar5 + 0xe) == *(char *)((long)param_3 + 0xe) &&
            (*(char *)((long)puVar5 + 0xf) == *(char *)((long)param_3 + 0xf))) &&
           (*(char *)(puVar5 + 2) == *(char *)(param_3 + 2))))))))) &&
       (((puVar5[0xe] == param_3[0xe] &&
         (*(char *)((long)puVar5 + 0x11) == *(char *)((long)param_3 + 0x11))) &&
        ((*(char *)((long)puVar5 + 0x12) == *(char *)((long)param_3 + 0x12) &&
         (((*(char *)((long)puVar5 + 0x13) == *(char *)((long)param_3 + 0x13) &&
           (*(char *)((long)puVar5 + 0x14) == *(char *)((long)param_3 + 0x14))) &&
          (*(char *)((long)puVar5 + 0x15) == *(char *)((long)param_3 + 0x15))))))))) {
      fVar12 = ABS(*(float *)(puVar5 + 3) - *(float *)(param_3 + 3));
      if ((fVar12 < 1.1754944e-38) ||
         (fVar12 < ABS(*(float *)(puVar5 + 3) + *(float *)(param_3 + 3)) * 1.1920929e-07)) {
        fVar12 = ABS(*(float *)((long)puVar5 + 0x1c) - *(float *)((long)param_3 + 0x1c));
        if ((fVar12 < 1.1754944e-38) ||
           (fVar12 < ABS(*(float *)((long)puVar5 + 0x1c) + *(float *)((long)param_3 + 0x1c)) *
                     1.1920929e-07)) {
          dVar14 = ABS((double)puVar5[0x10] - (double)param_3[0x10]);
          if ((dVar14 < 2.2250738585072014e-308) ||
             (dVar14 < ABS((double)puVar5[0x10] + (double)param_3[0x10]) * 2.220446049250313e-16)) {
            fVar12 = ABS(*(float *)(puVar5 + 4) - *(float *)(param_3 + 4));
            if ((((((fVar12 < 1.1754944e-38) ||
                   (fVar12 < ABS(*(float *)(puVar5 + 4) + *(float *)(param_3 + 4)) * 1.1920929e-07))
                  && ((((lVar7 = puVar5[5], lVar7 == param_3[5] ||
                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                       ((lVar7 = puVar5[8], lVar7 == param_3[8] ||
                        (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                      ((lVar7 = puVar5[9], lVar7 == param_3[9] ||
                       (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                 (((lVar7 = puVar5[10], lVar7 == param_3[10] ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                  ((((lVar7 = puVar5[0xb], lVar7 == param_3[0xb] ||
                     (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                    ((lVar7 = puVar5[0xc], lVar7 == param_3[0xc] ||
                     (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                   ((lVar7 = puVar5[0xf], lVar7 == param_3[0xf] ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) &&
                ((lVar7 = puVar5[0x11], lVar7 == param_3[0x11] ||
                 (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
               ((((lVar7 = puVar5[0x12], lVar7 == param_3[0x12] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                 ((lVar7 = puVar5[0x13], lVar7 == param_3[0x13] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                ((((lVar7 = puVar5[0x14], lVar7 == param_3[0x14] ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                  ((lVar7 = puVar5[0x15], lVar7 == param_3[0x15] ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                 ((lVar7 = puVar5[0x16], lVar7 == param_3[0x16] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) {
              puVar9 = (undefined8 *)puVar5[0x17];
              if (puVar9 != (undefined8 *)param_3[0x17]) {
                func_0x00010c071ae0();
                goto LAB_10aff6708;
              }
              goto LAB_10aff66fc;
            }
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10aff6708:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10aff636c; end: 10aff6723; -[SCDiscoverFeedStory isEqual:] */

long FUN_10aff636c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff66fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff6708;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
             (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
        (((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
            (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
           (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))))) &&
       (((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
         (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
        ((*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12) &&
         (((*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13) &&
           (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))) &&
          (*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15))))))))) {
      fVar4 = ABS(*(float *)(param_1 + 0x18) - *(float *)(param_3 + 0x18));
      if ((fVar4 < 1.1754944e-38) ||
         (fVar4 < ABS(*(float *)(param_1 + 0x18) + *(float *)(param_3 + 0x18)) * 1.1920929e-07)) {
        fVar4 = ABS(*(float *)(param_1 + 0x1c) - *(float *)(param_3 + 0x1c));
        if ((fVar4 < 1.1754944e-38) ||
           (fVar4 < ABS(*(float *)(param_1 + 0x1c) + *(float *)(param_3 + 0x1c)) * 1.1920929e-07)) {
          dVar5 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                      2.220446049250313e-16)) {
            fVar4 = ABS(*(float *)(param_1 + 0x20) - *(float *)(param_3 + 0x20));
            if ((((((fVar4 < 1.1754944e-38) ||
                   (fVar4 < ABS(*(float *)(param_1 + 0x20) + *(float *)(param_3 + 0x20)) *
                            1.1920929e-07)) &&
                  ((((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                    ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                 (((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                    ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
                ((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((lVar3 = *(long *)(param_1 + 0xa8), lVar3 == *(long *)(param_3 + 0xa8) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                 ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
              lVar3 = *(long *)(param_1 + 0xb8);
              if (lVar3 != *(long *)(param_3 + 0xb8)) {
                func_0x00010c071ae0();
                goto LAB_10aff6708;
              }
              goto LAB_10aff66fc;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aff6708:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff6724; end: 10aff672b; -[SCDiscoverFeedStory compositeStoryId] */

undefined8 FUN_10aff6724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff672c; end: 10aff6733; -[SCDiscoverFeedStory storyDedupeFp] */

undefined8 FUN_10aff672c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff6734; end: 10aff673b; -[SCDiscoverFeedStory storyType] */

undefined8 FUN_10aff6734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aff673c; end: 10aff6743; -[SCDiscoverFeedStory tileAspectRatio] */

undefined4 FUN_10aff673c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10aff6744; end: 10aff674b; -[SCDiscoverFeedStory isSubscribed] */

undefined1 FUN_10aff6744(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff674c; end: 10aff6753; -[SCDiscoverFeedStory isSubscribable] */

undefined1 FUN_10aff674c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aff6754; end: 10aff675b; -[SCDiscoverFeedStory isOptedInNotifications] */

undefined1 FUN_10aff6754(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10aff675c; end: 10aff6763; -[SCDiscoverFeedStory isFeatured] */

undefined1 FUN_10aff675c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10aff6764; end: 10aff676b; -[SCDiscoverFeedStory featuredBannerText] */

undefined8 FUN_10aff6764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aff676c; end: 10aff6773; -[SCDiscoverFeedStory debugInfo] */

undefined8 FUN_10aff676c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aff6774; end: 10aff677b; -[SCDiscoverFeedStory storyContent] */

undefined8 FUN_10aff6774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aff677c; end: 10aff6783; -[SCDiscoverFeedStory storyLoggingInfo] */

undefined8 FUN_10aff677c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aff6784; end: 10aff678b; -[SCDiscoverFeedStory responseTimestamp] */

undefined8 FUN_10aff6784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10aff678c; end: 10aff6793; -[SCDiscoverFeedStory responsePosition] */

undefined8 FUN_10aff678c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10aff6794; end: 10aff679b; -[SCDiscoverFeedStory score] */

undefined4 FUN_10aff6794(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10aff679c; end: 10aff67a3; -[SCDiscoverFeedStory rankShouldBeFixed] */

undefined1 FUN_10aff679c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10aff67a4; end: 10aff67ab; -[SCDiscoverFeedStory isSensitive] */

undefined1 FUN_10aff67a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10aff67ac; end: 10aff67b3; -[SCDiscoverFeedStory isUnsafeForSpotlight] */

undefined1 FUN_10aff67ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10aff67b4; end: 10aff67bb; -[SCDiscoverFeedStory qualifiedBrandSafeStory] */

undefined1 FUN_10aff67b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10aff67bc; end: 10aff67c3; -[SCDiscoverFeedStory isFullyViewed] */

undefined1 FUN_10aff67bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10aff67c4; end: 10aff67cb; -[SCDiscoverFeedStory hideAfterWatch] */

undefined8 FUN_10aff67c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10aff67cc; end: 10aff67d3; -[SCDiscoverFeedStory clientDisplayInfo] */

undefined8 FUN_10aff67cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10aff67d4; end: 10aff67db; -[SCDiscoverFeedStory latestUpdateTimestampSecs] */

undefined8 FUN_10aff67d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10aff67dc; end: 10aff67e3; -[SCDiscoverFeedStory operaContext] */

undefined8 FUN_10aff67dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10aff67e4; end: 10aff67eb; -[SCDiscoverFeedStory hasUpNextRecommendations] */

undefined1 FUN_10aff67e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10aff67ec; end: 10aff67f3; -[SCDiscoverFeedStory isMarkedSubscribedInStoryResponse] */

undefined1 FUN_10aff67ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10aff67f4; end: 10aff67fb; -[SCDiscoverFeedStory hostUserId] */

undefined8 FUN_10aff67f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10aff67fc; end: 10aff6803; -[SCDiscoverFeedStory storyHomingSection] */

undefined8 FUN_10aff67fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10aff6804; end: 10aff680b; -[SCDiscoverFeedStory spotlightRepliesEnabled] */

undefined1 FUN_10aff6804(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10aff680c; end: 10aff6813; -[SCDiscoverFeedStory liveSpotlightRepliesCount] */

undefined8 FUN_10aff680c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10aff6814; end: 10aff681b; -[SCDiscoverFeedStory isFragmentedStory] */

undefined1 FUN_10aff6814(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 10aff681c; end: 10aff6823; -[SCDiscoverFeedStory embeddings] */

undefined8 FUN_10aff681c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10aff6824; end: 10aff682b; -[SCDiscoverFeedStory isCreatorMonetizable] */

undefined1 FUN_10aff6824(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 10aff682c; end: 10aff6833; -[SCDiscoverFeedStory similarStoryIdFpsArray] */

undefined8 FUN_10aff682c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10aff6834; end: 10aff683b; -[SCDiscoverFeedStory derivedAdsEngagementScore] */

undefined4 FUN_10aff6834(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10aff683c; end: 10aff6843; -[SCDiscoverFeedStory derivedSccV3Tags] */

undefined8 FUN_10aff683c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10aff6844; end: 10aff6903; -[SCDiscoverFeedStory .cxx_destruct] */

void FUN_10aff6844(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10aff6904; end: 10aff691f; +[SCDiscoverFeedStoryBuilder discoverFeedStory] */

void FUN_10aff6904(void)

{
  _objc_alloc_init(PTR_PTR_1126c6d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff6920; end: 10aff70b3; +[SCDiscoverFeedStoryBuilder discoverFeedStoryFromExistingDiscoverFeedStory:] */

void FUN_10aff6920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined *puVar51;
  
  puVar1 = PTR_PTR_1126c6d78;
  _objc_retain(param_3);
  func_0x00010bf81fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aabc0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c259740(param_3);
  puVar5 = puVar3;
  func_0x00010c2ba3e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c25b720(param_3);
  puVar6 = puVar5;
  func_0x00010c2ba700(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e960(param_3);
  puVar7 = puVar6;
  func_0x00010c2bb0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c080120(param_3);
  puVar8 = puVar7;
  func_0x00010c2b17c0(puVar7,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0800e0(param_3);
  puVar9 = puVar8;
  func_0x00010c2b17a0(puVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0794a0(param_3);
  puVar10 = puVar9;
  func_0x00010c2b1080(puVar9,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c072c20(param_3);
  puVar11 = puVar10;
  func_0x00010c2b07a0(puVar10,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfa31e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2adb60(puVar11,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2abd20(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2ba3c0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2ba4e0(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c13bd00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2b7340(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c13bb80(param_3);
  puVar22 = puVar20;
  func_0x00010c2b7320(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150c20(param_3);
  puVar23 = puVar22;
  func_0x00010c2b7a80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c11f680(param_3);
  puVar24 = puVar23;
  func_0x00010c2b6720(puVar23,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c07d8e0(param_3);
  puVar25 = puVar24;
  func_0x00010c2b1480(puVar24,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0820e0(param_3);
  puVar26 = puVar25;
  func_0x00010c2b1920(puVar25,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c11ce20(param_3);
  puVar27 = puVar26;
  func_0x00010c2b65e0(puVar26,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0741a0(param_3);
  puVar28 = puVar27;
  func_0x00010c2b09e0(puVar27,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010bfe1720(param_3);
  puVar29 = puVar28;
  func_0x00010c2af760(puVar28,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010bf3cd00();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  func_0x00010c2aa780(puVar29,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b2e0(param_3);
  puVar31 = puVar30;
  func_0x00010c2b24a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_3;
  func_0x00010c0ea200();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar31;
  func_0x00010c2b4e80(puVar31,param_2,uVar32);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010bfddf60(param_3);
  puVar35 = puVar33;
  func_0x00010c2af5e0(puVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010c077680(param_3);
  puVar36 = puVar35;
  func_0x00010c2b0e20(puVar35,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar36;
  func_0x00010c2af860(puVar36,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010c259c60();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar37;
  func_0x00010c2ba420(puVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c24be00(param_3);
  puVar41 = puVar39;
  func_0x00010c2b9e00(puVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c09ab40();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar41;
  func_0x00010c2b2ec0(puVar41,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_3;
  func_0x00010c073600(param_3);
  puVar44 = puVar42;
  func_0x00010c2b0840(puVar42,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_3;
  func_0x00010bf8dd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar45 = puVar44;
  func_0x00010c2acd20(puVar44,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_3;
  func_0x00010c06f940();
  puVar46 = puVar45;
  func_0x00010c2b0520(puVar45,param_2,uVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = param_3;
  func_0x00010c23c720();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar46;
  func_0x00010c2b9040(puVar46,param_2,uVar47);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e240(param_3);
  puVar49 = puVar48;
  func_0x00010c2ac2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = param_3;
  func_0x00010bf6e260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar51 = puVar49;
  func_0x00010c2ac2c0(puVar49,param_2,uVar50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(uVar43);
  _objc_release(puVar44);
  _objc_release(puVar42);
  _objc_release(uVar40);
  _objc_release(puVar41);
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(uVar34);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(uVar21);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar51);
  return;
}



/* Entry: 10aff70b4; end: 10aff719f; -[SCDiscoverFeedStoryBuilder build] */

void FUN_10aff70b4(long param_1)

{
  _objc_alloc(PTR_PTR_1126c2098);
  func_0x00010c000c60(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aff71a0; end: 10aff71d7; -[SCDiscoverFeedStoryBuilder withCompositeStoryId:] */

long FUN_10aff71a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff71d8; end: 10aff71df; -[SCDiscoverFeedStoryBuilder withStoryDedupeFp:] */

void FUN_10aff71d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10aff71e0; end: 10aff71e7; -[SCDiscoverFeedStoryBuilder withStoryType:] */

void FUN_10aff71e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10aff71e8; end: 10aff71ef; -[SCDiscoverFeedStoryBuilder withTileAspectRatio:] */

void FUN_10aff71e8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10aff71f0; end: 10aff71f7; -[SCDiscoverFeedStoryBuilder withIsSubscribed:] */

void FUN_10aff71f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 10aff71f8; end: 10aff71ff; -[SCDiscoverFeedStoryBuilder withIsSubscribable:] */

void FUN_10aff71f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 10aff7200; end: 10aff7207; -[SCDiscoverFeedStoryBuilder withIsOptedInNotifications:] */

void FUN_10aff7200(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26) = param_3;
  return;
}



/* Entry: 10aff7208; end: 10aff720f; -[SCDiscoverFeedStoryBuilder withIsFeatured:] */

void FUN_10aff7208(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x27) = param_3;
  return;
}



/* Entry: 10aff7210; end: 10aff7247; -[SCDiscoverFeedStoryBuilder withFeaturedBannerText:] */

long FUN_10aff7210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7248; end: 10aff727f; -[SCDiscoverFeedStoryBuilder withDebugInfo:] */

long FUN_10aff7248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7280; end: 10aff72b7; -[SCDiscoverFeedStoryBuilder withStoryContent:] */

long FUN_10aff7280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff72b8; end: 10aff72ef; -[SCDiscoverFeedStoryBuilder withStoryLoggingInfo:] */

long FUN_10aff72b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff72f0; end: 10aff7327; -[SCDiscoverFeedStoryBuilder withResponseTimestamp:] */

long FUN_10aff72f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7328; end: 10aff732f; -[SCDiscoverFeedStoryBuilder withResponsePosition:] */

void FUN_10aff7328(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10aff7330; end: 10aff7337; -[SCDiscoverFeedStoryBuilder withScore:] */

void FUN_10aff7330(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 10aff7338; end: 10aff733f; -[SCDiscoverFeedStoryBuilder withRankShouldBeFixed:] */

void FUN_10aff7338(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5c) = param_3;
  return;
}



/* Entry: 10aff7340; end: 10aff7347; -[SCDiscoverFeedStoryBuilder withIsSensitive:] */

void FUN_10aff7340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5d) = param_3;
  return;
}



/* Entry: 10aff7348; end: 10aff734f; -[SCDiscoverFeedStoryBuilder withIsUnsafeForSpotlight:] */

void FUN_10aff7348(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5e) = param_3;
  return;
}



/* Entry: 10aff7350; end: 10aff7357; -[SCDiscoverFeedStoryBuilder withQualifiedBrandSafeStory:] */

void FUN_10aff7350(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5f) = param_3;
  return;
}



/* Entry: 10aff7358; end: 10aff735f; -[SCDiscoverFeedStoryBuilder withIsFullyViewed:] */

void FUN_10aff7358(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10aff7360; end: 10aff7367; -[SCDiscoverFeedStoryBuilder withHideAfterWatch:] */

void FUN_10aff7360(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10aff7368; end: 10aff739f; -[SCDiscoverFeedStoryBuilder withClientDisplayInfo:] */

long FUN_10aff7368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff73a0; end: 10aff73a7; -[SCDiscoverFeedStoryBuilder withLatestUpdateTimestampSecs:] */

void FUN_10aff73a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 10aff73a8; end: 10aff73df; -[SCDiscoverFeedStoryBuilder withOperaContext:] */

long FUN_10aff73a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff73e0; end: 10aff73e7; -[SCDiscoverFeedStoryBuilder withHasUpNextRecommendations:] */

void FUN_10aff73e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10aff73e8; end: 10aff73ef; -[SCDiscoverFeedStoryBuilder withIsMarkedSubscribedInStoryResponse:] */

void FUN_10aff73e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x89) = param_3;
  return;
}



/* Entry: 10aff73f0; end: 10aff7427; -[SCDiscoverFeedStoryBuilder withHostUserId:] */

long FUN_10aff73f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7428; end: 10aff745f; -[SCDiscoverFeedStoryBuilder withStoryHomingSection:] */

long FUN_10aff7428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7460; end: 10aff7467; -[SCDiscoverFeedStoryBuilder withSpotlightRepliesEnabled:] */

void FUN_10aff7460(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10aff7468; end: 10aff749f; -[SCDiscoverFeedStoryBuilder withLiveSpotlightRepliesCount:] */

long FUN_10aff7468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff74a0; end: 10aff74a7; -[SCDiscoverFeedStoryBuilder withIsFragmentedStory:] */

void FUN_10aff74a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 10aff74a8; end: 10aff74df; -[SCDiscoverFeedStoryBuilder withEmbeddings:] */

long FUN_10aff74a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff74e0; end: 10aff74e7; -[SCDiscoverFeedStoryBuilder withIsCreatorMonetizable:] */

void FUN_10aff74e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 10aff74e8; end: 10aff751f; -[SCDiscoverFeedStoryBuilder withSimilarStoryIdFpsArray:] */

long FUN_10aff74e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7520; end: 10aff7527; -[SCDiscoverFeedStoryBuilder withDerivedAdsEngagementScore:] */

void FUN_10aff7520(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xd0) = param_1;
  return;
}



/* Entry: 10aff7528; end: 10aff755f; -[SCDiscoverFeedStoryBuilder withDerivedSccV3Tags:] */

long FUN_10aff7528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aff7560; end: 10aff761f; -[SCDiscoverFeedStoryBuilder .cxx_destruct] */

void FUN_10aff7560(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aff7620; end: 10aff784b; -[SCSuperFeedFriendStory initWithCoder:] */

undefined1 * FUN_10aff7620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704110;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff784c; end: 10aff7a83; -[SCSuperFeedFriendStory initWithStoryId:snaps:mostRecentUnviewedTimestamp:mostRecentViewedTimestamp:mostRecentStoryTimestamp:expirationDate:hasUnviewedStories:isStoryMuted:displayName:caption:thumbnail:totalNumSnaps:numOfUnviewedStories:storyContentType:] */

undefined8 *
FUN_10aff784c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112704110;
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
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
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
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10aff7a84; end: 10aff7aa7; -[SCSuperFeedFriendStory copyWithZone:] */

undefined8 FUN_10aff7a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff7aa8; end: 10aff7bf7; -[SCSuperFeedFriendStory encodeWithCoder:] */

void FUN_10aff7aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e515b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f49798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f497b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f497d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f497f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e518f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f49818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f49838);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e2a6f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110ebd518);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f49238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f49858);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f49878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aff7bf8; end: 10aff7cdb; -[SCSuperFeedFriendStory hash] */

undefined8 * FUN_10aff7bf8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
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
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x68);
  puVar3 = &uStack_98;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aff7e54:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aff7e60;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         (puVar3[0xb] == param_3[0xb])) &&
        ((puVar3[0xc] == param_3[0xc] && (puVar3[0xd] == param_3[0xd])))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = (undefined8 *)puVar3[10];
                      if (puVar6 != (undefined8 *)param_3[10]) {
                        func_0x00010c071ae0();
                        goto LAB_10aff7e60;
                      }
                      goto LAB_10aff7e54;
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
LAB_10aff7e60:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aff7cdc; end: 10aff7e7b; -[SCSuperFeedFriendStory isEqual:] */

long FUN_10aff7cdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aff7e54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aff7e60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
        ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))))))) {
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
                        goto LAB_10aff7e60;
                      }
                      goto LAB_10aff7e54;
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
LAB_10aff7e60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aff7e7c; end: 10aff7e83; -[SCSuperFeedFriendStory storyId] */

undefined8 FUN_10aff7e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aff7e84; end: 10aff7e8b; -[SCSuperFeedFriendStory snaps] */

undefined8 FUN_10aff7e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff7e8c; end: 10aff7e93; -[SCSuperFeedFriendStory mostRecentUnviewedTimestamp] */

undefined8 FUN_10aff7e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aff7e94; end: 10aff7e9b; -[SCSuperFeedFriendStory mostRecentViewedTimestamp] */

undefined8 FUN_10aff7e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aff7e9c; end: 10aff7ea3; -[SCSuperFeedFriendStory mostRecentStoryTimestamp] */

undefined8 FUN_10aff7e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aff7ea4; end: 10aff7eab; -[SCSuperFeedFriendStory expirationDate] */

undefined8 FUN_10aff7ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aff7eac; end: 10aff7eb3; -[SCSuperFeedFriendStory hasUnviewedStories] */

undefined1 FUN_10aff7eac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aff7eb4; end: 10aff7ebb; -[SCSuperFeedFriendStory isStoryMuted] */

undefined1 FUN_10aff7eb4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aff7ebc; end: 10aff7ec3; -[SCSuperFeedFriendStory displayName] */

undefined8 FUN_10aff7ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aff7ec4; end: 10aff7ecb; -[SCSuperFeedFriendStory caption] */

undefined8 FUN_10aff7ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


