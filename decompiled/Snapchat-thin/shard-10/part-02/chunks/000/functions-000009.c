/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079c7690; end: 1079c76b3; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel copyWithZone:] */

undefined8 FUN_1079c7690(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c76b4; end: 1079c776f; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel hash] */

undefined8 * FUN_1079c76b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_48 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_48;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1079c7804:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079c7810;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar1 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar1 = (double)puVar4[4] == (double)param_3[4];
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1079c7810;
        }
        goto LAB_1079c7804;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1079c7810:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1079c7770; end: 1079c782b; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel isEqual:] */

long FUN_1079c7770(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c7804:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c7810;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1079c7810;
        }
        goto LAB_1079c7804;
      }
    }
    lVar4 = 0;
  }
LAB_1079c7810:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1079c782c; end: 1079c7833; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel title] */

undefined8 FUN_1079c782c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079c7834; end: 1079c783b; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel maximumSize] */

undefined1  [16] FUN_1079c7834(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1079c783c; end: 1079c7843; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel headlineViewLayoutConfiguration] */

undefined8 FUN_1079c783c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079c7844; end: 1079c7873; -[SCDiscoverFeedWhiteSpaceHeadlineViewModel .cxx_destruct] */

void FUN_1079c7844(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c7874; end: 1079c7903; +[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel singleIconViewModelWithIconResourceName:iconSubtitle:] */

void FUN_1079c7874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5a60;
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
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079c7904; end: 1079c79fb; +[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel twoIconsViewModelWithUpperIconResouceName:upperIconSubtitle:lowerIconResourceName:lowerIconSubtitle:] */

void FUN_1079c7904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d5a60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079c79fc; end: 1079c7a1f; -[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel copyWithZone:] */

undefined8 FUN_1079c79fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079c7a20; end: 1079c7ac7; -[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel hash] */

void FUN_1079c7a20(long param_1)

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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f9168;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079c7ac8; end: 1079c7b0b; -[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel internalInit] */

void FUN_1079c7ac8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079c7b0c; end: 1079c7c23; -[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel isEqual:] */

long FUN_1079c7b0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079c7bfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079c7c08;
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
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1079c7c08;
                }
                goto LAB_1079c7bfc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079c7c08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079c7c24; end: 1079c7caf; -[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel matchSingleIconViewModel:twoIconsViewModel:] */

void FUN_1079c7c24(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c7cb0; end: 1079c7d0f; -[SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel .cxx_destruct] */

void FUN_1079c7cb0(long param_1)

{
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



/* Entry: 1079c7d10; end: 1079c8103; -[SCDiscoverFeedRelatedAccountsDataProvider initWithUserSession:imageDownloader:triggerStory:sectionKey:pageType:subscribeStatusManager:isNewUser:parseHelperFunc:bitmojiFriendAvatarProvider:avatarId:snapchattersDataFetcher:adConfigProvider:circumstanceEngine:snapTokenProvider:mixerEndpointManager:lazyDiscoverFeedInteractionHistoryManager:storiesConfigProvider:networkConnectivityMonitor:adRenderDataParser:locationProvider:] */

undefined8 *
FUN_1079c7d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126f9170;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = 0;
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    puVar1[6] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0xc) = param_9;
    puVar1[0xd] = param_11;
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079c8104; end: 1079c810f; +[SCDiscoverFeedRelatedAccountsDataProvider announcerIdentifier] */

undefined ** FUN_1079c8104(void)

{
  return &PTR____CFConstantStringClassReference_110ea8378;
}



/* Entry: 1079c8110; end: 1079c8117; -[SCDiscoverFeedRelatedAccountsDataProvider addListener:] */

void FUN_1079c8110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079c8118; end: 1079c811f; -[SCDiscoverFeedRelatedAccountsDataProvider removeListener:] */

void FUN_1079c8118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079c8120; end: 1079c812b; -[SCDiscoverFeedRelatedAccountsDataProvider setUp] */

void FUN_1079c8120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 1079c812c; end: 1079c8137; -[SCDiscoverFeedRelatedAccountsDataProvider tearDown] */

void FUN_1079c812c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeListener__112628e00,param_1);
  return;
}



/* Entry: 1079c8138; end: 1079c816f; -[SCDiscoverFeedRelatedAccountsDataProvider setSectionDataModel:] */

void FUN_1079c8138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be91770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestRelatedAccountsAndRetryI_112581f78);
  return;
}



/* Entry: 1079c8170; end: 1079c81c3; -[SCDiscoverFeedRelatedAccountsDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1079c8170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1079c81c4;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079c81c4; end: 1079c81f3;  */

