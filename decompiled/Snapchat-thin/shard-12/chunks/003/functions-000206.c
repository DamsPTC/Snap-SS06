/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f8cdc8; end: 108f8cdeb; -[SCSectionKitListViewMoreCellViewModel copyWithZone:] */

undefined8 FUN_108f8cdc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8cdec; end: 108f8ce5f; -[SCSectionKitListViewMoreCellViewModel hash] */

undefined8 * FUN_108f8cdec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8cef4;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_108f8cef4;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f8cef4;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_108f8cef4:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 108f8ce60; end: 108f8cf0f; -[SCSectionKitListViewMoreCellViewModel isEqual:] */

long FUN_108f8ce60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8cef4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_108f8cef4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f8cef4;
    }
  }
  lVar3 = 1;
LAB_108f8cef4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8cf10; end: 108f8cf17; -[SCSectionKitListViewMoreCellViewModel titleText] */

undefined8 FUN_108f8cf10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8cf18; end: 108f8cf1f; -[SCSectionKitListViewMoreCellViewModel isCondensed] */

undefined1 FUN_108f8cf18(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f8cf20; end: 108f8cf27; -[SCSectionKitListViewMoreCellViewModel groupingStyle] */

undefined8 FUN_108f8cf20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8cf28; end: 108f8cf33; -[SCSectionKitListViewMoreCellViewModel .cxx_destruct] */

void FUN_108f8cf28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f8cf34; end: 108f8cfcb; +[SCSectionKitMiddleAccessoryViewModel attributedWithTitleText:attributedDetailText:] */

void FUN_108f8cf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b53e8;
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
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8cfcc; end: 108f8d037; +[SCSectionKitMiddleAccessoryViewModel basicWithBasicInfoViewModel:officialBadgeType:] */

void FUN_108f8cfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b53e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8d038; end: 108f8d05b; -[SCSectionKitMiddleAccessoryViewModel copyWithZone:] */

undefined8 FUN_108f8d038(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8d05c; end: 108f8d0e3; -[SCSectionKitMiddleAccessoryViewModel hash] */

void FUN_108f8d05c(long param_1)

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
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126ff8e0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8d0e4; end: 108f8d127; -[SCSectionKitMiddleAccessoryViewModel internalInit] */

void FUN_108f8d0e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff8e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8d128; end: 108f8d207; -[SCSectionKitMiddleAccessoryViewModel isEqual:] */

long FUN_108f8d128(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8d1e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8d1ec;
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
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_108f8d1ec;
          }
          goto LAB_108f8d1e0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8d1ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8d208; end: 108f8d28b; -[SCSectionKitMiddleAccessoryViewModel matchBasic:attributed:] */

void FUN_108f8d208(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_108f8d270;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108f8d270;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar4)(lVar1,uVar2,uVar3);
LAB_108f8d270:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8d28c; end: 108f8d2c7; -[SCSectionKitMiddleAccessoryViewModel .cxx_destruct] */

void FUN_108f8d28c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f8d2c8; end: 108f8d333; +[SCSectionKitTrailingAccessoryViewModel badgeWithBadgeViewModel:] */

void FUN_108f8d2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2688;
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



/* Entry: 108f8d334; end: 108f8d39f; +[SCSectionKitTrailingAccessoryViewModel buttonWithButtonViewModel:] */

void FUN_108f8d334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2688;
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



/* Entry: 108f8d3a0; end: 108f8d40b; +[SCSectionKitTrailingAccessoryViewModel dropdownButtonWithDropdownButtonViewModel:] */

void FUN_108f8d3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2688;
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



/* Entry: 108f8d40c; end: 108f8d46f; +[SCSectionKitTrailingAccessoryViewModel emojiWithEmojiViewModel:] */

void FUN_108f8d40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2688;
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



/* Entry: 108f8d470; end: 108f8d4db; +[SCSectionKitTrailingAccessoryViewModel imageViewWithImage:] */

void FUN_108f8d470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2688;
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



/* Entry: 108f8d4dc; end: 108f8d4ff; -[SCSectionKitTrailingAccessoryViewModel copyWithZone:] */

undefined8 FUN_108f8d4dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8d500; end: 108f8d59b; -[SCSectionKitTrailingAccessoryViewModel hash] */

void FUN_108f8d500(long param_1)

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
  puStack_88 = PTR_PTR_1126ff8e8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8d59c; end: 108f8d5df; -[SCSectionKitTrailingAccessoryViewModel internalInit] */

void FUN_108f8d59c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff8e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8d5e0; end: 108f8d6df; -[SCSectionKitTrailingAccessoryViewModel isEqual:] */

long FUN_108f8d5e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8d6b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8d6c4;
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
                goto LAB_108f8d6c4;
              }
              goto LAB_108f8d6b8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8d6c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8d6e0; end: 108f8d7f3; -[SCSectionKitTrailingAccessoryViewModel matchEmoji:button:dropdownButton:badge:imageView:] */

void FUN_108f8d6e0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      if (param_3 == 0) goto LAB_108f8d7bc;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_108f8d7bc;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_108f8d7bc;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_108f8d7bc;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else {
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_108f8d7bc;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108f8d7bc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8d7f4; end: 108f8d847; -[SCSectionKitTrailingAccessoryViewModel .cxx_destruct] */

void FUN_108f8d7f4(long param_1)

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



/* Entry: 108f8d848; end: 108f8d893; +[SCSectionKitActionIndicatorViewModel disclose] */

void FUN_108f8d848(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b53f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8d894; end: 108f8d913; +[SCSectionKitActionIndicatorViewModel selectWithIsSelected:isDisabled:customImage:] */

void FUN_108f8d894(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b53f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  puVar2[0x11] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8d914; end: 108f8d937; -[SCSectionKitActionIndicatorViewModel copyWithZone:] */

undefined8 FUN_108f8d914(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8d938; end: 108f8d9a7; -[SCSectionKitActionIndicatorViewModel hash] */

void FUN_108f8d938(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x11);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  puVar2 = &uStack_38;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ff8f0;
  puStack_70 = puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8d9a8; end: 108f8d9eb; -[SCSectionKitActionIndicatorViewModel internalInit] */

void FUN_108f8d9a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff8f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f8d9ec; end: 108f8daab; -[SCSectionKitActionIndicatorViewModel isEqual:] */

long FUN_108f8d9ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8da90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10))) ||
        (*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11))))) {
      lVar3 = 0;
      goto LAB_108f8da90;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_108f8da90;
    }
  }
  lVar3 = 1;
