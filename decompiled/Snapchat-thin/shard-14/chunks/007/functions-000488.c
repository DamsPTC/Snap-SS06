/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b604f3c; end: 10b60504f; +[SCContextSessionFeatureParams adsWithShowStoryProgressBar:snapIndex:snapTotalCount:isArAd:ctaType:wakeUpUiHideObservable:organicSpotlightSnapId:organicSpotlightEngagementMetadata:organicRepostAllowed:] */

void FUN_10b604f3c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126b23a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x11] = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = param_6;
  *(undefined4 *)(puVar2 + 0x2c) = param_7;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_10;
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  puVar2[0x48] = param_11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b605050; end: 10b6050bb; +[SCContextSessionFeatureParams cameosWithCameosParams:] */

void FUN_10b605050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b23a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6050bc; end: 10b60525b; +[SCContextSessionFeatureParams chatWithOneOnOneConversationId:analyticsMessageId:groupChatConversationId:chatMessageId:chatMediaId:chatMediaType:isNonSavedSnap:isSnapSentFromDweb:isUserOnDweb:sendContextSource:messageSenderId:] */

void FUN_10b6050bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126b23a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x78) = param_8;
  puVar2[0x80] = (undefined1)param_9;
  puVar2[0x81] = param_9._1_1_;
  puVar2[0x82] = param_9._2_1_;
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x88) = param_11;
  *(undefined8 *)(puVar2 + 0x90) = param_12;
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b60525c; end: 10b6052b3; +[SCContextSessionFeatureParams memoriesWithIsPrivateSnap:] */

void FUN_10b60525c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6052b4; end: 10b6054bf; +[SCContextSessionFeatureParams spotlightWithSpotlightEngagementMetadata:spotlightDescription:discoverStoryDedupeFp:useExistingSubscriptionData:replyParams:quotedMessageId:quotedMessageAnalyticsId:inFeedSurvey:fromSnapchatCamera:storyShareProbability:spotlightStoryCardDisplayMetadata:] */

void FUN_10b6052b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puVar1 = PTR_PTR_1126b23a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  puVar2[0xb8] = param_6;
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 200) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar3);
  puVar2[0xe0] = param_11;
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_13;
  _objc_retain(param_13);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_14;
  _objc_release(uVar3);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6054c0; end: 10b6054e3; -[SCContextSessionFeatureParams copyWithZone:] */

undefined8 FUN_10b6054c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6054e4; end: 10b605683; -[SCContextSessionFeatureParams hash] */

void FUN_10b6054e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = *(undefined8 *)(param_1 + 8);
  uStack_130 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_128 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_120 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_118 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_110 = (ulong)*(byte *)(param_1 + 0x28);
  lStack_108 = (long)*(int *)(param_1 + 0x2c);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uStack_e8 = (ulong)*(byte *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x78);
  lStack_b8 = -lVar4;
  if (-1 < lVar4) {
    lStack_b8 = lVar4;
  }
  uStack_b0 = (ulong)*(byte *)(param_1 + 0x80);
  uStack_a8 = (ulong)*(byte *)(param_1 + 0x81);
  uStack_a0 = (ulong)*(byte *)(param_1 + 0x82);
  lVar4 = *(long *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  lStack_98 = -lVar4;
  if (-1 < lVar4) {
    lStack_98 = lVar4;
  }
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0xe0);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_138;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0x22);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_168 = PTR_PTR_112706808;
  puStack_170 = puVar3;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b605684; end: 10b6056c7; -[SCContextSessionFeatureParams internalInit] */

void FUN_10b605684(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6056c8; end: 10b6059f7; -[SCContextSessionFeatureParams isEqual:] */

long FUN_10b6056c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6059d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6059dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
             (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
            (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
           ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))))) &&
         (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))) &&
        ((((*(int *)(param_1 + 0x2c) == *(int *)(param_3 + 0x2c) &&
           (*(char *)(param_1 + 0x48) == *(char *)(param_3 + 0x48))) &&
          ((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
           (((*(char *)(param_1 + 0x80) == *(char *)(param_3 + 0x80) &&
             (*(char *)(param_1 + 0x81) == *(char *)(param_3 + 0x81))) &&
            (*(char *)(param_1 + 0x82) == *(char *)(param_3 + 0x82))))))) &&
         ((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
          (*(char *)(param_1 + 0xb8) == *(char *)(param_3 + 0xb8))))))) &&
       (*(char *)(param_1 + 0xe0) == *(char *)(param_3 + 0xe0))) {
      lVar3 = *(long *)(param_1 + 0x30);
      if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x40);
          if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x50);
            if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x58);
              if ((lVar3 == *(long *)(param_3 + 0x58)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x60);
                if ((lVar3 == *(long *)(param_3 + 0x60)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x68);
                  if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x70);
                    if ((lVar3 == *(long *)(param_3 + 0x70)) ||
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
                                lVar3 = *(long *)(param_1 + 0xc0);
                                if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 200);
                                  if ((lVar3 == *(long *)(param_3 + 200)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xd0);
                                    if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0xd8);
                                      if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xe8);
                                        if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xf0);
                                          if (lVar3 != *(long *)(param_3 + 0xf0)) {
                                            func_0x00010c071ae0();
                                            goto LAB_10b6059dc;
                                          }
                                          goto LAB_10b6059d0;
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
LAB_10b6059dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6059f8; end: 10b605b8f; -[SCContextSessionFeatureParams matchMemories:ads:chat:cameos:spotlight:] */

