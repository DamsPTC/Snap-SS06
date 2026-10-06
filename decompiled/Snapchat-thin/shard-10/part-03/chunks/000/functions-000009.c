/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d217dc; end: 107d217e3; -[SCUnifiedProfileOurStorySectionUpdateDataModel boxedSection] */

undefined8 FUN_107d217dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d217e4; end: 107d217eb; -[SCUnifiedProfileOurStorySectionUpdateDataModel isLoaded] */

undefined1 FUN_107d217e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d217ec; end: 107d217f7; -[SCUnifiedProfileOurStorySectionUpdateDataModel .cxx_destruct] */

void FUN_107d217ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d217f8; end: 107d2183f; -[SCUnifiedProfileSharedStoryActionDataModel initWithHasStories:] */

void FUN_107d217f8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faa90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107d21840; end: 107d21863; -[SCUnifiedProfileSharedStoryActionDataModel copyWithZone:] */

undefined8 FUN_107d21840(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d21864; end: 107d2186b; -[SCUnifiedProfileSharedStoryActionDataModel hash] */

undefined1 FUN_107d21864(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d2186c; end: 107d218f3; -[SCUnifiedProfileSharedStoryActionDataModel isEqual:] */

bool FUN_107d2186c(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d218f4; end: 107d218fb; -[SCUnifiedProfileSharedStoryActionDataModel hasStories] */

undefined1 FUN_107d218f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d218fc; end: 107d219d3; -[SCUnifiedProfileStoriesSectionConfiguration initWithInsets:storyId:boxedStoryGroupIsExpandedObservable:] */

undefined1 *
FUN_107d218fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126faa98;
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



/* Entry: 107d219d4; end: 107d219f7; -[SCUnifiedProfileStoriesSectionConfiguration copyWithZone:] */

undefined8 FUN_107d219d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d219f8; end: 107d21a77; -[SCUnifiedProfileStoriesSectionConfiguration hash] */

undefined8 * FUN_107d219f8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d21b10:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d21b1c;
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
            goto LAB_107d21b1c;
          }
          goto LAB_107d21b10;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d21b1c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d21a78; end: 107d21b37; -[SCUnifiedProfileStoriesSectionConfiguration isEqual:] */

long FUN_107d21a78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d21b10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d21b1c;
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
            goto LAB_107d21b1c;
          }
          goto LAB_107d21b10;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d21b1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d21b38; end: 107d21b3f; -[SCUnifiedProfileStoriesSectionConfiguration insets] */

undefined8 FUN_107d21b38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d21b40; end: 107d21b47; -[SCUnifiedProfileStoriesSectionConfiguration storyId] */

undefined8 FUN_107d21b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d21b48; end: 107d21b4f; -[SCUnifiedProfileStoriesSectionConfiguration boxedStoryGroupIsExpandedObservable] */

undefined8 FUN_107d21b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d21b50; end: 107d21b8b; -[SCUnifiedProfileStoriesSectionConfiguration .cxx_destruct] */

void FUN_107d21b50(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d21b8c; end: 107d21c63; -[SCUnifiedProfileCreatorMilestoneDataModel initWithProfileId:activityFeedNotificationId:spotlightId:] */

undefined1 *
FUN_107d21b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126faaa0;
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



/* Entry: 107d21c64; end: 107d21c87; -[SCUnifiedProfileCreatorMilestoneDataModel copyWithZone:] */

undefined8 FUN_107d21c64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d21c88; end: 107d21d07; -[SCUnifiedProfileCreatorMilestoneDataModel hash] */

undefined8 * FUN_107d21c88(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d21da0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d21dac;
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
            goto LAB_107d21dac;
          }
          goto LAB_107d21da0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d21dac:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d21d08; end: 107d21dc7; -[SCUnifiedProfileCreatorMilestoneDataModel isEqual:] */

long FUN_107d21d08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d21da0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d21dac;
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
            goto LAB_107d21dac;
          }
          goto LAB_107d21da0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d21dac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d21dc8; end: 107d21dcf; -[SCUnifiedProfileCreatorMilestoneDataModel profileId] */

undefined8 FUN_107d21dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d21dd0; end: 107d21dd7; -[SCUnifiedProfileCreatorMilestoneDataModel activityFeedNotificationId] */

undefined8 FUN_107d21dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d21dd8; end: 107d21ddf; -[SCUnifiedProfileCreatorMilestoneDataModel spotlightId] */

undefined8 FUN_107d21dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d21de0; end: 107d21e1b; -[SCUnifiedProfileCreatorMilestoneDataModel .cxx_destruct] */

void FUN_107d21de0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d21e1c; end: 107d21ec7; -[SCUnifiedProfileActivityFeedActionDataModel initWithProfileId:activityFeedNotificationId:] */

undefined1 *
FUN_107d21e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126faaa8;
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



/* Entry: 107d21ec8; end: 107d21eeb; -[SCUnifiedProfileActivityFeedActionDataModel copyWithZone:] */

undefined8 FUN_107d21ec8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d21eec; end: 107d21f5f; -[SCUnifiedProfileActivityFeedActionDataModel hash] */

undefined8 * FUN_107d21eec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d21fe0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d21fec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107d21fec;
        }
        goto LAB_107d21fe0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d21fec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d21f60; end: 107d22007; -[SCUnifiedProfileActivityFeedActionDataModel isEqual:] */

long FUN_107d21f60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d21fe0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d21fec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107d21fec;
        }
        goto LAB_107d21fe0;
      }
    }
    lVar3 = 0;
  }
LAB_107d21fec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d22008; end: 107d2200f; -[SCUnifiedProfileActivityFeedActionDataModel profileId] */

undefined8 FUN_107d22008(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d22010; end: 107d22017; -[SCUnifiedProfileActivityFeedActionDataModel activityFeedNotificationId] */

undefined8 FUN_107d22010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d22018; end: 107d22047; -[SCUnifiedProfileActivityFeedActionDataModel .cxx_destruct] */

void FUN_107d22018(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d22048; end: 107d220bf; -[SCUnifiedProfilePublicProfileActionDataModel initWithProfileId:] */

undefined1 * FUN_107d22048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faab0;
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



/* Entry: 107d220c0; end: 107d220e3; -[SCUnifiedProfilePublicProfileActionDataModel copyWithZone:] */

undefined8 FUN_107d220c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d220e4; end: 107d220eb; -[SCUnifiedProfilePublicProfileActionDataModel hash] */

void FUN_107d220e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107d220ec; end: 107d2217b; -[SCUnifiedProfilePublicProfileActionDataModel isEqual:] */

long FUN_107d220ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d22160;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107d22160;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107d22160;
    }
  }
  lVar3 = 1;
LAB_107d22160:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d2217c; end: 107d22183; -[SCUnifiedProfilePublicProfileActionDataModel profileId] */

undefined8 FUN_107d2217c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d22184; end: 107d2218f; -[SCUnifiedProfilePublicProfileActionDataModel .cxx_destruct] */

void FUN_107d22184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d22190; end: 107d222f7; -[SCUnifiedProfilePublicStoryDataModel initWithBusinessId:hasStories:archiveOnly:snapPlaybackInfos:config:thumbnailURL:mediaType:displayName:isPublicOrOfficialTier:] */

undefined1 *
FUN_107d22190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126faab8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d222f8; end: 107d2231b; -[SCUnifiedProfilePublicStoryDataModel copyWithZone:] */

undefined8 FUN_107d222f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d2231c; end: 107d223cf; -[SCUnifiedProfilePublicStoryDataModel hash] */

undefined8 * FUN_107d2231c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d224d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d224e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
              if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_107d224e4;
              }
              goto LAB_107d224d8;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d224e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d223d0; end: 107d224ff; -[SCUnifiedProfilePublicStoryDataModel isEqual:] */

long FUN_107d223d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d224d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d224e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_107d224e4;
              }
              goto LAB_107d224d8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d224e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d22500; end: 107d22507; -[SCUnifiedProfilePublicStoryDataModel businessId] */

undefined8 FUN_107d22500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d22508; end: 107d2250f; -[SCUnifiedProfilePublicStoryDataModel hasStories] */

