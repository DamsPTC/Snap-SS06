/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afd6224; end: 10afd625b; -[SCLensExplorerCreatorItemBuilder withLensPreviews:] */

long FUN_10afd6224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd625c; end: 10afd6293; -[SCLensExplorerCreatorItemBuilder withLoggingInfo:] */

long FUN_10afd625c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd6294; end: 10afd62cb; -[SCLensExplorerCreatorItemBuilder withCreatorStory:] */

long FUN_10afd6294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd62cc; end: 10afd635b; -[SCLensExplorerCreatorItemBuilder .cxx_destruct] */

void FUN_10afd62cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd635c; end: 10afd63c7; +[SCLensExplorerLensFeedItem containerItemWithContainerItem:] */

void FUN_10afd635c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc20;
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



/* Entry: 10afd63c8; end: 10afd6433; +[SCLensExplorerLensFeedItem creatorItemWithCreatorItem:] */

void FUN_10afd63c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc20;
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



/* Entry: 10afd6434; end: 10afd649f; +[SCLensExplorerLensFeedItem heroItemWithHeroItem:] */

void FUN_10afd6434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afd64a0; end: 10afd6503; +[SCLensExplorerLensFeedItem lensItemWithLensItem:] */

void FUN_10afd64a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc20;
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



/* Entry: 10afd6504; end: 10afd656f; +[SCLensExplorerLensFeedItem storyItemWithStoryItem:] */

void FUN_10afd6504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccc20;
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



/* Entry: 10afd6570; end: 10afd6593; -[SCLensExplorerLensFeedItem copyWithZone:] */

undefined8 FUN_10afd6570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd6594; end: 10afd662f; -[SCLensExplorerLensFeedItem hash] */

