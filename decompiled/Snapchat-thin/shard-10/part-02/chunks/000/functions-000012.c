/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079d4c18; end: 1079d4ccf; -[SCDiscoverFeedSendUserActionDataModel isEqual:] */

long FUN_1079d4c18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d4ca8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d4cb4;
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
          goto LAB_1079d4cb4;
        }
        goto LAB_1079d4ca8;
      }
    }
    lVar3 = 0;
  }
LAB_1079d4cb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d4cd0; end: 1079d4cd7; -[SCDiscoverFeedSendUserActionDataModel snapchatter] */

undefined8 FUN_1079d4cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d4cd8; end: 1079d4cdf; -[SCDiscoverFeedSendUserActionDataModel storyDedupeFp] */

undefined8 FUN_1079d4cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d4ce0; end: 1079d4ce7; -[SCDiscoverFeedSendUserActionDataModel publicUserStory] */

undefined8 FUN_1079d4ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d4ce8; end: 1079d4d17; -[SCDiscoverFeedSendUserActionDataModel .cxx_destruct] */

void FUN_1079d4ce8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d4d18; end: 1079d4ddb; -[SCDiscoverFeedSubscribeActionDataModel initWithStoryDedupeFp:snapchatter:currentState:displayName:] */

undefined1 *
FUN_1079d4d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9228;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d4ddc; end: 1079d4dff; -[SCDiscoverFeedSubscribeActionDataModel copyWithZone:] */

undefined8 FUN_1079d4ddc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d4e00; end: 1079d4e7b; -[SCDiscoverFeedSubscribeActionDataModel hash] */

undefined8 * FUN_1079d4e00(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1079d4f1c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079d4f28;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[1] == param_3[1] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_1079d4f28;
        }
        goto LAB_1079d4f1c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1079d4f28:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1079d4e7c; end: 1079d4f43; -[SCDiscoverFeedSubscribeActionDataModel isEqual:] */

long FUN_1079d4e7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d4f1c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d4f28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1079d4f28;
        }
        goto LAB_1079d4f1c;
      }
    }
    lVar3 = 0;
  }
LAB_1079d4f28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d4f44; end: 1079d4f4b; -[SCDiscoverFeedSubscribeActionDataModel storyDedupeFp] */

undefined8 FUN_1079d4f44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d4f4c; end: 1079d4f53; -[SCDiscoverFeedSubscribeActionDataModel snapchatter] */

undefined8 FUN_1079d4f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d4f54; end: 1079d4f5b; -[SCDiscoverFeedSubscribeActionDataModel currentState] */

undefined8 FUN_1079d4f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d4f5c; end: 1079d4f63; -[SCDiscoverFeedSubscribeActionDataModel displayName] */

undefined8 FUN_1079d4f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079d4f64; end: 1079d4f93; -[SCDiscoverFeedSubscribeActionDataModel .cxx_destruct] */

void FUN_1079d4f64(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079d4f94; end: 1079d509f; -[SCDiscoverFeedViewPublicUserProfileActionDataModel initWithSnapchatter:userId:businessId:storyLoggingInfo:] */

undefined1 *
FUN_1079d4f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9230;
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



/* Entry: 1079d50a0; end: 1079d50c3; -[SCDiscoverFeedViewPublicUserProfileActionDataModel copyWithZone:] */

undefined8 FUN_1079d50a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d50c4; end: 1079d514f; -[SCDiscoverFeedViewPublicUserProfileActionDataModel hash] */

undefined8 * FUN_1079d50c4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1079d5200:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079d520c;
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
              goto LAB_1079d520c;
            }
            goto LAB_1079d5200;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1079d520c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1079d5150; end: 1079d5227; -[SCDiscoverFeedViewPublicUserProfileActionDataModel isEqual:] */

long FUN_1079d5150(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d5200:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d520c;
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
              goto LAB_1079d520c;
            }
            goto LAB_1079d5200;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079d520c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d5228; end: 1079d522f; -[SCDiscoverFeedViewPublicUserProfileActionDataModel snapchatter] */

undefined8 FUN_1079d5228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d5230; end: 1079d5237; -[SCDiscoverFeedViewPublicUserProfileActionDataModel userId] */

undefined8 FUN_1079d5230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d5238; end: 1079d523f; -[SCDiscoverFeedViewPublicUserProfileActionDataModel businessId] */

undefined8 FUN_1079d5238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d5240; end: 1079d5247; -[SCDiscoverFeedViewPublicUserProfileActionDataModel storyLoggingInfo] */

undefined8 FUN_1079d5240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079d5248; end: 1079d528f; -[SCDiscoverFeedViewPublicUserProfileActionDataModel .cxx_destruct] */