undefined1 FUN_107d22508(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d22510; end: 107d22517; -[SCUnifiedProfilePublicStoryDataModel archiveOnly] */

undefined1 FUN_107d22510(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d22518; end: 107d2251f; -[SCUnifiedProfilePublicStoryDataModel snapPlaybackInfos] */

undefined8 FUN_107d22518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d22520; end: 107d22527; -[SCUnifiedProfilePublicStoryDataModel config] */

undefined8 FUN_107d22520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d22528; end: 107d2252f; -[SCUnifiedProfilePublicStoryDataModel thumbnailURL] */

undefined8 FUN_107d22528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d22530; end: 107d22537; -[SCUnifiedProfilePublicStoryDataModel mediaType] */

undefined8 FUN_107d22530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d22538; end: 107d2253f; -[SCUnifiedProfilePublicStoryDataModel displayName] */

undefined8 FUN_107d22538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d22540; end: 107d22547; -[SCUnifiedProfilePublicStoryDataModel isPublicOrOfficialTier] */

undefined1 FUN_107d22540(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d22548; end: 107d2259b; -[SCUnifiedProfilePublicStoryDataModel .cxx_destruct] */

void FUN_107d22548(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d2259c; end: 107d2261b; -[SCCreatorsActionSheetConfig initWithAddToStory:autoSaveStoryToMemories:saveStory:deleteSnap:saveSnap:sendSnap:] */

void FUN_107d2259c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126faac0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
  }
  return;
}



/* Entry: 107d2261c; end: 107d2263f; -[SCCreatorsActionSheetConfig copyWithZone:] */

undefined8 FUN_107d2261c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d22640; end: 107d226c7; -[SCCreatorsActionSheetConfig hash] */

ulong * FUN_107d22640(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_48 = (ulong)uVar1 & 0xff;
  uStack_40 = uVar7 >> 0x10 & 0xff;
  uStack_38 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_30 = (ulong)uVar5;
  uStack_28 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_20 = (ulong)*(byte *)(param_1 + 0xd);
  puVar2 = &uStack_48;
  func_0x000100505190(puVar2,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          ((((char)puVar2[1] != (char)param_3[1] ||
            (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
           (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) ||
         ((*(char *)((long)puVar2 + 0xb) != *(char *)((long)param_3 + 0xb) ||
          (*(char *)((long)puVar2 + 0xc) != *(char *)((long)param_3 + 0xc))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0xd) == *(char *)((long)param_3 + 0xd));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107d226c8; end: 107d2279f; -[SCCreatorsActionSheetConfig isEqual:] */

bool FUN_107d226c8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
         ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
          (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d227a0; end: 107d227a7; -[SCCreatorsActionSheetConfig addToStory] */

undefined1 FUN_107d227a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d227a8; end: 107d227af; -[SCCreatorsActionSheetConfig autoSaveStoryToMemories] */

undefined1 FUN_107d227a8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d227b0; end: 107d227b7; -[SCCreatorsActionSheetConfig saveStory] */

undefined1 FUN_107d227b0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d227b8; end: 107d227bf; -[SCCreatorsActionSheetConfig deleteSnap] */

undefined1 FUN_107d227b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d227c0; end: 107d227c7; -[SCCreatorsActionSheetConfig saveSnap] */

undefined1 FUN_107d227c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d227c8; end: 107d227cf; -[SCCreatorsActionSheetConfig sendSnap] */

undefined1 FUN_107d227c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d227d0; end: 107d22a6b;  */

void FUN_107d227d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bfca8;
    _objc_alloc(PTR_PTR_1126bfca8);
    lVar2 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c085300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar1,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c28f340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar8 = 1;
    }
    else {
      lVar3 = param_1;
      func_0x00010c0880c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar8 = 2;
      lVar2 = lVar3;
    }
    lVar3 = param_1;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = (undefined *)0x0;
    if (lVar3 != 0) {
      puVar5 = PTR_PTR_1126ce5f8;
      _objc_alloc(PTR_PTR_1126ce5f8);
      lVar3 = param_1;
      func_0x00010bf4cce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf4cd40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf4cd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003920(puVar5,param_2,lVar3,lVar4,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    puVar7 = PTR_PTR_1126c6940;
    _objc_alloc(PTR_PTR_1126c6940);
    func_0x00010c051fe0();
    lVar3 = param_1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126c3398;
    _objc_alloc(PTR_PTR_1126c3398);
    if (lVar4 == 0) {
      lVar3 = param_1;
      func_0x00010c0ed6a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa8e0(puVar9,param_2,lVar3,uVar8,0,puVar7,0);
      _objc_release(lVar3);
    }
    else {
      func_0x00010bffa8e0(puVar9,param_2,lVar4,uVar8,0,puVar7,0);
    }
    _objc_release(lVar4);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107d22a6c; end: 107d22eff;  */

void FUN_107d22a6c(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126bfca8;
  _objc_alloc();
  lVar2 = lVar1;
  func_0x00010c086560(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c085300(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c26f2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9c720();
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf0aae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar6 = param_2;
    func_0x00010bf0e700(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf0aae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126cbca8;
  _objc_alloc();
  lVar2 = lVar1;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08f8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c4440();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0ef640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010bf1eee0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c26d900();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010bf1eee0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bfb11c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010bf1eee0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c260e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0802a0();
  func_0x00010c022600();
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  func_0x00010c27dd80();
  func_0x0001084f2c4c();
  FUN_107d22f00(lVar1,param_3,param_4);
  lVar2 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar18 = PTR_PTR_1126c3390;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c15f2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083e00();
  lVar5 = lVar1;
  func_0x00010bf06600();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf7f0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf1f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bfb26c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840();
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 107d22f00; end: 107d22fdb;  */

uint FUN_107d22f00(ulong param_1,int param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain();
  if (param_2 != 0) {
    if (param_3 != 0) {
      uVar2 = param_1;
      func_0x00010bf1eee0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0c4440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        uVar4 = 1;
        goto LAB_107d22fc0;
      }
    }
    uVar2 = param_1;
    func_0x00010c083e00();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c27dd80();
      uVar2 = uVar2 + 1;
      uVar1 = 1;
      if (uVar2 < 0x19) {
        uVar1 = 0x494288 >> (ulong)((uint)uVar2 & 0x1f);
      }
      if ((1L << (uVar2 & 0x3f) & 0x2db59bbU) == 0) {
        uVar1 = 1;
      }
      uVar4 = 1;
      if (uVar2 < 0x1a) {
        uVar4 = uVar1;
      }
      goto LAB_107d22fc0;
    }
  }
  uVar4 = 0;
LAB_107d22fc0:
  _objc_release(param_1);
  return uVar4 & 1;
}



/* Entry: 107d22fdc; end: 107d23c67;  */

void FUN_107d22fdc(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lStack_88;
  long lStack_80;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0676a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0676c0();
  if ((int)lVar5 == 0) {
LAB_107d2312c:
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    lVar5 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf0aae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_release(lVar5);
      goto LAB_107d2312c;
    }
    lVar7 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf0aae0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27dd80();
    if (lVar9 == 2) {
LAB_107d230e0:
      lVar10 = lVar2;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c08fa60();
      bVar1 = lVar11 != 0;
      _objc_release(lVar10);
      if (lVar9 != 2) goto LAB_107d233d8;
    }
    else {
      lStack_88 = param_1;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      lStack_80 = lStack_88;
      func_0x00010bf0aae0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lStack_80;
      func_0x00010c27dd80();
      if (lVar10 == 3) goto LAB_107d230e0;
      bVar1 = false;
LAB_107d233d8:
      _objc_release(lStack_80);
      _objc_release(lStack_88);
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (bVar1) {
      puVar12 = PTR_PTR_1126c6940;
      _objc_alloc(PTR_PTR_1126c6940);
      lVar3 = lVar2;
      func_0x00010c28f340(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051fe0(puVar12);
      _objc_release(lVar3);
      puVar13 = PTR_PTR_1126c3398;
      _objc_alloc(PTR_PTR_1126c3398);
      func_0x00010bffa8e0();
      goto LAB_107d23398;
    }
  }
  puVar12 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  lVar3 = lVar2;
  func_0x00010c086560(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c085300(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar4 = lVar2;
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar2;
      func_0x00010c0880c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
    }
  }
  lVar4 = lVar2;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126ce5f8;
    _objc_alloc();
    lVar4 = lVar2;
    func_0x00010bf4cce0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf4cd40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf4cd20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003920();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if ((lVar4 == 0) && (puVar15 == (undefined *)0x0)) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126c6940;
    _objc_alloc(PTR_PTR_1126c6940);
    func_0x00010c051fe0();
  }
  lVar4 = param_1;
  FUN_107d22a6c(param_1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010c25b720();
  puVar13 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  func_0x00010bffa8e0();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(lVar3);
LAB_107d23398:
  _objc_release(puVar12);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107d23c68; end: 107d23ecf;  */

void FUN_107d23c68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0ed6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  lVar3 = param_1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126c21e0;
  lVar3 = param_1;
  lVar7 = param_1;
  lVar8 = param_1;
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      lVar5 = param_1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (lVar6 == 0) {
        puVar9 = (undefined *)0x0;
        goto LAB_107d23e94;
      }
    }
    else {
      _objc_release(lVar4);
    }
    puVar9 = PTR_PTR_1126c21e0;
    func_0x00010c0880c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      func_0x00010c28f340(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0880c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c085300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e400(puVar9,param_2,lVar1,lVar7,lVar8,lVar4,6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    func_0x00010bf4cce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d8a0(puVar9,param_2,lVar1,lVar3,lVar7,lVar8,6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
LAB_107d23e94:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107d23ed0; end: 107d23ef7;  */

undefined ** FUN_107d23ed0(long param_1)

{
  if (param_1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110a090a8)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110eb94d8;
}



/* Entry: 107d23ef8; end: 107d244bb;  */

void FUN_107d23ef8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong in_stack_ffffffffffffff20;
  undefined *puStack_70;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c26e380();
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    puStack_70 = (undefined *)0x0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c26dae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126bfca8;
    _objc_alloc(PTR_PTR_1126bfca8);
    uVar4 = uVar3;
    func_0x00010c086560(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c085300(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar14,param_2,uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010bf88ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar5 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR_PTR_1126ce5f8;
      _objc_alloc(PTR_PTR_1126ce5f8);
      uVar4 = uVar5;
      func_0x00010bf4cce0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c086560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c085300(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003920(puVar13,param_2,uVar4,uVar6,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    puStack_70 = PTR_PTR_1126c6940;
    _objc_alloc();
    uVar4 = uVar2;
    func_0x00010c26e3a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051fe0(puStack_70,param_2,uVar4,puVar14,puVar13);
    _objc_release(uVar4);
    _objc_release(puVar13);
    _objc_release(uVar5);
    _objc_release(puVar14);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010c242080();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf26940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0c4ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126bfca8;
    _objc_alloc();
    uVar5 = uVar4;
    func_0x00010c086560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c085300(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar13,param_2,uVar5,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c27dd80();
    if (uVar5 < 0x19) {
      uVar12 = *(undefined8 *)(&UNK_10dee5d90 + uVar5 * 8);
    }
    else {
      uVar12 = 0xffffffffffffffff;
    }
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126cbca8;
      _objc_alloc();
      uVar6 = uVar5;
      func_0x00010c08f8a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0c3fe0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c0ef4a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar5;
      func_0x00010c26d760(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010bfb11c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c022600(puVar15,param_2,uVar6,uVar7,uVar9,uVar10,uVar11,0,
                          in_stack_ffffffffffffff20 & 0xffffffffffffff00);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010c242080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    _objc_release(uVar5);
    puVar14 = PTR_PTR_1126c3390;
    _objc_alloc();
    uVar5 = uVar2;
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c083e00();
    uVar7 = uVar2;
    func_0x00010c0d7220(uVar2);
    uVar9 = uVar2;
    func_0x00010bf06600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010bf7f0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c071640();
    func_0x00010bffa840(puVar14,param_2,uVar3,uVar5,puVar13,uVar12,uVar6 & 0xffffffff,uVar7,uVar9,
                        uVar10,puVar8,puVar15,(char)uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar13);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar13 = puVar14;
  func_0x00010c25b720();
  if (puVar13 + -1 < (undefined *)0x3) {
    uVar12 = *(undefined8 *)(&UNK_10dee5e58 + (long)(puVar13 + -1) * 8);
  }
  else {
    uVar12 = 3;
  }
  if (4 < uVar1 - 1) {
    uVar1 = 0;
  }
  puVar13 = PTR_PTR_1126c3398;
  _objc_alloc(PTR_PTR_1126c3398);
  uVar2 = param_1;
  func_0x00010bf26940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa8e0(puVar13,param_2,uVar2,uVar1,uVar12,puStack_70,puVar14);
  _objc_release(uVar2);
  _objc_release(puVar14);
  _objc_release(puStack_70);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107d244bc; end: 107d244db;  */

undefined8 FUN_107d244bc(ulong param_1)

{
  if (param_1 < 0x1b) {
    return *(undefined8 *)(&UNK_10dee5e70 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107d244dc; end: 107d24933;  */

void FUN_107d244dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_80;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c26e380();
  lVar2 = param_1;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf93e00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107d24934();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bf4cd00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126d7340;
      _objc_alloc(PTR_PTR_1126d7340);
      lVar5 = lVar3;
      func_0x00010bf4cce0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c086560(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c085300(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003920(puVar11,param_2,lVar5,lVar6,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    puVar12 = PTR_PTR_1126d5170;
    _objc_alloc();
    lVar3 = lVar2;
    func_0x00010c26e3a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052020(puVar12,param_2,lVar3,lVar4,puVar11);
    _objc_release(lVar3);
    _objc_release(puVar11);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c242080();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar2 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107d24934();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_80 = (undefined *)0x0;
    }
    else {
      uStack_80 = PTR_PTR_1126d7948;
      _objc_alloc();
      lVar5 = lVar3;
      func_0x00010c08f8a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c0c3fe0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c0ef4a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010c26d760(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010bfb11c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0225e0(uStack_80,param_2,lVar5,lVar6,lVar7,lVar8,lVar9);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
    lVar5 = lVar2;
    func_0x00010c27dd80();
    FUN_107d244bc();
    puVar11 = PTR_PTR_1126d51f8;
    _objc_alloc(PTR_PTR_1126d51f8);
    lVar6 = lVar2;
    func_0x00010c0c5180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf06600(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf7f0c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25b720();
    if (2 < lVar3 - 1U) {
      lVar3 = 0;
    }
    lVar9 = lVar2;
    func_0x00010c083e00();
    func_0x00010c0d7220();
    func_0x00010c071640();
    func_0x00010c029560(puVar11,param_2,lVar6,lVar7,lVar8,lVar4,lVar5,lVar3,(char)lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uStack_80);
    _objc_release(lVar4);
  }
  if (4 < lVar1 - 1U) {
    lVar1 = 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126d5178;
  _objc_alloc(PTR_PTR_1126d5178);
  lVar2 = param_1;
  func_0x00010bf26940(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bffa8c0(puVar10,param_2,lVar2,lVar1,puVar12,puVar11);
  _objc_release(lVar2);
  _objc_release(puVar11);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107d24934; end: 107d249cf;  */

void FUN_107d24934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d5168;
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    lVar2 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c085300(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c020b60(puVar1,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d249d0; end: 107d2508f;  */

void FUN_107d249d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf5b080(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  lVar8 = lVar3;
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c0ee920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar6 == 0) {
      lVar1 = param_2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf5b080(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010bfebfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      if (lVar7 != 0) {
        lVar8 = lVar7;
        func_0x00010901d7c4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
      }
    }
    else {
      lVar8 = lVar6;
      func_0x00010901d7c4();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
  lVar3 = lVar8;
  func_0x00010c08fa60();
  lVar1 = lVar2;
  if (lVar3 != 0) {
    lVar1 = lVar8;
  }
  _objc_retain(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d25090; end: 107d2649f;  */

void FUN_107d25090(undefined **param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  undefined4 param_10,undefined8 param_11)

{
  char cVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuStack_1b0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_1);
  if (param_3 == 0) {
    _objc_retain(param_2);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_11);
    _objc_retain(param_11);
    _objc_retain(param_1);
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    _objc_retain(param_11);
    _objc_retain(param_1);
    func_0x00010c0bdf40(param_11);
    ppuVar3 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(ppuVar3);
    cVar1 = *(char *)(puStack_90 + 3);
    _objc_release(param_1);
    _objc_release(param_11);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(param_1);
    uVar13 = param_11;
    _objc_release(param_11);
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (cVar1 == '\x01') {
      func_0x000108f5956c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x000107d272d4(param_1,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(uVar13);
    }
    else {
      ppuVar3 = param_1;
      func_0x00010853a5d4();
      if ((int)ppuVar3 == 0) {
        ppuStack_1b0 = param_1;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuStack_1b0;
        func_0x00010c27dd80();
        ppuVar5 = param_1;
        if ((ppuVar3 < (undefined **)0x1b) && ((1L << ((ulong)ppuVar3 & 0x3f) & 0x7e7fc60U) != 0)) {
          func_0x000108544644();
          _objc_release(ppuStack_1b0);
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (1 < (int)ppuVar3 - 0xbU) goto LAB_107d2596c;
          func_0x000107d37500();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107d25690;
        }
        _objc_release(ppuStack_1b0);
LAB_107d2596c:
        ppuVar4 = param_1;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar4;
        func_0x00010c27dd80();
        ppuVar3 = (undefined **)((long)ppuVar14 + 1);
        if (ppuVar3 < (undefined **)0x1c) {
          if ((1L << ((ulong)ppuVar3 & 0x3f) & 0xb4b5dbbU) == 0) {
            uVar2 = 0x484a040;
          }
          else {
            if ((((long)ppuVar14 + 1U < 0x1b) &&
                ((1L << ((long)ppuVar14 + 1U & 0x3f) & 0x6c6bd77U) != 0)) ||
               ((undefined **)0x1a < ppuVar14)) goto LAB_107d259cc;
            uVar2 = 0x7e7fc60;
            ppuVar3 = ppuVar14;
          }
          if ((1L << ((ulong)ppuVar3 & 0x3f) & (ulong)uVar2) == 0) goto LAB_107d259cc;
          _objc_release(ppuVar4);
LAB_107d25af0:
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_retain(param_1);
          ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ea29b8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea29b8,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x000107d272d4(param_1,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
LAB_107d25b40:
          func_0x00010c14de00(ppuVar14);
          _objc_retainAutoreleasedReturnValue();
LAB_107d25b58:
          _objc_release(ppuVar5);
        }
        else {
LAB_107d259cc:
          ppuVar3 = param_1;
          func_0x00010c0c5340();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar3;
          func_0x00010c27dd80();
          _objc_release(ppuVar3);
          _objc_release(ppuVar4);
          if (ppuVar14 == (undefined **)0xa) goto LAB_107d25af0;
          if (param_5 == 0) {
            ppuVar3 = param_1;
            func_0x00010853a704();
            if ((int)ppuVar3 != 0) {
              ppuVar3 = param_1;
              func_0x00010bf5b080();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar3;
              func_0x00010bf5b380();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar5;
              func_0x00010c08fa60();
              ppuVar14 = param_1;
              func_0x00010bf5b080();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_1b0 = ppuVar14;
              if (ppuVar4 == (undefined **)0x0) {
                func_0x00010bf5bc00();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010bf5b380();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(ppuVar14);
              _objc_release(ppuVar5);
              _objc_release(ppuVar3);
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              ppuVar3 = &PTR____CFConstantStringClassReference_110e848f8;
              func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e848f8,0);
              _objc_retainAutoreleasedReturnValue();
LAB_107d25f54:
              ppuVar5 = param_1;
              func_0x000107d272d4(param_1,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00(ppuVar14);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar5);
              _objc_release(ppuVar3);
              goto LAB_107d25b64;
            }
            ppuVar3 = param_1;
            func_0x00010c12fc80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar3;
            func_0x00010853cb54();
            _objc_release(ppuVar3);
            if ((int)ppuVar14 != 0) goto LAB_107d255a4;
            ppuVar3 = param_1;
            func_0x00010c12fc80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar3;
            func_0x00010853cbd8();
            if (((ulong)ppuVar14 & 1) != 0) {
LAB_107d25cf0:
              ppuVar6 = param_1;
              FUN_107d27584(param_1,1);
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar6;
              func_0x00010c083c80();
              _objc_release(ppuVar6);
              if (((ulong)ppuVar14 & 1) == 0) {
                _objc_release(ppuVar4);
              }
              _objc_release(ppuVar3);
              if (((ulong)ppuVar7 & 1) != 0) goto LAB_107d25fe4;
              ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ea28f8;
LAB_107d25d50:
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010bcbeaa8(ppuStack_1b0,0);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_107d25690;
            }
            ppuVar4 = param_1;
            func_0x00010c12fc80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar4;
            func_0x00010853cc5c();
            if (((ulong)ppuVar6 & 1) != 0) goto LAB_107d25cf0;
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
LAB_107d25fe4:
            ppuVar3 = param_1;
            func_0x00010c12fc80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010853cce0();
            if (((ulong)ppuVar4 & 1) == 0) {
              _objc_release(ppuVar3);
            }
            else {
              ppuVar4 = param_1;
              FUN_107d27584(param_1,1);
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar4;
              func_0x00010c083c80();
              _objc_release(ppuVar4);
              _objc_release(ppuVar3);
              if (((ulong)ppuVar14 & 1) == 0) {
                ppuVar3 = param_1;
                func_0x000107d27670();
                if ((int)ppuVar3 != 0) {
                  uVar13 = 1;
                  goto LAB_107d25a24;
                }
                ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ea2958;
                goto LAB_107d25d50;
              }
            }
            ppuVar3 = param_1;
            func_0x00010c247520();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c247520();
            if (ppuVar4 == (undefined **)0x1) {
              ppuVar4 = param_1;
              func_0x00010c247520();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar4;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar14;
              func_0x00010c08fa60();
              _objc_release(ppuVar14);
              _objc_release(ppuVar4);
              _objc_release(ppuVar3);
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (ppuVar6 != (undefined **)0x0) {
                ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ea28d8;
                func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea28d8,0);
                _objc_retainAutoreleasedReturnValue();
                ppuVar4 = param_1;
                func_0x000107d272d4(param_1,1);
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = param_1;
                func_0x00010c247520();
                _objc_retainAutoreleasedReturnValue();
                ppuVar5 = ppuVar3;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c14de00(ppuVar14);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_107d25aa8;
              }
            }
            else {
              _objc_release(ppuVar3);
            }
            ppuVar3 = param_1;
            func_0x00010bf5b080();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c235f00();
            if ((int)ppuVar4 == 0) {
LAB_107d262f4:
              _objc_release(ppuVar3);
LAB_107d262fc:
              ppuStack_1b0 = param_1;
              func_0x000109017d14();
              ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              if ((int)ppuStack_1b0 == 0) {
                ppuStack_1b0 = param_1;
                func_0x000109017e34();
                ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                if ((int)ppuStack_1b0 == 0) {
                  ppuVar3 = param_1;
                  func_0x00010853a4a8();
                  if (((ulong)ppuVar3 & 1) != 0) {
                    ppuVar14 = (undefined **)0x0;
                    goto LAB_107d25b70;
                  }
                  ppuVar3 = param_1;
                  func_0x00010853a378();
                  if ((int)ppuVar3 != 0) {
                    ppuStack_1b0 = param_1;
                    func_0x00010853bc60();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar3 = ppuStack_1b0;
                    func_0x00010c08fa60();
                    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                    if (ppuVar3 != (undefined **)0x0) {
                      ppuVar3 = &PTR____CFConstantStringClassReference_110e5acf8;
                      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5acf8,0);
                      _objc_retainAutoreleasedReturnValue();
                      goto LAB_107d25f54;
                    }
                    _objc_release(ppuStack_1b0);
                  }
                  ppuVar3 = param_1;
                  func_0x000107d27458();
                  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                  if ((int)ppuVar3 != 0) {
                    ppuVar3 = &PTR____CFConstantStringClassReference_110ea28d8;
                    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea28d8,0);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x000107d272d4(param_1,1);
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar4 = ppuVar5;
                    if ((param_9 & 1) == 0) {
                      func_0x000108f5833c();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      func_0x000108f58354();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    func_0x00010c14de00(ppuVar14);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar4);
                    _objc_release(ppuVar5);
                    _objc_release(ppuVar3);
                    goto LAB_107d25b70;
                  }
                  uVar13 = 1;
                  goto LAB_107d25c74;
                }
                func_0x000108f589b4();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x000108f589cc();
                _objc_retainAutoreleasedReturnValue();
              }
LAB_107d25690:
              func_0x000107d272d4(param_1,1);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_107d25b40;
            }
            ppuVar4 = param_1;
            func_0x00010bf5b080();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar4;
            func_0x00010bf5b380();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar14;
            func_0x00010c08fa60();
            if (ppuVar6 == (undefined **)0x0) {
              _objc_release(ppuVar14);
              _objc_release(ppuVar4);
              goto LAB_107d262f4;
            }
            uVar11 = param_2;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = param_1;
            func_0x00010bf5b080(param_1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar6;
            func_0x00010bf5b380();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c0720c0();
            _objc_release(ppuVar7);
            _objc_release(ppuVar6);
            _objc_release(uVar11);
            _objc_release(ppuVar14);
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
            ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((uVar12 & 1) != 0) goto LAB_107d262fc;
            ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e848f8;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e848f8,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x000107d272d4(param_1,1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = param_1;
            func_0x00010bf5b080();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010bf5b380();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(ppuVar14);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
            goto LAB_107d25b58;
          }
          ppuVar3 = param_1;
          func_0x000107d27670();
          if ((int)ppuVar3 == 0) {
            uVar13 = 0;
LAB_107d25c74:
            ppuVar14 = param_1;
            func_0x000107d272d4(param_1,uVar13);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_107d25b70;
          }
          uVar13 = 0;
LAB_107d25a24:
          ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
          ppuStack_1b0 = param_1;
          FUN_107d27584(param_1,uVar13);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = &PTR____CFConstantStringClassReference_110ea2918;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2918,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = &PTR____CFConstantStringClassReference_110ea2938;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2938,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241120(ppuVar14);
          _objc_retainAutoreleasedReturnValue();
LAB_107d25aa8:
          _objc_release(ppuVar5);
          _objc_release(ppuVar3);
          _objc_release(ppuVar4);
        }
LAB_107d25b64:
        _objc_release(ppuStack_1b0);
      }
      else {
LAB_107d255a4:
        ppuVar14 = param_1;
        func_0x000107d272d4(param_1,1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
LAB_107d25b70:
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_2);
    _objc_release(param_1);
    goto LAB_107d25ba8;
  }
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar5 = param_1;
  func_0x000107d272d4(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  uVar13 = param_4;
  func_0x00010c0720c0();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar13 == 0) {
    ppuVar14 = param_1;
    FUN_107d249d0(param_1,param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar6 = &PTR____CFConstantStringClassReference_110eb95b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb95b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  else {
    ppuVar14 = &PTR____CFConstantStringClassReference_110eb9598;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb9598,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar14);
  ppuVar6 = param_1;
  func_0x000107d27458();
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)ppuVar6 == 0) {
    ppuVar6 = param_1;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c27dd80();
    if ((ppuVar7 < (undefined **)0x1b) && ((1L << ((ulong)ppuVar7 & 0x3f) & 0x7e7fc60U) != 0)) {
      func_0x000108544644();
      _objc_release(ppuVar6);
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (1 < (int)ppuVar7 - 0xbU) goto LAB_107d256bc;
      func_0x000107d37500();
      _objc_retainAutoreleasedReturnValue();
LAB_107d257cc:
      func_0x00010c14de00(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_release(ppuVar6);
LAB_107d256bc:
      ppuVar6 = param_1;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c27dd80();
      ppuVar14 = (undefined **)((long)ppuVar7 + 1);
      if (ppuVar14 < (undefined **)0x1c) {
        if ((1L << ((ulong)ppuVar14 & 0x3f) & 0xb4b5dbbU) == 0) {
          uVar2 = 0x484a040;
        }
        else {
          if ((((long)ppuVar7 + 1U < 0x1b) &&
              ((1L << ((long)ppuVar7 + 1U & 0x3f) & 0x6c6bd77U) != 0)) ||
             ((undefined **)0x1a < ppuVar7)) goto LAB_107d2571c;
          uVar2 = 0x7e7fc60;
          ppuVar14 = ppuVar7;
        }
        if ((1L << ((ulong)ppuVar14 & 0x3f) & (ulong)uVar2) == 0) goto LAB_107d2571c;
        _objc_release(ppuVar6);
LAB_107d257b0:
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar6 = &PTR____CFConstantStringClassReference_110ea29b8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea29b8,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107d257cc;
      }
LAB_107d2571c:
      ppuVar14 = param_1;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar14;
      func_0x00010c27dd80();
      _objc_release(ppuVar14);
      _objc_release(ppuVar6);
      if (ppuVar7 == (undefined **)0xa) goto LAB_107d257b0;
      ppuVar14 = param_1;
      func_0x00010c12fc80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar14;
      func_0x00010853cb54();
      _objc_release(ppuVar14);
      if ((int)ppuVar6 != 0) {
LAB_107d25780:
        _objc_retain(ppuVar3);
        ppuVar14 = ppuVar3;
        goto LAB_107d257fc;
      }
      ppuVar14 = param_1;
      func_0x00010c12fc80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar14;
      func_0x00010853cbd8();
      if ((int)ppuVar6 != 0) {
        _objc_release(ppuVar14);
LAB_107d25890:
        ppuVar6 = &PTR____CFConstantStringClassReference_110ea28f8;
LAB_107d2589c:
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bcbeaa8(ppuVar6,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        goto LAB_107d257fc;
      }
      ppuVar6 = param_1;
      func_0x00010c12fc80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010853cc5c();
      _objc_release(ppuVar6);
      _objc_release(ppuVar14);
      if ((int)ppuVar7 != 0) goto LAB_107d25890;
      ppuVar14 = param_1;
      func_0x00010c12fc80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar14;
      func_0x00010853cce0();
      if (((ulong)ppuVar6 & 1) != 0) {
        ppuVar6 = param_1;
        FUN_107d27584(param_1,1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010c083c80();
        _objc_release(ppuVar6);
        _objc_release(ppuVar14);
        if (((ulong)ppuVar7 & 1) != 0) goto LAB_107d25d6c;
        ppuVar6 = &PTR____CFConstantStringClassReference_110ea2958;
        goto LAB_107d2589c;
      }
      _objc_release(ppuVar14);
LAB_107d25d6c:
      ppuVar14 = param_1;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar14;
      func_0x00010c247520();
      _objc_release(ppuVar14);
      if (ppuVar6 != (undefined **)0x1) {
LAB_107d25fb4:
        ppuVar6 = param_1;
        func_0x000109017e34();
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((int)ppuVar6 != 0) {
          func_0x000108f589b4();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107d257cc;
        }
        goto LAB_107d25780;
      }
      ppuVar6 = param_1;
      func_0x000107d272d4(param_1,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_1;
      FUN_107d249d0(param_1,param_7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = param_1;
      func_0x00010c247520();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar14;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar8;
      func_0x00010c08fa60();
      if ((ppuVar14 == (undefined **)0x0) ||
         (ppuVar9 = ppuVar7, func_0x00010c08fa60(),
         ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0, ppuVar9 == (undefined **)0x0
         )) {
        ppuVar9 = ppuVar7;
        func_0x00010c08fa60();
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar9 == (undefined **)0x0) {
          _objc_release(ppuVar8);
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
          goto LAB_107d25fb4;
        }
        ppuVar9 = &PTR____CFConstantStringClassReference_110e848f8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e848f8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = param_1;
        func_0x000107d272d4(param_1,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
      }
      else {
        func_0x000108f582dc();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar6);
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110ea28d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea28d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_1;
    func_0x000107d272d4(param_1,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    if ((param_9 & 1) == 0) {
      func_0x000108f5833c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108f58354();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
  }
LAB_107d257fc:
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_1);
LAB_107d25ba8:
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return;
}



/* Entry: 107d264a0; end: 107d265e3;  */

void FUN_107d264a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar4 = puVar3;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar5;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,param_1,puVar7);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  iVar2 = (int)puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uVar1 = 0x7b;
    if (iVar2 == 0) {
      uVar1 = 0xd5;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d265e4; end: 107d2668b;  */

void FUN_107d265e4(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x7b;
  if (param_1 == 0) {
    uVar1 = 0xd5;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d2668c; end: 107d2669b;  */

void FUN_107d2668c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107d2669c; end: 107d267cf;  */

void FUN_107d2669c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    if (param_2 != 0) {
      puVar3 = PTR_PTR_1126b0c40;
      func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107d267a8;
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010c27dd80();
    if (lVar1 - 2U < 9) {
      puVar3 = (&PTR_PTR_110a09210)[lVar1 - 2U];
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      func_0x00010bfcc380(param_2);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c2bb380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c2a8240(uStack_40,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      goto LAB_107d267a8;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_107d267a8:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d267d0; end: 107d26c27;  */

void FUN_107d267d0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    puVar4 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c0ee940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar4);
    if (puVar14 != (undefined *)0x0) goto LAB_107d26970;
    puVar4 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010bfebfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar4);
    if (puVar14 != (undefined *)0x0) goto LAB_107d26970;
    lVar1 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      puVar14 = (undefined *)0x0;
      goto LAB_107d26970;
    }
    puVar4 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    lVar1 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf5b080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf1ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar14 = PTR_PTR_1126b15c8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf5b1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c0e0(puVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar4 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
LAB_107d26970:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107d26c28; end: 107d26cdf;  */

void FUN_107d26c28(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(ppuVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d26ce0; end: 107d27013;  */

void FUN_107d26ce0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar5 = PTR____kCFBooleanTrue_11034ab68;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f0dc78;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f0dd98;
  puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
  puStack_c8 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f0ea38;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f0ea58;
  puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
  puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f0ea78;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar11 = param_2;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ebe8f8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar2;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f0ea98;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar3;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar5;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0eab8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ebe918;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar4;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ebe938;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ebe958;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar6;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0ead8;
  uVar1 = (uint)param_2 ^ 1;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar7;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010c1d0640(puVar10);
    func_0x00010c1d0640(puVar10);
    func_0x00010c1d0640(puVar10);
    func_0x00010c1d0640(puVar10);
    puVar3 = PTR_PTR_1126b2d20;
    func_0x00010c27fe20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar10);
    _objc_release(puVar3);
  }
  puVar5 = puVar10;
  func_0x00010bf51e00();
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107d27014;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f0ea78;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_150 = puVar3;
    puStack_148 = puVar5;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ebe8f8;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110f0ead8;
    puStack_178 = PTR____kCFBooleanTrue_11034ab68;
    puStack_170 = PTR____kCFBooleanFalse_11034ab60;
    puStack_168 = PTR____kCFBooleanTrue_11034ab68;
    ppuStack_190 = &PTR____CFConstantStringClassReference_110f0ea58;
    ppuStack_188 = &PTR____CFConstantStringClassReference_110ebe8d8;
    puStack_160 = PTR____kCFBooleanTrue_11034ab68;
    ppuVar12 = &puStack_180;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_180 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      pcStack_1b8 = FUN_107d27110;
      uStack_1e0 = (ulong)uVar1;
      puStack_1d8 = puVar10;
      puStack_1d0 = puVar2;
      puStack_1c8 = puVar5;
      ppuStack_1c0 = &puStack_140;
      _objc_retain(uVar11);
      _objc_retain(ppuVar12);
      puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_208 = 0xc2000000;
      pcStack_200 = FUN_107d271c8;
      puStack_1f8 = &UNK_110a090c0;
      uStack_1f0 = uVar11;
      ppuStack_1e8 = ppuVar12;
      _objc_retain(ppuVar12);
      _objc_retain(uVar11);
      func_0x000100504554(puVar3,&puStack_210);
      _objc_release(ppuStack_1e8);
      _objc_release(uStack_1f0);
      _objc_release(ppuVar12);
      _objc_release(uVar11);
      puVar5 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d27014; end: 107d2710f;  */

void FUN_107d27014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR____kCFBooleanTrue_11034ab68;
  puStack_40 = PTR____kCFBooleanFalse_11034ab60;
  puStack_38 = PTR____kCFBooleanTrue_11034ab68;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar3 = &puStack_50;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(ppuVar3);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_107d271c8;
    puStack_c8 = &UNK_110a090c0;
    uStack_c0 = param_2;
    ppuStack_b8 = ppuVar3;
    _objc_retain(ppuVar3);
    _objc_retain(param_2);
    func_0x000100504554(puVar1,&puStack_e0);
    _objc_release(ppuStack_b8);
    _objc_release(uStack_c0);
    _objc_release(ppuVar3);
    _objc_release(param_2);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d27110; end: 107d271c7;  */

void FUN_107d27110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107d271c8;
  puStack_48 = &UNK_110a090c0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100504554(param_1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107d271c8; end: 107d27583;  */

void FUN_107d271c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar3 == 0) {
    func_0x00010c0b3280(*(undefined8 *)(param_1 + 0x28));
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d5e90;
    _objc_alloc(PTR_PTR_1126d5e90);
    func_0x00010c151b40(param_2);
    func_0x00010c14b7c0(param_2);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c29e5a0(param_2);
    func_0x00010bf651a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0427a0(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d27584; end: 107d277c7;  */

void FUN_107d27584(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_1;
  if ((param_2 == 0) || (lVar2 == 0)) {
    func_0x00010c26f2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010c1058a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c12fc80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar1;
    func_0x00010bfb73c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf5a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d277c8; end: 107d277f7;  */

void FUN_107d277c8(long param_1,undefined1 param_2)

{
  func_0x00010c073b60();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107d277f8; end: 107d2786b;  */

void FUN_107d277f8(void)

{
  return;
}



/* Entry: 107d2786c; end: 107d278af;  */

undefined * FUN_107d2786c(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ce808;
  func_0x00010c29d4a0(PTR_PTR_1126ce808);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 107d278b0; end: 107d2791f;  */

undefined * FUN_107d278b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  if (param_3 == 1) {
    puVar1 = (undefined *)0x1;
  }
  else if (param_3 == 2) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ce808;
    func_0x00010c29d4a0(PTR_PTR_1126ce808);
  }
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 107d27920; end: 107d27dff;  */

undefined **
FUN_107d27920(undefined *param_1,ulong param_2,ulong param_3,undefined8 param_4,int param_5,
             long param_6,undefined ***param_7,ulong param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  undefined **ppuVar22;
  undefined ***pppuVar23;
  int iVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puVar27;
  undefined ***pppuVar28;
  uint uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  ulong uStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined ***pppuStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  uint uStack_334;
  undefined **ppuStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  ulong uStack_318;
  undefined **ppuStack_310;
  ulong uStack_308;
  undefined *puStack_300;
  undefined ***pppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined ***pppuStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_298;
  long lStack_210;
  undefined1 *puStack_190;
  code *pcStack_188;
  byte bStack_180;
  uint uStack_178;
  int iStack_174;
  undefined *puStack_170;
  undefined4 uStack_168;
  int iStack_164;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar27 = param_1;
  }
  _objc_retain(puVar27);
  _objc_release(param_1);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce808;
  func_0x00010c29d4a0();
  if ((int)puVar2 != 0) {
    func_0x000108f4a4d4(param_3);
  }
  _objc_release(param_3);
  iStack_164 = param_5;
  if (param_6 == 1) {
    uVar29 = 1;
  }
  else if (param_6 == 2) {
    uVar29 = 0;
  }
  else {
    _objc_retain(param_3);
    puVar2 = PTR_PTR_1126ce808;
    func_0x00010c29d4a0();
    uVar29 = (uint)puVar2;
    _objc_release(param_3);
  }
  uStack_158 = param_3;
  FUN_107d278b0(param_3,param_2,param_6);
  iStack_174 = (int)param_3;
  puVar2 = PTR_PTR_1126ce808;
  func_0x00010c29d4a0();
  dVar33 = 1.0;
  if ((int)puVar2 == 0) {
    dVar33 = 0.0;
  }
  dVar32 = (double)(int)-(~uVar29 & 1);
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f0e2b8;
  _objc_opt_class(PTR_PTR_1126b3b00);
  puVar2 = puVar27;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar2;
  _objc_release(puVar27);
  ppuStack_148 = &PTR____CFConstantStringClassReference_110eb9618;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110eb9678;
  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_160 = param_4;
  puStack_e8 = puVar2;
  uStack_e0 = param_4;
  func_0x00010c0df720(dVar33);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f0d5f8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar27;
  func_0x00010c0df720(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f0d618;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f0d838;
  puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ebe7f8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar2;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f0d638;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = puVar3;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ebe7d8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar4;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ebe858;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_178 = uVar29;
  puStack_a8 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ebe878;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  dVar30 = dVar32;
  puStack_a0 = puVar6;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantArray_111181aa8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0d858;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0d658;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar7;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = &puStack_e8;
  ppuVar20 = (undefined **)&ppuStack_150;
  uVar21 = 0xd;
  ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar27);
  _objc_release(puStack_170);
  if (((iStack_164 == 0) || (iStack_174 == 0)) || (uStack_178 == 0)) {
    _objc_retain(ppuVar22);
    ppuVar10 = ppuVar22;
  }
  else {
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    func_0x00010c1d0640();
    func_0x00010c1d0640(ppuVar9);
    dVar30 = 0.3;
    puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = &PTR____CFConstantStringClassReference_110ebe898;
    func_0x00010c1d0640(ppuVar9);
    _objc_release(puVar27);
    ppuVar18 = ppuVar22;
    func_0x00010bef7f60(ppuVar9);
    ppuVar10 = ppuVar9;
    func_0x00010bf51e00();
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar22);
  _objc_release(uStack_160);
  uVar11 = uStack_158;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar2 = puStack_170;
  pcStack_188 = FUN_107d27e00;
  pppuStack_2e8 = (undefined ***)CONCAT44(pppuStack_2e8._4_4_,uVar21);
  ppuVar9 = (undefined **)CONCAT44(iStack_164,uStack_168);
  ppuVar22 = (undefined **)CONCAT44(iStack_174,uStack_178);
  puVar27 = (undefined *)(ulong)bStack_180;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2f8 = param_7;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(ppuVar20);
  _objc_retain(ppuVar9);
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar13 = param_2;
  uVar19 = uVar11;
  func_0x0001085356d8(param_2,uVar11);
  if ((uVar13 & 1) == 0) {
LAB_107d27f1c:
    ppuVar10 = ppuVar12;
    func_0x00010bf51e00();
  }
  else {
    puStack_300 = puVar2;
    uVar19 = uVar11;
    ppuStack_2f0 = ppuVar12;
    func_0x000108f4af24(param_2,uVar11);
    dVar31 = dVar30;
    if (0.0 < SUB84(dVar30,0)) {
      pppuVar14 = (undefined ***)ppuVar20;
      dVar33 = dVar30;
      func_0x00010c26f2a0(ppuVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      dVar31 = dVar33;
      _objc_release(pppuVar14);
      dVar32 = dVar30;
      if ((bStack_180 != 0) &&
         (dVar31 = (double)SUB84(dVar30,0), ppuVar12 = ppuStack_2f0, dVar33 < dVar31))
      goto LAB_107d27f1c;
    }
    puVar27 = PTR_PTR_1126b3af0;
    _objc_alloc();
    func_0x00010c054900();
    if (ppuVar22 == (undefined **)0x0) {
      pppuVar14 = (undefined ***)ppuVar20;
      func_0x00010853a5d4();
      ppuVar22 = (undefined **)((ulong)pppuVar14 & 0xffffffff);
    }
    ppuVar12 = ppuStack_2f0;
    if (((int)pppuStack_2e8 != 0) &&
       ((uVar13 = uVar11, func_0x000108f4b9b8(), (uVar13 & 1) != 0 ||
        ((uVar11 - 0x49 < 0x1d && ((1L << (uVar11 - 0x49 & 0x3f) & 0x12002001U) != 0)))))) {
      pppuVar14 = (undefined ***)ppuVar20;
      func_0x00010c26f2a0(ppuVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      uStack_334 = (uint)param_8;
      pppuVar15 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      ppuStack_330 = ppuVar9;
      puStack_320 = puVar27;
      if (dVar31 <= 5.0) {
        iVar24 = 1;
LAB_107d28054:
        _objc_opt_new();
LAB_107d28060:
        dVar32 = dVar31 / (double)(iVar24 + 1);
        dVar33 = 1.0;
        dVar30 = 1.0;
        do {
          puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(dVar32 * dVar30,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(pppuVar15);
          _objc_release(puVar27);
          dVar30 = dVar30 + 1.0;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      else {
        if (dVar31 <= 10.0) {
          iVar24 = 2;
          goto LAB_107d28054;
        }
        if (dVar31 <= 20.0) {
          iVar24 = 3;
          goto LAB_107d28054;
        }
        if (dVar31 <= 30.0) {
          iVar24 = 4;
          goto LAB_107d28054;
        }
        if (dVar31 <= 60.0) {
          iVar24 = 5;
          goto LAB_107d28054;
        }
        iVar24 = (int)(dVar31 / 10.0);
        _objc_opt_new();
        dVar32 = dVar31;
        if (0 < iVar24) goto LAB_107d28060;
      }
      ppuStack_310 = ppuVar22;
      uStack_308 = uVar11;
      _objc_release(pppuVar14);
      _objc_retain(pppuVar15);
      uStack_318 = param_2;
      func_0x000108f4a29c();
      ppuVar18 = ppuStack_2f0;
      pppuVar14 = pppuVar15;
      if ((int)param_2 != 0) {
        pppuVar28 = (undefined ***)ppuVar20;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        pppuVar23 = pppuVar28;
        func_0x00010bf529e0();
        _objc_release(pppuVar28);
        if (pppuVar23 != (undefined ***)0x0) {
          pppuVar14 = (undefined ***)ppuVar20;
          func_0x00010c26fe00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar15);
          func_0x00010c1d0640(ppuVar18);
        }
      }
      pppuStack_2f8 = (undefined ***)&PTR____CFConstantStringClassReference_110ed3a78;
      func_0x00010c1d0640(ppuVar18);
      pppuStack_2e8 = (undefined ***)ppuVar20;
      func_0x00010bf3cf60(ppuVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(pppuVar14);
      puVar27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      dVar30 = 0.0;
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      _objc_retain(pppuVar14);
      pppuVar28 = pppuVar14;
      func_0x00010bf52a60();
      if (pppuVar28 != (undefined ***)0x0) {
        lVar26 = *plStack_2d0;
        do {
          pppuVar23 = (undefined ***)0x0;
          do {
            if (*plStack_2d0 != lVar26) {
              _objc_enumerationMutation(pppuVar14);
            }
            uVar25 = *(undefined8 *)(lStack_2d8 + (long)pppuVar23 * 8);
            puVar2 = PTR_PTR_1126d53e0;
            _objc_alloc(PTR_PTR_1126d53e0);
            func_0x00010bf885a0(uVar25);
            func_0x00010c030d20(puVar2);
            func_0x00010befa120(puVar27);
            _objc_release(puVar2);
            pppuVar23 = (undefined ***)((long)pppuVar23 + 1);
          } while (pppuVar28 != pppuVar23);
          pppuVar28 = pppuVar14;
          func_0x00010bf52a60();
        } while (pppuVar28 != (undefined ***)0x0);
      }
      _objc_release(pppuVar14);
      puVar2 = PTR_PTR_1126d53e8;
      _objc_alloc();
      func_0x00010c010d80();
      _objc_release(puVar27);
      _objc_release(pppuVar14);
      _objc_release(ppuVar20);
      puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_340 = puVar2;
      puStack_298 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar27;
      func_0x00010c0d3c80();
      puStack_328 = puVar2;
      _objc_release(puVar27);
      param_2 = uStack_318;
      uVar11 = uStack_318;
      func_0x000108f4a29c();
      ppuVar20 = (undefined **)pppuStack_2e8;
      ppuVar12 = ppuStack_2f0;
      puVar27 = puStack_320;
      if ((int)uVar11 != 0) {
        pppuVar28 = pppuStack_2e8;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        pppuVar23 = pppuVar28;
        func_0x00010bf529e0();
        if (pppuVar23 != (undefined ***)0x0) {
          if (uStack_308 == 0x56) {
            uVar11 = param_2;
            func_0x000108f4b6d8();
            _objc_release(pppuVar28);
            if ((int)uVar11 == 0) goto LAB_107d2854c;
          }
          else {
            _objc_release(pppuVar28);
          }
          pppuVar28 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          pppuVar23 = (undefined ***)ppuVar20;
          pppuStack_2f8 = pppuVar28;
          func_0x00010c26fe00();
          _objc_retainAutoreleasedReturnValue();
          pppuVar28 = pppuVar23;
          func_0x00010bf529e0();
          _objc_release(pppuVar23);
          if (pppuVar28 != (undefined ***)0x0) {
            pppuVar28 = (undefined ***)0x0;
            pppuVar23 = (undefined ***)ppuVar20;
            do {
              dVar32 = dVar30;
              puVar2 = PTR_PTR_1126d53e0;
              _objc_alloc(PTR_PTR_1126d53e0);
              func_0x00010c26fe00(pppuVar23);
              _objc_retainAutoreleasedReturnValue();
              pppuVar16 = pppuVar23;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              pppuVar17 = pppuStack_2e8;
              func_0x00010c15f2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df760();
              _objc_retainAutoreleasedReturnValue();
              pppuStack_350 = pppuVar17;
              puStack_348 = puVar3;
              func_0x00010c14de00(puVar27);
              _objc_retainAutoreleasedReturnValue();
              dVar30 = dVar32;
              func_0x00010c030d20(puVar2);
              func_0x00010befa120(pppuStack_2f8);
              _objc_release(puVar2);
              _objc_release(puVar27);
              _objc_release(puVar3);
              _objc_release(pppuVar17);
              ppuVar20 = (undefined **)pppuStack_2e8;
              _objc_release(pppuVar16);
              _objc_release(pppuVar23);
              pppuVar28 = (undefined ***)((long)pppuVar28 + 1);
              pppuVar23 = (undefined ***)ppuVar20;
              func_0x00010c26fe00();
              _objc_retainAutoreleasedReturnValue();
              pppuVar16 = pppuVar23;
              func_0x00010bf529e0();
              _objc_release(pppuVar23);
              pppuVar23 = (undefined ***)ppuVar20;
            } while (pppuVar28 < pppuVar16);
          }
          pppuVar28 = pppuStack_2f8;
          pppuVar23 = pppuStack_2f8;
          func_0x00010bf529e0();
          ppuVar12 = ppuStack_2f0;
          param_2 = uStack_318;
          puVar27 = puStack_320;
          if (pppuVar23 != (undefined ***)0x0) {
            puVar27 = PTR_PTR_1126d53e8;
            _objc_alloc(PTR_PTR_1126d53e8);
            puVar2 = PTR_PTR_1126c9d08;
            func_0x00010befdf80(PTR_PTR_1126c9d08);
            _objc_retainAutoreleasedReturnValue();
            pppuVar23 = pppuVar28;
            func_0x00010bf51e00(pppuVar28);
            func_0x00010c010d80(puVar27);
            _objc_release(pppuVar23);
            _objc_release(puVar2);
            func_0x00010c066b00(puStack_328);
            ppuVar12 = ppuStack_2f0;
            func_0x00010c1d0640(ppuStack_2f0);
            _objc_release(puVar27);
            param_2 = uStack_318;
            puVar27 = puStack_320;
          }
        }
        _objc_release(pppuVar28);
      }
LAB_107d2854c:
      ppuVar22 = ppuStack_310;
      puVar2 = puStack_328;
      func_0x00010c1d0640(ppuVar12);
      func_0x00010c1d0640(ppuVar12);
      uVar11 = param_2;
      FUN_107d278b0(param_2,uStack_308,ppuVar22);
      if ((uVar11 & 1) == 0) {
        func_0x00010c1d0640(ppuVar12);
      }
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar2);
      _objc_release(puStack_340);
      _objc_release(pppuVar14);
      _objc_release(pppuVar15);
      param_8 = (ulong)uStack_334;
      ppuVar9 = ppuStack_330;
      uVar11 = uStack_308;
    }
    ppuVar18 = ppuVar12;
    uVar19 = uVar11;
    FUN_107d27920(ppuVar12,uVar11,param_2,puVar27,param_8,ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(ppuVar12);
    _objc_release(ppuVar18);
    ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar22;
    func_0x00010c1d0640(ppuVar12);
    _objc_release(ppuVar22);
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar18 = ppuVar9;
      func_0x00010c1d0640(ppuVar12);
    }
    ppuVar10 = ppuVar12;
    func_0x00010bf51e00();
    _objc_release(puVar27);
    ppuVar22 = ppuVar12;
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar9);
  _objc_release(ppuVar20);
  uVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
    ___stack_chk_fail();
    pcStack_358 = FUN_107d28710;
    dStack_3b0 = dVar33;
    dStack_3a8 = dVar32;
    uStack_3a0 = uVar11;
    uStack_398 = param_8;
    puStack_390 = puVar27;
    ppuStack_388 = ppuVar10;
    uStack_380 = param_2;
    ppuStack_378 = ppuVar9;
    ppuStack_370 = ppuVar22;
    ppuStack_368 = ppuVar12;
    ppuStack_360 = &puStack_190;
    _objc_retain();
    _objc_retain(ppuVar18);
    puStack_3c8 = &uStack_3d0;
    uStack_3d0 = 0;
    uStack_3c0 = 0x2020000000;
    uStack_3b8 = 0;
    _objc_retain(uVar13);
    _objc_retain(ppuVar18);
    _objc_retain(uVar13);
    _objc_retain(ppuVar18);
    _objc_retain(uVar13);
    _objc_retain(ppuVar18);
    _objc_retain(uVar13);
    func_0x00010c0bdf40(uVar19);
    bVar1 = *(byte *)(puStack_3c8 + 3);
    _objc_release(ppuVar18);
    _objc_release(uVar13);
    _objc_release(uVar13);
    _objc_release(ppuVar18);
    _objc_release(uVar13);
    _objc_release(ppuVar18);
    _objc_release(uVar13);
    _objc_release(ppuVar18);
    _objc_release(uVar13);
    __Block_object_dispose(&uStack_3d0,8);
    return (undefined **)(ulong)bVar1;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return ppuVar10;
}



/* Entry: 107d27e00; end: 107d2870f;  */

undefined *
FUN_107d27e00(double param_1,ulong param_2,ulong param_3,undefined *param_4,undefined **param_5,
             undefined4 param_6,undefined8 param_7,undefined **param_8,ulong param_9,byte param_10,
             undefined4 param_11,undefined *param_12,undefined8 param_13,undefined *param_14)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  double dVar16;
  double unaff_d8;
  double unaff_d9;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  double dStack_230;
  double dStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  uint uStack_1b4;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  long lStack_90;
  
  ppuStack_168 = (undefined **)CONCAT44(ppuStack_168._4_4_,param_6);
  puVar14 = (undefined *)(ulong)param_10;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_178 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_14);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar3 = param_3;
  uVar9 = param_2;
  func_0x0001085356d8(param_3,param_2);
  if ((uVar3 & 1) == 0) {
LAB_107d27f1c:
    puVar8 = puVar2;
    func_0x00010bf51e00();
    goto LAB_107d286a8;
  }
  uStack_180 = param_13;
  uVar9 = param_2;
  puStack_170 = puVar2;
  func_0x000108f4af24(param_3,param_2);
  dVar16 = param_1;
  if (0.0 < SUB84(param_1,0)) {
    ppuVar4 = param_5;
    unaff_d9 = param_1;
    func_0x00010c26f2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    dVar16 = unaff_d9;
    _objc_release(ppuVar4);
    unaff_d8 = param_1;
    if ((param_10 != 0) &&
       (dVar16 = (double)SUB84(param_1,0), puVar2 = puStack_170, unaff_d9 < dVar16))
    goto LAB_107d27f1c;
  }
  puVar14 = PTR_PTR_1126b3af0;
  _objc_alloc();
  func_0x00010c054900();
  if (param_12 == (undefined *)0x0) {
    ppuVar4 = param_5;
    func_0x00010853a5d4();
    param_12 = (undefined *)((ulong)ppuVar4 & 0xffffffff);
  }
  puVar2 = puStack_170;
  if (((int)ppuStack_168 != 0) &&
     ((uVar3 = param_2, func_0x000108f4b9b8(), (uVar3 & 1) != 0 ||
      ((param_2 - 0x49 < 0x1d && ((1L << (param_2 - 0x49 & 0x3f) & 0x12002001U) != 0)))))) {
    ppuVar4 = param_5;
    func_0x00010c26f2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    puStack_1b0 = param_14;
    uStack_1b4 = (uint)param_9;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_1a0 = puVar14;
    if (dVar16 <= 5.0) {
      iVar11 = 1;
LAB_107d28054:
      _objc_opt_new();
LAB_107d28060:
      unaff_d8 = dVar16 / (double)(iVar11 + 1);
      unaff_d9 = 1.0;
      dVar16 = 1.0;
      do {
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(unaff_d8 * dVar16,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar5);
        _objc_release(puVar14);
        dVar16 = dVar16 + 1.0;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    else {
      if (dVar16 <= 10.0) {
        iVar11 = 2;
        goto LAB_107d28054;
      }
      if (dVar16 <= 20.0) {
        iVar11 = 3;
        goto LAB_107d28054;
      }
      if (dVar16 <= 30.0) {
        iVar11 = 4;
        goto LAB_107d28054;
      }
      if (dVar16 <= 60.0) {
        iVar11 = 5;
        goto LAB_107d28054;
      }
      iVar11 = (int)(dVar16 / 10.0);
      _objc_opt_new();
      unaff_d8 = dVar16;
      if (0 < iVar11) goto LAB_107d28060;
    }
    puStack_190 = param_12;
    uStack_188 = param_2;
    _objc_release(ppuVar4);
    _objc_retain(ppuVar5);
    uStack_198 = param_3;
    func_0x000108f4a29c();
    puVar14 = puStack_170;
    ppuVar4 = ppuVar5;
    if ((int)param_3 != 0) {
      ppuVar15 = param_5;
      func_0x00010c26fe00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar15;
      func_0x00010bf529e0();
      _objc_release(ppuVar15);
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar4 = param_5;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        func_0x00010c1d0640(puVar14);
      }
    }
    ppuStack_178 = &PTR____CFConstantStringClassReference_110ed3a78;
    func_0x00010c1d0640(puVar14);
    ppuStack_168 = param_5;
    func_0x00010bf3cf60(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar4);
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar16 = 0.0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(ppuVar4);
    ppuVar15 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar15 != (undefined **)0x0) {
      lVar13 = *plStack_150;
      do {
        ppuVar10 = (undefined **)0x0;
        do {
          if (*plStack_150 != lVar13) {
            _objc_enumerationMutation(ppuVar4);
          }
          uVar12 = *(undefined8 *)(lStack_158 + (long)ppuVar10 * 8);
          puVar2 = PTR_PTR_1126d53e0;
          _objc_alloc(PTR_PTR_1126d53e0);
          func_0x00010bf885a0(uVar12);
          func_0x00010c030d20(puVar2);
          func_0x00010befa120(puVar14);
          _objc_release(puVar2);
          ppuVar10 = (undefined **)((long)ppuVar10 + 1);
        } while (ppuVar15 != ppuVar10);
        ppuVar15 = ppuVar4;
        func_0x00010bf52a60();
      } while (ppuVar15 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    puVar2 = PTR_PTR_1126d53e8;
    _objc_alloc();
    func_0x00010c010d80();
    _objc_release(puVar14);
    _objc_release(ppuVar4);
    _objc_release(param_5);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1c0 = puVar2;
    puStack_118 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010c0d3c80();
    puStack_1a8 = puVar2;
    _objc_release(puVar14);
    param_3 = uStack_198;
    uVar3 = uStack_198;
    func_0x000108f4a29c();
    param_5 = ppuStack_168;
    puVar2 = puStack_170;
    puVar14 = puStack_1a0;
    if ((int)uVar3 != 0) {
      ppuVar15 = ppuStack_168;
      func_0x00010c26fe00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar15;
      func_0x00010bf529e0();
      if (ppuVar10 != (undefined **)0x0) {
        if (uStack_188 == 0x56) {
          uVar3 = param_3;
          func_0x000108f4b6d8();
          _objc_release(ppuVar15);
          if ((int)uVar3 == 0) goto LAB_107d2854c;
        }
        else {
          _objc_release(ppuVar15);
        }
        ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        ppuVar10 = param_5;
        ppuStack_178 = ppuVar15;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar10;
        func_0x00010bf529e0();
        _objc_release(ppuVar10);
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar15 = (undefined **)0x0;
          ppuVar10 = param_5;
          do {
            unaff_d8 = dVar16;
            puVar2 = PTR_PTR_1126d53e0;
            _objc_alloc(PTR_PTR_1126d53e0);
            func_0x00010c26fe00(ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar10;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuVar7 = ppuStack_168;
            func_0x00010c15f2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_1d0 = ppuVar7;
            puStack_1c8 = puVar8;
            func_0x00010c14de00(puVar14);
            _objc_retainAutoreleasedReturnValue();
            dVar16 = unaff_d8;
            func_0x00010c030d20(puVar2);
            func_0x00010befa120(ppuStack_178);
            _objc_release(puVar2);
            _objc_release(puVar14);
            _objc_release(puVar8);
            _objc_release(ppuVar7);
            param_5 = ppuStack_168;
            _objc_release(ppuVar6);
            _objc_release(ppuVar10);
            ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            ppuVar10 = param_5;
            func_0x00010c26fe00();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar10;
            func_0x00010bf529e0();
            _objc_release(ppuVar10);
            ppuVar10 = param_5;
          } while (ppuVar15 < ppuVar6);
        }
        ppuVar15 = ppuStack_178;
        ppuVar10 = ppuStack_178;
        func_0x00010bf529e0();
        puVar2 = puStack_170;
        param_3 = uStack_198;
        puVar14 = puStack_1a0;
        if (ppuVar10 != (undefined **)0x0) {
          puVar14 = PTR_PTR_1126d53e8;
          _objc_alloc(PTR_PTR_1126d53e8);
          puVar2 = PTR_PTR_1126c9d08;
          func_0x00010befdf80(PTR_PTR_1126c9d08);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar15;
          func_0x00010bf51e00(ppuVar15);
          func_0x00010c010d80(puVar14);
          _objc_release(ppuVar10);
          _objc_release(puVar2);
          func_0x00010c066b00(puStack_1a8);
          puVar2 = puStack_170;
          func_0x00010c1d0640(puStack_170);
          _objc_release(puVar14);
          param_3 = uStack_198;
          puVar14 = puStack_1a0;
        }
      }
      _objc_release(ppuVar15);
    }
LAB_107d2854c:
    param_12 = puStack_190;
    puVar8 = puStack_1a8;
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    uVar3 = param_3;
    FUN_107d278b0(param_3,uStack_188,param_12);
    if ((uVar3 & 1) == 0) {
      func_0x00010c1d0640(puVar2);
    }
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar8);
    _objc_release(puStack_1c0);
    _objc_release(ppuVar4);
    _objc_release(ppuVar5);
    param_9 = (ulong)uStack_1b4;
    param_14 = puStack_1b0;
    param_2 = uStack_188;
  }
  puVar8 = puVar2;
  uVar9 = param_2;
  FUN_107d27920(puVar2,param_2,param_3,puVar14,param_9,param_12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  param_4 = puVar8;
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar8);
  if (param_14 != (undefined *)0x0) {
    param_4 = param_14;
    func_0x00010c1d0640(puVar2);
  }
  puVar8 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar14);
  param_12 = puVar2;
LAB_107d286a8:
  _objc_release(puVar2);
  _objc_release(param_14);
  _objc_release(param_5);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_107d28710;
  dStack_230 = unaff_d9;
  dStack_228 = unaff_d8;
  uStack_220 = param_2;
  uStack_218 = param_9;
  puStack_210 = puVar14;
  puStack_208 = puVar8;
  uStack_200 = param_3;
  puStack_1f8 = param_14;
  puStack_1f0 = param_12;
  puStack_1e8 = puVar2;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_4);
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x2020000000;
  uStack_238 = 0;
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  _objc_retain(uVar3);
  func_0x00010c0bdf40(uVar9);
  bVar1 = *(byte *)(puStack_248 + 3);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_250,8);
  return (undefined *)(ulong)bVar1;
}



/* Entry: 107d28710; end: 107d289c3;  */

undefined1 FUN_107d28710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0bdf40(param_2);
  uVar1 = *(undefined1 *)(puStack_78 + 3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  return uVar1;
}



/* Entry: 107d289c4; end: 107d28a53;  */

void FUN_107d289c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar3 ^ 1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d28a54; end: 107d28ae3;  */

void FUN_107d28a54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar3 ^ 1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d28ae4; end: 107d28b67;  */

void FUN_107d28ae4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d28b68; end: 107d28b9b;  */

void FUN_107d28b68(long param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined8 *)(param_1 + 0x20);
  FUN_107d28b9c();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1 ^ 1;
  return;
}



/* Entry: 107d28b9c; end: 107d28c93;  */

undefined1 FUN_107d28b9c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107d28c94; end: 107d28cab;  */

void FUN_107d28c94(long param_1)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = *(long *)(param_1 + 0x28) != 0x67;
  return;
}



/* Entry: 107d28cac; end: 107d28d3b;  */

void FUN_107d28cac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar3 ^ 1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d28d3c; end: 107d2906f;  */

undefined1
FUN_107d28d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0bdf40(param_2);
  uVar1 = *(undefined1 *)(puStack_78 + 3);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  return uVar1;
}



/* Entry: 107d29070; end: 107d2918b;  */

void FUN_107d29070(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c25a280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c25a280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c070680();
      *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar3;
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


