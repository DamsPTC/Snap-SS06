/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b625098; end: 10b625143; -[SCStoriesSnapInsightsInfo initWithInsightsReady:viewersCount:uniqueViewersCount:screenshotsCount:storyRepliesCount:uniqueViewersSubscribers:uniqueViewersNonSubscribers:snapViews:swipeUps:swipeAways:tapForwards:tapBackwards:boostCount:shareCount:subscribeCount:paidViewsCount:paidReachCount:combinedViewsCount:combinedReachCount:] */

void FUN_10b625098(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112706c00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
    *(undefined8 *)((long)puVar1 + 0x58) = param_13;
    *(undefined8 *)((long)puVar1 + 0x60) = param_14;
    *(undefined8 *)((long)puVar1 + 0x68) = param_15;
    *(undefined8 *)((long)puVar1 + 0x70) = param_16;
    *(undefined8 *)((long)puVar1 + 0x78) = param_17;
    *(undefined8 *)((long)puVar1 + 0x80) = param_18;
    *(undefined8 *)((long)puVar1 + 0x88) = param_19;
    *(undefined8 *)((long)puVar1 + 0x90) = param_20;
    *(undefined8 *)((long)puVar1 + 0x98) = param_21;
  }
  return;
}



/* Entry: 10b625144; end: 10b625167; -[SCStoriesSnapInsightsInfo copyWithZone:] */