LAB_108f8da90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8daac; end: 108f8db37; -[SCSectionKitActionIndicatorViewModel matchSelect:disclose:] */

void FUN_108f8daac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11),
               *(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8db38; end: 108f8db43; -[SCSectionKitActionIndicatorViewModel .cxx_destruct] */

void FUN_108f8db38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108f8db44; end: 108f8dc1b; -[SCSectionKitImageViewModel initWithImage:tintColor:actionModel:] */

undefined1 *
FUN_108f8db44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff8f8;
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



/* Entry: 108f8dc1c; end: 108f8dc3f; -[SCSectionKitImageViewModel copyWithZone:] */

undefined8 FUN_108f8dc1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8dc40; end: 108f8dcbf; -[SCSectionKitImageViewModel hash] */

undefined8 * FUN_108f8dc40(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_108f8dd58:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8dd64;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108f8dd64;
          }
          goto LAB_108f8dd58;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f8dd64:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f8dcc0; end: 108f8dd7f; -[SCSectionKitImageViewModel isEqual:] */

long FUN_108f8dcc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f8dd58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8dd64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108f8dd64;
          }
          goto LAB_108f8dd58;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f8dd64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8dd80; end: 108f8dd87; -[SCSectionKitImageViewModel image] */

undefined8 FUN_108f8dd80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8dd88; end: 108f8dd8f; -[SCSectionKitImageViewModel tintColor] */

undefined8 FUN_108f8dd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8dd90; end: 108f8dd97; -[SCSectionKitImageViewModel actionModel] */

undefined8 FUN_108f8dd90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8dd98; end: 108f8ddd3; -[SCSectionKitImageViewModel .cxx_destruct] */

void FUN_108f8dd98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8ddd4; end: 108f8de27; +[SCPlusBestfriendsDividerViewCell containerStyleForCellViewModel:] */

