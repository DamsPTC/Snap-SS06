/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d06d38; end: 107d06d3f; -[SCFriendsFeedItemImpressionTrackingData rightHandButtonType] */

undefined8 FUN_107d06d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d06d40; end: 107d06d47; -[SCFriendsFeedItemImpressionTrackingData isLoading] */

undefined1 FUN_107d06d40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d06d48; end: 107d06d4f; -[SCFriendsFeedItemImpressionTrackingData isUnread] */

undefined1 FUN_107d06d48(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d06d50; end: 107d06d57; -[SCFriendsFeedItemImpressionTrackingData recipientUserId] */

undefined8 FUN_107d06d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d06d58; end: 107d06d5f; -[SCFriendsFeedItemImpressionTrackingData lensSuggestionParams] */

undefined8 FUN_107d06d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d06d60; end: 107d06d67; -[SCFriendsFeedItemImpressionTrackingData streakImpressionData] */

undefined8 FUN_107d06d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d06d68; end: 107d06d6f; -[SCFriendsFeedItemImpressionTrackingData expiredStreakMetadata] */

undefined8 FUN_107d06d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d06d70; end: 107d06d77; -[SCFriendsFeedItemImpressionTrackingData hasMapIcon] */

undefined1 FUN_107d06d70(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d06d78; end: 107d06d7f; -[SCFriendsFeedItemImpressionTrackingData hasSaturnStatusVisible] */

undefined1 FUN_107d06d78(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d06d80; end: 107d06d87; -[SCFriendsFeedItemImpressionTrackingData hasActionmoji] */

undefined1 FUN_107d06d80(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d06d88; end: 107d06d8f; -[SCFriendsFeedItemImpressionTrackingData liveGamingParams] */

undefined8 FUN_107d06d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d06d90; end: 107d06d97; -[SCFriendsFeedItemImpressionTrackingData contextPostSnapParams] */

undefined8 FUN_107d06d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d06d98; end: 107d06e1b; -[SCFriendsFeedItemImpressionTrackingData .cxx_destruct] */

void FUN_107d06d98(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d06e1c; end: 107d0704f; -[SCFriendsFeedItemSimplifiedImpressionTrackingData initWithCellIdentifier:conversationId:recipientUserId:cellVisibilityPercentage:conversationSubtypeMetadata:index:expectedIndex:isAboveFold:adResponse:hasStory:hasSaturnStatusVisible:isSnapchatBot:displayName:] */

undefined8 *
FUN_107d06e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

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
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126fa8a0;
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
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 10) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13._2_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d07050; end: 107d07073; -[SCFriendsFeedItemSimplifiedImpressionTrackingData copyWithZone:] */

undefined8 FUN_107d07050(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d07074; end: 107d0714f; -[SCFriendsFeedItemSimplifiedImpressionTrackingData hash] */

undefined8 * FUN_107d07074(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d072b8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d072c4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(char *)((long)puVar3 + 10) == param_3[10])) &&
        (*(char *)((long)puVar3 + 0xb) == param_3[0xb])))) {
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
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x50);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_107d072c4;
                      }
                      goto LAB_107d072b8;
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
LAB_107d072c4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d07150; end: 107d072df; -[SCFriendsFeedItemSimplifiedImpressionTrackingData isEqual:] */

long FUN_107d07150(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d072b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d072c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
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
                        goto LAB_107d072c4;
                      }
                      goto LAB_107d072b8;
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
LAB_107d072c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d072e0; end: 107d072e7; -[SCFriendsFeedItemSimplifiedImpressionTrackingData cellIdentifier] */

undefined8 FUN_107d072e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d072e8; end: 107d072ef; -[SCFriendsFeedItemSimplifiedImpressionTrackingData conversationId] */

undefined8 FUN_107d072e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d072f0; end: 107d072f7; -[SCFriendsFeedItemSimplifiedImpressionTrackingData recipientUserId] */