undefined8 FUN_10b625144(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b625168; end: 10b62521b; -[SCStoriesSnapInsightsInfo hash] */

ulong * FUN_10b625168(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_b0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_b0 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  func_0x000107c3191c(&uStack_b0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((((ulong)puVar2 & 1) == 0) ||
           ((((*(char *)((long)puVar1 + 8) != param_3[8] ||
              (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
             (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
            ((*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20) ||
             (*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28))))))) ||
          (((*(long *)((long)puVar1 + 0x30) != *(long *)(param_3 + 0x30) ||
            (((*(long *)((long)puVar1 + 0x38) != *(long *)(param_3 + 0x38) ||
              (*(long *)((long)puVar1 + 0x40) != *(long *)(param_3 + 0x40))) ||
             ((*(long *)((long)puVar1 + 0x48) != *(long *)(param_3 + 0x48) ||
              (((*(long *)((long)puVar1 + 0x50) != *(long *)(param_3 + 0x50) ||
                (*(long *)((long)puVar1 + 0x58) != *(long *)(param_3 + 0x58))) ||
               (*(long *)((long)puVar1 + 0x60) != *(long *)(param_3 + 0x60))))))))) ||
           (((*(long *)((long)puVar1 + 0x68) != *(long *)(param_3 + 0x68) ||
             (*(long *)((long)puVar1 + 0x70) != *(long *)(param_3 + 0x70))) ||
            (*(long *)((long)puVar1 + 0x78) != *(long *)(param_3 + 0x78))))))) ||
         (((*(long *)((long)puVar1 + 0x80) != *(long *)(param_3 + 0x80) ||
           (*(long *)((long)puVar1 + 0x88) != *(long *)(param_3 + 0x88))) ||
          (*(long *)((long)puVar1 + 0x90) != *(long *)(param_3 + 0x90))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x98) == *(long *)(param_3 + 0x98));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10b62521c; end: 10b6253c3; -[SCStoriesSnapInsightsInfo isEqual:] */

bool FUN_10b62521c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((((uVar3 & 1) == 0) ||
           ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
              (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
             (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
            ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
             (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))))) ||
          (((*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30) ||
            (((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
              (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))) ||
             ((*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48) ||
              (((*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50) ||
                (*(long *)(param_1 + 0x58) != *(long *)(param_3 + 0x58))) ||
               (*(long *)(param_1 + 0x60) != *(long *)(param_3 + 0x60))))))))) ||
           (((*(long *)(param_1 + 0x68) != *(long *)(param_3 + 0x68) ||
             (*(long *)(param_1 + 0x70) != *(long *)(param_3 + 0x70))) ||
            (*(long *)(param_1 + 0x78) != *(long *)(param_3 + 0x78))))))) ||
         (((*(long *)(param_1 + 0x80) != *(long *)(param_3 + 0x80) ||
           (*(long *)(param_1 + 0x88) != *(long *)(param_3 + 0x88))) ||
          (*(long *)(param_1 + 0x90) != *(long *)(param_3 + 0x90))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6253c4; end: 10b6253cb; -[SCStoriesSnapInsightsInfo insightsReady] */

undefined1 FUN_10b6253c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6253cc; end: 10b6253d3; -[SCStoriesSnapInsightsInfo viewersCount] */

undefined8 FUN_10b6253cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6253d4; end: 10b6253db; -[SCStoriesSnapInsightsInfo uniqueViewersCount] */

undefined8 FUN_10b6253d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6253dc; end: 10b6253e3; -[SCStoriesSnapInsightsInfo screenshotsCount] */

undefined8 FUN_10b6253dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6253e4; end: 10b6253eb; -[SCStoriesSnapInsightsInfo storyRepliesCount] */

undefined8 FUN_10b6253e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6253ec; end: 10b6253f3; -[SCStoriesSnapInsightsInfo uniqueViewersSubscribers] */

undefined8 FUN_10b6253ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6253f4; end: 10b6253fb; -[SCStoriesSnapInsightsInfo uniqueViewersNonSubscribers] */

undefined8 FUN_10b6253f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b6253fc; end: 10b625403; -[SCStoriesSnapInsightsInfo snapViews] */

undefined8 FUN_10b6253fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b625404; end: 10b62540b; -[SCStoriesSnapInsightsInfo swipeUps] */

undefined8 FUN_10b625404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b62540c; end: 10b625413; -[SCStoriesSnapInsightsInfo swipeAways] */

undefined8 FUN_10b62540c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b625414; end: 10b62541b; -[SCStoriesSnapInsightsInfo tapForwards] */

undefined8 FUN_10b625414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b62541c; end: 10b625423; -[SCStoriesSnapInsightsInfo tapBackwards] */

undefined8 FUN_10b62541c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b625424; end: 10b62542b; -[SCStoriesSnapInsightsInfo boostCount] */

undefined8 FUN_10b625424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b62542c; end: 10b625433; -[SCStoriesSnapInsightsInfo shareCount] */

undefined8 FUN_10b62542c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b625434; end: 10b62543b; -[SCStoriesSnapInsightsInfo subscribeCount] */

undefined8 FUN_10b625434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b62543c; end: 10b625443; -[SCStoriesSnapInsightsInfo paidViewsCount] */

undefined8 FUN_10b62543c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b625444; end: 10b62544b; -[SCStoriesSnapInsightsInfo paidReachCount] */

undefined8 FUN_10b625444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b62544c; end: 10b625453; -[SCStoriesSnapInsightsInfo combinedViewsCount] */

undefined8 FUN_10b62544c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b625454; end: 10b62545b; -[SCStoriesSnapInsightsInfo combinedReachCount] */

undefined8 FUN_10b625454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b62545c; end: 10b6254ab; -[SCStoriesSnapCreatorEligibility initWithIsEligibleForAffiliateDeeplink:contentVisibility:] */

void FUN_10b62545c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 10b6254ac; end: 10b6254cf; -[SCStoriesSnapCreatorEligibility copyWithZone:] */

undefined8 FUN_10b6254ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6254d0; end: 10b62552b; -[SCStoriesSnapCreatorEligibility hash] */

ulong * FUN_10b6254d0(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lStack_20 = (long)*(int *)(param_1 + 0xc);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(int *)((long)puVar1 + 0xc) == *(int *)((long)param_3 + 0xc));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b62552c; end: 10b6255c3; -[SCStoriesSnapCreatorEligibility isEqual:] */

bool FUN_10b62552c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6255c4; end: 10b6255cb; -[SCStoriesSnapCreatorEligibility isEligibleForAffiliateDeeplink] */

undefined1 FUN_10b6255c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6255cc; end: 10b6255d3; -[SCStoriesSnapCreatorEligibility contentVisibility] */

undefined4 FUN_10b6255cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b6255d4; end: 10b6256ab; -[SCStoriesCommentsSnapReplyMetadata initWithOriginalPostCompositeStoryId:originalPosterDisplayName:originalPosterProfileLogoUrl:] */

undefined1 *
FUN_10b6255d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112706c10;
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



/* Entry: 10b6256ac; end: 10b6256cf; -[SCStoriesCommentsSnapReplyMetadata copyWithZone:] */

undefined8 FUN_10b6256ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6256d0; end: 10b62574f; -[SCStoriesCommentsSnapReplyMetadata hash] */

undefined8 * FUN_10b6256d0(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b6257e8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6257f4;
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
            goto LAB_10b6257f4;
          }
          goto LAB_10b6257e8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6257f4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b625750; end: 10b62580f; -[SCStoriesCommentsSnapReplyMetadata isEqual:] */

long FUN_10b625750(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6257e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6257f4;
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
            goto LAB_10b6257f4;
          }
          goto LAB_10b6257e8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6257f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b625810; end: 10b625817; -[SCStoriesCommentsSnapReplyMetadata originalPostCompositeStoryId] */

undefined8 FUN_10b625810(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b625818; end: 10b62581f; -[SCStoriesCommentsSnapReplyMetadata originalPosterDisplayName] */

undefined8 FUN_10b625818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b625820; end: 10b625827; -[SCStoriesCommentsSnapReplyMetadata originalPosterProfileLogoUrl] */

undefined8 FUN_10b625820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b625828; end: 10b625863; -[SCStoriesCommentsSnapReplyMetadata .cxx_destruct] */

void FUN_10b625828(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b625864; end: 10b6258f3; -[SCStoriesSnapSuggestedSearchInfo initWithQuery:type:poiEventEndTimeMs:] */

undefined1 *
FUN_10b625864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706c18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6258f4; end: 10b625917; -[SCStoriesSnapSuggestedSearchInfo copyWithZone:] */

undefined8 FUN_10b6258f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b625918; end: 10b625993; -[SCStoriesSnapSuggestedSearchInfo hash] */

undefined8 * FUN_10b625918(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b625a28;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b625a28;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b625a28;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b625a28:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b625994; end: 10b625a43; -[SCStoriesSnapSuggestedSearchInfo isEqual:] */

long FUN_10b625994(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b625a28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b625a28;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b625a28;
    }
  }
  lVar3 = 1;
LAB_10b625a28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b625a44; end: 10b625a4b; -[SCStoriesSnapSuggestedSearchInfo query] */

undefined8 FUN_10b625a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b625a4c; end: 10b625a53; -[SCStoriesSnapSuggestedSearchInfo type] */

undefined4 FUN_10b625a4c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b625a54; end: 10b625a5b; -[SCStoriesSnapSuggestedSearchInfo poiEventEndTimeMs] */

undefined8 FUN_10b625a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b625a5c; end: 10b625a67; -[SCStoriesSnapSuggestedSearchInfo .cxx_destruct] */

void FUN_10b625a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b625a68; end: 10b625aaf; -[SCStoriesSequenceInfo initWithLatestSequence:] */

void FUN_10b625a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706c20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b625ab0; end: 10b625ad3; -[SCStoriesSequenceInfo copyWithZone:] */

undefined8 FUN_10b625ab0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b625ad4; end: 10b625ae3; -[SCStoriesSequenceInfo hash] */

long FUN_10b625ad4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10b625ae4; end: 10b625b6b; -[SCStoriesSequenceInfo isEqual:] */

bool FUN_10b625ae4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b625b6c; end: 10b625b73; -[SCStoriesSequenceInfo latestSequence] */

undefined8 FUN_10b625b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b625b74; end: 10b625bfb; -[SCStoriesCustomStoryCreationInfo initWithCreatorUserId:creationTimestamp:] */

undefined1 *
FUN_10b625b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706c28;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b625bfc; end: 10b625c1f; -[SCStoriesCustomStoryCreationInfo copyWithZone:] */

undefined8 FUN_10b625bfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b625c20; end: 10b625cab; -[SCStoriesCustomStoryCreationInfo hash] */

undefined8 * FUN_10b625c20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b625d48:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b625d54;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10b625d54;
        }
        goto LAB_10b625d48;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b625d54:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b625cac; end: 10b625d6f; -[SCStoriesCustomStoryCreationInfo isEqual:] */

long FUN_10b625cac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b625d48:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b625d54;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b625d54;
        }
        goto LAB_10b625d48;
      }
    }
    lVar4 = 0;
  }