void FUN_1079c81c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 1079c81f4; end: 1079c8297; -[SCDiscoverFeedRelatedAccountsDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1079c81f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d59c0;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1079c8298; end: 1079c829f; -[SCDiscoverFeedRelatedAccountsDataProvider numberOfItemsInSection:] */

void FUN_1079c8298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1079c82a0; end: 1079c83ef; -[SCDiscoverFeedRelatedAccountsDataProvider configurationBlocksByReuseIdentifier] */

void FUN_1079c82a0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_60,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1079c83f0;
  puStack_70 = &UNK_110845ae0;
  puVar6 = auStack_60;
  _objc_copyWeak(auStack_68,puVar6);
  ppuVar1 = &puStack_88;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126d59c0;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  puStack_58 = puVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_68);
  puVar5 = auStack_60;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde5c00();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1079c83f0; end: 1079c8437;  */

void FUN_1079c83f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c8438; end: 1079c8543; -[SCDiscoverFeedRelatedAccountsDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1079c8438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079c8544; end: 1079c856f;  */

void FUN_1079c8544(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c8570; end: 1079c85bf; -[SCDiscoverFeedRelatedAccountsDataProvider _updateViewModelsIfNecessary] */

void FUN_1079c8570(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_1079c9498(uVar1,*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed5ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c85c0; end: 1079c8707; -[SCDiscoverFeedRelatedAccountsDataProvider _fetchAndUpdateViewModels] */

void FUN_1079c85c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1079c8708;
  puStack_68 = &UNK_1109f3bb8;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar4 = &puStack_80;
  _objc_retainBlock(ppuVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa4340(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_107bf4170(uVar2,uVar1,ppuVar4,uVar3,uVar5,4,1,*(undefined1 *)(param_1 + 0x60),3);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1079c8708; end: 1079c8847;  */

void FUN_1079c8708(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0xe0);
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    _objc_retain(param_2);
    _objc_retain(puVar2);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1079c8848; end: 1079c887f;  */

void FUN_1079c8848(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c8880; end: 1079c8a0b; -[SCDiscoverFeedRelatedAccountsDataProvider _handleFetchedResponse:responseTimestamp:error:] */

void FUN_1079c8880(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_5 == 0) && (param_3 != 0)) {
    func_0x00010bedc1c0(param_1);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x000107b1968c(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1079c8a0c;
    puStack_78 = &UNK_1108942f0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010846e1c0(lVar1,uVar2,&puStack_90,*(undefined8 *)(param_1 + 0x80));
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(uStack_68);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 0;
    func_0x00010be91780(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079c8a0c; end: 1079c8a5f;  */

void FUN_1079c8a0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c8a60; end: 1079c8c7b; -[SCDiscoverFeedRelatedAccountsDataProvider _handleFetchedResponse:responseTimestamp:snapchatterByUserId:] */

void FUN_1079c8a60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b0ef8;
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  lVar3 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa4340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010c03ef40(puVar2);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(lVar3);
  pcVar9 = *(code **)(param_1 + 0x68);
  if (pcVar9 != (code *)0x0) {
    lVar3 = param_3;
    func_0x00010c123320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    (*pcVar9)(lVar3,puVar2,uVar1,0,uVar4,param_5,0,0,0,uVar5,*(undefined8 *)(param_1 + 0x90),
              *(undefined8 *)(param_1 + 0xc0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      func_0x00010bf529e0(lVar6);
    }
    lVar3 = lVar6;
    func_0x0001006372a4(lVar6,&PTR___NSConcreteGlobalBlock_1109f3be8);
    lVar7 = lVar3;
    func_0x00010bd86420();
    func_0x00010bf529e0();
    lVar8 = lVar7;
    func_0x00010bf51e00(lVar7);
    func_0x00010bee0d40(param_1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar6);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c8c7c; end: 1079c8ce3;  */

bool FUN_1079c8c7c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c25b720();
  if ((lVar2 == 3) || (lVar2 = param_2, func_0x00010c25b720(), lVar2 == 2)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c25b720(param_2);
    bVar1 = lVar2 == 0xb;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1079c8ce4; end: 1079c8e5b;  */

void FUN_1079c8ce4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126c2140;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25a160(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b1b20(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c25a160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bbc20(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2ba4e0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1079c8e5c; end: 1079c8f13; -[SCDiscoverFeedRelatedAccountsDataProvider _updateNetworkRetryTimesOnUpdateQueue:] */

void FUN_1079c8e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1079c8f14; end: 1079c8f43;  */

void FUN_1079c8f14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079c8f44; end: 1079c8feb; -[SCDiscoverFeedRelatedAccountsDataProvider _requestRelatedAccountsAndRetryIfFailedOnUpdateQueue] */

void FUN_1079c8f44(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1079c8fec; end: 1079c9017;  */

void FUN_1079c8fec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c9018; end: 1079c9083; -[SCDiscoverFeedRelatedAccountsDataProvider _requestRelatedAccountsAndRetryIfFailed] */

void FUN_1079c9018(long param_1)

{
  undefined8 uVar1;
  
  if (2 < *(long *)(param_1 + 0x50)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchAndUpdateViewModels_1125617c0);
  return;
}



/* Entry: 1079c9084; end: 1079c90f7; -[SCDiscoverFeedRelatedAccountsDataProvider _configureSubscriptionCellForReuse:] */

void FUN_1079c9084(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d59c0;
  _objc_opt_class(PTR_PTR_1126d59c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079c90f8; end: 1079c91e3; -[SCDiscoverFeedRelatedAccountsDataProvider _updateStories:] */

void FUN_1079c90f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar1);
  func_0x00010c064ac0(*(undefined8 *)(param_1 + 0x58));
  *(undefined1 *)(param_1 + 0x48) = 0;
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079c91e4; end: 1079c920f;  */

void FUN_1079c91e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c9210; end: 1079c925b; -[SCDiscoverFeedRelatedAccountsDataProvider _updateContainerCellViewModels:] */

void FUN_1079c9210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079c925c; end: 1079c9263; -[SCDiscoverFeedRelatedAccountsDataProvider sectionDataModel] */

undefined8 FUN_1079c925c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1079c9264; end: 1079c927b; -[SCDiscoverFeedRelatedAccountsDataProvider dataProviderDelegate] */

void FUN_1079c9264(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079c927c; end: 1079c9287; -[SCDiscoverFeedRelatedAccountsDataProvider setDataProviderDelegate:] */

void FUN_1079c927c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 1079c9288; end: 1079c928f; -[SCDiscoverFeedRelatedAccountsDataProvider updateQueuePerformer] */

undefined8 FUN_1079c9288(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1079c9290; end: 1079c92bf; -[SCDiscoverFeedRelatedAccountsDataProvider setUpdateQueuePerformer:] */

void FUN_1079c9290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079c92c0; end: 1079c93e7; -[SCDiscoverFeedRelatedAccountsDataProvider .cxx_destruct] */

void FUN_1079c92c0(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079c93e8; end: 1079c9497;  */

void FUN_1079c93e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d5918;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04d620();
  _objc_release(param_4);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079c9498; end: 1079c9523;  */

void FUN_1079c9498(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1079c9524;
  puStack_30 = &UNK_1109f3c38;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100504554(param_1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079c9524; end: 1079c9ff3;  */

void FUN_1079c9524(long param_1,undefined *param_2)

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
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(param_2);
  func_0x00010c2600c0();
  puVar13 = param_2;
  func_0x00010c25b720();
  puVar12 = param_2;
  if (puVar13 == (undefined *)0x3) {
    puVar13 = param_2;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126b15c8;
    if (puVar3 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar3);
      _objc_alloc();
      puVar2 = puVar3;
      func_0x00010c2923e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c292e20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a6a0(puVar3);
      puVar6 = PTR_PTR_1126b14b8;
      _objc_alloc(PTR_PTR_1126b14b8);
      puVar7 = puVar3;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf1ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7be0(puVar6);
      puVar9 = puVar3;
      func_0x00010bf24ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c292e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c292e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c05c0e0();
      _objc_release(puVar1);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puStack_70 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar2 = puVar3;
    func_0x00010bf24fc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_78 = puVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_78;
    func_0x00010c08fa60();
    puVar4 = puVar3;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar4;
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puStack_78);
      puStack_88 = (undefined *)0x0;
      puStack_78 = puVar4;
    }
    puVar2 = puVar3;
    func_0x00010bf24fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c292e20(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf1acc0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf1ade0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = puVar2;
      FUN_1079c9ff4(puVar2,puVar4,puVar5,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      puStack_98 = (undefined *)0x0;
    }
    if (puVar13 != (undefined *)0x0) {
      func_0x000108f47298();
    }
    puVar2 = PTR_PTR_1126d58f0;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010c2923e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf24ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049180();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puStack_80 = PTR_PTR_1126b02a8;
    if (puVar2 == (undefined *)0x0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar2);
      _objc_alloc();
      func_0x00010c01b460();
      _objc_release(puVar2);
    }
    func_0x00010c259740();
    FUN_1079c93e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar3);
    if (puStack_98 != (undefined *)0x0) goto LAB_1079c9e90;
  }
  else {
    puVar13 = param_2;
    func_0x00010c25b720();
    if (puVar13 == (undefined *)0x2) {
      puVar13 = param_2;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar13;
      func_0x00010bfad760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = puVar13;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar3 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c25a160(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126d58d8;
      puStack_80 = (undefined *)0x0;
      if ((puVar4 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
        _objc_retain(puVar7);
        _objc_retain(puVar6);
        _objc_retain(puVar4);
        _objc_alloc(puVar13);
        func_0x00010bff9e40();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
        puStack_80 = PTR_PTR_1126b02a8;
        _objc_alloc();
        func_0x00010c01b460();
        _objc_release(puVar13);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c259740();
      FUN_1079c93e8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = param_2;
      func_0x00010c25b720();
      if (puVar13 != (undefined *)0xb) {
        puStack_70 = (undefined *)0x0;
        puStack_80 = (undefined *)0x0;
        puStack_78 = (undefined *)0x0;
        puStack_88 = (undefined *)0x0;
        puVar12 = (undefined *)0x0;
        goto LAB_1079c9e70;
      }
      puVar13 = param_2;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar13;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = puVar13;
      func_0x00010bfad760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = puVar13;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar3 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010c2387e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c237cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_2;
      func_0x00010c25a160(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d58e8;
      puStack_80 = (undefined *)0x0;
      if ((((puVar13 != (undefined *)0x0) && (puVar5 != (undefined *)0x0)) &&
          (puVar7 != (undefined *)0x0)) && (puVar9 != (undefined *)0x0)) {
        _objc_retain(puVar10);
        _objc_retain(puVar9);
        _objc_retain(puVar13);
        _objc_retain(puVar7);
        _objc_retain(puVar5);
        _objc_alloc(puVar3);
        func_0x00010bff9e20();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puStack_80 = PTR_PTR_1126b02a8;
        _objc_alloc();
        func_0x00010c01b460();
        _objc_release(puVar3);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c259740();
      FUN_1079c93e8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
    }
    _objc_release(puVar2);
    puStack_88 = (undefined *)0x0;
  }
LAB_1079c9e70:
  puStack_98 = PTR_PTR_1126b4860;
  func_0x00010c0fde60(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
LAB_1079c9e90:
  puVar13 = PTR_PTR_1126d5b48;
  func_0x00010c0d7ba0(PTR_PTR_1126d5b48);
  _objc_retainAutoreleasedReturnValue();
  FUN_1079cd71c(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5b50;
  _objc_alloc(PTR_PTR_1126d5b50);
  func_0x00010c259740(param_2);
  puVar2 = param_2;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b080(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar4 = PTR_PTR_1126d59c0;
  func_0x00010bfe5ec0(PTR_PTR_1126d59c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(puVar13);
  _objc_release(puStack_98);
  _objc_release(puVar12);
  _objc_release(puStack_80);
  _objc_release(puStack_88);
  _objc_release(puStack_78);
  _objc_release(puStack_70);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079c9ff4; end: 1079ca113;  */

void FUN_1079c9ff4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    lVar1 = param_2;
    if (param_1 != 0) {
      lVar1 = param_1;
    }
    func_0x000108ffe710(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bd8f0;
    func_0x00010c29e6c0(PTR_PTR_1126bd8f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000108feaf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  else {
    puVar3 = PTR_PTR_1126b4860;
    func_0x00010bf1c1e0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079ca114; end: 1079ca2e7;  */

void FUN_1079ca114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  uVar4 = param_2;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = param_2;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) goto LAB_1079ca294;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
LAB_1079ca294:
  func_0x00010bf7dbc0(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ca2e8; end: 1079ca51f; -[SCDiscoverFeedRelatedAccountsViewController initWithUserSession:compositeStoryIdentifier:navigationDelegate:dataProvider:actionHandler:willDismissBlock:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1079ca2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f9178;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112767324;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767328;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276732c),param_6);
    lVar5 = (long)_DAT_112767330;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112767334;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767338);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767338) = uVar2;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11276733c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767340);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767340) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112767344) = param_1;
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767348);
    *(undefined **)((long)puVar1 + (long)_DAT_112767348) = puVar3;
    _objc_release(uVar2);
    func_0x00010c20eaa0(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1079ca520; end: 1079ca52b; +[SCDiscoverFeedRelatedAccountsViewController announcerIdentifier] */

undefined ** FUN_1079ca520(void)

{
  return &PTR____CFConstantStringClassReference_110ea83b8;
}



/* Entry: 1079ca52c; end: 1079ca53b; -[SCDiscoverFeedRelatedAccountsViewController addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ca52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767348),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079ca53c; end: 1079ca54b; -[SCDiscoverFeedRelatedAccountsViewController removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ca53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767348),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079ca54c; end: 1079ca59b; -[SCDiscoverFeedRelatedAccountsViewController loadView] */

void FUN_1079ca54c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bea82c0(param_1);
  func_0x00010bea45e0(param_1);
  return;
}



/* Entry: 1079ca59c; end: 1079caacb; -[SCDiscoverFeedRelatedAccountsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ca59c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f9178;
  plVar1 = &lStack_a8;
  lStack_a8 = param_5;
  _objc_msgSendSuper2(plVar1,PTR_s_viewDidLoad_112684cd8);
  if (2 < lRam00000001138466f0) {
    puVar2 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar10 = (long)_DAT_11276734c;
    uVar9 = *(undefined8 *)(param_5 + lVar10);
    *(undefined **)(param_5 + lVar10) = puVar2;
    _objc_release(uVar9);
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar10));
    uVar9 = *(undefined8 *)(param_5 + lVar10);
    lVar3 = param_5;
    func_0x00010bf14800(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067880(uVar9);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf80f60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112767350;
    uVar9 = *(undefined8 *)(param_5 + lVar12);
    *(long *)(param_5 + lVar12) = lVar4;
    _objc_release(uVar9);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bfdef60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0bd00();
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar11 = (long)_DAT_112767354;
    uVar9 = *(undefined8 *)(param_5 + lVar11);
    *(undefined **)(param_5 + lVar11) = puVar2;
    _objc_release(uVar9);
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar11));
    func_0x00010c182220(*(undefined8 *)(param_5 + lVar11));
    uVar9 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010bf5e160(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_5 + lVar11));
    _objc_release(uVar9);
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12));
    plVar1 = (long *)PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar4 = param_5;
    func_0x00010bfdef60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010c19f0e0(0,0,param_3,param_4 + param_1,plVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    plStack_b0 = plVar1;
    func_0x00010c16e440(plVar1);
    _objc_release(puVar2);
    uVar9 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c08c0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar9);
    puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    uStack_c0 = uVar9;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_b8 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + lVar11);
    uStack_d0 = uVar9;
    uStack_98 = uVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    uStack_e0 = uVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_5 + lVar11);
    uStack_90 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar11);
    uStack_88 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_f0);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(param_5);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(unaff_x20);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lStack_e8);
    _objc_release(lStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_d0);
    _objc_release(lStack_c8);
    _objc_release(lStack_b8);
    _objc_release(uStack_c0);
    plVar1 = plStack_b0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_1079caacc;
  puStack_118 = PTR_PTR_1126f9178;
  plStack_120 = plVar1;
  lStack_110 = unaff_x20;
  lStack_108 = param_5;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&plStack_120,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(plVar1);
  return;
}



/* Entry: 1079caacc; end: 1079cab13; -[SCDiscoverFeedRelatedAccountsViewController viewWillAppear:] */

void FUN_1079caacc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 1079cab14; end: 1079cab5b; -[SCDiscoverFeedRelatedAccountsViewController viewDidDisappear:] */

void FUN_1079cab14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9178;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010be53280(param_1);
  return;
}



/* Entry: 1079cab5c; end: 1079cad43; -[SCDiscoverFeedRelatedAccountsViewController _setSubtitleUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cab5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bdf44a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112767358;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar2;
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = uVar3;
  func_0x0001079d38e4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bfdf5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar6);
  _objc_release(uVar8);
  func_0x00010bfdf5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1079cad44; end: 1079cadc3; -[SCDiscoverFeedRelatedAccountsViewController _setHeaderUI] */

void FUN_1079cad44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x0001079d38e4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cadc4; end: 1079cb033; -[SCDiscoverFeedRelatedAccountsViewController _setupCollectionViewUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cadc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b1108;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + _DAT_11276735c);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112767330);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112767334);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_alloc(puVar1);
  func_0x00010c04f820();
  func_0x00010c161980();
  _objc_release(uVar10);
  func_0x00010c1f9240(puVar1,param_2,uVar9);
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126c23a0;
  _objc_alloc(PTR_PTR_1126c23a0);
  func_0x00010c042de0();
  func_0x00010c189840();
  func_0x00010c1b9a60(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar4 = PTR_PTR_1126b1308;
  _objc_alloc();
  puVar5 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0x4039000000000000,0x4030000000000000,0,0x4030000000000000,
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar5,param_2,0,puVar3,puVar6,1,1,0);
  func_0x00010c042ce0(puVar4,param_2,puVar1,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = PTR_PTR_1126b1318;
  func_0x00010c1555c0(PTR_PTR_1126b1318,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9720(puVar5,param_2,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar7 = (long)_DAT_112767360;
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar8);
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  func_0x00010c21ad00();
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079cb034; end: 1079cb0bb; -[SCDiscoverFeedRelatedAccountsViewController _createSubtitleLabel] */

void FUN_1079cb034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  func_0x00010c21ad00();
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079cb0bc; end: 1079cb16b; -[SCDiscoverFeedRelatedAccountsViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1079cb0bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9178;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  func_0x00010c1070e0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2e0();
  _objc_release(puVar1);
  return;
}



/* Entry: 1079cb16c; end: 1079cb173; -[SCDiscoverFeedRelatedAccountsViewController preferredStatusBarStyle] */

undefined8 FUN_1079cb16c(void)

{
  return 0;
}



/* Entry: 1079cb174; end: 1079cb17b; -[SCDiscoverFeedRelatedAccountsViewController prefersStatusBarHidden] */

undefined8 FUN_1079cb174(void)

{
  return 0;
}



/* Entry: 1079cb17c; end: 1079cb25b; -[SCDiscoverFeedRelatedAccountsViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cb17c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  puVar2 = PTR_PTR_1126c21f0;
  _objc_opt_new(PTR_PTR_1126c21f0);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2026e0(puVar1,param_2,0);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea83d8);
  lVar4 = (long)_DAT_11276735c;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010beab9c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079cb25c; end: 1079cb2bf; -[SCDiscoverFeedRelatedAccountsViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cb25c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9178;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if ((param_4 == 1) && (*(long *)(param_1 + _DAT_112767338) != 0)) {
    (**(code **)(*(long *)(param_1 + _DAT_112767338) + 0x10))();
  }
  return;
}



/* Entry: 1079cb2c0; end: 1079cb317; -[SCDiscoverFeedRelatedAccountsViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cb2c0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9178;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didSelectDismissalActionWithHead_1125bc3f8);
  if (*(long *)(param_1 + _DAT_112767338) != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_112767338) + 0x10))();
  }
  return;
}



/* Entry: 1079cb318; end: 1079cb31f; -[SCDiscoverFeedRelatedAccountsViewController pageViewName] */

undefined8 FUN_1079cb318(void)

{
  return 0x50;
}



/* Entry: 1079cb320; end: 1079cb39f; -[SCDiscoverFeedRelatedAccountsViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1079cb320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea8398);
  if ((int)param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1079cb3a0;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 1079cb3a0; end: 1079cb417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cb3a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276735c),param_2,1);
  lVar2 = (long)_DAT_112767358;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c1a7f60(uVar1,param_2,0);
  func_0x0001079d39a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079cb418; end: 1079cb41b; -[SCDiscoverFeedRelatedAccountsViewController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:] */

void FUN_1079cb418(void)

{
  return;
}



/* Entry: 1079cb41c; end: 1079cb457; -[SCDiscoverFeedRelatedAccountsViewController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:] */

void FUN_1079cb41c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImpressionItems_112593ff0);
  return;
}



/* Entry: 1079cb458; end: 1079cb45b; -[SCDiscoverFeedRelatedAccountsViewController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:] */

void FUN_1079cb458(void)

{
  return;
}



/* Entry: 1079cb45c; end: 1079cb45f; -[SCDiscoverFeedRelatedAccountsViewController sectionBasedCollectionViewUpdater:didSetUpSections:] */

void FUN_1079cb45c(void)

{
  return;
}



/* Entry: 1079cb460; end: 1079cb463; -[SCDiscoverFeedRelatedAccountsViewController sectionBasedCollectionViewUpdater:didTearDownSections:] */

void FUN_1079cb460(void)

{
  return;
}



/* Entry: 1079cb464; end: 1079cb477; -[SCDiscoverFeedRelatedAccountsViewController sectionInsetsForSectionBasedCollectionViewUpdater:] */

undefined8 FUN_1079cb464(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 1079cb478; end: 1079cb47b; -[SCDiscoverFeedRelatedAccountsViewController presentingViewControllerForSectionBasedCollectionViewUpdater:] */

void FUN_1079cb478(void)

{
  return;
}



/* Entry: 1079cb47c; end: 1079cb47f; -[SCDiscoverFeedRelatedAccountsViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_1079cb47c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateImpressionItems_112593ff0);
  return;
}



/* Entry: 1079cb480; end: 1079cba27; -[SCDiscoverFeedRelatedAccountsViewController _updateImpressionItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cb480(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11276735c;
  lVar4 = *(long *)(param_1 + lVar20);
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar4;
  func_0x00010bf529e0();
  if (lVar22 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar19 = 0;
    _objc_retain(lVar4);
    lVar22 = lVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar22 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar4);
        }
        uVar23 = *(undefined8 *)(lVar24 * 8);
        uVar6 = *(ulong *)(param_1 + lVar20);
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126d59c0;
        _objc_opt_class(PTR_PTR_1126d59c0);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar7);
        uVar1 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar6);
        if (uVar1 != 0) {
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126d5b50;
          _objc_opt_class(PTR_PTR_1126d5b50);
          uVar9 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar7);
          uVar8 = uVar6;
          if ((uVar9 & 1) == 0) {
            uVar8 = 0;
          }
          _objc_retain(uVar8);
          _objc_release(uVar6);
          if (uVar8 != 0) {
            uVar10 = *(undefined8 *)(param_1 + lVar20);
            func_0x00010c08c980();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = *(undefined8 *)(param_1 + lVar20);
            func_0x00010bfb68e0();
            uVar11 = *(undefined8 *)(param_1 + lVar20);
            func_0x00010c262ca0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51460(uVar19,uVar18);
            _objc_release(uVar11);
            puVar21 = PTR_PTR_1126c21e8;
            _objc_alloc();
            uVar9 = uVar6;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar9;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25a160(uVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0840e0(uVar23);
            func_0x00010c0df780(puVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar6;
            func_0x000108f52270(uVar6,puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0840e0(uVar23);
            func_0x00010c01b6a0(puVar21);
            _objc_release(uVar14);
            _objc_release(puVar7);
            _objc_release(uVar6);
            _objc_release(puVar13);
            _objc_release(uVar12);
            _objc_release(uVar9);
            func_0x00010befa120(puVar5);
            _objc_release(puVar21);
            _objc_release(uVar10);
          }
          _objc_release(uVar8);
        }
        _objc_release(uVar1);
        lVar24 = lVar24 + 1;
      } while (lVar22 != lVar24);
      lVar22 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar21 = *(undefined **)(param_1 + _DAT_112767340);
    puVar7 = puVar21;
    if (puVar21 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c297120();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar13);
    if (puVar21 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    uVar19 = *(undefined8 *)(param_1 + _DAT_112767348);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar19);
    _objc_release(param_1);
    _objc_release(puVar16);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = (long)_DAT_112767348;
  uVar19 = *(undefined8 *)(puVar3 + lVar4);
  puVar5 = puVar3;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_112767340;
  FUN_1079ca114(uVar19,&PTR____CFConstantStringClassReference_110f414b8,puVar5,0x57,
                *(undefined8 *)(puVar3 + lVar22));
  _objc_release(puVar5);
  uVar19 = *(undefined8 *)(puVar3 + lVar4);
  puVar5 = puVar3;
  _objc_opt_class(puVar3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  FUN_1079ca114(uVar19,&PTR____CFConstantStringClassReference_110f41458,puVar5,0x13,
                *(undefined8 *)(puVar3 + lVar22));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1079cba28; end: 1079cbaeb; -[SCDiscoverFeedRelatedAccountsViewController _logFeedPageOpenAndFeedPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cba28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112767348;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112767340;
  FUN_1079ca114(uVar2,&PTR____CFConstantStringClassReference_110f414b8,lVar1,0x57,
                *(undefined8 *)(param_1 + lVar3));
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  FUN_1079ca114(uVar2,&PTR____CFConstantStringClassReference_110f41458,lVar1,0x13,
                *(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079cbaec; end: 1079cbaff; -[SCDiscoverFeedRelatedAccountsViewController themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cbaec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767354),PTR_s_setImage__1126481e8,param_4);
  return;
}



/* Entry: 1079cbb00; end: 1079cbc0b; -[SCDiscoverFeedRelatedAccountsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cbb00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276733c,0);
  _objc_storeStrong(param_1 + _DAT_112767350,0);
  _objc_storeStrong(param_1 + _DAT_112767354,0);
  _objc_storeStrong(param_1 + _DAT_11276734c,0);
  _objc_storeStrong(param_1 + _DAT_112767338,0);
  _objc_storeStrong(param_1 + _DAT_112767358,0);
  _objc_storeStrong(param_1 + _DAT_112767334,0);
  _objc_storeStrong(param_1 + _DAT_112767330,0);
  _objc_storeStrong(param_1 + _DAT_112767360,0);
  _objc_storeStrong(param_1 + _DAT_112767348,0);
  _objc_destroyWeak(param_1 + _DAT_11276732c);
  _objc_storeStrong(param_1 + _DAT_11276735c,0);
  _objc_storeStrong(param_1 + _DAT_112767340,0);
  _objc_storeStrong(param_1 + _DAT_112767328,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767324,0);
  return;
}



/* Entry: 1079cbc0c; end: 1079cbc17; +[SCDiscoverFeedRelatedAccountsCollectionViewCell identifier] */

undefined ** FUN_1079cbc0c(void)

{
  return &PTR____CFConstantStringClassReference_110ea83f8;
}



/* Entry: 1079cbc18; end: 1079cbc67; -[SCDiscoverFeedRelatedAccountsCollectionViewCell initWithFrame:] */

undefined1 * FUN_1079cbc18(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079cbc68; end: 1079cbd63; -[SCDiscoverFeedRelatedAccountsCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cbc68(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5b50;
  _objc_opt_class(PTR_PTR_1126d5b50);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_112767364;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_1079cbd44;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010bee5000(param_1);
  }
LAB_1079cbd44:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079cbd64; end: 1079cc133; -[SCDiscoverFeedRelatedAccountsCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cbd64(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f9180;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar5 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar8 = param_1;
  dVar9 = param_2;
  dVar7 = param_3;
  uVar4 = param_4;
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112767368;
  uVar2 = *(ulong *)(param_5 + lVar5);
  func_0x00010bfb68e0();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,dVar8,dVar9,dVar7,uVar4);
  if ((uVar2 & 1) == 0) {
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010bf199e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  dVar7 = param_1 + 10.0;
  dVar12 = param_2 + 7.0;
  uVar4 = 0x404a000000000000;
  uVar14 = 0x404a000000000000;
  func_0x00010b8162e0();
  lVar6 = (long)_DAT_112767370;
  dVar8 = param_3;
  func_0x00010bf9c420(*(undefined8 *)(param_5 + lVar6));
  dVar15 = (param_3 + -10.0) - dVar8;
  func_0x00010bfe0640(PTR_PTR_1126d5b58);
  dVar8 = 66.0 - dVar8;
  dVar16 = dVar8 * 0.5;
  func_0x00010bf9c420(*(undefined8 *)(param_5 + lVar6));
  dVar9 = dVar8;
  func_0x00010bfe0640(PTR_PTR_1126d5b58);
  func_0x00010b8162e0(dVar15,dVar16,dVar8,dVar9);
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  lVar5 = (long)_DAT_112767374;
  dVar9 = 1.79769313486232e+308;
  dVar16 = 1.79769313486232e+308;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar5));
  dVar8 = dVar7;
  _CGRectGetMaxX(dVar7,dVar12,uVar4,uVar14);
  dVar15 = dVar8 + 10.0;
  func_0x00010bf9c420(*(undefined8 *)(param_5 + lVar6));
  dVar8 = ((param_3 - dVar8) + -10.0) - dVar15;
  lVar6 = (long)_DAT_112767378;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar6);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    dVar10 = 1.79769313486232e+308;
    dVar13 = 1.79769313486232e+308;
    func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar6));
    if (dVar8 <= dVar10) {
      dVar10 = dVar8;
    }
    dVar17 = (66.0 - (dVar16 + dVar13 + 2.0)) * 0.5;
    func_0x00010b8162e0(dVar15,dVar16 + dVar17 + 2.0,dVar10,dVar13);
    func_0x00010b8166f8(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  }
  else {
    dVar17 = (66.0 - dVar16) * 0.5;
  }
  if (dVar8 <= dVar9) {
    dVar9 = dVar8;
  }
  func_0x00010b8162e0(dVar15,dVar17,dVar9,dVar16);
  dVar8 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar10 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar13 = dVar10;
  func_0x00010b816670();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar11 = param_1;
  func_0x00010b816670();
  func_0x00010b816528(dVar8,dVar10 - dVar13,param_1,dVar11);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276737c));
  func_0x00010b8166f8(dVar7,dVar12,uVar4,uVar14,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112767380));
  func_0x00010b8166f8(dVar15,dVar17,dVar9,dVar16,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  return;
}



/* Entry: 1079cc134; end: 1079cc13f; +[SCDiscoverFeedRelatedAccountsCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_1079cc134(void)

{
  return;
}



/* Entry: 1079cc140; end: 1079cc14f; -[SCDiscoverFeedRelatedAccountsCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112767380),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 1079cc150; end: 1079cc19b; -[SCDiscoverFeedRelatedAccountsCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc150(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276736c) = param_3;
  func_0x00010c19f0e0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),
                      *(undefined8 *)(param_1 + _DAT_112767368));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1079cc19c; end: 1079cc287; -[SCDiscoverFeedRelatedAccountsCollectionViewCell discoverFeedRelatedAccountsSubscribeButtonDidTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc19c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d5b50;
  uVar4 = *(ulong *)(param_1 + _DAT_112767364);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c25fd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112767384);
    uVar3 = uVar1;
    func_0x00010c25fd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