undefined8 FUN_107d072f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d072f8; end: 107d072ff; -[SCFriendsFeedItemSimplifiedImpressionTrackingData cellVisibilityPercentage] */

undefined8 FUN_107d072f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d07300; end: 107d07307; -[SCFriendsFeedItemSimplifiedImpressionTrackingData conversationSubtypeMetadata] */

undefined8 FUN_107d07300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d07308; end: 107d0730f; -[SCFriendsFeedItemSimplifiedImpressionTrackingData index] */

undefined8 FUN_107d07308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d07310; end: 107d07317; -[SCFriendsFeedItemSimplifiedImpressionTrackingData expectedIndex] */

undefined8 FUN_107d07310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d07318; end: 107d0731f; -[SCFriendsFeedItemSimplifiedImpressionTrackingData isAboveFold] */

undefined1 FUN_107d07318(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d07320; end: 107d07327; -[SCFriendsFeedItemSimplifiedImpressionTrackingData adResponse] */

undefined8 FUN_107d07320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d07328; end: 107d0732f; -[SCFriendsFeedItemSimplifiedImpressionTrackingData hasStory] */

undefined1 FUN_107d07328(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d07330; end: 107d07337; -[SCFriendsFeedItemSimplifiedImpressionTrackingData hasSaturnStatusVisible] */

undefined1 FUN_107d07330(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d07338; end: 107d0733f; -[SCFriendsFeedItemSimplifiedImpressionTrackingData isSnapchatBot] */

undefined1 FUN_107d07338(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d07340; end: 107d07347; -[SCFriendsFeedItemSimplifiedImpressionTrackingData displayName] */

undefined8 FUN_107d07340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d07348; end: 107d073cb; -[SCFriendsFeedItemSimplifiedImpressionTrackingData .cxx_destruct] */

void FUN_107d07348(long param_1)

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



/* Entry: 107d073cc; end: 107d0742f; -[SCFriendsFeedItemStreakImpressionData initWithStreakState:streakCount:isFrozen:cellPosition:] */

void FUN_107d073cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa8a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  return;
}



/* Entry: 107d07430; end: 107d07453; -[SCFriendsFeedItemStreakImpressionData copyWithZone:] */

undefined8 FUN_107d07430(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d07454; end: 107d074c7; -[SCFriendsFeedItemStreakImpressionData hash] */

long * FUN_107d07454(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_38;
  long lStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  lStack_30 = (long)*(int *)(param_1 + 0xc);
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  lStack_20 = -lVar2;
  if (-1 < lVar2) {
    lStack_20 = lVar2;
  }
  plVar3 = &lStack_38;
  func_0x000100505190(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar3 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar3;
      _objc_opt_class(plVar3);
      plVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if ((((ulong)plVar4 & 1) == 0) ||
         (((plVar3[2] != param_3[2] ||
           (*(int *)((long)plVar3 + 0xc) != *(int *)((long)param_3 + 0xc))) ||
          ((char)plVar3[1] != (char)param_3[1])))) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = (long *)(ulong)(plVar3[3] == param_3[3]);
      }
    }
  }
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 107d074c8; end: 107d0757f; -[SCFriendsFeedItemStreakImpressionData isEqual:] */

bool FUN_107d074c8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))) ||
          (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d07580; end: 107d07587; -[SCFriendsFeedItemStreakImpressionData streakState] */

undefined8 FUN_107d07580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d07588; end: 107d0758f; -[SCFriendsFeedItemStreakImpressionData streakCount] */

undefined4 FUN_107d07588(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107d07590; end: 107d07597; -[SCFriendsFeedItemStreakImpressionData isFrozen] */

undefined1 FUN_107d07590(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d07598; end: 107d0759f; -[SCFriendsFeedItemStreakImpressionData cellPosition] */

undefined8 FUN_107d07598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d075a0; end: 107d0764b; -[SCFriendsFeedCellInteractionEvent initWithTrackingData:actionIdentifier:] */

undefined1 *
FUN_107d075a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa8b0;
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



/* Entry: 107d0764c; end: 107d0766f; -[SCFriendsFeedCellInteractionEvent copyWithZone:] */

undefined8 FUN_107d0764c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d07670; end: 107d076e3; -[SCFriendsFeedCellInteractionEvent hash] */

undefined8 * FUN_107d07670(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d07764:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d07770;
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
          goto LAB_107d07770;
        }
        goto LAB_107d07764;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d07770:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d076e4; end: 107d0778b; -[SCFriendsFeedCellInteractionEvent isEqual:] */

long FUN_107d076e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d07764:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d07770;
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
          goto LAB_107d07770;
        }
        goto LAB_107d07764;
      }
    }
    lVar3 = 0;
  }
