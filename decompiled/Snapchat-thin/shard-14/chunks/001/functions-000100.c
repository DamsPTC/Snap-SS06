/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afd3e50; end: 10afd3e87; -[SCLensExplorerContainerItemBuilder withContainerId:] */

long FUN_10afd3e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3e88; end: 10afd3ebf; -[SCLensExplorerContainerItemBuilder withName:] */

long FUN_10afd3e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3ec0; end: 10afd3ef7; -[SCLensExplorerContainerItemBuilder withContainerDescription:] */

long FUN_10afd3ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3ef8; end: 10afd3f2f; -[SCLensExplorerContainerItemBuilder withItems:] */

long FUN_10afd3ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3f30; end: 10afd3f67; -[SCLensExplorerContainerItemBuilder withRenderStrategy:] */

long FUN_10afd3f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3f68; end: 10afd3f9f; -[SCLensExplorerContainerItemBuilder withFeedId:] */

long FUN_10afd3f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3fa0; end: 10afd3fd7; -[SCLensExplorerContainerItemBuilder withRemoteState:] */

long FUN_10afd3fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd3fd8; end: 10afd400f; -[SCLensExplorerContainerItemBuilder withDeeplinkURL:] */

long FUN_10afd3fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd4010; end: 10afd4087; -[SCLensExplorerContainerItemBuilder .cxx_destruct] */

void FUN_10afd4010(long param_1)