void FUN_10b6059f8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined1 *)(param_1 + 0x11),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined1 *)(param_1 + 0x48));
    }
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                 *(undefined1 *)(param_1 + 0x80),*(undefined2 *)(param_1 + 0x81),
                 *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
    }
  }
  else if (lVar1 == 3) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x98));
    }
  }
  else if ((lVar1 == 4) && (param_7 != 0)) {
    (**(code **)(param_7 + 0x10))
              (param_7,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
               *(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb8),
               *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
               *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
               *(undefined1 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
               *(undefined8 *)(param_1 + 0xf0));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b605b90; end: 10b605c8b; -[SCContextSessionFeatureParams .cxx_destruct] */

void FUN_10b605b90(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10b605c8c; end: 10b605f87; -[SCContextSessionParams initWithSessionId:memoryDeepLink:configuration:contextClientInfo:content:user:featureParams:launchSource:storyParams:storyId:storySnapId:viewLocation:existingBoostMetadata:unifiedMediaType:subscriptionParams:reactionReplyParams:] */

undefined8 *
FUN_10b605c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain();
  puStack_68 = PTR_PTR_112706810;
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
    puVar1[8] = param_10;
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
    puVar1[0xc] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    puVar1[0xe] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b605f88; end: 10b605fab; -[SCContextSessionParams copyWithZone:] */

undefined8 FUN_10b605f88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b605fac; end: 10b6060c7; -[SCContextSessionParams hash] */

undefined8 * FUN_10b605fac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_68 = *(undefined8 *)(param_1 + 0x48);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x60);
  uStack_48 = *(undefined8 *)(param_1 + 0x68);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfde980();
  puVar3 = &uStack_a8;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b606280:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b60628c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[8] == param_3[8] && (puVar3[0xc] == param_3[0xc])) && (puVar3[0xe] == param_3[0xe])
        ))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
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
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xb];
                        if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xd];
                          if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xf];
                            if ((lVar5 == param_3[0xf]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              puVar6 = (undefined8 *)puVar3[0x10];
                              if (puVar6 != (undefined8 *)param_3[0x10]) {
                                func_0x00010c071ae0();
                                goto LAB_10b60628c;
                              }
                              goto LAB_10b606280;
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
LAB_10b60628c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6060c8; end: 10b6062a7; -[SCContextSessionParams isEqual:] */

long FUN_10b6060c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b606280:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b60628c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) &&
        (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))) {
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
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x80);
                              if (lVar3 != *(long *)(param_3 + 0x80)) {
                                func_0x00010c071ae0();
                                goto LAB_10b60628c;
                              }
                              goto LAB_10b606280;
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
LAB_10b60628c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6062a8; end: 10b6062af; -[SCContextSessionParams sessionId] */

undefined8 FUN_10b6062a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6062b0; end: 10b6062b7; -[SCContextSessionParams memoryDeepLink] */

undefined8 FUN_10b6062b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6062b8; end: 10b6062bf; -[SCContextSessionParams configuration] */

undefined8 FUN_10b6062b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6062c0; end: 10b6062c7; -[SCContextSessionParams contextClientInfo] */

undefined8 FUN_10b6062c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6062c8; end: 10b6062cf; -[SCContextSessionParams content] */

undefined8 FUN_10b6062c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6062d0; end: 10b6062d7; -[SCContextSessionParams user] */

undefined8 FUN_10b6062d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6062d8; end: 10b6062df; -[SCContextSessionParams featureParams] */

undefined8 FUN_10b6062d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6062e0; end: 10b6062e7; -[SCContextSessionParams launchSource] */

undefined8 FUN_10b6062e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6062e8; end: 10b6062ef; -[SCContextSessionParams storyParams] */