void FUN_1079d5248(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d5290; end: 1079d5367; -[SCDiscoverFeedViewPublisherProfileActionDataModel initWithBusinessProfileId:publisherName:storyLoggingInfo:] */

undefined1 *
FUN_1079d5290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9238;
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



/* Entry: 1079d5368; end: 1079d543f; -[SCDiscoverFeedViewPublisherProfileActionDataModel initWithCoder:] */

undefined1 * FUN_1079d5368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9238;
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



/* Entry: 1079d5440; end: 1079d5463; -[SCDiscoverFeedViewPublisherProfileActionDataModel copyWithZone:] */

undefined8 FUN_1079d5440(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d5464; end: 1079d54d7; -[SCDiscoverFeedViewPublisherProfileActionDataModel encodeWithCoder:] */

void FUN_1079d5464(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea89d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ea89f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ea8a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d54d8; end: 1079d5557; -[SCDiscoverFeedViewPublisherProfileActionDataModel hash] */

undefined8 * FUN_1079d54d8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_1079d55f0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079d55fc;
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
            goto LAB_1079d55fc;
          }
          goto LAB_1079d55f0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1079d55fc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1079d5558; end: 1079d5617; -[SCDiscoverFeedViewPublisherProfileActionDataModel isEqual:] */

long FUN_1079d5558(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d55f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d55fc;
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
            goto LAB_1079d55fc;
          }
          goto LAB_1079d55f0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079d55fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d5618; end: 1079d561f; -[SCDiscoverFeedViewPublisherProfileActionDataModel businessProfileId] */

undefined8 FUN_1079d5618(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d5620; end: 1079d5627; -[SCDiscoverFeedViewPublisherProfileActionDataModel publisherName] */

undefined8 FUN_1079d5620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d5628; end: 1079d562f; -[SCDiscoverFeedViewPublisherProfileActionDataModel storyLoggingInfo] */

undefined8 FUN_1079d5628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d5630; end: 1079d566b; -[SCDiscoverFeedViewPublisherProfileActionDataModel .cxx_destruct] */

void FUN_1079d5630(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d566c; end: 1079d57a3; -[SCDiscoverFeedViewShowProfileActionDataModel initWithBusinessProfileId:publisherId:publisherNameId:showId:storyLoggingInfo:] */

undefined1 *
FUN_1079d566c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9240;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d57a4; end: 1079d57c7; -[SCDiscoverFeedViewShowProfileActionDataModel copyWithZone:] */

undefined8 FUN_1079d57a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d57c8; end: 1079d585f; -[SCDiscoverFeedViewShowProfileActionDataModel hash] */

undefined8 * FUN_1079d57c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
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
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1079d5928:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079d5934;
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
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_1079d5934;
              }
              goto LAB_1079d5928;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1079d5934:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1079d5860; end: 1079d594f; -[SCDiscoverFeedViewShowProfileActionDataModel isEqual:] */

long FUN_1079d5860(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d5928:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d5934;
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
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_1079d5934;
              }
              goto LAB_1079d5928;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079d5934:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d5950; end: 1079d5957; -[SCDiscoverFeedViewShowProfileActionDataModel businessProfileId] */

undefined8 FUN_1079d5950(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d5958; end: 1079d595f; -[SCDiscoverFeedViewShowProfileActionDataModel publisherId] */

undefined8 FUN_1079d5958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d5960; end: 1079d5967; -[SCDiscoverFeedViewShowProfileActionDataModel publisherNameId] */

undefined8 FUN_1079d5960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d5968; end: 1079d596f; -[SCDiscoverFeedViewShowProfileActionDataModel showId] */

undefined8 FUN_1079d5968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079d5970; end: 1079d5977; -[SCDiscoverFeedViewShowProfileActionDataModel storyLoggingInfo] */

undefined8 FUN_1079d5970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079d5978; end: 1079d59cb; -[SCDiscoverFeedViewShowProfileActionDataModel .cxx_destruct] */

void FUN_1079d5978(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d59cc; end: 1079d5a7f; -[SCDiscoverFeedAdInfoActionDataModel initWithBrandName:serveItemId:adProductType:] */

undefined1 *
FUN_1079d59cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9248;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d5a80; end: 1079d5aa3; -[SCDiscoverFeedAdInfoActionDataModel copyWithZone:] */

undefined8 FUN_1079d5a80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d5aa4; end: 1079d5b1b; -[SCDiscoverFeedAdInfoActionDataModel hash] */

undefined8 * FUN_1079d5aa4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1079d5bac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079d5bb8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1079d5bb8;
        }
        goto LAB_1079d5bac;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1079d5bb8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1079d5b1c; end: 1079d5bd3; -[SCDiscoverFeedAdInfoActionDataModel isEqual:] */

long FUN_1079d5b1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d5bac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d5bb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1079d5bb8;
        }
        goto LAB_1079d5bac;
      }
    }
    lVar3 = 0;
  }
LAB_1079d5bb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d5bd4; end: 1079d5bdb; -[SCDiscoverFeedAdInfoActionDataModel brandName] */

undefined8 FUN_1079d5bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d5bdc; end: 1079d5be3; -[SCDiscoverFeedAdInfoActionDataModel serveItemId] */

undefined8 FUN_1079d5bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d5be4; end: 1079d5beb; -[SCDiscoverFeedAdInfoActionDataModel adProductType] */

undefined8 FUN_1079d5be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d5bec; end: 1079d5c1b; -[SCDiscoverFeedAdInfoActionDataModel .cxx_destruct] */

void FUN_1079d5bec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d5c1c; end: 1079d5ca3; -[SCDiscoverFeedBlockTileActionDataModel initWithSnapchatter:storyDedupeFp:] */

undefined1 *
FUN_1079d5c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9250;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d5ca4; end: 1079d5cc7; -[SCDiscoverFeedBlockTileActionDataModel copyWithZone:] */

undefined8 FUN_1079d5ca4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d5cc8; end: 1079d5d33; -[SCDiscoverFeedBlockTileActionDataModel hash] */