LAB_107d07770:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0778c; end: 107d07793; -[SCFriendsFeedCellInteractionEvent trackingData] */

undefined8 FUN_107d0778c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d07794; end: 107d0779b; -[SCFriendsFeedCellInteractionEvent actionIdentifier] */

undefined8 FUN_107d07794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0779c; end: 107d077cb; -[SCFriendsFeedCellInteractionEvent .cxx_destruct] */

void FUN_107d0779c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d077cc; end: 107d0783f; +[SCFriendsFeedCancelMenuActionData multiRecipientWithConversationIds:isFailed:] */

void FUN_107d077cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2cc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
  puVar2[0x30] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d07840; end: 107d078df; +[SCFriendsFeedCancelMenuActionData singleRecipientWithConversationId:isFailed:profileActionData:] */

void FUN_107d07840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c2cc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d078e0; end: 107d07903; -[SCFriendsFeedCancelMenuActionData copyWithZone:] */

undefined8 FUN_107d078e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d07904; end: 107d0798f; -[SCFriendsFeedCancelMenuActionData hash] */

void FUN_107d07904(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fa8b8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d07990; end: 107d079d3; -[SCFriendsFeedCancelMenuActionData internalInit] */

void FUN_107d07990(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa8b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d079d4; end: 107d07ac3; -[SCFriendsFeedCancelMenuActionData isEqual:] */

long FUN_107d079d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d07a9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d07aa8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
        (*(char *)(param_1 + 0x30) == *(char *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107d07aa8;
          }
          goto LAB_107d07a9c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d07aa8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d07ac4; end: 107d07b57; -[SCFriendsFeedCancelMenuActionData matchSingleRecipient:multiRecipient:] */

void FUN_107d07ac4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d07b58; end: 107d07b93; -[SCFriendsFeedCancelMenuActionData .cxx_destruct] */

void FUN_107d07b58(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d07b94; end: 107d07c43; +[SCFriendsFeedOpenCameraActionData groupWithConversationId:displayName:isDoubleTap:source:] */

void FUN_107d07b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2980;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  puVar2[0x58] = param_5;
  *(undefined8 *)(puVar2 + 0x60) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d07c44; end: 107d07d63; +[SCFriendsFeedOpenCameraActionData snapchatterWithUserId:username:conversationId:displayName:isBirthday:isDoubleTap:source:isAiChatbot:] */

void FUN_107d07c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c2980;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x30] = param_7;
  puVar2[0x31] = param_8;
  *(undefined8 *)(puVar2 + 0x38) = param_9;
  puVar2[0x40] = param_10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d07d64; end: 107d07d87; -[SCFriendsFeedOpenCameraActionData copyWithZone:] */

undefined8 FUN_107d07d64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d07d88; end: 107d07e53; -[SCFriendsFeedOpenCameraActionData hash] */

void FUN_107d07d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
  uStack_68 = (ulong)*(byte *)(param_1 + 0x30);
  uStack_60 = (ulong)*(byte *)(param_1 + 0x31);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = (ulong)*(byte *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_b8 = PTR_PTR_1126fa8c0;
  puStack_c0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d07e54; end: 107d07e97; -[SCFriendsFeedOpenCameraActionData internalInit] */

void FUN_107d07e54(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa8c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d07e98; end: 107d0800f; -[SCFriendsFeedOpenCameraActionData isEqual:] */

long FUN_107d07e98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d07fe8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d07ff4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x30) == *(char *)(param_3 + 0x30))) &&
           (*(char *)(param_1 + 0x31) == *(char *)(param_3 + 0x31))) &&
          ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
           (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))))))) &&
        (*(char *)(param_1 + 0x58) == *(char *)(param_3 + 0x58))) &&
       (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 != *(long *)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_107d07ff4;
                }
                goto LAB_107d07fe8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d07ff4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d08010; end: 107d080bf; -[SCFriendsFeedOpenCameraActionData matchSnapchatter:group:] */