LAB_10b625d54:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b625d70; end: 10b625d77; -[SCStoriesCustomStoryCreationInfo creatorUserId] */

undefined8 FUN_10b625d70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b625d78; end: 10b625d7f; -[SCStoriesCustomStoryCreationInfo creationTimestamp] */

undefined8 FUN_10b625d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b625d80; end: 10b625d8b; -[SCStoriesCustomStoryCreationInfo .cxx_destruct] */

void FUN_10b625d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b625d8c; end: 10b625e03; -[SCStoriesCustomStoryParticipant initWithUserId:] */

undefined1 * FUN_10b625d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706c30;
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



/* Entry: 10b625e04; end: 10b625e27; -[SCStoriesCustomStoryParticipant copyWithZone:] */

undefined8 FUN_10b625e04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b625e28; end: 10b625e2f; -[SCStoriesCustomStoryParticipant hash] */

void FUN_10b625e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b625e30; end: 10b625ebf; -[SCStoriesCustomStoryParticipant isEqual:] */

long FUN_10b625e30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b625ea4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b625ea4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b625ea4;
    }
  }
  lVar3 = 1;
LAB_10b625ea4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b625ec0; end: 10b625ec7; -[SCStoriesCustomStoryParticipant userId] */

undefined8 FUN_10b625ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b625ec8; end: 10b625ed3; -[SCStoriesCustomStoryParticipant .cxx_destruct] */