void FUN_10afd6594(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112703bc0;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd6630; end: 10afd6673; -[SCLensExplorerLensFeedItem internalInit] */

void FUN_10afd6630(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703bc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd6674; end: 10afd6773; -[SCLensExplorerLensFeedItem isEqual:] */

long FUN_10afd6674(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd674c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd6758;
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
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10afd6758;
              }
              goto LAB_10afd674c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd6758:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd6774; end: 10afd6887; -[SCLensExplorerLensFeedItem matchLensItem:storyItem:creatorItem:containerItem:heroItem:] */

void FUN_10afd6774(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10afd6850;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10afd6850;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10afd6850;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_10afd6850;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else {
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_10afd6850;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10afd6850:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afd6888; end: 10afd68db; -[SCLensExplorerLensFeedItem .cxx_destruct] */

void FUN_10afd6888(long param_1)

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



/* Entry: 10afd68dc; end: 10afd6a3b; -[SCLensExplorerLensItemCreator initWithUserName:userId:bitmojiAvatarId:bitmojiAvatarSelfieId:officialLensCreator:isBusinessCategoryType:snapProIdentifier:snapProIsDeactivated:] */

undefined1 *
FUN_10afd68dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112703bc8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd6a3c; end: 10afd6a5f; -[SCLensExplorerLensItemCreator copyWithZone:] */

undefined8 FUN_10afd6a3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd6a60; end: 10afd6b07; -[SCLensExplorerLensItemCreator hash] */

undefined8 * FUN_10afd6a60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_68;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afd6c00:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd6c0c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10afd6c0c;
              }
              goto LAB_10afd6c00;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afd6c0c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd6b08; end: 10afd6c27; -[SCLensExplorerLensItemCreator isEqual:] */

long FUN_10afd6b08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd6c00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd6c0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10afd6c0c;
              }
              goto LAB_10afd6c00;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd6c0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd6c28; end: 10afd6c2f; -[SCLensExplorerLensItemCreator userName] */

undefined8 FUN_10afd6c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd6c30; end: 10afd6c37; -[SCLensExplorerLensItemCreator userId] */

undefined8 FUN_10afd6c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd6c38; end: 10afd6c3f; -[SCLensExplorerLensItemCreator bitmojiAvatarId] */

undefined8 FUN_10afd6c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd6c40; end: 10afd6c47; -[SCLensExplorerLensItemCreator bitmojiAvatarSelfieId] */

undefined8 FUN_10afd6c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd6c48; end: 10afd6c4f; -[SCLensExplorerLensItemCreator officialLensCreator] */

undefined1 FUN_10afd6c48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afd6c50; end: 10afd6c57; -[SCLensExplorerLensItemCreator isBusinessCategoryType] */

undefined1 FUN_10afd6c50(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afd6c58; end: 10afd6c5f; -[SCLensExplorerLensItemCreator snapProIdentifier] */

undefined8 FUN_10afd6c58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd6c60; end: 10afd6c67; -[SCLensExplorerLensItemCreator snapProIsDeactivated] */

undefined1 FUN_10afd6c60(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afd6c68; end: 10afd6cbb; -[SCLensExplorerLensItemCreator .cxx_destruct] */

void FUN_10afd6c68(long param_1)

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



/* Entry: 10afd6cbc; end: 10afd6de3; -[SCLensExplorerLensItemLoggingInfo initWithIndex:sectionIndex:rankingRequestId:rankingRequestInfo:lensId:itemType:containerId:] */

undefined1 *
FUN_10afd6cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703bd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd6de4; end: 10afd6e07; -[SCLensExplorerLensItemLoggingInfo copyWithZone:] */

undefined8 FUN_10afd6de4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd6e08; end: 10afd6e9f; -[SCLensExplorerLensItemLoggingInfo hash] */

undefined8 * FUN_10afd6e08(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afd6f80:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd6f8c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(long *)((long)puVar4 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar6 = *(long *)((long)puVar4 + 0x18);
      if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x20);
        if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x28);
          if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = *(undefined1 **)((long)puVar4 + 0x38);
            if (puVar7 != *(undefined1 **)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_10afd6f8c;
            }
            goto LAB_10afd6f80;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10afd6f8c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10afd6ea0; end: 10afd6fa7; -[SCLensExplorerLensItemLoggingInfo isEqual:] */

long FUN_10afd6ea0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd6f80:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd6f8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_10afd6f8c;
            }
            goto LAB_10afd6f80;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd6f8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd6fa8; end: 10afd6faf; -[SCLensExplorerLensItemLoggingInfo index] */

undefined8 FUN_10afd6fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd6fb0; end: 10afd6fb7; -[SCLensExplorerLensItemLoggingInfo sectionIndex] */

undefined8 FUN_10afd6fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd6fb8; end: 10afd6fbf; -[SCLensExplorerLensItemLoggingInfo rankingRequestId] */

undefined8 FUN_10afd6fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd6fc0; end: 10afd6fc7; -[SCLensExplorerLensItemLoggingInfo rankingRequestInfo] */

undefined8 FUN_10afd6fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd6fc8; end: 10afd6fcf; -[SCLensExplorerLensItemLoggingInfo lensId] */

undefined8 FUN_10afd6fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afd6fd0; end: 10afd6fd7; -[SCLensExplorerLensItemLoggingInfo itemType] */

undefined8 FUN_10afd6fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afd6fd8; end: 10afd6fdf; -[SCLensExplorerLensItemLoggingInfo containerId] */

undefined8 FUN_10afd6fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afd6fe0; end: 10afd7027; -[SCLensExplorerLensItemLoggingInfo .cxx_destruct] */

void FUN_10afd6fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afd7028; end: 10afd7043; +[SCLensExplorerLensItemLoggingInfoBuilder lensExplorerLensItemLoggingInfo] */

void FUN_10afd7028(void)

{
  _objc_alloc_init(PTR_PTR_1126cce78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd7044; end: 10afd7227; +[SCLensExplorerLensItemLoggingInfoBuilder lensExplorerLensItemLoggingInfoFromExistingLensExplorerLensItemLoggingInfo:] */

void FUN_10afd7044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126cce78;
  _objc_retain(param_3);
  func_0x00010c0932a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfec9e0(param_3);
  puVar3 = puVar1;
  func_0x00010c2afc20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c156040(param_3);
  puVar4 = puVar3;
  func_0x00010c2b7e60(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b6780(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c11fc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b67a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b2880(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c084c40(param_3);
  puVar11 = puVar9;
  func_0x00010c2b1b80(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf4ae20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar12 = puVar11;
  func_0x00010c2aad20(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10afd7228; end: 10afd726f; -[SCLensExplorerLensItemLoggingInfoBuilder build] */

void FUN_10afd7228(void)

{
  _objc_alloc(PTR_PTR_1126ccd40);
  func_0x00010c01d7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd7270; end: 10afd7277; -[SCLensExplorerLensItemLoggingInfoBuilder withIndex:] */

void FUN_10afd7270(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10afd7278; end: 10afd727f; -[SCLensExplorerLensItemLoggingInfoBuilder withSectionIndex:] */

void FUN_10afd7278(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afd7280; end: 10afd72b7; -[SCLensExplorerLensItemLoggingInfoBuilder withRankingRequestId:] */

long FUN_10afd7280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd72b8; end: 10afd72ef; -[SCLensExplorerLensItemLoggingInfoBuilder withRankingRequestInfo:] */

long FUN_10afd72b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd72f0; end: 10afd7327; -[SCLensExplorerLensItemLoggingInfoBuilder withLensId:] */

long FUN_10afd72f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd7328; end: 10afd732f; -[SCLensExplorerLensItemLoggingInfoBuilder withItemType:] */

void FUN_10afd7328(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10afd7330; end: 10afd7367; -[SCLensExplorerLensItemLoggingInfoBuilder withContainerId:] */

long FUN_10afd7330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd7368; end: 10afd73af; -[SCLensExplorerLensItemLoggingInfoBuilder .cxx_destruct] */

void FUN_10afd7368(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afd73b0; end: 10afd7463; -[SCLensExplorerDataStoreRemoteState initWithStreamToken:requestId:hasMoreItems:] */

undefined1 *
FUN_10afd73b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703bd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd7464; end: 10afd7487; -[SCLensExplorerDataStoreRemoteState copyWithZone:] */

undefined8 FUN_10afd7464(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd7488; end: 10afd74ff; -[SCLensExplorerDataStoreRemoteState hash] */

undefined8 * FUN_10afd7488(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afd7590:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd759c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afd759c;
        }
        goto LAB_10afd7590;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afd759c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afd7500; end: 10afd75b7; -[SCLensExplorerDataStoreRemoteState isEqual:] */

long FUN_10afd7500(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd7590:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd759c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afd759c;
        }
        goto LAB_10afd7590;
      }
    }
    lVar3 = 0;
  }
LAB_10afd759c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd75b8; end: 10afd75bf; -[SCLensExplorerDataStoreRemoteState streamToken] */

undefined8 FUN_10afd75b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd75c0; end: 10afd75c7; -[SCLensExplorerDataStoreRemoteState requestId] */

undefined8 FUN_10afd75c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd75c8; end: 10afd75cf; -[SCLensExplorerDataStoreRemoteState hasMoreItems] */

undefined1 FUN_10afd75c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afd75d0; end: 10afd75ff; -[SCLensExplorerDataStoreRemoteState .cxx_destruct] */

void FUN_10afd75d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afd7600; end: 10afd76e7; -[SCLensExplorerLensItemAnimation initWithUnlockableId:mediaKey:imageURLs:frameInterval:] */

undefined1 *
FUN_10afd7600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703be0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd76e8; end: 10afd770b; -[SCLensExplorerLensItemAnimation copyWithZone:] */

undefined8 FUN_10afd76e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd770c; end: 10afd77af; -[SCLensExplorerLensItemAnimation hash] */

undefined8 * FUN_10afd770c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afd787c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd7888;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[3];
        if (puVar8 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10afd7888;
        }
        goto LAB_10afd787c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afd7888:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afd77b0; end: 10afd78a3; -[SCLensExplorerLensItemAnimation isEqual:] */

long FUN_10afd77b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd787c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd7888;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afd7888;
        }
        goto LAB_10afd787c;
      }
    }
    lVar4 = 0;
  }
LAB_10afd7888:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afd78a4; end: 10afd78ab; -[SCLensExplorerLensItemAnimation unlockableId] */

undefined8 FUN_10afd78a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd78ac; end: 10afd78b3; -[SCLensExplorerLensItemAnimation mediaKey] */

undefined8 FUN_10afd78ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd78b4; end: 10afd78bb; -[SCLensExplorerLensItemAnimation imageURLs] */

undefined8 FUN_10afd78b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd78bc; end: 10afd78c3; -[SCLensExplorerLensItemAnimation frameInterval] */

undefined8 FUN_10afd78bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd78c4; end: 10afd78ff; -[SCLensExplorerLensItemAnimation .cxx_destruct] */

void FUN_10afd78c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd7900; end: 10afd79d7; -[SCLensExplorerCreatorItemLensPreview initWithIdentifier:thumbnailMediaURL:iconURL:] */

undefined1 *
FUN_10afd7900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703be8;
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



/* Entry: 10afd79d8; end: 10afd79fb; -[SCLensExplorerCreatorItemLensPreview copyWithZone:] */

undefined8 FUN_10afd79d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd79fc; end: 10afd7a7b; -[SCLensExplorerCreatorItemLensPreview hash] */

undefined8 * FUN_10afd79fc(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afd7b14:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd7b20;
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
            goto LAB_10afd7b20;
          }
          goto LAB_10afd7b14;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afd7b20:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afd7a7c; end: 10afd7b3b; -[SCLensExplorerCreatorItemLensPreview isEqual:] */

long FUN_10afd7a7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd7b14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd7b20;
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
            goto LAB_10afd7b20;
          }
          goto LAB_10afd7b14;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd7b20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd7b3c; end: 10afd7b43; -[SCLensExplorerCreatorItemLensPreview identifier] */

undefined8 FUN_10afd7b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd7b44; end: 10afd7b4b; -[SCLensExplorerCreatorItemLensPreview thumbnailMediaURL] */

undefined8 FUN_10afd7b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd7b4c; end: 10afd7b53; -[SCLensExplorerCreatorItemLensPreview iconURL] */

undefined8 FUN_10afd7b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd7b54; end: 10afd7b8f; -[SCLensExplorerCreatorItemLensPreview .cxx_destruct] */

void FUN_10afd7b54(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd7b90; end: 10afd7bab; +[SCLensExplorerCreatorItemLensPreviewBuilder lensExplorerCreatorItemLensPreview] */

void FUN_10afd7b90(void)

{
  _objc_alloc_init(PTR_PTR_1126df308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd7bac; end: 10afd7cc3; +[SCLensExplorerCreatorItemLensPreviewBuilder lensExplorerCreatorItemLensPreviewFromExistingLensExplorerCreatorItemLensPreview:] */

void FUN_10afd7bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126df308;
  _objc_retain(param_3);
  func_0x00010c092cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af9a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c26e0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2bafe0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010c2af940(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10afd7cc4; end: 10afd7cf7; -[SCLensExplorerCreatorItemLensPreviewBuilder build] */

void FUN_10afd7cc4(void)

{
  _objc_alloc(PTR_PTR_1126ccd58);
  func_0x00010c01bb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afd7cf8; end: 10afd7d2f; -[SCLensExplorerCreatorItemLensPreviewBuilder withIdentifier:] */

long FUN_10afd7cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd7d30; end: 10afd7d67; -[SCLensExplorerCreatorItemLensPreviewBuilder withThumbnailMediaURL:] */

long FUN_10afd7d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd7d68; end: 10afd7d9f; -[SCLensExplorerCreatorItemLensPreviewBuilder withIconURL:] */

long FUN_10afd7d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afd7da0; end: 10afd7ddb; -[SCLensExplorerCreatorItemLensPreviewBuilder .cxx_destruct] */

void FUN_10afd7da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd7ddc; end: 10afd7eb3; -[SCLensExplorerCreatorStory initWithCreatorStoryData:thumbnailMedia:storySnapIds:] */

undefined1 *
FUN_10afd7ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703bf0;
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



/* Entry: 10afd7eb4; end: 10afd7ed7; -[SCLensExplorerCreatorStory copyWithZone:] */

undefined8 FUN_10afd7eb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd7ed8; end: 10afd7f57; -[SCLensExplorerCreatorStory hash] */

undefined8 * FUN_10afd7ed8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afd7ff0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afd7ffc;
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
            goto LAB_10afd7ffc;
          }
          goto LAB_10afd7ff0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afd7ffc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afd7f58; end: 10afd8017; -[SCLensExplorerCreatorStory isEqual:] */

long FUN_10afd7f58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd7ff0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd7ffc;
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
            goto LAB_10afd7ffc;
          }
          goto LAB_10afd7ff0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afd7ffc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd8018; end: 10afd801f; -[SCLensExplorerCreatorStory creatorStoryData] */

undefined8 FUN_10afd8018(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afd8020; end: 10afd8027; -[SCLensExplorerCreatorStory thumbnailMedia] */

undefined8 FUN_10afd8020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd8028; end: 10afd802f; -[SCLensExplorerCreatorStory storySnapIds] */

undefined8 FUN_10afd8028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd8030; end: 10afd806b; -[SCLensExplorerCreatorStory .cxx_destruct] */

void FUN_10afd8030(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afd806c; end: 10afd812f; -[SCLensExplorerCreatorStoryData initWithCreatorId:displayName:isOfficial:officialBadgeType:] */

undefined1 *
FUN_10afd806c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112703bf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afd8130; end: 10afd8153; -[SCLensExplorerCreatorStoryData copyWithZone:] */

undefined8 FUN_10afd8130(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afd8154; end: 10afd81db; -[SCLensExplorerCreatorStoryData hash] */

undefined8 * FUN_10afd8154(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afd827c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afd8288;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10afd8288;
        }
        goto LAB_10afd827c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afd8288:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afd81dc; end: 10afd82a3; -[SCLensExplorerCreatorStoryData isEqual:] */

long FUN_10afd81dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afd827c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afd8288;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afd8288;
        }
        goto LAB_10afd827c;
      }
    }
    lVar3 = 0;
  }
LAB_10afd8288:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afd82a4; end: 10afd82ab; -[SCLensExplorerCreatorStoryData creatorId] */

undefined8 FUN_10afd82a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afd82ac; end: 10afd82b3; -[SCLensExplorerCreatorStoryData displayName] */

undefined8 FUN_10afd82ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afd82b4; end: 10afd82bb; -[SCLensExplorerCreatorStoryData isOfficial] */

undefined1 FUN_10afd82b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afd82bc; end: 10afd82c3; -[SCLensExplorerCreatorStoryData officialBadgeType] */

undefined8 FUN_10afd82bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afd82c4; end: 10afd82f3; -[SCLensExplorerCreatorStoryData .cxx_destruct] */

void FUN_10afd82c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