undefined8 FUN_10b6062e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6062f0; end: 10b6062f7; -[SCContextSessionParams storyId] */

undefined8 FUN_10b6062f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6062f8; end: 10b6062ff; -[SCContextSessionParams storySnapId] */

undefined8 FUN_10b6062f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b606300; end: 10b606307; -[SCContextSessionParams viewLocation] */

undefined8 FUN_10b606300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b606308; end: 10b60630f; -[SCContextSessionParams existingBoostMetadata] */

undefined8 FUN_10b606308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b606310; end: 10b606317; -[SCContextSessionParams unifiedMediaType] */

undefined8 FUN_10b606310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b606318; end: 10b60631f; -[SCContextSessionParams subscriptionParams] */

undefined8 FUN_10b606318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b606320; end: 10b606327; -[SCContextSessionParams reactionReplyParams] */

undefined8 FUN_10b606320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b606328; end: 10b6063db; -[SCContextSessionParams .cxx_destruct] */

void FUN_10b606328(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10b6063dc; end: 10b6065c7; -[SCContextSnapIdentity initWithClientId:storySnapId:storyId:chatMessageId:launchSource:isUserGeneratedContent:creatorID:shouldBoostOnSnapLevel:discoverStoryCompositeId:businessProfileId:discoverStoryDedupeFp:] */

undefined8 *
FUN_10b6063dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112706818;
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
    puVar1[6] = param_7;
    *(undefined1 *)(puVar1 + 1) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_10;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b6065c8; end: 10b6065eb; -[SCContextSnapIdentity copyWithZone:] */

undefined8 FUN_10b6065c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6065ec; end: 10b6066bf; -[SCContextSnapIdentity hash] */

undefined8 * FUN_10b6065ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b606800:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b60680c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) && (*(char *)((long)puVar3 + 9) == param_3[9])
        ))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x48);
                  if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_10b60680c;
                    }
                    goto LAB_10b606800;
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
LAB_10b60680c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6066c0; end: 10b606827; -[SCContextSnapIdentity isEqual:] */

long FUN_10b6066c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b606800:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b60680c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
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
                    if (lVar3 != *(long *)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_10b60680c;
                    }
                    goto LAB_10b606800;
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
LAB_10b60680c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b606828; end: 10b60682f; -[SCContextSnapIdentity clientId] */

undefined8 FUN_10b606828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b606830; end: 10b606837; -[SCContextSnapIdentity storySnapId] */

undefined8 FUN_10b606830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b606838; end: 10b60683f; -[SCContextSnapIdentity storyId] */

undefined8 FUN_10b606838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b606840; end: 10b606847; -[SCContextSnapIdentity chatMessageId] */

undefined8 FUN_10b606840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b606848; end: 10b60684f; -[SCContextSnapIdentity launchSource] */

undefined8 FUN_10b606848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b606850; end: 10b606857; -[SCContextSnapIdentity isUserGeneratedContent] */

undefined1 FUN_10b606850(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b606858; end: 10b60685f; -[SCContextSnapIdentity creatorID] */

undefined8 FUN_10b606858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b606860; end: 10b606867; -[SCContextSnapIdentity shouldBoostOnSnapLevel] */

undefined1 FUN_10b606860(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b606868; end: 10b60686f; -[SCContextSnapIdentity discoverStoryCompositeId] */

undefined8 FUN_10b606868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b606870; end: 10b606877; -[SCContextSnapIdentity businessProfileId] */

undefined8 FUN_10b606870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b606878; end: 10b60687f; -[SCContextSnapIdentity discoverStoryDedupeFp] */

undefined8 FUN_10b606878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b606880; end: 10b6068f7; -[SCContextSnapIdentity .cxx_destruct] */

void FUN_10b606880(long param_1)

{
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



/* Entry: 10b6068f8; end: 10b606a03; -[SCContextSnapParams initWithSnapIdentity:replyParams:unlockableSnapInfo:creatorEligibility:] */

undefined1 *
FUN_10b6068f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112706820;
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



/* Entry: 10b606a04; end: 10b606a27; -[SCContextSnapParams copyWithZone:] */

undefined8 FUN_10b606a04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b606a28; end: 10b606ab3; -[SCContextSnapParams hash] */

undefined8 * FUN_10b606a28(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b606b64:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b606b70;
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
              goto LAB_10b606b70;
            }
            goto LAB_10b606b64;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b606b70:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b606ab4; end: 10b606b8b; -[SCContextSnapParams isEqual:] */

long FUN_10b606ab4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b606b64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b606b70;
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
              goto LAB_10b606b70;
            }
            goto LAB_10b606b64;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b606b70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b606b8c; end: 10b606b93; -[SCContextSnapParams snapIdentity] */

undefined8 FUN_10b606b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b606b94; end: 10b606b9b; -[SCContextSnapParams replyParams] */

undefined8 FUN_10b606b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b606b9c; end: 10b606ba3; -[SCContextSnapParams unlockableSnapInfo] */

undefined8 FUN_10b606b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b606ba4; end: 10b606bab; -[SCContextSnapParams creatorEligibility] */

undefined8 FUN_10b606ba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b606bac; end: 10b606bf3; -[SCContextSnapParams .cxx_destruct] */

void FUN_10b606bac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b606bf4; end: 10b606e4f; -[SCContextStoryParams initWithSnapId:mediaId:sourceId:storySnap:mediaEncryptionInfo:mediaType:storyType:storyTypeSpecific:isDurationInfinite:isUserGeneratedContent:showSnapProPublicStoryReplyDisclaimer:showQuestionStickerStoryReplyDisclaimer:storySnapCreatorId:multiSnapFirstSnapId:isViewed:isPosterMutualFriend:shouldBoostOnSnapLevel:discoverStoryCompositeId:isFromFriendSuggestion:] */

undefined8 *
FUN_10b606bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined1 param_18)

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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_112706828;
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
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_11._3_1_;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 0xd) = param_15._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_15._2_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = param_18;
  }
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b606e50; end: 10b606e73; -[SCContextStoryParams copyWithZone:] */