void FUN_10b625ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b625ed4; end: 10b625f6f; -[SCStoriesCustomStorySortingHints initWithMostRecentPostTimestamp:myMostRecentPostTimestamp:latestViewedTimestampMs:viewedTimetampMsList:] */

undefined1 *
FUN_10b625ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706c38;
  uStack_50 = param_4;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b625f70; end: 10b625f93; -[SCStoriesCustomStorySortingHints copyWithZone:] */

undefined8 FUN_10b625f70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b625f94; end: 10b626053; -[SCStoriesCustomStorySortingHints hash] */

ulong * FUN_10b625f94(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_28 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x00010bfde980();
  puVar4 = &uStack_38;
  uStack_20 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b626158:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b626164;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((ulong)puVar5 & 1) != 0) {
      dVar9 = ABS((double)puVar4[1] - (double)param_3[1]);
      dVar8 = ABS((double)puVar4[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        dVar9 = ABS((double)puVar4[2] - (double)param_3[2]);
        dVar8 = ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar2 = dVar9 < dVar8;
        }
        if (bVar2) {
          dVar9 = ABS((double)puVar4[3] - (double)param_3[3]);
          dVar8 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
            bVar2 = dVar9 < dVar8;
          }
          if (bVar2) {
            puVar7 = (ulong *)puVar4[4];
            if (puVar7 != (ulong *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b626164;
            }
            goto LAB_10b626158;
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b626164:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b626054; end: 10b62617f; -[SCStoriesCustomStorySortingHints isEqual:] */

long FUN_10b626054(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b626158:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b626164;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
          dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b626164;
            }
            goto LAB_10b626158;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b626164:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b626180; end: 10b626187; -[SCStoriesCustomStorySortingHints mostRecentPostTimestamp] */

undefined8 FUN_10b626180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b626188; end: 10b62618f; -[SCStoriesCustomStorySortingHints myMostRecentPostTimestamp] */

undefined8 FUN_10b626188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b626190; end: 10b626197; -[SCStoriesCustomStorySortingHints latestViewedTimestampMs] */

undefined8 FUN_10b626190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b626198; end: 10b62619f; -[SCStoriesCustomStorySortingHints viewedTimetampMsList] */

undefined8 FUN_10b626198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6261a0; end: 10b6261ab; -[SCStoriesCustomStorySortingHints .cxx_destruct] */

void FUN_10b6261a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b6261ac; end: 10b626217; +[SCStoriesCustomStoryFeatureMetadata bestFriendStoryFeatureMetadataWithBestFriendStoryFeatureMetadata:] */

void FUN_10b6261ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b626218; end: 10b626283; +[SCStoriesCustomStoryFeatureMetadata communityFeatureMetadataWithCommunityFeatureMetadata:] */

void FUN_10b626218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b626284; end: 10b6262eb; +[SCStoriesCustomStoryFeatureMetadata sharedStoryFeatureMetadataWithSharedStoryFeatureMetadata:] */

void FUN_10b626284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6262ec; end: 10b626357; +[SCStoriesCustomStoryFeatureMetadata shortcutStoryFeatureMetadataWithShortcutStoryFeatureMetadata:] */

void FUN_10b6262ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8fd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b626358; end: 10b62637b; -[SCStoriesCustomStoryFeatureMetadata copyWithZone:] */

undefined8 FUN_10b626358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62637c; end: 10b62640b; -[SCStoriesCustomStoryFeatureMetadata hash] */

void FUN_10b62637c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112706c40;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b62640c; end: 10b62644f; -[SCStoriesCustomStoryFeatureMetadata internalInit] */

void FUN_10b62640c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706c40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b626450; end: 10b626537; -[SCStoriesCustomStoryFeatureMetadata isEqual:] */

long FUN_10b626450(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b626510:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62651c;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b62651c;
            }
            goto LAB_10b626510;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b62651c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b626538; end: 10b626623; -[SCStoriesCustomStoryFeatureMetadata matchSharedStoryFeatureMetadata:communityFeatureMetadata:shortcutStoryFeatureMetadata:bestFriendStoryFeatureMetadata:] */

void FUN_10b626538(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 1) {
      if (param_3 == 0) goto LAB_10b6265f4;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 2) || (param_4 == 0)) goto LAB_10b6265f4;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 3) {
    if (param_5 == 0) goto LAB_10b6265f4;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 4) || (param_6 == 0)) goto LAB_10b6265f4;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b6265f4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b626624; end: 10b62666b; -[SCStoriesCustomStoryFeatureMetadata .cxx_destruct] */

void FUN_10b626624(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b62666c; end: 10b62668b; -[SCStoriesCustomStoryFeatureMetadata isSameSubtype:] */

bool FUN_10b62666c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 10b62668c; end: 10b626693; -[SCStoriesCustomStoryFeatureMetadata subtype] */

undefined8 FUN_10b62668c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b626694; end: 10b62676f; -[SCStoriesCustomStoryFeatureMetadata asSharedStoryFeatureMetadata] */

void FUN_10b626694(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b626770;
  puStack_60 = &UNK_110867d28;
  puStack_48 = puStack_58;
  func_0x00010c0bfcc0(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110d26b98,
                      &PTR___NSConcreteGlobalBlock_110d26bb8,&PTR___NSConcreteGlobalBlock_110d26bd8)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b626770; end: 10b6267a7;  */

void FUN_10b626770(long param_1,undefined8 param_2)

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



/* Entry: 10b6267a8; end: 10b6267b3;  */

void FUN_10b6267a8(void)

{
  return;
}



/* Entry: 10b6267b4; end: 10b62688f; -[SCStoriesCustomStoryFeatureMetadata asCommunityFeatureMetadata] */

void FUN_10b6267b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b626894;
  puStack_60 = &UNK_1108542f0;
  puStack_48 = puStack_58;
  func_0x00010c0bfcc0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26bf8,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110d26c18,&PTR___NSConcreteGlobalBlock_110d26c38)
  ;
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b626890; end: 10b626893;  */

void FUN_10b626890(void)

{
  return;
}



/* Entry: 10b626894; end: 10b6268cb;  */

void FUN_10b626894(long param_1,undefined8 param_2)

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



/* Entry: 10b6268cc; end: 10b6268d3;  */

void FUN_10b6268cc(void)

{
  return;
}



/* Entry: 10b6268d4; end: 10b6269af; -[SCStoriesCustomStoryFeatureMetadata asShortcutStoryFeatureMetadata] */

void FUN_10b6268d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b6269b8;
  puStack_60 = &UNK_110d26c98;
  puStack_48 = puStack_58;
  func_0x00010c0bfcc0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26c58,
                      &PTR___NSConcreteGlobalBlock_110d26c78,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110d26cc8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6269b0; end: 10b6269b7;  */

void FUN_10b6269b0(void)

{
  return;
}



/* Entry: 10b6269b8; end: 10b6269ef;  */

void FUN_10b6269b8(long param_1,undefined8 param_2)

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



/* Entry: 10b6269f0; end: 10b6269f3;  */

void FUN_10b6269f0(void)

{
  return;
}



/* Entry: 10b6269f4; end: 10b626acf; -[SCStoriesCustomStoryFeatureMetadata asBestFriendStoryFeatureMetadata] */

void FUN_10b6269f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b6203cc;
  uStack_30 = 0x10b6203dc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b626adc;
  puStack_60 = &UNK_110d26d48;
  puStack_48 = puStack_58;
  func_0x00010c0bfcc0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d26ce8,
                      &PTR___NSConcreteGlobalBlock_110d26d08,&PTR___NSConcreteGlobalBlock_110d26d28,
                      &puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b626ad0; end: 10b626adb;  */

void FUN_10b626ad0(void)

{
  return;
}



/* Entry: 10b626adc; end: 10b626b13;  */

void FUN_10b626adc(long param_1,undefined8 param_2)

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



/* Entry: 10b626b14; end: 10b626bbf; -[SCStoriesSharedStoryFeatureMetadata initWithStoryDescription:boltMediaServingInfo:] */

undefined1 *
FUN_10b626b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706c48;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b626bc0; end: 10b626be3; -[SCStoriesSharedStoryFeatureMetadata copyWithZone:] */

undefined8 FUN_10b626bc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


