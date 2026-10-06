/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10807822c; end: 108078457; -[SCDiscoverFeedOperaSession initWithCoder:] */

undefined8 * FUN_10807822c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong unaff_x21;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126fc420;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_1080783e4;
      uVar4 = 1;
      lVar6 = 0x38;
    }
    else {
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar1[2];
      puVar1[2] = uVar2;
      _objc_release(uVar4);
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar1[3];
      puVar1[3] = uVar2;
      _objc_release(uVar4);
      uVar2 = param_3;
      func_0x00010bf66f40();
      puVar1[4] = uVar2;
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar1[5];
      puVar1[5] = uVar2;
      _objc_release(uVar4);
      uVar4 = 0;
      lVar6 = 0x30;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar5);
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_1080783e4:
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



/* Entry: 108078458; end: 10807847b; -[SCDiscoverFeedOperaSession copyWithZone:] */

undefined8 FUN_108078458(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10807847c; end: 10807855b; -[SCDiscoverFeedOperaSession encodeWithCoder:] */

void FUN_10807847c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ed3818;
    lVar2 = 0x38;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed3838;
  }
  else {
    if (*(long *)(param_1 + 8) != 0) goto LAB_108078548;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110ed3778);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110ed3798);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110ed37b8);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110ed37d8);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ed3758;
    lVar2 = 0x30;
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed37f8;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_108078548:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10807855c; end: 1080785fb; -[SCDiscoverFeedOperaSession hash] */

void FUN_10807855c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fc420;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080785fc; end: 10807863f; -[SCDiscoverFeedOperaSession internalInit] */

void FUN_1080785fc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108078640; end: 10807874f; -[SCDiscoverFeedOperaSession isEqual:] */

long FUN_108078640(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108078728:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108078734;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_108078734;
              }
              goto LAB_108078728;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108078734:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108078750; end: 1080787df; -[SCDiscoverFeedOperaSession matchDiscoverFeedStorySession:friendStorySession:] */

void FUN_108078750(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x38));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080787e0; end: 108078833; -[SCDiscoverFeedOperaSession .cxx_destruct] */

void FUN_1080787e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108078834; end: 108078e73; -[SCLongformShowOperaDataModel initWithUniqueIdentifier:profileId:showId:publisherId:editionId:trackingId:publisherName:publisherUniqueName:showName:logoURL:horizontalLogoURL:showType:episodeNumber:seasonNumber:publishTimestampMs:deeplinkURL:adMetadata:allowProfilePresentation:isSubscribable:profileOverlayButtonText:compositeStoryIdString:discoverFeedStoryDedupeFp:feedType:isMarkedSubscribedInStoryResponse:primaryPublisherColor:secondaryPublisherColor:snaps:watchedState:boostMetadata:isRetrievedFromBoosts:isUpNextRecommendedStory:spotlightEngagementMetadata:viewLocation:hostUserId:storyTypeSpecific:storyHomingSection:boostStoryId:hideTimestamp:shouldDisableComments:isPayToPromote:debugInfo:isCreatorMonetizable:] */

undefined8 *
FUN_108078834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined4 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined4 param_41,undefined4 param_42,undefined8 param_43,undefined1 param_44)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_35);
  _objc_retain(param_37);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_43);
  puStack_70 = PTR_PTR_1126fc428;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_6;
    puVar1[7] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    puVar1[0xe] = param_14;
    puVar1[0xf] = param_15;
    puVar1[0x10] = param_16;
    puVar1[0x11] = param_17;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_20;
    *(undefined1 *)((long)puVar1 + 9) = param_20._1_1_;
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_26;
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_33;
    *(undefined1 *)((long)puVar1 + 0xc) = param_33._1_1_;
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1e] = param_36;
    uVar2 = param_37;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    _objc_release(uVar3);
    puVar1[0x20] = param_38;
    uVar2 = param_39;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_40;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_41;
    *(undefined1 *)((long)puVar1 + 0xe) = param_41._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_41._2_1_;
    uVar2 = param_43;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 2) = param_44;
  }
  _objc_release(param_43);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_37);
  _objc_release(param_35);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108078e74; end: 108078e97; -[SCLongformShowOperaDataModel copyWithZone:] */