undefined1  [16] FUN_108f8ddd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfcf7e0(param_3);
  uVar2 = param_3;
  func_0x00010bf9e0a0(param_3);
  _objc_release(param_3);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 108f8de28; end: 108f8e1bb; -[SCPlusBestfriendsDividerViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108f8de28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_1126ff900;
  puVar1 = &uStack_c8;
  uStack_c8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar11 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213780();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a880();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar16 = (long)_DAT_11277eaf0;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar3;
    _objc_release(uVar15);
    puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_11277eaf4;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar15);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_b8 = puVar4;
    func_0x00010bf415a0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_b0 = puVar4;
    func_0x00010bf415a0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar4;
    func_0x00010bf415a0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar4;
    func_0x00010bf415a0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar4;
    func_0x00010bf415a0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c1bff00(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c209760(0,0,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar17)
                       );
    func_0x00010c1d4bc0(0x3f800000,*(undefined8 *)((long)puVar1 + lVar17));
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08c0e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar15);
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    param_7 = *(undefined8 **)((long)puVar1 + lVar16);
    puVar2 = puVar1;
    func_0x00010c27f7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  lVar16 = (long)_DAT_11277eaf8;
  uVar13 = *(ulong *)((long)puVar11 + lVar16);
  func_0x00010c071ae0();
  puVar3 = PTR_PTR_1126dcc30;
  if ((uVar13 & 1) == 0) {
    _objc_retain(param_7);
    _objc_opt_class(puVar3);
    puVar2 = param_7;
    _objc_opt_isKindOfClass(param_7,puVar3);
    puVar1 = param_7;
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_7);
    func_0x00010bf4b040(PTR_PTR_1126dcc38);
    func_0x00010c20eaa0(puVar11);
    puVar2 = puVar11;
    func_0x00010c27f7a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(puVar12);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c2716a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c27f7a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126dcbe0;
    func_0x00010c22ba80(PTR_PTR_1126dcbe0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2074a0(puVar11);
    _objc_release(puVar3);
    puVar2 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    uVar15 = *(undefined8 *)((long)puVar11 + lVar16);
    *(undefined8 **)((long)puVar11 + lVar16) = puVar2;
    _objc_release(uVar15);
    func_0x00010c1cbe20(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return param_7;
}



/* Entry: 108f8e1bc; end: 108f8e35b; -[SCPlusBestfriendsDividerViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e1bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277eaf8;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c071ae0();
  puVar2 = PTR_PTR_1126dcc30;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    func_0x00010bf4b040(PTR_PTR_1126dcc38);
    func_0x00010c20eaa0(param_1);
    lVar4 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar3 = uVar1;
    func_0x00010c2716a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c27f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dcbe0;
    func_0x00010c22ba80(PTR_PTR_1126dcbe0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2074a0(param_1);
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar3;
    _objc_release(uVar6);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f8e35c; end: 108f8e4bf; -[SCPlusBestfriendsDividerViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e35c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126ff900;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126dcc30;
  uVar4 = *(ulong *)(param_5 + _DAT_11277eaf8);
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
  func_0x00010bfcf7e0(uVar1);
  uVar4 = uVar1;
  func_0x00010bf9e0a0(uVar1);
  puVar2 = PTR_PTR_1126dcbe0;
  func_0x00010c22ba80(PTR_PTR_1126dcbe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b86a780(uVar3,uVar4,0,puVar2);
  dVar6 = param_2;
  _objc_release(puVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  lVar5 = (long)_DAT_11277eaf0;
  func_0x00010c19f0e0(param_1,dVar6,(param_3 - param_2) - param_4,*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277eaf4));
  _objc_release(uVar1);
  return;
}



/* Entry: 108f8e4c0; end: 108f8e59f; +[SCPlusBestfriendsDividerViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f8e4c0(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = param_1;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126dcc30;
  _objc_opt_class(PTR_PTR_1126dcc30);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfcf7e0(uVar1);
  uVar4 = uVar1;
  func_0x00010bf9e0a0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126dcbe0;
  func_0x00010c22ba80(PTR_PTR_1126dcbe0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b86a780(uVar3,uVar4,0,puVar2);
  _objc_release(puVar2);
  _objc_release(param_6);
  auVar6._8_8_ = param_3 + dVar5 + 30.0;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 108f8e5a0; end: 108f8e5af; -[SCPlusBestfriendsDividerViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f8e5a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eaf8);
}



/* Entry: 108f8e5b0; end: 108f8e5ff; -[SCPlusBestfriendsDividerViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e5b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277eaf8,0);
  _objc_storeStrong(param_1 + _DAT_11277eaf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eaf0,0);
  return;
}



/* Entry: 108f8e600; end: 108f8e697; -[SCPlusBorderLayer initWithBorderStyle:borderWidth:cornerRadius:cornersToRound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108f8e600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff908;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277eafc) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277eb00) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277eb04) = param_2;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277eb08) = param_6;
    func_0x00010beab0e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f8e698; end: 108f8e6b3; -[SCPlusBorderLayer _setupBorderLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e698(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277eafc) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010beacd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupGoldenBorderLayer_112588cf0);
    return;
  }
  return;
}



/* Entry: 108f8e6b4; end: 108f8e7db; -[SCPlusBorderLayer _setupGoldenBorderLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e6b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc48100);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xfffdaa);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = puVar2;
  puStack_50 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  puStack_48 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(param_1,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c209760(0,0,param_1);
  func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c19f0e0();
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar3,param_2,puVar4);
  _objc_release(puVar2);
  func_0x00010c1bdd00(*(undefined8 *)(puVar1 + _DAT_11277eb00),puVar3);
  lVar5 = (long)_DAT_11277eb08;
  func_0x00010c1c2ce0(puVar3,param_2,*(ulong *)(puVar1 + lVar5) & 0xf);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(puVar1);
  _CGRectInset();
  func_0x00010bf199e0(puVar2,param_2,*(undefined8 *)(puVar1 + lVar5));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar3,param_2,puVar4);
  _objc_release(puVar2);
  func_0x00010c1c2c00(puVar1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108f8e7dc; end: 108f8e8ff; -[SCPlusBorderLayer recalculatePathWithBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e7dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010c19f0e0();
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  func_0x00010c1bdd00(*(undefined8 *)(param_1 + _DAT_11277eb00),puVar1);
  lVar4 = (long)_DAT_11277eb08;
  func_0x00010c1c2ce0(puVar1,param_2,*(ulong *)(param_1 + lVar4) & 0xf);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  _CGRectInset();
  func_0x00010bf199e0(puVar2,param_2,*(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  func_0x00010c1c2c00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f8e900; end: 108f8e90f; -[SCPlusBorderLayer cornersToRound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f8e900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eb08);
}



/* Entry: 108f8e910; end: 108f8e91f; -[SCPlusBorderLayer setCornersToRound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8e910(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277eb08) = param_3;
  return;
}



/* Entry: 108f8e920; end: 108f8e98b; +[SCPlusGoldenBorderView forView:] */

void FUN_108f8e920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2978;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf20c00(param_3);
  func_0x00010c013de0(puVar1);
  func_0x00010c16d4a0();
  func_0x00010befbb60(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f8e98c; end: 108f8eb4b; -[SCPlusGoldenBorderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f8e98c(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = PTR_PTR_1126ff910;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277eb0c) = 0xffffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277eb10;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar3;
    puStack_60 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar2;
    puStack_58 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar5);
    func_0x00010c209760(0,0,*(undefined8 *)((long)puVar1 + lVar8));
    param_1 = 1.0;
    func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar8))
    ;
    puVar6 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  if (param_1 != *(double *)(puVar2 + _DAT_11277eb14)) {
    *(double *)(puVar2 + _DAT_11277eb14) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar2;
  }
  return puVar2;
}