void FUN_107d08010(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                 *(undefined1 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined1 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x31),
               *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d080c0; end: 107d0811f; -[SCFriendsFeedOpenCameraActionData .cxx_destruct] */

void FUN_107d080c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d08120; end: 107d08197; -[SCFriendsFeedRetryActionData initWithConversationId:] */

undefined1 * FUN_107d08120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa8c8;
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



/* Entry: 107d08198; end: 107d081bb; -[SCFriendsFeedRetryActionData copyWithZone:] */

undefined8 FUN_107d08198(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d081bc; end: 107d081c3; -[SCFriendsFeedRetryActionData hash] */

void FUN_107d081bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107d081c4; end: 107d08253; -[SCFriendsFeedRetryActionData isEqual:] */

long FUN_107d081c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d08238;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107d08238;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107d08238;
    }
  }
  lVar3 = 1;
LAB_107d08238:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d08254; end: 107d0825b; -[SCFriendsFeedRetryActionData conversationId] */

undefined8 FUN_107d08254(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0825c; end: 107d08267; -[SCFriendsFeedRetryActionData .cxx_destruct] */

void FUN_107d0825c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d08268; end: 107d08387; -[SCFriendsFeedOpenMiniProfileActionData initWithFeedId:openCameraActionData:snapchatter:addSourceType:pageType:indexPath:] */

undefined1 *
FUN_107d08268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fa8d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d08388; end: 107d083ab; -[SCFriendsFeedOpenMiniProfileActionData copyWithZone:] */

undefined8 FUN_107d08388(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d083ac; end: 107d08443; -[SCFriendsFeedOpenMiniProfileActionData hash] */

undefined8 * FUN_107d083ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d08514:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d08520;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[4] == param_3[4] && (puVar3[5] == param_3[5])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[6];
            if (puVar6 != (undefined8 *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_107d08520;
            }
            goto LAB_107d08514;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d08520:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d08444; end: 107d0853b; -[SCFriendsFeedOpenMiniProfileActionData isEqual:] */

long FUN_107d08444(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d08514:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d08520;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_107d08520;
            }
            goto LAB_107d08514;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d08520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0853c; end: 107d08543; -[SCFriendsFeedOpenMiniProfileActionData feedId] */

undefined8 FUN_107d0853c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d08544; end: 107d0854b; -[SCFriendsFeedOpenMiniProfileActionData openCameraActionData] */

undefined8 FUN_107d08544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0854c; end: 107d08553; -[SCFriendsFeedOpenMiniProfileActionData snapchatter] */

undefined8 FUN_107d0854c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d08554; end: 107d0855b; -[SCFriendsFeedOpenMiniProfileActionData addSourceType] */

undefined8 FUN_107d08554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0855c; end: 107d08563; -[SCFriendsFeedOpenMiniProfileActionData pageType] */

undefined8 FUN_107d0855c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d08564; end: 107d0856b; -[SCFriendsFeedOpenMiniProfileActionData indexPath] */

undefined8 FUN_107d08564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d0856c; end: 107d085b3; -[SCFriendsFeedOpenMiniProfileActionData .cxx_destruct] */

void FUN_107d0856c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d085b4; end: 107d0862b; -[SCFriendsFeedCampaignActionData initWithAdResponseBytes:] */

undefined1 * FUN_107d085b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa8d8;
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



/* Entry: 107d0862c; end: 107d0864f; -[SCFriendsFeedCampaignActionData copyWithZone:] */

undefined8 FUN_107d0862c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d08650; end: 107d08657; -[SCFriendsFeedCampaignActionData hash] */

void FUN_107d08650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107d08658; end: 107d086e7; -[SCFriendsFeedCampaignActionData isEqual:] */

long FUN_107d08658(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d086cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107d086cc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107d086cc;
    }
  }
  lVar3 = 1;
LAB_107d086cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d086e8; end: 107d086ef; -[SCFriendsFeedCampaignActionData adResponseBytes] */

undefined8 FUN_107d086e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d086f0; end: 107d086fb; -[SCFriendsFeedCampaignActionData .cxx_destruct] */

void FUN_107d086f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d086fc; end: 107d087a7; -[SCFriendsFeedLoadSnapActionData initWithConversationId:messageId:] */

undefined1 *
FUN_107d086fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa8e0;
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



/* Entry: 107d087a8; end: 107d087cb; -[SCFriendsFeedLoadSnapActionData copyWithZone:] */

undefined8 FUN_107d087a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d087cc; end: 107d0883f; -[SCFriendsFeedLoadSnapActionData hash] */

undefined8 * FUN_107d087cc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d088c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d088cc;
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
          goto LAB_107d088cc;
        }
        goto LAB_107d088c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d088cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d08840; end: 107d088e7; -[SCFriendsFeedLoadSnapActionData isEqual:] */

long FUN_107d08840(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d088c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d088cc;
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
          goto LAB_107d088cc;
        }
        goto LAB_107d088c0;
      }
    }
    lVar3 = 0;
  }