undefined8 * FUN_1079d5cc8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079d5db8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1079d5db8;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1079d5db8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1079d5db8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1079d5d34; end: 1079d5dd3; -[SCDiscoverFeedBlockTileActionDataModel isEqual:] */

long FUN_1079d5d34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d5db8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1079d5db8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1079d5db8;
    }
  }
  lVar3 = 1;
LAB_1079d5db8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d5dd4; end: 1079d5ddb; -[SCDiscoverFeedBlockTileActionDataModel snapchatter] */

undefined8 FUN_1079d5dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d5ddc; end: 1079d5de3; -[SCDiscoverFeedBlockTileActionDataModel storyDedupeFp] */

undefined8 FUN_1079d5ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d5de4; end: 1079d5def; -[SCDiscoverFeedBlockTileActionDataModel .cxx_destruct] */

void FUN_1079d5de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d5df0; end: 1079d601f;  */

undefined * FUN_1079d5df0(ulong param_1,undefined *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_1);
  uVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar4 == 0) {
      _objc_release(param_1);
      if ((param_3 & 1) == 0) {
        func_0x00010c066b00(puVar3);
      }
      func_0x00010befa120(puVar3);
      puVar5 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
        ___stack_chk_fail();
        _objc_retain();
        func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1109f3d50);
        puVar3 = param_2;
        FUN_1079d5df0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfecde0();
        _objc_release(param_1);
        _objc_release(puVar3);
        _objc_release(param_2);
        return puVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return puVar5;
    }
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      iVar2 = (int)*(undefined8 *)(uVar8 * 8);
      func_0x00010c067ec0();
      if ((iVar2 < 0xf7) && (iVar2 == 2)) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010bf4b900();
        _objc_release(puVar5);
        if ((uVar6 & 1) == 0) goto LAB_1079d5f54;
      }
      else {
LAB_1079d5f54:
        func_0x00010befa120(puVar3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
    uVar4 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1079d6020; end: 1079d60a7;  */

undefined8 FUN_1079d6020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1109f3d50);
  uVar1 = param_2;
  FUN_1079d5df0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecde0();
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1079d60a8; end: 1079d60d7;  */

void FUN_1079d60a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 1079d60d8; end: 1079d6147;  */

undefined * FUN_1079d60d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010befa120();
  puVar2 = puVar1;
  func_0x00010bfecde0(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1079d6148; end: 1079d6287;  */

bool FUN_1079d6148(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar4 = uVar1;
  func_0x00010bfa4340();
  if (uVar4 == 0xdd) {
    bVar2 = true;
  }
  else {
    uVar4 = uVar1;
    func_0x00010bfa4340(uVar1);
    bVar2 = uVar4 == 0x106;
  }
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 1079d6288; end: 1079d641b;  */

void FUN_1079d6288(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126c2180;
  _objc_opt_class(PTR_PTR_1126c2180);
  ppuVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  ppuVar1 = param_1;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126d5b98;
    _objc_opt_class(PTR_PTR_1126d5b98);
    ppuVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    if (((ulong)ppuVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126c2190;
      _objc_opt_class(PTR_PTR_1126c2190);
      ppuVar3 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar2);
      if (((ulong)ppuVar3 & 1) == 0) {
        puVar2 = PTR_PTR_1126d5ba0;
        _objc_opt_class(PTR_PTR_1126d5ba0);
        ppuVar3 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar2);
        if (((ulong)ppuVar3 & 1) == 0) {
          ppuVar3 = (undefined **)0x0;
          goto LAB_1079d636c;
        }
        ppuVar3 = &PTR____CFConstantStringClassReference_110f4b1f8;
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110eb5378;
      }
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb3638;
    }
    _objc_retain(ppuVar3);
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c156900(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1079d636c:
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1079d641c; end: 1079d64f7; -[SCDiscoverFeedStoryPositionProvider initWithDiscoverFeedDataFetcher:featureSettingsService:isStoriesEverywhere:storiesConfigProvider:] */

undefined1 *
FUN_1079d641c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9258;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d64f8; end: 1079d65fb; -[SCDiscoverFeedStoryPositionProvider sectionIndexForFeedType:] */

undefined8 FUN_1079d64f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000108f53fe8(param_3);
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  if (cVar1 == '\x01') {
    FUN_1079d60d8(param_3,uVar3);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c231d40();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c12c800();
    FUN_1079d6020(param_3,uVar3,uVar5,uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 1079d65fc; end: 1079d6667; -[SCDiscoverFeedStoryPositionProvider itemIndexForStory:inFeedType:] */

undefined8 FUN_1079d65fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfecba0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1079d6668; end: 1079d66a3; -[SCDiscoverFeedStoryPositionProvider .cxx_destruct] */

void FUN_1079d6668(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d66a4; end: 1079d673f; -[SCDiscoverFeedBadgeFriendStoryTracker initWithUserPreferences:circumstanceEngine:] */

undefined1 *
FUN_1079d66a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x000100baf9c4();
    *(char *)((long)puVar1 + 0x18) = (char)uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d6740; end: 1079d6a97; -[SCDiscoverFeedBadgeFriendStoryTracker updateViewStatusForFriendStories:] */

void FUN_1079d6740(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_1079d6a50;
  dVar15 = 0.0;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar12 = (undefined *)0x0;
  if (lVar3 != 0) {
    dVar17 = 0.0;
    do {
      lVar14 = 0;
      do {
        dVar16 = dVar15;
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_3);
          dVar16 = dVar15;
        }
        lVar13 = *(long *)(lVar14 * 8);
        lVar1 = lVar13;
        func_0x00010bfddf20();
        dVar15 = dVar16;
        if ((int)lVar1 != 0) {
          lVar1 = lVar13;
          func_0x00010c0d1140(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          dVar15 = dVar16;
          _objc_release(lVar1);
          if (dVar17 < dVar16) {
            lVar1 = lVar13;
            func_0x00010bf9c720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d1140();
            _objc_retainAutoreleasedReturnValue();
            if (lVar1 == 0 || lVar13 == 0) {
              _objc_release(lVar13);
              _objc_release(lVar1);
              if (lVar1 != 0) {
LAB_1079d6864:
                dVar17 = dVar16;
              }
            }
            else {
              lVar2 = lVar1;
              func_0x00010bf433a0();
              _objc_release(lVar13);
              _objc_release(lVar1);
              if (lVar2 == 1) goto LAB_1079d6864;
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    if (dVar17 <= 0.0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf655e0(dVar17);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if ((puVar12 == (undefined *)0x0) || (lVar4 == 0)) {
    if (puVar12 != (undefined *)0x0) goto LAB_1079d6948;
  }
  else {
    puVar5 = puVar12;
    func_0x00010bf433a0();
    if (puVar5 == (undefined *)0x1) {
LAB_1079d6948:
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(uVar6);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c2238;
  func_0x00010bf153a0(PTR_PTR_1126c2238);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c2238;
  func_0x00010bfddee0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar12);
LAB_1079d6a50:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1079d6a98; end: 1079d6ac7; -[SCDiscoverFeedBadgeFriendStoryTracker .cxx_destruct] */

void FUN_1079d6a98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d6ac8; end: 1079d6cdf;  */

void FUN_1079d6ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  int iVar16;
  ulong uVar17;
  undefined8 in_x5;
  int in_w6;
  ulong in_x7;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 uStack_80;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc();
  iVar16 = 0x10eb4878;
  ppuVar2 = (undefined **)PTR_PTR_1126c21b8;
  _objc_alloc();
  if ((param_4 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ea8cd8;
    param_5 = 0;
    func_0x00010bcbeaa8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x000108f57b44();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar22 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  dVar23 = 14.0;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  if ((param_4 & 1) == 0) {
    dVar23 = 8.0;
    param_2 = 0x4020000000000000;
    param_3 = 0x4034000000000000;
    uVar20 = 1;
    param_5 = 0;
    FUN_107c85320(0x4020000000000000,0x4020000000000000,0x4034000000000000,0x4020000000000000,0,1,0,
                  0x8c,0x18);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar20 = 0;
  }
  func_0x00010c00b980();
  _objc_release(uVar20);
  _objc_release(puVar22);
  ppuVar3 = ppuVar2;
  func_0x00010bffd260();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    uStack_80 = (undefined1)uVar19;
    dVar24 = dVar23;
    _objc_retain();
    _objc_retain(param_5);
    _objc_retain(ppuVar3);
    puVar1 = PTR_PTR_1126aea98;
    _objc_alloc();
    _objc_retain(ppuVar3);
    _objc_retain(ppuVar2);
    _objc_retain(param_5);
    ppuVar7 = ppuVar2;
    func_0x00010c262220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010901cb9c();
    ppuVar9 = ppuVar7;
    func_0x000107d3e014(ppuVar7,ppuVar8,1,0x4c);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar7;
    func_0x000107d3d8a4(ppuVar7,0,0x33,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar7;
    func_0x0001079ec0b0(ppuVar7,ppuVar8,0x33,0x4c,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar7;
    if (ppuVar8 == (undefined **)0x0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar8);
    if ((in_x7 & 1) == 0) {
      ppuVar8 = ppuVar7;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar21 = (undefined **)0x0;
      }
      else {
        ppuVar21 = ppuVar7;
        func_0x00010c294420(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar8);
      ppuVar8 = ppuVar21;
      if (in_w6 != 0) {
        ppuVar13 = ppuVar7;
        func_0x00010c262240();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar13;
        func_0x00010c261d20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010c08fa60();
        _objc_release(ppuVar14);
        _objc_release(ppuVar13);
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar13 = ppuVar7;
          func_0x00010c262240(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar13;
          func_0x00010c261d20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar21);
          _objc_release(ppuVar13);
        }
        uVar17 = uVar17 & 0xffffffff;
      }
    }
    else {
      ppuVar8 = (undefined **)0x0;
    }
    ppuVar21 = ppuVar2;
    func_0x00010c073800(ppuVar2);
    ppuVar13 = ppuVar7;
    FUN_107cf61e4(ppuVar7,ppuVar21,uVar17,puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar2;
    func_0x00010c073800();
    _objc_release(ppuVar2);
    if (iVar16 == 0) {
      func_0x00010bf1fc80(PTR_PTR_1126cc4b8);
    }
    else {
      func_0x00010bf45ca0();
    }
    if (ppuVar3 == (undefined **)0x0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      fVar25 = (float)dVar24;
      puVar22 = PTR_PTR_1126bd8e0;
      _objc_alloc();
      func_0x00010bf1fb60(PTR_PTR_1126cc4b8);
      func_0x00010bff9340((double)fVar25,dVar24);
    }
    puVar4 = PTR_PTR_1126bed90;
    _objc_alloc(PTR_PTR_1126bed90);
    FUN_107cf39e8(ppuVar21,in_x5,uStack_80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048d60(dVar23,param_2,param_3,puVar4);
    _objc_release(param_5);
    _objc_release(ppuVar21);
    _objc_release(puVar22);
    _objc_release(ppuVar13);
    _objc_release(ppuVar8);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar7);
    _objc_release(ppuVar3);
    func_0x00010bffd260(puVar1);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(param_5);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079d6ce0; end: 1079d7133;  */

void FUN_1079d6ce0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6,long param_7,ulong param_8,undefined8 param_9,
                  int param_10,ulong param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  double dVar14;
  float fVar15;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  dVar14 = param_1;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc();
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010c262220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010901cb9c();
  lVar4 = lVar2;
  func_0x000107d3e014(lVar2,lVar3,1,0x4c);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x000107d3d8a4(lVar2,0,0x33,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x0001079ec0b0(lVar2,lVar3,0x33,0x4c,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  if (lVar3 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  if ((param_11 & 1) == 0) {
    lVar3 = lVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar2;
      func_0x00010c294420(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    lVar3 = lVar12;
    if (param_10 != 0) {
      lVar8 = lVar2;
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c261d20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c08fa60();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar10 != 0) {
        lVar8 = lVar2;
        func_0x00010c262240(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar8;
        func_0x00010c261d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        _objc_release(lVar8);
      }
      param_8 = param_8 & 0xffffffff;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar12 = param_4;
  func_0x00010c073800(param_4);
  lVar8 = lVar2;
  FUN_107cf61e4(lVar2,lVar12,param_8,in_stack_00000018);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_4;
  func_0x00010c073800();
  _objc_release(param_4);
  if (param_6 == 0) {
    func_0x00010bf1fc80(PTR_PTR_1126cc4b8);
  }
  else {
    func_0x00010bf45ca0();
  }
  if (param_7 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    fVar15 = (float)dVar14;
    puVar13 = PTR_PTR_1126bd8e0;
    _objc_alloc();
    func_0x00010bf1fb60(PTR_PTR_1126cc4b8);
    func_0x00010bff9340((double)fVar15,dVar14);
  }
  puVar11 = PTR_PTR_1126bed90;
  _objc_alloc(PTR_PTR_1126bed90);
  FUN_107cf39e8(lVar12,param_9,in_stack_00000010);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048d60(param_1,param_2,param_3,puVar11);
  _objc_release(param_5);
  _objc_release(lVar12);
  _objc_release(puVar13);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_7);
  func_0x00010bffd260(puVar1);
  _objc_release(puVar11);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079d7134; end: 1079d723b;  */

void FUN_1079d7134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1079d723c;
  puStack_58 = &UNK_1109f3d70;
  uStack_48 = 0;
  uStack_50 = param_2;
  _objc_retain(param_2);
  _objc_retainBlock(&puStack_70);
  puVar2 = PTR_PTR_1126d5ba8;
  _objc_alloc(PTR_PTR_1126d5ba8);
  func_0x00010c015c40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079d723c; end: 1079d72c3;  */

undefined8 FUN_1079d723c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (uVar1 = param_2, func_0x00010bfddf20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1079d72c4; end: 1079d72cb;  */

void FUN_1079d72c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isStoryMuted_1125fd930);
  return;
}



/* Entry: 1079d72cc; end: 1079d7353; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator initWithResolver:] */

undefined1 * FUN_1079d72cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9268;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d7354; end: 1079d73bf; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator categoryIconUrlForVenueId:] */

void FUN_1079d7354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf33460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079d73c0; end: 1079d754f; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator resolveCategoryIconsForFriendStories:performer:completion:] */

void FUN_1079d73c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be742a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010be05100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c13a620(uVar3);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d7550; end: 1079d7613;  */

void FUN_1079d7550(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1079d7614; end: 1079d7623;  */

void FUN_1079d7614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyResolvedIcons_completion__1125513a8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1079d7624; end: 1079d779b; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator _placeTaggedVenueIdsFromFriendStories:] */

void FUN_1079d7624(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar13 = param_3;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(lStack_118 + lVar12 * 8);
        func_0x00010c0fd5c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        if ((lVar4 != 0) && (puVar5 = puVar2, func_0x00010bf4b900(), ((ulong)puVar5 & 1) == 0)) {
          func_0x00010befa120(puVar2);
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = param_3;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar9 = &uStack_250;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(puVar7);
    puVar14 = auStack_208;
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar13 = *plStack_240;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != lVar13) {
            _objc_enumerationMutation(puVar7);
          }
          lVar12 = *(long *)(param_3 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar12;
          func_0x00010bf33460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar12);
          lVar12 = lVar11;
          func_0x00010c08fa60();
          if (lVar12 != 0) {
            func_0x00010c1d0640(puVar1);
          }
          _objc_release(lVar11);
          puVar14 = puVar14 + 1;
        } while (puVar6 != puVar14);
        puVar14 = auStack_208;
        puVar6 = (undefined1 *)puVar7;
        puVar9 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar7);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(puVar9);
      _objc_retain(puVar14);
      puVar6 = (undefined1 *)puVar9;
      func_0x00010c071d00();
      if (((ulong)puVar6 & 1) == 0) {
        puVar8 = (undefined1 *)puVar9;
        func_0x00010bf51e00();
        uVar10 = *(undefined8 *)((long)puVar7 + 0x10);
        *(undefined1 **)((long)puVar7 + 0x10) = puVar8;
        _objc_release(uVar10);
      }
      (**(code **)(puVar14 + 0x10))(puVar14,(uint)puVar6 ^ 1);
      _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar9);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079d779c; end: 1079d7913; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator _displayedIconsForVenueIds:] */

void FUN_1079d779c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = auStack_e8;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf33460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar4;
        func_0x00010c08fa60();
        if (lVar3 != 0) {
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar8 = auStack_e8;
      lVar2 = param_3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010c071d00();
  if (((ulong)puVar5 & 1) == 0) {
    puVar6 = (undefined1 *)puVar7;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    *(undefined1 **)(param_3 + 0x10) = puVar6;
    _objc_release(uVar9);
  }
  (**(code **)(puVar8 + 0x10))(puVar8,(uint)puVar5 ^ 1);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1079d7914; end: 1079d7997; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator _applyResolvedIcons:completion:] */

void FUN_1079d7914(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c071d00();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  (**(code **)(param_4 + 0x10))(param_4,(uint)uVar1 ^ 1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d7998; end: 1079d7a77; -[SCDiscoverFeedFriendStoriesPlaceCategoryIconCoordinator .cxx_destruct] */

void FUN_1079d7998(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d7a78; end: 1079d7c87;  */

void FUN_1079d7a78(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c259580();
  if (((uint)uVar1 >> 10 & 1) != 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_1079d7c08;
  }
  uVar1 = param_1;
  func_0x00010c259580();
  uVar2 = param_1;
  if (uVar1 < 0x21) {
    if ((1L << (uVar1 & 0x3f) & 0x32U) != 0) {
LAB_1079d7b7c:
      _objc_retain(&PTR____CFConstantStringClassReference_110eb5e98);
      puVar5 = PTR_PTR_1126d5990;
      _objc_alloc(PTR_PTR_1126d5990);
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1079d7bc8;
    }
    if ((1L << (uVar1 & 0x3f) & 0x100010004U) == 0) {
      if (uVar1 != 0) goto LAB_1079d7b54;
      goto LAB_1079d7b70;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb5df8;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb5df8);
    puVar5 = PTR_PTR_1126d5988;
    _objc_alloc(PTR_PTR_1126d5988);
    func_0x00010c259cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03be60(puVar5);
LAB_1079d7bd0:
    _objc_release(uVar2);
  }
  else {
LAB_1079d7b54:
    if (uVar1 == 0x80) {
      _objc_retain(&PTR____CFConstantStringClassReference_110eb5e98);
      puVar5 = PTR_PTR_1126d5990;
      _objc_alloc(PTR_PTR_1126d5990);
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
LAB_1079d7bc8:
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb5e98;
      func_0x00010c05b5e0(puVar5);
      goto LAB_1079d7bd0;
    }
    if ((uVar1 == 0x200) || (uVar1 = param_1, func_0x00010c259580(), ((uint)uVar1 >> 8 & 1) != 0))
    goto LAB_1079d7b7c;
LAB_1079d7b70:
    ppuVar3 = (undefined **)0x0;
    puVar5 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar5);
  _objc_release(ppuVar3);
LAB_1079d7c08:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079d7c88; end: 1079d7e3b; +[SCDiscoverFeedFriendStoriesPlaylistContext contextWithPlaylist:isStorySuggestionEnabled:] */

void FUN_1079d7c88(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_opt_new();
  uVar5 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar3);
  *(char *)(param_1 + 8) = (char)param_4;
  uVar5 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1109f3dc0);
  uVar3 = uVar5;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar5);
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x0001006372a4(uVar3,&PTR___NSConcreteGlobalBlock_1109f3de0);
    uVar5 = uVar3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1079d7e8c;
    puStack_68 = &UNK_1109f3e00;
    puStack_48 = puStack_58;
    _objc_retain();
    uVar5 = param_3;
    puStack_60 = puVar1;
    func_0x0001006372a4(param_3,&puStack_80);
    uVar3 = uVar5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar2 = puVar1;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar5);
    _objc_release(puStack_60);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079d7e3c; end: 1079d7e8b;  */

uint FUN_1079d7e3c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c07fc80(param_2);
    return (uint)param_2 ^ 1;
  }
  return 0;
}



/* Entry: 1079d7e8c; end: 1079d7f37;  */

undefined8 FUN_1079d7e8c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c07fde0();
    if ((int)lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3);
      _objc_release(puVar1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
    }
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1079d7f38; end: 1079d7f3f; -[SCDiscoverFeedFriendStoriesPlaylistContext playlist] */

undefined8 FUN_1079d7f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d7f40; end: 1079d7f47; -[SCDiscoverFeedFriendStoriesPlaylistContext isStorySuggestionEnabled] */

undefined1 FUN_1079d7f40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079d7f48; end: 1079d7f4f; -[SCDiscoverFeedFriendStoriesPlaylistContext playableStories] */

undefined8 FUN_1079d7f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d7f50; end: 1079d7f57; -[SCDiscoverFeedFriendStoriesPlaylistContext playableNonSuggestedStories] */

undefined8 FUN_1079d7f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079d7f58; end: 1079d7f5f; -[SCDiscoverFeedFriendStoriesPlaylistContext nonSuggestedPlaylist] */

undefined8 FUN_1079d7f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079d7f60; end: 1079d7f67; -[SCDiscoverFeedFriendStoriesPlaylistContext exitOperaOffsets] */

undefined8 FUN_1079d7f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079d7f68; end: 1079d7fbb; -[SCDiscoverFeedFriendStoriesPlaylistContext .cxx_destruct] */

void FUN_1079d7f68(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079d7fbc; end: 1079d8af3;  */

void FUN_1079d7fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,int param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  bool bVar25;
  long lVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  int iVar31;
  undefined8 uVar32;
  byte in_stack_00000008;
  char cStack0000000000000018;
  byte bStack0000000000000019;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined *puStack_c0;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  if (param_4 != (undefined *)0x0) {
    puVar30 = param_5;
    func_0x00010c07fe00();
    puVar1 = param_4;
    func_0x00010c07fde0();
    iVar31 = (int)puVar30;
    if (((int)puVar1 == 0) || (iVar31 != 0)) {
      puVar30 = param_4;
      func_0x00010c07fc80();
      puVar1 = param_4;
      func_0x000108f4fe1c(param_4,param_6,2,0,0xffffffffffffffff,1,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110caf60);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_5;
      if ((iVar31 == 0) || (puVar2 = param_4, func_0x00010c07fde0(), (int)puVar2 != 0)) {
        func_0x00010c0fed00();
        _objc_retainAutoreleasedReturnValue();
        bVar25 = false;
      }
      else {
        func_0x00010c0fec60();
        _objc_retainAutoreleasedReturnValue();
        bVar25 = true;
      }
      puVar2 = puVar3;
      if (((ulong)puVar30 & 1) == 0) {
        _objc_retain(puVar3);
      }
      else {
        func_0x00010bf09f60();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = param_5;
      if (bVar25) {
        func_0x00010c0db060();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_5;
        func_0x00010bf9b980();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR____NSArray0__struct_11034ab48;
      }
      puVar6 = PTR_PTR_1126c2380;
      _objc_alloc();
      uVar32 = 0;
      func_0x00010c0070a0(0);
      puVar7 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      puVar8 = param_4;
      FUN_1079d7a78(param_4,puVar1,&PTR____CFConstantStringClassReference_110eb3638);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_4;
      func_0x0001079d79c8();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = param_4;
      func_0x00010c259580();
      if ((((uint)puVar29 >> 2 & 1) == 0) &&
         (puVar29 = param_4, func_0x00010c259580(), ((uint)puVar29 >> 8 & 1) == 0)) {
        puVar29 = param_4;
        func_0x00010c259580();
        puVar21 = param_4;
        func_0x00010c259580();
        if (((ulong)puVar29 & 0x432) != 0) {
          func_0x00010bfddf20();
LAB_1079d8ac0:
          puVar29 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1079d82dc;
        }
        if (puVar21 != (undefined *)0x1) {
          puVar29 = param_4;
          func_0x00010c259580();
          if (puVar29 != (undefined *)0x200) {
            puVar29 = (undefined *)0x0;
            goto LAB_1079d82dc;
          }
          func_0x00010bfddf20();
          goto LAB_1079d8ac0;
        }
        puVar29 = param_4;
        func_0x00010c2444e0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar29;
        func_0x00010c0e1a40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar29);
        if (puVar21 == (undefined *)0x0) {
          if (cStack0000000000000018 != '\0') {
            puVar29 = param_4;
            func_0x00010c0fd5c0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar29;
            func_0x00010c08fa60();
            if (puVar21 == (undefined *)0x0) {
              _objc_release(puVar29);
            }
            else {
              lVar20 = in_stack_00000028;
              func_0x00010c08fa60();
              _objc_release(puVar29);
              if (lVar20 != 0) {
                puVar21 = PTR_PTR_1126c21e0;
                func_0x00010c26e400();
                _objc_retainAutoreleasedReturnValue();
                puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
                func_0x00010c23ba80();
                _objc_retainAutoreleasedReturnValue();
                puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
                func_0x00010c23ba80();
                _objc_retainAutoreleasedReturnValue();
                puVar29 = (undefined *)0x0;
                uVar23 = 1;
                uVar32 = 0x3fd999999999999a;
                goto LAB_1079d82ec;
              }
            }
          }
          puVar29 = (undefined *)0x0;
          puVar21 = (undefined *)0x0;
          puVar24 = (undefined *)0x0;
          puVar22 = (undefined *)0x0;
          uVar23 = 0;
        }
        else {
          puVar21 = param_4;
          func_0x00010c2444e0();
          _objc_retainAutoreleasedReturnValue();
          puVar29 = puVar21;
          func_0x00010c0e1a40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar21);
          puVar21 = (undefined *)0x0;
          puVar24 = (undefined *)0x0;
          puVar22 = (undefined *)0x0;
          uVar23 = 1;
        }
      }
      else {
        puVar29 = PTR_PTR_1126cc4c0;
        func_0x00010bfddf20(param_4);
        func_0x00010c141240();
        _objc_retainAutoreleasedReturnValue();
LAB_1079d82dc:
        puVar21 = (undefined *)0x0;
        puVar24 = (undefined *)0x0;
        puVar22 = (undefined *)0x0;
        uVar23 = 0;
      }
LAB_1079d82ec:
      puVar10 = puVar9;
      FUN_107c89f10(uVar32,puVar9,puVar29,puVar21,puVar24,puVar22,uVar23,0);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = param_4;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar27;
      func_0x000107d23c68();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar27);
      if ((iVar31 == 0) || (puVar27 = param_4, func_0x00010c07fde0(), (int)puVar27 == 0)) {
        puStack_c0 = (undefined *)0x0;
      }
      else {
        puVar27 = param_4;
        func_0x00010c2444e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar27;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = param_8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar27);
        lVar13 = lVar20;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar26 = lVar13;
        func_0x00010c08fa60();
        lVar14 = lVar20;
        if (lVar26 == 0) {
          func_0x00010c294420(lVar20);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf85d80(lVar20);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar13);
        if ((in_stack_00000008 & 1) == 0) {
          lVar13 = lVar20;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar13;
          func_0x00010c08fa60();
          if (lVar26 == 0) {
            lVar26 = 0;
          }
          else {
            lVar26 = lVar20;
            func_0x00010c294420(lVar20);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar13);
        }
        else {
          lVar26 = 0;
        }
        puVar27 = param_4;
        func_0x00010bfd3da0();
        if (((ulong)puVar27 & 1) == 0) {
          puVar27 = PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
          func_0x00010c01b460();
        }
        else {
          puVar27 = (undefined *)0x0;
        }
        puStack_c0 = PTR_PTR_1126c21c0;
        _objc_alloc();
        puVar12 = param_4;
        func_0x00010bfd3da0(param_4);
        FUN_107cf39e8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00d2e0();
        _objc_release(puVar12);
        _objc_release(puVar27);
        _objc_release(lVar26);
        _objc_release(lVar14);
        _objc_release(lVar20);
      }
      puVar27 = PTR_PTR_1126c21c8;
      _objc_alloc();
      puVar12 = param_4;
      func_0x00010bfddf20(param_4);
      FUN_107c89e80();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_4;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051f40(param_1);
      _objc_release(puVar15);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126d5bb8;
      func_0x00010c25bc20();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      if ((param_10 == 0) ||
         (puVar16 = param_4, func_0x00010bfddf20(), puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         (((uint)puVar30 | (uint)puVar16 ^ 0xffffffff) & 1) != 0)) {
        puVar16 = puVar1;
        func_0x00010c0741a0();
        puVar17 = puVar15;
        if ((int)puVar16 == 0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar16 = param_4;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar16);
        _objc_retain(puVar9);
        puVar15 = puVar9;
      }
      func_0x00010c259580();
      uVar28 = (ulong)(in_stack_00000008 & bStack0000000000000019);
      puVar16 = PTR_PTR_1126c22c0;
      _objc_alloc(PTR_PTR_1126c22c0);
      puVar18 = param_4;
      func_0x00010bf85d80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      FUN_107c89bc8(puVar17);
      _objc_retainAutoreleasedReturnValue();
      FUN_1079d8e80(param_2,param_3);
      uVar32 = 0x3fd0000000000000;
      if ((uint)puVar30 == 0) {
        uVar32 = 0x3ff0000000000000;
      }
      if (in_stack_00000020 == 0) {
        FUN_107c89dac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04d500(param_2,param_3,0,uVar32,puVar16);
        _objc_release(uVar28);
      }
      else {
        func_0x00010c04d500(param_2,param_3,0,uVar32,puVar16);
      }
      _objc_release(puVar19);
      _objc_release(puVar18);
      puVar30 = PTR_PTR_1126aea98;
      _objc_alloc(PTR_PTR_1126aea98);
      func_0x00010bffd260();
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar17);
      _objc_release(puVar12);
      _objc_release(puVar27);
      _objc_release(puStack_c0);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar22);
      _objc_release(puVar24);
      _objc_release(puVar21);
      _objc_release(puVar29);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
      goto LAB_1079d8984;
    }
  }
  puVar30 = (undefined *)0x0;
LAB_1079d8984:
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 1079d8af4; end: 1079d8b87;  */

void FUN_1079d8af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  _objc_retain();
  FUN_107c89dac();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  FUN_1079d8b88(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079d8b88; end: 1079d8cd7;  */

void FUN_1079d8b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126d5bc0;
  _objc_alloc(PTR_PTR_1126d5bc0);
  if (param_6 == 0) {
    puVar3 = puVar2;
    FUN_107c89dac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052fa0(param_1,param_2,0x3fd0000000000000,param_3,puVar2);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c052fa0(param_1,param_2,0x3fd0000000000000,param_3,puVar2);
  }
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079d8cd8; end: 1079d8e27;  */

void FUN_1079d8cd8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c22c0;
  _objc_opt_class(PTR_PTR_1126c22c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1079d8e28;
    uStack_40 = 0x1079d8e38;
    uStack_38 = 0;
    func_0x00010c2594a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0520();
    _objc_release(uVar2);
    uVar5 = puStack_58[5];
    _objc_retain(uVar5);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}