undefined8 FUN_108078e74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108078e98; end: 10807908f; -[SCLongformShowOperaDataModel hash] */

undefined8 * FUN_108078e98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_178 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_170 = uVar2;
  func_0x00010bfde980();
  uStack_160 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_158 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_168 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_148 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_140 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_138 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_130 = uVar2;
  func_0x00010bfde980();
  uStack_120 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_118 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  lVar5 = *(long *)(param_1 + 0x80);
  uStack_108 = *(undefined8 *)(param_1 + 0x88);
  lStack_110 = -lVar5;
  if (-1 < lVar5) {
    lStack_110 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_128 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uStack_f0 = (ulong)*(byte *)(param_1 + 8);
  uStack_e8 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uStack_c0 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_88 = (ulong)*(byte *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xf8);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uStack_80 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0x108);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xe);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xf);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x10);
  puVar3 = &uStack_178;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,0x2a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108079448:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108079454;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((((ulong)puVar4 & 1) != 0) &&
          ((((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])) && (puVar3[0xe] == param_3[0xe])
            ) && ((puVar3[0xf] == param_3[0xf] && (puVar3[0x10] == param_3[0x10])))))) &&
         (puVar3[0x11] == param_3[0x11])) &&
        ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
           (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
          ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
           (((*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb) &&
             (*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
            (puVar3[0x1e] == param_3[0x1e])))))) &&
         ((puVar3[0x20] == param_3[0x20] &&
          (*(char *)((long)puVar3 + 0xd) == *(char *)((long)param_3 + 0xd))))))) &&
       ((*(char *)((long)puVar3 + 0xe) == *(char *)((long)param_3 + 0xe) &&
        ((*(char *)((long)puVar3 + 0xf) == *(char *)((long)param_3 + 0xf) &&
         (*(char *)(puVar3 + 2) == *(char *)(param_3 + 2))))))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[8];
            if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[9];
              if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[10];
                if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[0xb];
                  if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[0xc];
                    if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xd];
                      if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0x12];
                        if ((lVar5 == param_3[0x12]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0x13];
                          if ((lVar5 == param_3[0x13]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                          {
                            lVar5 = puVar3[0x14];
                            if ((lVar5 == param_3[0x14]) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                               ) {
                              lVar5 = puVar3[0x15];
                              if ((lVar5 == param_3[0x15]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0x16];
                                if ((lVar5 == param_3[0x16]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0x17];
                                  if ((lVar5 == param_3[0x17]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = puVar3[0x18];
                                    if ((lVar5 == param_3[0x18]) ||
                                       (func_0x00010c071c60(), (int)lVar5 != 0)) {
                                      lVar5 = puVar3[0x19];
                                      if ((lVar5 == param_3[0x19]) ||
                                         (func_0x00010c071c60(), (int)lVar5 != 0)) {
                                        lVar5 = puVar3[0x1a];
                                        if ((lVar5 == param_3[0x1a]) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = puVar3[0x1b];
                                          if ((lVar5 == param_3[0x1b]) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = puVar3[0x1c];
                                            if ((lVar5 == param_3[0x1c]) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = puVar3[0x1d];
                                              if ((lVar5 == param_3[0x1d]) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = puVar3[0x1f];
                                                if ((lVar5 == param_3[0x1f]) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  lVar5 = puVar3[0x21];
                                                  if ((lVar5 == param_3[0x21]) ||
                                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = puVar3[0x22];
                                                    if ((lVar5 == param_3[0x22]) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      puVar6 = (undefined8 *)puVar3[0x23];
                                                      if (puVar6 != (undefined8 *)param_3[0x23]) {
                                                        func_0x00010c071ae0();
                                                        goto LAB_108079454;
                                                      }
                                                      goto LAB_108079448;
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
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108079454:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108079090; end: 10807946f; -[SCLongformShowOperaDataModel isEqual:] */

long FUN_108079090(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108079448:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108079454;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
             (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
            (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
           ((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
            (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))) &&
         (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
             (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
            (*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0))))))) &&
         ((*(long *)(param_1 + 0x100) == *(long *)(param_3 + 0x100) &&
          (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))))) &&
       ((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
        ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x90);
                        if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x98);
                          if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0xa0);
                            if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0xa8);
                              if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xb0);
                                if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xb8);
                                  if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xc0);
                                    if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                       (func_0x00010c071c60(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 200);
                                      if ((lVar3 == *(long *)(param_3 + 200)) ||
                                         (func_0x00010c071c60(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xd0);
                                        if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xd8);
                                          if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xe0);
                                            if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xe8);
                                              if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xf8);
                                                if ((lVar3 == *(long *)(param_3 + 0xf8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0x108);
                                                  if ((lVar3 == *(long *)(param_3 + 0x108)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x110);
                                                    if ((lVar3 == *(long *)(param_3 + 0x110)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x118);
                                                      if (lVar3 != *(long *)(param_3 + 0x118)) {
                                                        func_0x00010c071ae0();
                                                        goto LAB_108079454;
                                                      }
                                                      goto LAB_108079448;
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
    }
    lVar3 = 0;
  }
LAB_108079454:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108079470; end: 108079477; -[SCLongformShowOperaDataModel uniqueIdentifier] */

undefined8 FUN_108079470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108079478; end: 10807947f; -[SCLongformShowOperaDataModel profileId] */

undefined8 FUN_108079478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108079480; end: 108079487; -[SCLongformShowOperaDataModel showId] */

undefined8 FUN_108079480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108079488; end: 10807948f; -[SCLongformShowOperaDataModel publisherId] */

undefined8 FUN_108079488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108079490; end: 108079497; -[SCLongformShowOperaDataModel editionId] */

undefined8 FUN_108079490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108079498; end: 10807949f; -[SCLongformShowOperaDataModel trackingId] */

undefined8 FUN_108079498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080794a0; end: 1080794a7; -[SCLongformShowOperaDataModel publisherName] */

undefined8 FUN_1080794a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080794a8; end: 1080794af; -[SCLongformShowOperaDataModel publisherUniqueName] */

undefined8 FUN_1080794a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080794b0; end: 1080794b7; -[SCLongformShowOperaDataModel showName] */

undefined8 FUN_1080794b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1080794b8; end: 1080794bf; -[SCLongformShowOperaDataModel logoURL] */

undefined8 FUN_1080794b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1080794c0; end: 1080794c7; -[SCLongformShowOperaDataModel horizontalLogoURL] */

undefined8 FUN_1080794c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1080794c8; end: 1080794cf; -[SCLongformShowOperaDataModel showType] */

undefined8 FUN_1080794c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1080794d0; end: 1080794d7; -[SCLongformShowOperaDataModel episodeNumber] */

undefined8 FUN_1080794d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1080794d8; end: 1080794df; -[SCLongformShowOperaDataModel seasonNumber] */

undefined8 FUN_1080794d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1080794e0; end: 1080794e7; -[SCLongformShowOperaDataModel publishTimestampMs] */

undefined8 FUN_1080794e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1080794e8; end: 1080794ef; -[SCLongformShowOperaDataModel deeplinkURL] */

undefined8 FUN_1080794e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1080794f0; end: 1080794f7; -[SCLongformShowOperaDataModel adMetadata] */

undefined8 FUN_1080794f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1080794f8; end: 1080794ff; -[SCLongformShowOperaDataModel allowProfilePresentation] */

undefined1 FUN_1080794f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108079500; end: 108079507; -[SCLongformShowOperaDataModel isSubscribable] */

undefined1 FUN_108079500(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108079508; end: 10807950f; -[SCLongformShowOperaDataModel profileOverlayButtonText] */

undefined8 FUN_108079508(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108079510; end: 108079517; -[SCLongformShowOperaDataModel compositeStoryIdString] */

undefined8 FUN_108079510(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108079518; end: 10807951f; -[SCLongformShowOperaDataModel discoverFeedStoryDedupeFp] */

undefined8 FUN_108079518(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108079520; end: 108079527; -[SCLongformShowOperaDataModel feedType] */

undefined8 FUN_108079520(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108079528; end: 10807952f; -[SCLongformShowOperaDataModel isMarkedSubscribedInStoryResponse] */

undefined1 FUN_108079528(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108079530; end: 108079537; -[SCLongformShowOperaDataModel primaryPublisherColor] */

undefined8 FUN_108079530(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108079538; end: 10807953f; -[SCLongformShowOperaDataModel secondaryPublisherColor] */

undefined8 FUN_108079538(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108079540; end: 108079547; -[SCLongformShowOperaDataModel snaps] */

undefined8 FUN_108079540(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108079548; end: 10807954f; -[SCLongformShowOperaDataModel watchedState] */

undefined8 FUN_108079548(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108079550; end: 108079557; -[SCLongformShowOperaDataModel boostMetadata] */

undefined8 FUN_108079550(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108079558; end: 10807955f; -[SCLongformShowOperaDataModel isRetrievedFromBoosts] */

undefined1 FUN_108079558(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108079560; end: 108079567; -[SCLongformShowOperaDataModel isUpNextRecommendedStory] */

undefined1 FUN_108079560(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108079568; end: 10807956f; -[SCLongformShowOperaDataModel spotlightEngagementMetadata] */

undefined8 FUN_108079568(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108079570; end: 108079577; -[SCLongformShowOperaDataModel viewLocation] */

undefined8 FUN_108079570(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108079578; end: 10807957f; -[SCLongformShowOperaDataModel hostUserId] */

undefined8 FUN_108079578(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108079580; end: 108079587; -[SCLongformShowOperaDataModel storyTypeSpecific] */

undefined8 FUN_108079580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108079588; end: 10807958f; -[SCLongformShowOperaDataModel storyHomingSection] */

undefined8 FUN_108079588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108079590; end: 108079597; -[SCLongformShowOperaDataModel boostStoryId] */

undefined8 FUN_108079590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108079598; end: 10807959f; -[SCLongformShowOperaDataModel hideTimestamp] */

undefined1 FUN_108079598(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1080795a0; end: 1080795a7; -[SCLongformShowOperaDataModel shouldDisableComments] */

undefined1 FUN_1080795a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 1080795a8; end: 1080795af; -[SCLongformShowOperaDataModel isPayToPromote] */

undefined1 FUN_1080795a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 1080795b0; end: 1080795b7; -[SCLongformShowOperaDataModel debugInfo] */

undefined8 FUN_1080795b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1080795b8; end: 1080795bf; -[SCLongformShowOperaDataModel isCreatorMonetizable] */

undefined1 FUN_1080795b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1080795c0; end: 108079703; -[SCLongformShowOperaDataModel .cxx_destruct] */

void FUN_1080795c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108079704; end: 10807971f; +[SCLongformShowOperaDataModelBuilder longformShowOperaDataModel] */

void FUN_108079704(void)

{
  _objc_alloc_init(PTR_PTR_1126ca870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108079720; end: 10807a0ab; +[SCLongformShowOperaDataModelBuilder longformShowOperaDataModelFromExistingLongformShowOperaDataModel:] */

void FUN_108079720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined8 uVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined8 uVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined8 uVar59;
  undefined *puVar60;
  undefined8 uVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined8 uVar66;
  undefined *puVar67;
  undefined8 uVar68;
  undefined *puVar69;
  
  puVar1 = PTR_PTR_1126ca870;
  _objc_retain(param_3);
  func_0x00010c0b5300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bbde0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b6280(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c237cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b8de0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c11b1e0(param_3);
  puVar9 = puVar7;
  func_0x00010c2b6500(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf8c980(param_3);
  puVar10 = puVar9;
  func_0x00010c2acc80(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2bbb20(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b6520(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c11b6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b65a0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c238a20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b8e60(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b3220(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bfe42a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2af840(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c23aa60(param_3);
  puVar23 = puVar21;
  func_0x00010c2b8fa0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf984c0(param_3);
  puVar24 = puVar23;
  func_0x00010c2ad500(puVar23,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c154b00(param_3);
  puVar25 = puVar24;
  func_0x00010c2b7c60(puVar24,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c11ae60(param_3);
  puVar26 = puVar25;
  func_0x00010c2b6460(puVar25,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010c2ac100(puVar26,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010bef3720();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c2a7a40(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010bf01420(param_3);
  puVar31 = puVar29;
  func_0x00010c2a8140(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c0800e0(param_3);
  puVar32 = puVar31;
  func_0x00010c2b17a0(puVar31,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c116fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar32;
  func_0x00010c2b62a0(puVar32,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_3;
  func_0x00010bf45500();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar33;
  func_0x00010c2aabe0(puVar33,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_3;
  func_0x00010bf82000();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar35;
  func_0x00010c2ac680(puVar35,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_3;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar37;
  func_0x00010c2adcc0(puVar37,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c077680(param_3);
  puVar41 = puVar39;
  func_0x00010c2b0e20(puVar39,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_3;
  func_0x00010c112fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = puVar41;
  func_0x00010c2b6000(puVar41,param_2,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_3;
  func_0x00010c155040();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar42;
  func_0x00010c2b7d80(puVar42,param_2,uVar43);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = puVar44;
  func_0x00010c2b9a60(puVar44,param_2,uVar45);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = param_3;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar46;
  func_0x00010c2bcc20(puVar46,param_2,uVar47);
  _objc_retainAutoreleasedReturnValue();
  uVar49 = param_3;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar48;
  func_0x00010c2a9720(puVar48,param_2,uVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = param_3;
  func_0x00010c07c940();
  puVar51 = puVar50;
  func_0x00010c2b13e0(puVar50,param_2,uVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = param_3;
  func_0x00010c0822a0();
  puVar52 = puVar51;
  func_0x00010c2b1940(puVar51,param_2,uVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar53 = param_3;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = puVar52;
  func_0x00010c2b9d60(puVar52,param_2,uVar53);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = param_3;
  func_0x00010c29d360();
  puVar55 = puVar54;
  func_0x00010c2bc8c0(puVar54,param_2,uVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar56 = param_3;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = puVar55;
  func_0x00010c2af860(puVar55,param_2,uVar56);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = param_3;
  func_0x00010c25b7c0();
  puVar58 = puVar57;
  func_0x00010c2ba720(puVar57,param_2,uVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar59 = param_3;
  func_0x00010c259c60();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = puVar58;
  func_0x00010c2ba420(puVar58,param_2,uVar59);
  _objc_retainAutoreleasedReturnValue();
  uVar61 = param_3;
  func_0x00010bf1f940();
  _objc_retainAutoreleasedReturnValue();
  puVar62 = puVar60;
  func_0x00010c2a9760(puVar60,param_2,uVar61);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = param_3;
  func_0x00010bfe2bc0();
  puVar63 = puVar62;
  func_0x00010c2af7a0(puVar62,param_2,uVar68);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = param_3;
  func_0x00010c22ed80();
  puVar64 = puVar63;
  func_0x00010c2b87e0(puVar63,param_2,uVar68);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = param_3;
  func_0x00010c079c60();
  puVar65 = puVar64;
  func_0x00010c2b1100(puVar64,param_2,uVar68);
  _objc_retainAutoreleasedReturnValue();
  uVar66 = param_3;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  puVar67 = puVar65;
  func_0x00010c2abd20(puVar65,param_2,uVar66);
  _objc_retainAutoreleasedReturnValue();
  uVar68 = param_3;
  func_0x00010c06f940();
  _objc_release(param_3);
  puVar69 = puVar67;
  func_0x00010c2b0520(puVar67,param_2,uVar68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar67);
  _objc_release(uVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(uVar61);
  _objc_release(puVar60);
  _objc_release(uVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(uVar56);
  _objc_release(puVar55);
  _objc_release(puVar54);
  _objc_release(uVar53);
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(uVar49);
  _objc_release(puVar48);
  _objc_release(uVar47);
  _objc_release(puVar46);
  _objc_release(uVar45);
  _objc_release(puVar44);
  _objc_release(uVar43);
  _objc_release(puVar42);
  _objc_release(uVar40);
  _objc_release(puVar41);
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(puVar37);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar34);
  _objc_release(puVar33);
  _objc_release(uVar30);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar22);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar69);
  return;
}



/* Entry: 10807a0ac; end: 10807a18b; -[SCLongformShowOperaDataModelBuilder build] */

void FUN_10807a0ac(void)

{
  _objc_alloc(PTR_PTR_1126bdd30);
  func_0x00010c059080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807a18c; end: 10807a1c3; -[SCLongformShowOperaDataModelBuilder withUniqueIdentifier:] */

long FUN_10807a18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a1c4; end: 10807a1fb; -[SCLongformShowOperaDataModelBuilder withProfileId:] */

long FUN_10807a1c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a1fc; end: 10807a233; -[SCLongformShowOperaDataModelBuilder withShowId:] */

long FUN_10807a1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a234; end: 10807a23b; -[SCLongformShowOperaDataModelBuilder withPublisherId:] */

void FUN_10807a234(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10807a23c; end: 10807a243; -[SCLongformShowOperaDataModelBuilder withEditionId:] */

void FUN_10807a23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10807a244; end: 10807a27b; -[SCLongformShowOperaDataModelBuilder withTrackingId:] */

long FUN_10807a244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a27c; end: 10807a2b3; -[SCLongformShowOperaDataModelBuilder withPublisherName:] */

long FUN_10807a27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a2b4; end: 10807a2eb; -[SCLongformShowOperaDataModelBuilder withPublisherUniqueName:] */

long FUN_10807a2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a2ec; end: 10807a323; -[SCLongformShowOperaDataModelBuilder withShowName:] */

long FUN_10807a2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a324; end: 10807a35b; -[SCLongformShowOperaDataModelBuilder withLogoURL:] */

long FUN_10807a324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a35c; end: 10807a393; -[SCLongformShowOperaDataModelBuilder withHorizontalLogoURL:] */

long FUN_10807a35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a394; end: 10807a39b; -[SCLongformShowOperaDataModelBuilder withShowType:] */

void FUN_10807a394(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10807a39c; end: 10807a3a3; -[SCLongformShowOperaDataModelBuilder withEpisodeNumber:] */

void FUN_10807a39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10807a3a4; end: 10807a3ab; -[SCLongformShowOperaDataModelBuilder withSeasonNumber:] */

void FUN_10807a3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10807a3ac; end: 10807a3b3; -[SCLongformShowOperaDataModelBuilder withPublishTimestampMs:] */

void FUN_10807a3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10807a3b4; end: 10807a3eb; -[SCLongformShowOperaDataModelBuilder withDeeplinkURL:] */

long FUN_10807a3b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a3ec; end: 10807a423; -[SCLongformShowOperaDataModelBuilder withAdMetadata:] */

long FUN_10807a3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a424; end: 10807a42b; -[SCLongformShowOperaDataModelBuilder withAllowProfilePresentation:] */

void FUN_10807a424(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10807a42c; end: 10807a433; -[SCLongformShowOperaDataModelBuilder withIsSubscribable:] */

void FUN_10807a42c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x91) = param_3;
  return;
}



/* Entry: 10807a434; end: 10807a46b; -[SCLongformShowOperaDataModelBuilder withProfileOverlayButtonText:] */

long FUN_10807a434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a46c; end: 10807a4a3; -[SCLongformShowOperaDataModelBuilder withCompositeStoryIdString:] */

long FUN_10807a46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a4a4; end: 10807a4db; -[SCLongformShowOperaDataModelBuilder withDiscoverFeedStoryDedupeFp:] */

long FUN_10807a4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a4dc; end: 10807a513; -[SCLongformShowOperaDataModelBuilder withFeedType:] */

long FUN_10807a4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a514; end: 10807a51b; -[SCLongformShowOperaDataModelBuilder withIsMarkedSubscribedInStoryResponse:] */

void FUN_10807a514(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10807a51c; end: 10807a553; -[SCLongformShowOperaDataModelBuilder withPrimaryPublisherColor:] */

long FUN_10807a51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a554; end: 10807a58b; -[SCLongformShowOperaDataModelBuilder withSecondaryPublisherColor:] */

long FUN_10807a554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a58c; end: 10807a5c3; -[SCLongformShowOperaDataModelBuilder withSnaps:] */

long FUN_10807a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a5c4; end: 10807a5fb; -[SCLongformShowOperaDataModelBuilder withWatchedState:] */

long FUN_10807a5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a5fc; end: 10807a633; -[SCLongformShowOperaDataModelBuilder withBoostMetadata:] */

long FUN_10807a5fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a634; end: 10807a63b; -[SCLongformShowOperaDataModelBuilder withIsRetrievedFromBoosts:] */

void FUN_10807a634(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 10807a63c; end: 10807a643; -[SCLongformShowOperaDataModelBuilder withIsUpNextRecommendedStory:] */

void FUN_10807a63c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe9) = param_3;
  return;
}



/* Entry: 10807a644; end: 10807a67b; -[SCLongformShowOperaDataModelBuilder withSpotlightEngagementMetadata:] */

long FUN_10807a644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a67c; end: 10807a683; -[SCLongformShowOperaDataModelBuilder withViewLocation:] */

void FUN_10807a67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 10807a684; end: 10807a6bb; -[SCLongformShowOperaDataModelBuilder withHostUserId:] */

long FUN_10807a684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a6bc; end: 10807a6c3; -[SCLongformShowOperaDataModelBuilder withStoryTypeSpecific:] */

void FUN_10807a6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x108) = param_3;
  return;
}



/* Entry: 10807a6c4; end: 10807a6fb; -[SCLongformShowOperaDataModelBuilder withStoryHomingSection:] */

long FUN_10807a6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a6fc; end: 10807a733; -[SCLongformShowOperaDataModelBuilder withBoostStoryId:] */

long FUN_10807a6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a734; end: 10807a73b; -[SCLongformShowOperaDataModelBuilder withHideTimestamp:] */

void FUN_10807a734(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 10807a73c; end: 10807a743; -[SCLongformShowOperaDataModelBuilder withShouldDisableComments:] */

void FUN_10807a73c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x121) = param_3;
  return;
}



/* Entry: 10807a744; end: 10807a74b; -[SCLongformShowOperaDataModelBuilder withIsPayToPromote:] */

void FUN_10807a744(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x122) = param_3;
  return;
}



/* Entry: 10807a74c; end: 10807a783; -[SCLongformShowOperaDataModelBuilder withDebugInfo:] */

long FUN_10807a74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10807a784; end: 10807a78b; -[SCLongformShowOperaDataModelBuilder withIsCreatorMonetizable:] */

void FUN_10807a784(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x130) = param_3;
  return;
}