LAB_107d088cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d088e8; end: 107d088ef; -[SCFriendsFeedLoadSnapActionData conversationId] */

undefined8 FUN_107d088e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d088f0; end: 107d088f7; -[SCFriendsFeedLoadSnapActionData messageId] */

undefined8 FUN_107d088f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d088f8; end: 107d08927; -[SCFriendsFeedLoadSnapActionData .cxx_destruct] */

void FUN_107d088f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d08928; end: 107d089d3; -[SCFriendsFeedReplayActionData initWithConversationId:replayRequestInfo:] */

undefined1 *
FUN_107d08928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa8e8;
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



/* Entry: 107d089d4; end: 107d089f7; -[SCFriendsFeedReplayActionData copyWithZone:] */

undefined8 FUN_107d089d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d089f8; end: 107d08a6b; -[SCFriendsFeedReplayActionData hash] */

undefined8 * FUN_107d089f8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d08aec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d08af8;
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
          goto LAB_107d08af8;
        }
        goto LAB_107d08aec;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d08af8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d08a6c; end: 107d08b13; -[SCFriendsFeedReplayActionData isEqual:] */

long FUN_107d08a6c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d08aec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d08af8;
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
          goto LAB_107d08af8;
        }
        goto LAB_107d08aec;
      }
    }
    lVar3 = 0;
  }
LAB_107d08af8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d08b14; end: 107d08b1b; -[SCFriendsFeedReplayActionData conversationId] */

undefined8 FUN_107d08b14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d08b1c; end: 107d08b23; -[SCFriendsFeedReplayActionData replayRequestInfo] */

undefined8 FUN_107d08b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d08b24; end: 107d08b53; -[SCFriendsFeedReplayActionData .cxx_destruct] */

void FUN_107d08b24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d08b54; end: 107d08bcb; -[SCFriendsFeedOpenStoriesActionData initWithCurrentStory:] */

undefined1 * FUN_107d08b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa8f0;
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