{
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



/* Entry: 10afd4088; end: 10afd40f3; +[SCLensExplorerContainerContentItem creatorItemWithCreatorItem:] */

void FUN_10afd4088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccd78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd40f4; end: 10afd415f; +[SCLensExplorerContainerContentItem heroItemWithHeroItem:] */

void FUN_10afd40f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccd78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd4160; end: 10afd41c3; +[SCLensExplorerContainerContentItem lensItemWithLensItem:] */

void FUN_10afd4160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccd78;
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



/* Entry: 10afd41c4; end: 10afd422f; +[SCLensExplorerContainerContentItem storyItemWithStoryItem:] */

void FUN_10afd41c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccd78;
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



/* Entry: 10afd4230; end: 10afd4253; -[SCLensExplorerContainerContentItem copyWithZone:] */

undefined8 FUN_10afd4230(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd4254; end: 10afd42e3; -[SCLensExplorerContainerContentItem hash] */

void FUN_10afd4254(long param_1)

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
  puStack_78 = PTR_PTR_112703ba0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd42e4; end: 10afd4327; -[SCLensExplorerContainerContentItem internalInit] */

void FUN_10afd42e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703ba0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd4328; end: 10afd440f; -[SCLensExplorerContainerContentItem isEqual:] */

long FUN_10afd4328(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd43e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd43f4;
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
              goto LAB_10afd43f4;
            }
            goto LAB_10afd43e8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd43f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd4410; end: 10afd44f7; -[SCLensExplorerContainerContentItem matchLensItem:storyItem:creatorItem:heroItem:] */

void FUN_10afd4410(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10afd44c8;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10afd44c8;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10afd44c8;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_10afd44c8;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10afd44c8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afd44f8; end: 10afd453f; -[SCLensExplorerContainerContentItem .cxx_destruct] */

void FUN_10afd44f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afd4540; end: 10afd45b7; -[SCLensExplorerLensItemGamesMetadata initWithSubtitle:] */

undefined1 * FUN_10afd4540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703ba8;
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



/* Entry: 10afd45b8; end: 10afd45db; -[SCLensExplorerLensItemGamesMetadata copyWithZone:] */

undefined8 FUN_10afd45b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd45dc; end: 10afd45e3; -[SCLensExplorerLensItemGamesMetadata hash] */

void FUN_10afd45dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afd45e4; end: 10afd4673; -[SCLensExplorerLensItemGamesMetadata isEqual:] */

long FUN_10afd45e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd4658;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afd4658;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afd4658;
    }
  }
  lVar3 = 1;
LAB_10afd4658:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd4674; end: 10afd467b; -[SCLensExplorerLensItemGamesMetadata subtitle] */

undefined8 FUN_10afd4674(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd467c; end: 10afd4687; -[SCLensExplorerLensItemGamesMetadata .cxx_destruct] */

void FUN_10afd467c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd4688; end: 10afd46a3; +[SCLensExplorerLensItemGamesMetadataBuilder lensExplorerLensItemGamesMetadata] */

void FUN_10afd4688(void)

{
  _objc_alloc_init(PTR_PTR_1126df2f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd46a4; end: 10afd4733; +[SCLensExplorerLensItemGamesMetadataBuilder lensExplorerLensItemGamesMetadataFromExistingLensExplorerLensItemGamesMetadata:] */

void FUN_10afd46a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126df2f8;
  _objc_retain(param_3);
  func_0x00010c093280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2ba960(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10afd4734; end: 10afd4763; -[SCLensExplorerLensItemGamesMetadataBuilder build] */

void FUN_10afd4734(void)

{
  _objc_alloc(PTR_PTR_1126df300);
  func_0x00010c04f2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd4764; end: 10afd479b; -[SCLensExplorerLensItemGamesMetadataBuilder withSubtitle:] */

long FUN_10afd4764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd479c; end: 10afd47a7; -[SCLensExplorerLensItemGamesMetadataBuilder .cxx_destruct] */

void FUN_10afd479c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd47a8; end: 10afd4a9f; -[SCLensExplorerLensItem initWithUnlockableId:lensName:deeplinkURL:iconURL:thumbnailMediaURL:creator:animation:loggingInfo:lensAttribution:isSponsored:viewCount:badgeData:isScpExclusive:hasNewContent:consecutiveDaysPlayed:gamesMetadata:] */

undefined8 *
FUN_10afd47a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain();
  puStack_68 = PTR_PTR_112703bb0;
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
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_11;
    *(undefined1 *)(puVar1 + 1) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_16;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 10afd4aa0; end: 10afd4ac3; -[SCLensExplorerLensItem copyWithZone:] */

undefined8 FUN_10afd4aa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd4ac4; end: 10afd4bcb; -[SCLensExplorerLensItem hash] */

undefined8 * FUN_10afd4ac4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = uVar2;
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
LAB_10afd4d84:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd4d90;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[10] == param_3[10] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
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
                      lVar5 = puVar3[0xb];
                      if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xc];
                        if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xd];
                          if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xe];
                            if ((lVar5 == param_3[0xe]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              puVar6 = (undefined8 *)puVar3[0xf];
                              if (puVar6 != (undefined8 *)param_3[0xf]) {
                                func_0x00010c071ae0();
                                goto LAB_10afd4d90;
                              }
                              goto LAB_10afd4d84;
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
LAB_10afd4d90:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd4bcc; end: 10afd4dab; -[SCLensExplorerLensItem isEqual:] */

long FUN_10afd4bcc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd4d84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd4d90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
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
                            if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x78);
                              if (lVar3 != *(long *)(param_3 + 0x78)) {
                                func_0x00010c071ae0();
                                goto LAB_10afd4d90;
                              }
                              goto LAB_10afd4d84;
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
LAB_10afd4d90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd4dac; end: 10afd4db3; -[SCLensExplorerLensItem unlockableId] */

undefined8 FUN_10afd4dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd4db4; end: 10afd4dbb; -[SCLensExplorerLensItem lensName] */

undefined8 FUN_10afd4db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd4dbc; end: 10afd4dc3; -[SCLensExplorerLensItem deeplinkURL] */

undefined8 FUN_10afd4dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd4dc4; end: 10afd4dcb; -[SCLensExplorerLensItem iconURL] */

undefined8 FUN_10afd4dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd4dcc; end: 10afd4dd3; -[SCLensExplorerLensItem thumbnailMediaURL] */

undefined8 FUN_10afd4dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd4dd4; end: 10afd4ddb; -[SCLensExplorerLensItem creator] */

undefined8 FUN_10afd4dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afd4ddc; end: 10afd4de3; -[SCLensExplorerLensItem animation] */

undefined8 FUN_10afd4ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afd4de4; end: 10afd4deb; -[SCLensExplorerLensItem loggingInfo] */

undefined8 FUN_10afd4de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afd4dec; end: 10afd4df3; -[SCLensExplorerLensItem lensAttribution] */

undefined8 FUN_10afd4dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afd4df4; end: 10afd4dfb; -[SCLensExplorerLensItem isSponsored] */

undefined1 FUN_10afd4df4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afd4dfc; end: 10afd4e03; -[SCLensExplorerLensItem viewCount] */

undefined8 FUN_10afd4dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afd4e04; end: 10afd4e0b; -[SCLensExplorerLensItem badgeData] */

undefined8 FUN_10afd4e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afd4e0c; end: 10afd4e13; -[SCLensExplorerLensItem isScpExclusive] */

undefined1 FUN_10afd4e0c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afd4e14; end: 10afd4e1b; -[SCLensExplorerLensItem hasNewContent] */

undefined8 FUN_10afd4e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afd4e1c; end: 10afd4e23; -[SCLensExplorerLensItem consecutiveDaysPlayed] */

undefined8 FUN_10afd4e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10afd4e24; end: 10afd4e2b; -[SCLensExplorerLensItem gamesMetadata] */

undefined8 FUN_10afd4e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10afd4e2c; end: 10afd4edf; -[SCLensExplorerLensItem .cxx_destruct] */

void FUN_10afd4e2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10afd4ee0; end: 10afd4efb; +[SCLensExplorerLensItemBuilder lensExplorerLensItem] */

void FUN_10afd4ee0(void)

{
  _objc_alloc_init(PTR_PTR_1126cce98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd4efc; end: 10afd531f; +[SCLensExplorerLensItemBuilder lensExplorerLensItemFromExistingLensExplorerLensItem:] */

void FUN_10afd4efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  
  puVar1 = PTR_PTR_1126cce98;
  _objc_retain(param_3);
  func_0x00010c093240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bbec0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c095760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2a80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ac100(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2af940(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c26e0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2bafe0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2ab4c0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2a83c0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b3180(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0900a0(param_3);
  puVar19 = puVar17;
  func_0x00010c2b26a0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c07f200(param_3);
  puVar20 = puVar19;
  func_0x00010c2b1640(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c29c5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2bc880(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf15220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2a9160(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c07d340(param_3);
  puVar25 = puVar23;
  func_0x00010c2b1420(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bfd96a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2af3a0(puVar25,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010bf48fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010c2aaca0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010bfbe3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar30 = puVar28;
  func_0x00010c2aece0(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar24);
  _objc_release(puVar25);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar18);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 10afd5320; end: 10afd5397; -[SCLensExplorerLensItemBuilder build] */

void FUN_10afd5320(void)

{
  _objc_alloc(PTR_PTR_1126ccc38);
  func_0x00010c0591c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd5398; end: 10afd53cf; -[SCLensExplorerLensItemBuilder withUnlockableId:] */

long FUN_10afd5398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd53d0; end: 10afd5407; -[SCLensExplorerLensItemBuilder withLensName:] */

long FUN_10afd53d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5408; end: 10afd543f; -[SCLensExplorerLensItemBuilder withDeeplinkURL:] */

long FUN_10afd5408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5440; end: 10afd5477; -[SCLensExplorerLensItemBuilder withIconURL:] */

long FUN_10afd5440(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5478; end: 10afd54af; -[SCLensExplorerLensItemBuilder withThumbnailMediaURL:] */

long FUN_10afd5478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd54b0; end: 10afd54e7; -[SCLensExplorerLensItemBuilder withCreator:] */

long FUN_10afd54b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd54e8; end: 10afd551f; -[SCLensExplorerLensItemBuilder withAnimation:] */

long FUN_10afd54e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5520; end: 10afd5557; -[SCLensExplorerLensItemBuilder withLoggingInfo:] */

long FUN_10afd5520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5558; end: 10afd555f; -[SCLensExplorerLensItemBuilder withLensAttribution:] */

void FUN_10afd5558(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10afd5560; end: 10afd5567; -[SCLensExplorerLensItemBuilder withIsSponsored:] */

void FUN_10afd5560(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10afd5568; end: 10afd559f; -[SCLensExplorerLensItemBuilder withViewCount:] */

long FUN_10afd5568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd55a0; end: 10afd55d7; -[SCLensExplorerLensItemBuilder withBadgeData:] */

long FUN_10afd55a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd55d8; end: 10afd55df; -[SCLensExplorerLensItemBuilder withIsScpExclusive:] */

void FUN_10afd55d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10afd55e0; end: 10afd5617; -[SCLensExplorerLensItemBuilder withHasNewContent:] */

long FUN_10afd55e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5618; end: 10afd564f; -[SCLensExplorerLensItemBuilder withConsecutiveDaysPlayed:] */

long FUN_10afd5618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5650; end: 10afd5687; -[SCLensExplorerLensItemBuilder withGamesMetadata:] */

long FUN_10afd5650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd5688; end: 10afd573b; -[SCLensExplorerLensItemBuilder .cxx_destruct] */

void FUN_10afd5688(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10afd573c; end: 10afd5963; -[SCLensExplorerCreatorItem initWithCreatorId:snapProId:creatorName:creatorDisplayName:isSubscribed:officialLensCreator:creatorBitmojiAvatarId:creatorBitmojiAvatarSelfieId:profilePictureURL:lensPreviews:loggingInfo:creatorStory:] */

undefined8 *
FUN_10afd573c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
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
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112703bb8;
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
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afd5964; end: 10afd5987; -[SCLensExplorerCreatorItem copyWithZone:] */

undefined8 FUN_10afd5964(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd5988; end: 10afd5a67; -[SCLensExplorerCreatorItem hash] */

undefined8 * FUN_10afd5988(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afd5bc8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd5bd4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
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
                      lVar5 = puVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[0xb];
                        if (puVar6 != (undefined8 *)param_3[0xb]) {
                          func_0x00010c071ae0();
                          goto LAB_10afd5bd4;
                        }
                        goto LAB_10afd5bc8;
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
LAB_10afd5bd4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd5a68; end: 10afd5bef; -[SCLensExplorerCreatorItem isEqual:] */

long FUN_10afd5a68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd5bc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd5bd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
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
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_10afd5bd4;
                        }
                        goto LAB_10afd5bc8;
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
LAB_10afd5bd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd5bf0; end: 10afd5bf7; -[SCLensExplorerCreatorItem creatorId] */

undefined8 FUN_10afd5bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd5bf8; end: 10afd5bff; -[SCLensExplorerCreatorItem snapProId] */

undefined8 FUN_10afd5bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd5c00; end: 10afd5c07; -[SCLensExplorerCreatorItem creatorName] */

undefined8 FUN_10afd5c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd5c08; end: 10afd5c0f; -[SCLensExplorerCreatorItem creatorDisplayName] */

undefined8 FUN_10afd5c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd5c10; end: 10afd5c17; -[SCLensExplorerCreatorItem isSubscribed] */

undefined1 FUN_10afd5c10(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afd5c18; end: 10afd5c1f; -[SCLensExplorerCreatorItem officialLensCreator] */

undefined1 FUN_10afd5c18(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afd5c20; end: 10afd5c27; -[SCLensExplorerCreatorItem creatorBitmojiAvatarId] */

undefined8 FUN_10afd5c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd5c28; end: 10afd5c2f; -[SCLensExplorerCreatorItem creatorBitmojiAvatarSelfieId] */

undefined8 FUN_10afd5c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afd5c30; end: 10afd5c37; -[SCLensExplorerCreatorItem profilePictureURL] */

undefined8 FUN_10afd5c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afd5c38; end: 10afd5c3f; -[SCLensExplorerCreatorItem lensPreviews] */

undefined8 FUN_10afd5c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afd5c40; end: 10afd5c47; -[SCLensExplorerCreatorItem loggingInfo] */

undefined8 FUN_10afd5c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afd5c48; end: 10afd5c4f; -[SCLensExplorerCreatorItem creatorStory] */

undefined8 FUN_10afd5c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afd5c50; end: 10afd5cdf; -[SCLensExplorerCreatorItem .cxx_destruct] */

void FUN_10afd5c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10afd5ce0; end: 10afd5cfb; +[SCLensExplorerCreatorItemBuilder lensExplorerCreatorItem] */

void FUN_10afd5ce0(void)

{
  _objc_alloc_init(PTR_PTR_1126cce80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd5cfc; end: 10afd6037; +[SCLensExplorerCreatorItemBuilder lensExplorerCreatorItemFromExistingLensExplorerCreatorItem:] */

void FUN_10afd5cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar12;
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
  
  puVar1 = PTR_PTR_1126cce80;
  _objc_retain(param_3);
  func_0x00010c092c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ab560(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b9580(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ab5c0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ab540(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c080120(param_3);
  puVar11 = puVar9;
  func_0x00010c2b17c0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0e1aa0(param_3);
  puVar12 = puVar11;
  func_0x00010c2b4b80(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf5b120();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2ab500(puVar12,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf5b140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2ab520(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c1170a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b62c0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0960a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b2b80(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2b3180(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf5b880(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar23 = puVar21;
  func_0x00010c2ab5e0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 10afd6038; end: 10afd608b; -[SCLensExplorerCreatorItemBuilder build] */

void FUN_10afd6038(void)

{
  _objc_alloc(PTR_PTR_1126ccd50);
  func_0x00010c006940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd608c; end: 10afd60c3; -[SCLensExplorerCreatorItemBuilder withCreatorId:] */

long FUN_10afd608c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd60c4; end: 10afd60fb; -[SCLensExplorerCreatorItemBuilder withSnapProId:] */

long FUN_10afd60c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd60fc; end: 10afd6133; -[SCLensExplorerCreatorItemBuilder withCreatorName:] */

long FUN_10afd60fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd6134; end: 10afd616b; -[SCLensExplorerCreatorItemBuilder withCreatorDisplayName:] */

long FUN_10afd6134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd616c; end: 10afd6173; -[SCLensExplorerCreatorItemBuilder withIsSubscribed:] */

void FUN_10afd616c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afd6174; end: 10afd617b; -[SCLensExplorerCreatorItemBuilder withOfficialLensCreator:] */

void FUN_10afd6174(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 10afd617c; end: 10afd61b3; -[SCLensExplorerCreatorItemBuilder withCreatorBitmojiAvatarId:] */

long FUN_10afd617c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd61b4; end: 10afd61eb; -[SCLensExplorerCreatorItemBuilder withCreatorBitmojiAvatarSelfieId:] */

long FUN_10afd61b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd61ec; end: 10afd6223; -[SCLensExplorerCreatorItemBuilder withProfilePictureURL:] */

long FUN_10afd61ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}