undefined8 FUN_10b606e50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b606e74; end: 10b606f83; -[SCContextStoryParams hash] */

undefined8 * FUN_10b606e74(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x50);
  lStack_88 = -lVar6;
  if (-1 < lVar6) {
    lStack_88 = lVar6;
  }
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_80 = (ulong)uVar1 & 0xff;
  uStack_78 = uVar10 >> 0x10 & 0xff;
  uStack_70 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_68 = (ulong)uVar8;
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_48 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xf);
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b607144:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b607150;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38) &&
            (*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40))) &&
           (*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48))) &&
          ((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9])
           ))))) && (*(char *)((long)puVar4 + 10) == param_3[10])) &&
       (((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
         (*(char *)((long)puVar4 + 0xc) == param_3[0xc])) &&
        ((*(char *)((long)puVar4 + 0xd) == param_3[0xd] &&
         ((*(char *)((long)puVar4 + 0xe) == param_3[0xe] &&
          (*(char *)((long)puVar4 + 0xf) == param_3[0xf])))))))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x28);
            if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x30);
              if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                lVar6 = *(long *)((long)puVar4 + 0x50);
                if ((lVar6 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar6 != 0)
                   ) {
                  lVar6 = *(long *)((long)puVar4 + 0x58);
                  if ((lVar6 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    puVar7 = *(undefined1 **)((long)puVar4 + 0x60);
                    if (puVar7 != *(undefined1 **)(param_3 + 0x60)) {
                      func_0x00010c071ae0();
                      goto LAB_10b607150;
                    }
                    goto LAB_10b607144;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b607150:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b606f84; end: 10b60716b; -[SCContextStoryParams isEqual:] */

long FUN_10b606f84(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b607144:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b607150;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
            (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       (((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
        ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
         ((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
          (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))))))))) {
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
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if (lVar3 != *(long *)(param_3 + 0x60)) {
                      func_0x00010c071ae0();
                      goto LAB_10b607150;
                    }
                    goto LAB_10b607144;
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
LAB_10b607150:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b60716c; end: 10b607173; -[SCContextStoryParams snapId] */

undefined8 FUN_10b60716c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b607174; end: 10b60717b; -[SCContextStoryParams mediaId] */

undefined8 FUN_10b607174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b60717c; end: 10b607183; -[SCContextStoryParams sourceId] */

undefined8 FUN_10b60717c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b607184; end: 10b60718b; -[SCContextStoryParams storySnap] */

undefined8 FUN_10b607184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b60718c; end: 10b607193; -[SCContextStoryParams mediaEncryptionInfo] */

undefined8 FUN_10b60718c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b607194; end: 10b60719b; -[SCContextStoryParams mediaType] */

undefined8 FUN_10b607194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b60719c; end: 10b6071a3; -[SCContextStoryParams storyType] */

undefined8 FUN_10b60719c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b6071a4; end: 10b6071ab; -[SCContextStoryParams storyTypeSpecific] */

undefined8 FUN_10b6071a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b6071ac; end: 10b6071b3; -[SCContextStoryParams isDurationInfinite] */

undefined1 FUN_10b6071ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6071b4; end: 10b6071bb; -[SCContextStoryParams isUserGeneratedContent] */

undefined1 FUN_10b6071b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6071bc; end: 10b6071c3; -[SCContextStoryParams showSnapProPublicStoryReplyDisclaimer] */

undefined1 FUN_10b6071bc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b6071c4; end: 10b6071cb; -[SCContextStoryParams showQuestionStickerStoryReplyDisclaimer] */

undefined1 FUN_10b6071c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b6071cc; end: 10b6071d3; -[SCContextStoryParams storySnapCreatorId] */

undefined8 FUN_10b6071cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b6071d4; end: 10b6071db; -[SCContextStoryParams multiSnapFirstSnapId] */

undefined8 FUN_10b6071d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b6071dc; end: 10b6071e3; -[SCContextStoryParams isViewed] */

undefined1 FUN_10b6071dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b6071e4; end: 10b6071eb; -[SCContextStoryParams isPosterMutualFriend] */

undefined1 FUN_10b6071e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b6071ec; end: 10b6071f3; -[SCContextStoryParams shouldBoostOnSnapLevel] */

undefined1 FUN_10b6071ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b6071f4; end: 10b6071fb; -[SCContextStoryParams discoverStoryCompositeId] */

undefined8 FUN_10b6071f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b6071fc; end: 10b607203; -[SCContextStoryParams isFromFriendSuggestion] */

undefined1 FUN_10b6071fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b607204; end: 10b60727b; -[SCContextStoryParams .cxx_destruct] */

void FUN_10b607204(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b60727c; end: 10b6072e7; +[SCContextUserIdentifier legacyUsernameWithUsername:] */

void FUN_10b60727c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b23a0;
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



/* Entry: 10b6072e8; end: 10b60734b; +[SCContextUserIdentifier userIdWithUserId:] */

void FUN_10b6072e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b23a0;
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



/* Entry: 10b60734c; end: 10b60736f; -[SCContextUserIdentifier copyWithZone:] */

undefined8 FUN_10b60734c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b607370; end: 10b6073e7; -[SCContextUserIdentifier hash] */

void FUN_10b607370(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112706830;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6073e8; end: 10b60742b; -[SCContextUserIdentifier internalInit] */

void FUN_10b6073e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706830;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b60742c; end: 10b6074e3; -[SCContextUserIdentifier isEqual:] */

long FUN_10b60742c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6074bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6074c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6074c8;
        }
        goto LAB_10b6074bc;
      }
    }
    lVar3 = 0;
  }
LAB_10b6074c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6074e4; end: 10b607567; -[SCContextUserIdentifier matchUserId:legacyUsername:] */

void FUN_10b6074e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b60754c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b60754c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b60754c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b607568; end: 10b607597; -[SCContextUserIdentifier .cxx_destruct] */

void FUN_10b607568(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b607598; end: 10b6076a3; -[SCContextUserParams initWithIdentifier:username:displayName:businessProfileId:] */

undefined1 *
FUN_10b607598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112706838;
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



/* Entry: 10b6076a4; end: 10b6076c7; -[SCContextUserParams copyWithZone:] */

undefined8 FUN_10b6076a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6076c8; end: 10b607753; -[SCContextUserParams hash] */

undefined8 * FUN_10b6076c8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b607804:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b607810;
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
              goto LAB_10b607810;
            }
            goto LAB_10b607804;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b607810:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b607754; end: 10b60782b; -[SCContextUserParams isEqual:] */

long FUN_10b607754(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b607804:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b607810;
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
              goto LAB_10b607810;
            }
            goto LAB_10b607804;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b607810:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b60782c; end: 10b607833; -[SCContextUserParams identifier] */

undefined8 FUN_10b60782c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b607834; end: 10b60783b; -[SCContextUserParams username] */

undefined8 FUN_10b607834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b60783c; end: 10b607843; -[SCContextUserParams displayName] */

undefined8 FUN_10b60783c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b607844; end: 10b60784b; -[SCContextUserParams businessProfileId] */

undefined8 FUN_10b607844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b60784c; end: 10b607893; -[SCContextUserParams .cxx_destruct] */

void FUN_10b60784c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b607894; end: 10b6078ef; +[SCContextActionBarSubscribeIdentifier publisherIdWithPublisherId:] */

void FUN_10b607894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d5408;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6078f0; end: 10b607953; +[SCContextActionBarSubscribeIdentifier userIdWithUserId:] */

void FUN_10b6078f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5408;
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