/* Entry: 108f8eb4c; end: 108f8eb6b; -[SCPlusGoldenBorderView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8eb4c(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11277eb14)) {
    *(double *)(param_2 + _DAT_11277eb14) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108f8eb6c; end: 108f8eb8b; -[SCPlusGoldenBorderView setBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8eb6c(double param_1,long param_2)

{
  if (param_1 != *(double *)(param_2 + _DAT_11277eb18)) {
    *(double *)(param_2 + _DAT_11277eb18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108f8eb8c; end: 108f8ebab; -[SCPlusGoldenBorderView setCornersToRound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8eb8c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11277eb0c)) {
    return;
  }
  *(long *)(param_1 + _DAT_11277eb0c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108f8ebac; end: 108f8ed0f; -[SCPlusGoldenBorderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8ebac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff910;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar3 = (long)_DAT_11277eb10;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1);
  _objc_release(puVar2);
  func_0x00010c1bdd00(*(undefined8 *)(param_1 + _DAT_11277eb18),puVar1);
  func_0x00010c1c2ce0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  _CGRectInset();
  func_0x00010bf199e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1);
  _objc_release(puVar2);
  func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  return;
}



/* Entry: 108f8ed10; end: 108f8ed1f; -[SCPlusGoldenBorderView borderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f8ed10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eb18);
}



/* Entry: 108f8ed20; end: 108f8ed2f; -[SCPlusGoldenBorderView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f8ed20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eb14);
}



/* Entry: 108f8ed30; end: 108f8ed3f; -[SCPlusGoldenBorderView cornersToRound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f8ed30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eb0c);
}



/* Entry: 108f8ed40; end: 108f8ed53; -[SCPlusGoldenBorderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8ed40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eb10,0);
  return;
}



/* Entry: 108f8ed54; end: 108f8eeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_108f8ed54(void)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(pppuVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar11 = &PTR__OBJC_CLASS___NSConstantArray_111183440;
  func_0x00010c1bff00(pppuVar1);
  func_0x00010c209760(0,0,pppuVar1);
  pppuVar7 = pppuVar1;
  func_0x00010c196020(0x3ff0000000000000,0x3ff0000000000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
    return pppuVar1;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126ff918;
  pppuVar1 = &ppuStack_128;
  ppuStack_128 = pppuVar7;
  _objc_msgSendSuper2(pppuVar1,PTR_s_initWithFrame__1125e2948);
  pppuVar7 = pppuVar1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    func_0x00010c21e900(pppuVar1);
    *(undefined8 *)((long)pppuVar1 + (long)_DAT_11277eb1c) = 0xc;
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277eb20;
    uVar13 = *(undefined8 *)((long)pppuVar1 + lVar12);
    *(undefined **)((long)pppuVar1 + lVar12) = puVar2;
    _objc_release(uVar13);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_118 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_110 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_108 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_100 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_f8 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)pppuVar1 + lVar12));
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1bff00(*(undefined8 *)((long)pppuVar1 + lVar12));
    func_0x00010c209760(0x3fe0000000000000,0,*(undefined8 *)((long)pppuVar1 + lVar12));
    func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,
                        *(undefined8 *)((long)pppuVar1 + lVar12));
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = *(undefined ***)((long)pppuVar1 + lVar12);
    func_0x00010befbb20();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  if (ppuVar11 == *(undefined ***)((long)pppuVar7 + (long)_DAT_11277eb1c)) {
    return pppuVar7;
  }
  *(undefined ***)((long)pppuVar7 + (long)_DAT_11277eb1c) = ppuVar11;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return pppuVar7;
}



/* Entry: 108f8eeec; end: 108f8f19b; -[SCPlusGradientView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f8eeec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126ff918;
  puVar1 = &uStack_b8;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar10 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277eb1c) = 0xc;
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277eb20;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_88 = puVar3;
    func_0x00010bf415a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1bff00(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c209760(0x3fe0000000000000,0,*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar12)
                       );
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = *(long *)((long)puVar1 + lVar12);
    func_0x00010befbb20();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (param_3 == *(long *)((long)puVar10 + (long)_DAT_11277eb1c)) {
    return puVar10;
  }
  *(long *)((long)puVar10 + (long)_DAT_11277eb1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar10;
}



/* Entry: 108f8f19c; end: 108f8f1bb; -[SCPlusGradientView setCornersToRound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8f19c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_11277eb1c)) {
    return;
  }
  *(long *)(param_1 + _DAT_11277eb1c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108f8f1bc; end: 108f8f2af; -[SCPlusGradientView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8f1bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff918;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar3 = (long)_DAT_11277eb20;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  _CGRectInset();
  func_0x00010bf199e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1);
  _objc_release(puVar2);
  func_0x00010c1c2c00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  return;
}



/* Entry: 108f8f2b0; end: 108f8f2bf; -[SCPlusGradientView cornersToRound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f8f2b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277eb1c);
}



/* Entry: 108f8f2c0; end: 108f8f2d3; -[SCPlusGradientView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f8f2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eb20,0);
  return;
}



/* Entry: 108f8f2d4; end: 108f8f35f; -[SCPlusBestFriendsDividerViewModel initWithTitleText:groupingStyle:externalEdges:] */

undefined1 *
FUN_108f8f2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff920;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8f360; end: 108f8f383; -[SCPlusBestFriendsDividerViewModel copyWithZone:] */

undefined8 FUN_108f8f360(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f8f384; end: 108f8f3f3; -[SCPlusBestFriendsDividerViewModel hash] */

undefined8 * FUN_108f8f384(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f8f488;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_108f8f488;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f8f488;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_108f8f488:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 108f8f3f4; end: 108f8f4a3; -[SCPlusBestFriendsDividerViewModel isEqual:] */

long FUN_108f8f3f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f8f488;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_108f8f488;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f8f488;
    }
  }
  lVar3 = 1;
LAB_108f8f488:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f8f4a4; end: 108f8f4ab; -[SCPlusBestFriendsDividerViewModel titleText] */

undefined8 FUN_108f8f4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8f4ac; end: 108f8f4b3; -[SCPlusBestFriendsDividerViewModel groupingStyle] */

undefined8 FUN_108f8f4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8f4b4; end: 108f8f4bb; -[SCPlusBestFriendsDividerViewModel externalEdges] */

undefined8 FUN_108f8f4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f8f4bc; end: 108f8f4c7; -[SCPlusBestFriendsDividerViewModel .cxx_destruct] */

void FUN_108f8f4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8f4c8; end: 108f8f53b; -[SCSendToHeaderScope initWithPlugInRegistry:] */

undefined1 * FUN_108f8f4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff928;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8f53c; end: 108f8f543; -[SCSendToHeaderScope plugInRegistry] */

undefined8 FUN_108f8f53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8f544; end: 108f8f54f; -[SCSendToHeaderScope .cxx_destruct] */

void FUN_108f8f544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8f550; end: 108f8f5f3; -[SCSendToSectionScope initWithPlugInRegistry:renderingTracker:] */

undefined1 *
FUN_108f8f550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff930;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f8f5f4; end: 108f8f5fb; -[SCSendToSectionScope plugInRegistry] */

undefined8 FUN_108f8f5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f8f5fc; end: 108f8f603; -[SCSendToSectionScope renderingTracker] */

undefined8 FUN_108f8f5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f8f604; end: 108f8f633; -[SCSendToSectionScope .cxx_destruct] */

void FUN_108f8f604(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f8f634; end: 108f8f69f; +[SCSendToEvent actionSheetAvailabilityDidChangeWithAvailableActionSheetTypes:] */

void FUN_108f8f634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x16;
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f6a0; end: 108f8f6eb; +[SCSendToEvent allSectionsDidCompleteInitialRender] */

void FUN_108f8f6a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f6ec; end: 108f8f737; +[SCSendToEvent clearListSelection] */

void FUN_108f8f6ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f738; end: 108f8f783; +[SCSendToEvent clearSearchTextField] */

void FUN_108f8f738(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xf;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f784; end: 108f8f7cf; +[SCSendToEvent clearSponsorSelection] */

void FUN_108f8f784(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f7d0; end: 108f8f81b; +[SCSendToEvent createdNewGroup] */

void FUN_108f8f7d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f81c; end: 108f8f867; +[SCSendToEvent dismissSearch] */

void FUN_108f8f81c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xe;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f868; end: 108f8f8b3; +[SCSendToEvent dismissTopicSearch] */

void FUN_108f8f868(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f8b4; end: 108f8f927; +[SCSendToEvent dismissWithSelectedItems:dismissSource:] */

void FUN_108f8f8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f928; end: 108f8f973; +[SCSendToEvent expandSendToTray] */

void FUN_108f8f928(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f974; end: 108f8f9bf; +[SCSendToEvent presentSearch] */

void FUN_108f8f974(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8f9c0; end: 108f8fa0b; +[SCSendToEvent presentTopicSearch] */

void FUN_108f8f9c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fa0c; end: 108f8fa77; +[SCSendToEvent searchWithKeyword:] */

void FUN_108f8fa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fa78; end: 108f8fac3; +[SCSendToEvent selectContactRecipient] */

void FUN_108f8fa78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


