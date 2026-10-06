/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105eb20fc; end: 105eb2103; -[SCDiscoverFeedManagementSettingConfig subtitle] */

undefined8 FUN_105eb20fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105eb2104; end: 105eb210b; -[SCDiscoverFeedManagementSettingConfig hasSearchView] */

undefined1 FUN_105eb2104(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb210c; end: 105eb2113; -[SCDiscoverFeedManagementSettingConfig fullScreenDataProviderEnum] */

undefined8 FUN_105eb210c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105eb2114; end: 105eb211b; -[SCDiscoverFeedManagementSettingConfig headerButton] */

undefined8 FUN_105eb2114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105eb211c; end: 105eb214b; -[SCDiscoverFeedManagementSettingConfig .cxx_destruct] */

void FUN_105eb211c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb214c; end: 105eb21d3; -[SCDiscoverFeedManagementEmptyScreenViewModel initWithViewType:text:] */

undefined1 *
FUN_105eb214c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb21d4; end: 105eb21f7; -[SCDiscoverFeedManagementEmptyScreenViewModel copyWithZone:] */

undefined8 FUN_105eb21d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb21f8; end: 105eb2257; -[SCDiscoverFeedManagementEmptyScreenViewModel hash] */

undefined8 * FUN_105eb21f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105eb22dc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105eb22dc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_105eb22dc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105eb22dc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105eb2258; end: 105eb22f7; -[SCDiscoverFeedManagementEmptyScreenViewModel isEqual:] */

long FUN_105eb2258(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb22dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_105eb22dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_105eb22dc;
    }
  }
  lVar3 = 1;
LAB_105eb22dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb22f8; end: 105eb22ff; -[SCDiscoverFeedManagementEmptyScreenViewModel viewType] */

undefined8 FUN_105eb22f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105eb2300; end: 105eb2307; -[SCDiscoverFeedManagementEmptyScreenViewModel text] */

undefined8 FUN_105eb2300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105eb2308; end: 105eb2313; -[SCDiscoverFeedManagementEmptyScreenViewModel .cxx_destruct] */

void FUN_105eb2308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb2314; end: 105eb2463; -[SCDiscoverFeedManagementHiddenChannelViewModel initWithHiddenChannelTitle:officialBadgeType:iconViewModel:tapActionModel:unhideButtonActionModel:longPressActionModel:separatorIsHidden:] */

undefined1 *
FUN_105eb2314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126edad0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb2464; end: 105eb2487; -[SCDiscoverFeedManagementHiddenChannelViewModel copyWithZone:] */

undefined8 FUN_105eb2464(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb2488; end: 105eb252f; -[SCDiscoverFeedManagementHiddenChannelViewModel hash] */

undefined8 * FUN_105eb2488(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105eb2618:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105eb2624;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
              if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_105eb2624;
              }
              goto LAB_105eb2618;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105eb2624:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105eb2530; end: 105eb263f; -[SCDiscoverFeedManagementHiddenChannelViewModel isEqual:] */

long FUN_105eb2530(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105eb2618:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb2624;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_105eb2624;
              }
              goto LAB_105eb2618;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105eb2624:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb2640; end: 105eb2647; -[SCDiscoverFeedManagementHiddenChannelViewModel hiddenChannelTitle] */

undefined8 FUN_105eb2640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105eb2648; end: 105eb264f; -[SCDiscoverFeedManagementHiddenChannelViewModel officialBadgeType] */

undefined8 FUN_105eb2648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105eb2650; end: 105eb2657; -[SCDiscoverFeedManagementHiddenChannelViewModel iconViewModel] */

undefined8 FUN_105eb2650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105eb2658; end: 105eb265f; -[SCDiscoverFeedManagementHiddenChannelViewModel tapActionModel] */

undefined8 FUN_105eb2658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105eb2660; end: 105eb2667; -[SCDiscoverFeedManagementHiddenChannelViewModel unhideButtonActionModel] */

undefined8 FUN_105eb2660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105eb2668; end: 105eb266f; -[SCDiscoverFeedManagementHiddenChannelViewModel longPressActionModel] */

undefined8 FUN_105eb2668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105eb2670; end: 105eb2677; -[SCDiscoverFeedManagementHiddenChannelViewModel separatorIsHidden] */

undefined1 FUN_105eb2670(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb2678; end: 105eb26cb; -[SCDiscoverFeedManagementHiddenChannelViewModel .cxx_destruct] */

void FUN_105eb2678(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb26cc; end: 105eb2737; +[SCDiscoverFeedManagementIconViewModel networkImageWithNetworkImage:] */

void FUN_105eb26cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5778;
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



/* Entry: 105eb2738; end: 105eb279b; +[SCDiscoverFeedManagementIconViewModel snapchatterAvatarContainerViewModelWithModel:] */

void FUN_105eb2738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5778;
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



/* Entry: 105eb279c; end: 105eb27bf; -[SCDiscoverFeedManagementIconViewModel copyWithZone:] */

undefined8 FUN_105eb279c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb27c0; end: 105eb2837; -[SCDiscoverFeedManagementIconViewModel hash] */

void FUN_105eb27c0(long param_1)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126edad8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb2838; end: 105eb287b; -[SCDiscoverFeedManagementIconViewModel internalInit] */

void FUN_105eb2838(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126edad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb287c; end: 105eb2933; -[SCDiscoverFeedManagementIconViewModel isEqual:] */

long FUN_105eb287c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105eb290c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb2918;
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
          goto LAB_105eb2918;
        }
        goto LAB_105eb290c;
      }
    }
    lVar3 = 0;
  }
LAB_105eb2918:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb2934; end: 105eb29b7; -[SCDiscoverFeedManagementIconViewModel matchSnapchatterAvatarContainerViewModel:networkImage:] */

void FUN_105eb2934(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_105eb299c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_105eb299c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_105eb299c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eb29b8; end: 105eb29e7; -[SCDiscoverFeedManagementIconViewModel .cxx_destruct] */

void FUN_105eb29b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb29e8; end: 105eb2b6f; -[SCDiscoverFeedManagementSubscriptionViewModel initWithSubscriptionTitle:officialBadgeType:iconViewModel:isOptedInForNotifications:tapActionModel:optInButtonActionModel:unsubscribeButtonActionModel:longPressActionModel:isEditing:] */

undefined1 *
FUN_105eb29e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126edae0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb2b70; end: 105eb2b93; -[SCDiscoverFeedManagementSubscriptionViewModel copyWithZone:] */

undefined8 FUN_105eb2b70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105eb2b94; end: 105eb2c4b; -[SCDiscoverFeedManagementSubscriptionViewModel hash] */

undefined8 * FUN_105eb2b94(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105eb2d5c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105eb2d68;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])) && (*(char *)((long)puVar3 + 9) == param_3[9])
        ))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x40);
                if (puVar6 != *(undefined1 **)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_105eb2d68;
                }
                goto LAB_105eb2d5c;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105eb2d68:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105eb2c4c; end: 105eb2d83; -[SCDiscoverFeedManagementSubscriptionViewModel isEqual:] */

long FUN_105eb2c4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105eb2d5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105eb2d68;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_105eb2d68;
                }
                goto LAB_105eb2d5c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105eb2d68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105eb2d84; end: 105eb2d8b; -[SCDiscoverFeedManagementSubscriptionViewModel subscriptionTitle] */

undefined8 FUN_105eb2d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105eb2d8c; end: 105eb2d93; -[SCDiscoverFeedManagementSubscriptionViewModel officialBadgeType] */

undefined8 FUN_105eb2d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105eb2d94; end: 105eb2d9b; -[SCDiscoverFeedManagementSubscriptionViewModel iconViewModel] */

undefined8 FUN_105eb2d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105eb2d9c; end: 105eb2da3; -[SCDiscoverFeedManagementSubscriptionViewModel isOptedInForNotifications] */

undefined1 FUN_105eb2d9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105eb2da4; end: 105eb2dab; -[SCDiscoverFeedManagementSubscriptionViewModel tapActionModel] */

undefined8 FUN_105eb2da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105eb2dac; end: 105eb2db3; -[SCDiscoverFeedManagementSubscriptionViewModel optInButtonActionModel] */

undefined8 FUN_105eb2dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105eb2db4; end: 105eb2dbb; -[SCDiscoverFeedManagementSubscriptionViewModel unsubscribeButtonActionModel] */

undefined8 FUN_105eb2db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105eb2dbc; end: 105eb2dc3; -[SCDiscoverFeedManagementSubscriptionViewModel longPressActionModel] */

undefined8 FUN_105eb2dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105eb2dc4; end: 105eb2dcb; -[SCDiscoverFeedManagementSubscriptionViewModel isEditing] */

undefined1 FUN_105eb2dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105eb2dcc; end: 105eb2e2b; -[SCDiscoverFeedManagementSubscriptionViewModel .cxx_destruct] */

void FUN_105eb2dcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105eb2e2c; end: 105eb2fb3; -[SCCreatorsSpotlightSubmissionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb2e2c(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126c57d8;
  _objc_alloc();
  lVar12 = (long)_DAT_1127391bc;
  lVar2 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127391d8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127391c4;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf81960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf60fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  func_0x00010c0f1e60();
  func_0x00010c056b00();
  lVar13 = (long)_DAT_1127391c8;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar13),PTR_s_present_1126205a0);
  return;
}



/* Entry: 105eb2fb4; end: 105eb304b; -[SCCreatorsSpotlightSubmissionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb2fb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127391dc,0);
  _objc_storeStrong(param_1 + _DAT_1127391c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127391d8);
  _objc_destroyWeak(param_1 + _DAT_1127391d4);
  _objc_destroyWeak(param_1 + _DAT_1127391d0);
  _objc_destroyWeak(param_1 + _DAT_1127391cc);
  _objc_destroyWeak(param_1 + _DAT_1127391c4);
  _objc_destroyWeak(param_1 + _DAT_1127391bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127391c8,0);
  return;
}



/* Entry: 105eb304c; end: 105eb31c3; -[SCCreatorsSpotlightSubmissionWorkflow initWithUIContainer:directorModeScopeExposer:directorModeScopeServices:delegate:discoverFeedLogger:currentlyPlayingStoryId:pageType:] */

undefined1 *
FUN_105eb304c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126edae8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb31c4; end: 105eb31df;  */

void FUN_105eb31c4(void)

{
  _objc_opt_new(PTR_PTR_1126b10e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb31e0; end: 105eb36fb; -[SCCreatorsSpotlightSubmissionWorkflow present] */

void FUN_105eb31e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126b10a0;
  func_0x000105eb3b98();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000105eb3bb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105eb36fc;
  puStack_a8 = &UNK_110852cd0;
  _objc_copyWeak(auStack_a0,auStack_98);
  puVar6 = puVar3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar4);
  _objc_release(puVar5);
  puVar3 = PTR_PTR_1126b10a0;
  func_0x000105eb3bc8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x000105eb3be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar2;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105eb3744;
  puStack_d0 = &UNK_110852cd0;
  _objc_copyWeak(auStack_c8,auStack_98);
  puVar8 = puVar3;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126b10a0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_98;
  _objc_copyWeak(auStack_f0,puVar12);
  puVar3 = puVar2;
  func_0x00010bf1d200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar9);
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar5 = puVar2;
  func_0x000105eb3b80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar6;
  puStack_88 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar2);
  func_0x00010c10c360(puVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0440();
  _objc_release(uVar10);
  func_0x00010bde9fa0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar1);
  puVar11 = auStack_98;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(puVar11);
  _objc_retain(puVar12);
  puVar11 = puVar11 + 0x20;
  _objc_loadWeakRetained(puVar11);
  func_0x00010be00ea0();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 105eb36fc; end: 105eb37d3;  */

void FUN_105eb36fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eb37d4; end: 105eb3837; -[SCCreatorsSpotlightSubmissionWorkflow _didTapMediaPickerCellWithSender:] */

void FUN_105eb37d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf82fe0(param_3);
  func_0x00010be7b060(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0460();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__countSpotlightSubmissionAction__112558188,
             &PTR____CFConstantStringClassReference_110e2f418);
  return;
}



/* Entry: 105eb3838; end: 105eb389b; -[SCCreatorsSpotlightSubmissionWorkflow _didTapCameraCellWithSender:] */

void FUN_105eb3838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf82fe0(param_3);
  func_0x00010be7b060(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0400();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__countSpotlightSubmissionAction__112558188,
             &PTR____CFConstantStringClassReference_110e2f438);
  return;
}



/* Entry: 105eb389c; end: 105eb390b; -[SCCreatorsSpotlightSubmissionWorkflow _didTapDoneCellWithSender:] */

void FUN_105eb389c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf82fe0(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5be20();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0420();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__countSpotlightSubmissionAction__112558188,
             &PTR____CFConstantStringClassReference_110e2f3f8);
  return;
}



/* Entry: 105eb390c; end: 105eb39b3; -[SCCreatorsSpotlightSubmissionWorkflow _presentDirectorModeWithFeature:] */

void FUN_105eb390c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c57e0;
  _objc_alloc();
  func_0x00010bff5ca0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf235e0(uVar2,param_2,*(undefined8 *)(param_1 + 8),0x5c,8,0,param_1,0,0,0,0,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105eb39b4; end: 105eb3a07; -[SCCreatorsSpotlightSubmissionWorkflow _countSpotlightSubmissionAction:] */

void FUN_105eb39b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f34e74();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eb3a08; end: 105eb3a33; -[SCCreatorsSpotlightSubmissionWorkflow directorModeScopeDidComplete] */

void FUN_105eb3a08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5be20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eb3a34; end: 105eb3a9b; -[SCCreatorsSpotlightSubmissionWorkflow actionSheetDidDismiss:] */

void FUN_105eb3a34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf5be20();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0420();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__countSpotlightSubmissionAction__112558188,
             &PTR____CFConstantStringClassReference_110e2f3f8);
  return;
}



/* Entry: 105eb3a9c; end: 105eb3aff; -[SCCreatorsSpotlightSubmissionWorkflow .cxx_destruct] */

void FUN_105eb3a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105eb3b00; end: 105eb3b7f; +[SIGActionSheetCell descriptionCellWithText:description:accessoryView:] */

void FUN_105eb3b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0ec240(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(param_4);
  func_0x00010c2194c0(param_1,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105eb3b80; end: 105eb3bf7;  */

void FUN_105eb3b80(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2f498;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2f498,
                      &PTR____CFConstantStringClassReference_110e2f4b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105eb3bf8; end: 105eb3dbb; -[SCLegacySpotlightServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb3bf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105eb3dbc;
  puStack_78 = &UNK_1108f1800;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c57e8;
  _objc_alloc(PTR_PTR_1126c57e8);
  lVar4 = param_1 + _DAT_112739200;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c24bc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b440(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112739204));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105eb3dbc; end: 105eb3e3f;  */

void FUN_105eb3dbc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105eb3e40; end: 105eb3eff; -[SCLegacySpotlightServicesEntryPoint _createSpotlightPlaybackManagerFactory] */

void FUN_105eb3e40(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126c57f0;
  _objc_alloc(PTR_PTR_1126c57f0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c006720(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105eb3f00; end: 105eb3f63;  */

void FUN_105eb3f00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105eb3f64; end: 105eb606b; -[SCLegacySpotlightServicesEntryPoint _createSpotlightPlaybackManagerWithPageSessionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb3f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lVar154;
  long lVar155;
  long lVar156;
  long lVar157;
  long lVar158;
  long lVar159;
  long lVar160;
  long lVar161;
  long lVar162;
  long lVar163;
  long lVar164;
  long lVar165;
  long lVar166;
  long lVar167;
  long lVar168;
  long lVar169;
  long lVar170;
  long lVar171;
  long lVar172;
  long lVar173;
  long lVar174;
  long lVar175;
  long lVar176;
  long lVar177;
  long lVar178;
  long lVar179;
  undefined8 uVar180;
  undefined8 uVar181;
  long lVar182;
  long lVar183;
  undefined8 uVar184;
  long lVar185;
  long lVar186;
  long lVar187;
  long lVar188;
  long lVar189;
  long lVar190;
  long lVar191;
  long lVar192;
  long lVar193;
  long lVar194;
  long lVar195;
  long lStack_320;
  long lStack_1b0;
  long lStack_140;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  lVar189 = (long)_DAT_112739208;
  lVar1 = param_1 + lVar189;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273920c;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_112739210;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar167 = (long)_DAT_112739214;
  lVar1 = param_1 + lVar167;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar168 = (long)_DAT_112739218;
  lVar1 = param_1 + lVar168;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b1350;
  _objc_alloc();
  lVar189 = param_1 + lVar189;
  _objc_loadWeakRetained();
  lVar9 = lVar189;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11273921c;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112739220;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112739224;
  _objc_loadWeakRetained(lVar13);
  lVar14 = param_1 + _DAT_112739228;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11273922c;
  _objc_loadWeakRetained(lVar16);
  lVar17 = lVar16;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cee0();
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar189);
  lVar1 = param_1 + _DAT_112739230;
  _objc_loadWeakRetained();
  lVar19 = lVar1;
  func_0x00010c0f1b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar169 = (long)_DAT_112739234;
  lVar1 = param_1 + lVar169;
  _objc_loadWeakRetained();
  lVar20 = lVar1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar189 = param_1 + lVar169;
  _objc_loadWeakRetained();
  lVar193 = lVar189;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar170 = (long)_DAT_112739238;
  lVar11 = param_1 + lVar170;
  _objc_loadWeakRetained();
  lVar21 = lVar11;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar171 = (long)_DAT_11273923c;
  lVar13 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar22 = lVar13;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112739240;
  _objc_loadWeakRetained();
  lVar172 = (long)_DAT_112739244;
  lVar16 = param_1 + lVar172;
  _objc_loadWeakRetained();
  lVar23 = lVar16;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112739248;
  _objc_loadWeakRetained();
  lVar24 = lVar9;
  func_0x00010bf66500();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273924c;
  _objc_loadWeakRetained();
  lVar25 = lVar10;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112739250;
  _objc_loadWeakRetained();
  lVar26 = lVar12;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar27 = lVar15;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112739254;
  _objc_loadWeakRetained();
  lVar28 = lVar17;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar166 = 0;
  }
  else {
    lVar166 = param_1 + _DAT_1127393b0;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar166;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_140 = 0;
  }
  else {
    lStack_140 = param_1 + _DAT_1127393b4;
    _objc_loadWeakRetained();
  }
  lVar173 = (long)_DAT_112739258;
  lVar31 = param_1 + lVar173;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar174 = (long)_DAT_11273925c;
  lVar33 = param_1 + lVar174;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar175 = (long)_DAT_112739260;
  lVar35 = param_1 + lVar175;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112739264;
  _objc_loadWeakRetained();
  lVar38 = param_1 + _DAT_112739268;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar176 = (long)_DAT_11273926c;
  lVar40 = param_1 + lVar176;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar185 = (long)_DAT_112739270;
  lVar42 = param_1 + lVar185;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar167 = param_1 + lVar167;
  _objc_loadWeakRetained();
  lVar44 = lVar167;
  func_0x00010bf82540();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_112739274;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_112739278;
  _objc_loadWeakRetained();
  lVar49 = param_1 + _DAT_11273927c;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_112739280;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_112739284;
  _objc_loadWeakRetained();
  lVar190 = (long)_DAT_112739288;
  lVar54 = param_1 + lVar190;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010c23fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar190 = param_1 + lVar190;
  _objc_loadWeakRetained();
  lVar56 = lVar190;
  func_0x00010c2403c0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + _DAT_11273928c;
  _objc_loadWeakRetained();
  lVar58 = lVar57;
  func_0x00010c11b420();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_112739290;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + _DAT_112739294;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar177 = (long)_DAT_112739298;
  lVar63 = param_1 + lVar177;
  _objc_loadWeakRetained();
  lVar64 = lVar63;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar194 = (long)_DAT_11273929c;
  lVar65 = param_1 + lVar194;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010c08f180();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar185;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar185 = param_1 + lVar185;
  _objc_loadWeakRetained();
  lVar69 = lVar185;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar191 = (long)_DAT_1127392a0;
  lVar70 = param_1 + lVar191;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010c0dc780();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = lVar71;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + _DAT_1127392a4;
  _objc_loadWeakRetained();
  lVar74 = lVar73;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + _DAT_1127392a8;
  _objc_loadWeakRetained();
  lVar76 = lVar75;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_1 + _DAT_1127392ac;
  _objc_loadWeakRetained();
  lVar78 = lVar77;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = param_1 + _DAT_1127392b0;
  _objc_loadWeakRetained();
  lVar80 = lVar79;
  func_0x00010c0ffb00();
  _objc_retainAutoreleasedReturnValue();
  lVar194 = param_1 + lVar194;
  _objc_loadWeakRetained();
  lVar81 = lVar194;
  func_0x00010c08f140();
  _objc_retainAutoreleasedReturnValue();
  lVar178 = (long)_DAT_1127392b4;
  lVar82 = param_1 + lVar178;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar186 = (long)_DAT_1127392b8;
  lVar84 = param_1 + lVar186;
  _objc_loadWeakRetained();
  lVar85 = lVar84;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar195 = (long)_DAT_1127392bc;
  lVar86 = param_1 + lVar195;
  _objc_loadWeakRetained();
  lVar87 = lVar86;
  func_0x00010c0e9fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar195 = param_1 + lVar195;
  _objc_loadWeakRetained();
  lVar88 = lVar195;
  func_0x00010c0eb220();
  _objc_retainAutoreleasedReturnValue();
  lVar89 = param_1 + _DAT_1127392c0;
  _objc_loadWeakRetained();
  lVar90 = lVar89;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar179 = (long)_DAT_1127392c4;
  lVar91 = param_1 + lVar179;
  _objc_loadWeakRetained();
  lVar92 = lVar91;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar93 = param_1 + _DAT_1127392c8;
  _objc_loadWeakRetained();
  lVar94 = lVar93;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  lVar191 = param_1 + lVar191;
  _objc_loadWeakRetained();
  lVar95 = lVar191;
  func_0x00010c0dc480();
  _objc_retainAutoreleasedReturnValue();
  lVar168 = param_1 + lVar168;
  _objc_loadWeakRetained();
  lVar96 = lVar168;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar180 = *(undefined8 *)(param_1 + _DAT_1127392cc);
  uVar181 = *(undefined8 *)(param_1 + _DAT_1127392d0);
  lVar97 = param_1 + _DAT_1127392d4;
  _objc_loadWeakRetained();
  lVar192 = (long)_DAT_1127392d8;
  lVar98 = param_1 + lVar192;
  _objc_loadWeakRetained();
  lVar99 = lVar98;
  func_0x00010c108ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar192 = param_1 + lVar192;
  _objc_loadWeakRetained();
  lVar100 = lVar192;
  func_0x00010c108e80();
  _objc_retainAutoreleasedReturnValue();
  lVar101 = param_1 + _DAT_1127392dc;
  _objc_loadWeakRetained();
  lVar102 = lVar101;
  func_0x00010c069380();
  _objc_retainAutoreleasedReturnValue();
  lVar165 = (long)_DAT_1127392e4;
  uVar184 = *(undefined8 *)(param_1 + _DAT_1127392e0);
  lVar103 = param_1 + lVar165;
  _objc_loadWeakRetained();
  lVar104 = lVar103;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar182 = (long)_DAT_1127392e8;
  lVar105 = param_1 + lVar182;
  _objc_loadWeakRetained();
  lVar106 = lVar105;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar107 = param_1 + _DAT_1127392ec;
  _objc_loadWeakRetained();
  lVar108 = lVar107;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar109 = param_1 + _DAT_1127392f0;
  _objc_loadWeakRetained();
  lVar110 = lVar109;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = param_1 + _DAT_1127392f4;
  _objc_loadWeakRetained();
  lVar112 = lVar111;
  func_0x00010c08f500();
  _objc_retainAutoreleasedReturnValue();
  lVar113 = param_1 + _DAT_1127392f8;
  _objc_loadWeakRetained();
  lVar114 = lVar113;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar115 = param_1 + _DAT_1127392fc;
  _objc_loadWeakRetained();
  lVar116 = lVar115;
  func_0x00010c08d300();
  _objc_retainAutoreleasedReturnValue();
  lVar117 = param_1 + _DAT_112739304;
  _objc_loadWeakRetained();
  lVar118 = lVar117;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar164 = (long)_DAT_11273930c;
  lVar119 = param_1 + lVar164;
  _objc_loadWeakRetained();
  lVar120 = param_1 + _DAT_112739310;
  _objc_loadWeakRetained();
  lVar121 = param_1 + lVar175;
  _objc_loadWeakRetained();
  lVar186 = param_1 + lVar186;
  _objc_loadWeakRetained();
  lVar122 = param_1 + lVar172;
  _objc_loadWeakRetained();
  lStack_320 = lVar122;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = param_1 + _DAT_112739318;
  _objc_loadWeakRetained();
  lVar124 = lVar123;
  func_0x00010bfab9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar125 = param_1 + _DAT_11273931c;
  _objc_loadWeakRetained();
  lVar126 = lVar125;
  func_0x00010c243200();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = param_1 + _DAT_112739320;
  _objc_loadWeakRetained();
  lVar128 = lVar127;
  func_0x00010bf4be60();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = param_1 + _DAT_112739324;
  _objc_loadWeakRetained();
  lVar130 = param_1 + _DAT_112739328;
  _objc_loadWeakRetained();
  lVar131 = lVar130;
  func_0x00010bfbdac0();
  _objc_retainAutoreleasedReturnValue();
  lVar187 = (long)_DAT_11273932c;
  lVar132 = param_1 + lVar187;
  _objc_loadWeakRetained();
  lVar133 = lVar132;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar187 = param_1 + lVar187;
  _objc_loadWeakRetained();
  lVar134 = lVar187;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar188 = (long)_DAT_112739330;
  lVar135 = param_1 + lVar188;
  _objc_loadWeakRetained();
  lVar136 = lVar135;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar188 = param_1 + lVar188;
  _objc_loadWeakRetained();
  lVar137 = lVar188;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar138 = param_1 + _DAT_112739334;
  _objc_loadWeakRetained();
  lVar139 = lVar138;
  func_0x00010c22ac20();
  _objc_retainAutoreleasedReturnValue();
  lVar183 = (long)_DAT_112739338;
  lVar140 = param_1 + lVar183;
  _objc_loadWeakRetained();
  lVar141 = lVar140;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar142 = param_1 + _DAT_11273933c;
  _objc_loadWeakRetained();
  lVar143 = param_1 + _DAT_112739340;
  _objc_loadWeakRetained();
  lVar144 = lVar143;
  func_0x00010c22ac60();
  _objc_retainAutoreleasedReturnValue();
  lVar145 = param_1 + _DAT_112739344;
  _objc_loadWeakRetained();
  lVar146 = param_1 + _DAT_112739348;
  _objc_loadWeakRetained();
  lVar147 = lVar146;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar148 = param_1 + _DAT_11273934c;
  _objc_loadWeakRetained();
  lVar149 = lVar148;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar150 = param_1 + _DAT_112739350;
  _objc_loadWeakRetained();
  lVar151 = lVar150;
  func_0x00010c2814a0();
  _objc_retainAutoreleasedReturnValue();
  lVar152 = param_1 + _DAT_112739354;
  _objc_loadWeakRetained();
  lVar153 = lVar152;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar154 = param_1 + _DAT_112739358;
  _objc_loadWeakRetained();
  lVar155 = lVar154;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  lVar156 = param_1 + lVar172;
  _objc_loadWeakRetained();
  lVar157 = lVar156;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar158 = param_1 + _DAT_11273935c;
  _objc_loadWeakRetained();
  lVar159 = lVar158;
  func_0x00010c2609c0();
  _objc_retainAutoreleasedReturnValue();
  lVar160 = lVar159;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar161 = param_1 + _DAT_112739360;
  _objc_loadWeakRetained();
  lVar162 = lVar161;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar163 = lVar6;
  func_0x0001068fffc0(lVar6,lVar20,lVar193,puVar4,lVar21,lVar22,lVar14,lVar23,0,0,0,lVar24,lVar25,
                      lVar26,lVar3,lVar7,lVar27,lVar28,1,lVar30,lStack_140,lVar32,lVar34,0,lVar5,
                      lVar36,lVar37,lVar39,lVar41,lVar43,lVar45,lVar47,0,lVar48,lVar50,lVar52,lVar53
                      ,0,lVar55,lVar56,lVar58,lVar60,lVar62,lVar64,lVar66,lVar68,lVar69,lVar72,
                      lVar74,lVar76,lVar78,lVar80,lVar81,lVar83,lVar85,lVar87,lVar88,lVar90,lVar92,
                      lVar94,lVar95,lVar96,uVar180,uVar181,lVar97,lVar99,lVar100,lVar102,uVar184,
                      lVar104);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar162);
  _objc_release(lVar161);
  _objc_release(lVar160);
  _objc_release(lVar159);
  _objc_release(lVar158);
  _objc_release(lVar157);
  _objc_release(lVar156);
  _objc_release(lVar155);
  _objc_release(lVar154);
  _objc_release(lVar153);
  _objc_release(lVar152);
  _objc_release(lVar151);
  _objc_release(lVar150);
  _objc_release(lVar149);
  _objc_release(lVar148);
  _objc_release(lVar147);
  _objc_release(lVar146);
  _objc_release(lVar145);
  _objc_release(lVar144);
  _objc_release(lVar143);
  _objc_release(lVar142);
  _objc_release(lVar141);
  _objc_release(lVar140);
  _objc_release(lVar139);
  _objc_release(lVar138);
  _objc_release(lVar137);
  _objc_release(lVar188);
  _objc_release(lVar136);
  _objc_release(lVar135);
  _objc_release(lVar134);
  _objc_release(lVar187);
  _objc_release(lVar133);
  _objc_release(lVar132);
  _objc_release(lVar131);
  _objc_release(lVar130);
  _objc_release(lVar129);
  _objc_release(lVar128);
  _objc_release(lVar127);
  _objc_release(lVar126);
  _objc_release(lVar125);
  _objc_release(lVar124);
  _objc_release(lVar123);
  _objc_release(lStack_320);
  _objc_release(lVar122);
  _objc_release(lVar186);
  _objc_release(lVar121);
  _objc_release(lVar120);
  _objc_release(lVar119);
  _objc_release(lVar118);
  _objc_release(lVar117);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar114);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(lVar109);
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar192);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar168);
  _objc_release(lVar95);
  _objc_release(lVar191);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar195);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar194);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar185);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar190);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar167);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lStack_140);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar166);
  _objc_release(lVar28);
  _objc_release(lVar17);
  _objc_release(lVar27);
  _objc_release(lVar15);
  _objc_release(lVar26);
  _objc_release(lVar12);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar24);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar193);
  _objc_release(lVar189);
  _objc_release(lVar20);
  _objc_release(lVar1);
  lVar193 = (long)_DAT_112739364;
  lVar1 = param_1 + lVar193;
  _objc_loadWeakRetained();
  func_0x00010c29d360();
  _objc_release(lVar1);
  puVar18 = PTR_PTR_1126c57f8;
  _objc_alloc();
  lVar1 = param_1 + lVar193;
  _objc_loadWeakRetained();
  lVar22 = lVar1;
  func_0x00010c2653a0();
  _objc_retainAutoreleasedReturnValue();
  lVar189 = param_1 + _DAT_112739368;
  _objc_loadWeakRetained();
  lVar23 = lVar189;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar166 = lVar11;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar169;
  _objc_loadWeakRetained();
  lVar29 = lVar13;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar169 = param_1 + lVar169;
  _objc_loadWeakRetained();
  lVar30 = lVar169;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar183 = param_1 + lVar183;
  _objc_loadWeakRetained();
  lVar31 = lVar183;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar175;
  _objc_loadWeakRetained();
  lVar33 = lVar14;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11273936c;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_112739370;
  _objc_loadWeakRetained();
  lVar35 = lVar9;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar173 = param_1 + lVar173;
  _objc_loadWeakRetained();
  lVar37 = lVar173;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar171 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar38 = lVar171;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar182 = param_1 + lVar182;
  _objc_loadWeakRetained();
  lVar40 = lVar182;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar172;
  _objc_loadWeakRetained();
  lVar42 = lVar10;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar174 = param_1 + lVar174;
  _objc_loadWeakRetained();
  lVar46 = lVar174;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112739378;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_11273937c;
  _objc_loadWeakRetained();
  lVar48 = lVar15;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar172 = param_1 + lVar172;
  _objc_loadWeakRetained();
  lVar49 = lVar172;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112739380;
  _objc_loadWeakRetained();
  lVar51 = lVar17;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  lVar167 = param_1 + _DAT_112739384;
  _objc_loadWeakRetained();
  lVar53 = lVar167;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar178 = param_1 + lVar178;
  _objc_loadWeakRetained();
  lVar54 = lVar178;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar168 = param_1 + lVar193;
  _objc_loadWeakRetained();
  lVar190 = lVar168;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar193;
  _objc_loadWeakRetained();
  func_0x00010c247980();
  lVar193 = param_1 + lVar193;
  _objc_loadWeakRetained();
  func_0x00010c1070a0();
  lVar177 = param_1 + lVar177;
  _objc_loadWeakRetained();
  lVar57 = lVar177;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar170 = param_1 + lVar170;
  _objc_loadWeakRetained();
  lVar59 = lVar170;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar176 = param_1 + lVar176;
  _objc_loadWeakRetained();
  lVar70 = lVar176;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112739388;
  _objc_loadWeakRetained();
  lVar77 = lVar25;
  func_0x00010c24b680();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11273938c;
  _objc_loadWeakRetained();
  lVar194 = lVar26;
  func_0x00010c24b1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112739200;
  _objc_loadWeakRetained();
  lVar79 = lVar27;
  func_0x00010c24c420();
  _objc_retainAutoreleasedReturnValue();
  lVar164 = param_1 + lVar164;
  _objc_loadWeakRetained();
  lVar179 = param_1 + lVar179;
  _objc_loadWeakRetained();
  lVar75 = lVar179;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112739390;
  _objc_loadWeakRetained();
  lVar61 = lVar28;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112739398;
  _objc_loadWeakRetained();
  lVar63 = lVar24;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11273939c;
  _objc_loadWeakRetained();
  lVar65 = lVar21;
  func_0x00010c24c880();
  _objc_retainAutoreleasedReturnValue();
  lVar175 = param_1 + lVar175;
  _objc_loadWeakRetained();
  lVar67 = lVar175;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar185 = lVar67;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = lVar185;
  func_0x00010bf929c0();
  if ((int)lVar73 == 0) {
    lStack_1b0 = 0;
  }
  else {
    lStack_320 = param_1 + _DAT_1127393a0;
    _objc_loadWeakRetained();
    lStack_1b0 = lStack_320;
    func_0x00010c101aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar165 = param_1 + lVar165;
  _objc_loadWeakRetained();
  lVar86 = lVar165;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = param_1 + _DAT_1127393a4;
  _objc_loadWeakRetained();
  lVar195 = lVar82;
  func_0x00010c0ea6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + _DAT_1127393a8;
  _objc_loadWeakRetained();
  lVar89 = lVar84;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127393ac;
  _objc_loadWeakRetained();
  lVar91 = param_1;
  func_0x00010c134260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e060();
  _objc_release(lVar91);
  _objc_release(param_1);
  _objc_release(lVar89);
  _objc_release(lVar84);
  _objc_release(lVar195);
  _objc_release(lVar82);
  _objc_release(lVar86);
  _objc_release(lVar165);
  if ((int)lVar73 != 0) {
    _objc_release(lStack_1b0);
    _objc_release(lStack_320);
  }
  _objc_release(lVar185);
  _objc_release(lVar67);
  _objc_release(lVar175);
  _objc_release(lVar65);
  _objc_release(lVar21);
  _objc_release(lVar63);
  _objc_release(lVar24);
  _objc_release(lVar61);
  _objc_release(lVar28);
  _objc_release(lVar75);
  _objc_release(lVar179);
  _objc_release(lVar164);
  _objc_release(lVar79);
  _objc_release(lVar27);
  _objc_release(lVar194);
  _objc_release(lVar26);
  _objc_release(lVar77);
  _objc_release(lVar25);
  _objc_release(lVar70);
  _objc_release(lVar176);
  _objc_release(lVar59);
  _objc_release(lVar170);
  _objc_release(lVar57);
  _objc_release(lVar177);
  _objc_release(lVar193);
  _objc_release(lVar20);
  _objc_release(lVar190);
  _objc_release(lVar168);
  _objc_release(lVar54);
  _objc_release(lVar178);
  _objc_release(lVar53);
  _objc_release(lVar167);
  _objc_release(lVar51);
  _objc_release(lVar17);
  _objc_release(lVar49);
  _objc_release(lVar172);
  _objc_release(lVar48);
  _objc_release(lVar15);
  _objc_release(lVar12);
  _objc_release(lVar46);
  _objc_release(lVar174);
  _objc_release(lVar42);
  _objc_release(lVar10);
  _objc_release(lVar40);
  _objc_release(lVar182);
  _objc_release(lVar38);
  _objc_release(lVar171);
  _objc_release(lVar37);
  _objc_release(lVar173);
  _objc_release(lVar35);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar33);
  _objc_release(lVar14);
  _objc_release(lVar31);
  _objc_release(lVar183);
  _objc_release(lVar30);
  _objc_release(lVar169);
  _objc_release(lVar29);
  _objc_release(lVar13);
  _objc_release(lVar166);
  _objc_release(lVar11);
  _objc_release(lVar23);
  _objc_release(lVar189);
  _objc_release(lVar22);
  _objc_release(lVar1);
  _objc_release(lVar163);
  _objc_release(lVar19);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 105eb606c; end: 105eb60ab;  */

void FUN_105eb606c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0e8060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105eb60ac; end: 105eb60b3;  */

undefined8 FUN_105eb60ac(void)

{
  return 0;
}



/* Entry: 105eb60b4; end: 105eb616f; -[SCLegacySpotlightServicesEntryPoint onboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb60b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c2290;
  _objc_alloc(PTR_PTR_1126c2290);
  lVar2 = param_1 + _DAT_1127393a8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112739338;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012120(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105eb6170; end: 105eb66db; -[SCLegacySpotlightServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb6170(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273922c);
  _objc_destroyWeak(param_1 + _DAT_112739228);
  _objc_destroyWeak(param_1 + _DAT_112739224);
  _objc_destroyWeak(param_1 + _DAT_112739220);
  _objc_destroyWeak(param_1 + _DAT_11273921c);
  _objc_destroyWeak(param_1 + _DAT_11273935c);
  _objc_destroyWeak(param_1 + _DAT_112739230);
  _objc_destroyWeak(param_1 + _DAT_112739358);
  _objc_destroyWeak(param_1 + _DAT_112739354);
  _objc_destroyWeak(param_1 + _DAT_112739350);
  _objc_destroyWeak(param_1 + _DAT_11273934c);
  _objc_destroyWeak(param_1 + _DAT_112739348);
  _objc_destroyWeak(param_1 + _DAT_11273920c);
  _objc_destroyWeak(param_1 + _DAT_1127393a4);
  _objc_destroyWeak(param_1 + _DAT_112739344);
  _objc_destroyWeak(param_1 + _DAT_1127393a0);
  _objc_destroyWeak(param_1 + _DAT_11273939c);
  _objc_destroyWeak(param_1 + _DAT_112739398);
  _objc_destroyWeak(param_1 + _DAT_112739334);
  _objc_destroyWeak(param_1 + _DAT_112739324);
  _objc_destroyWeak(param_1 + _DAT_112739328);
  _objc_destroyWeak(param_1 + _DAT_11273931c);
  _objc_storeStrong(param_1 + _DAT_112739394,0);
  _objc_storeStrong(param_1 + _DAT_112739314,0);
  _objc_destroyWeak(param_1 + _DAT_112739320);
  _objc_destroyWeak(param_1 + _DAT_112739260);
  _objc_destroyWeak(param_1 + _DAT_112739310);
  _objc_destroyWeak(param_1 + _DAT_1127392fc);
  _objc_destroyWeak(param_1 + _DAT_11273930c);
  _objc_storeStrong(param_1 + _DAT_112739308,0);
  _objc_storeStrong(param_1 + _DAT_112739300,0);
  _objc_destroyWeak(param_1 + _DAT_112739318);
  _objc_destroyWeak(param_1 + _DAT_112739330);
  _objc_destroyWeak(param_1 + _DAT_1127392f4);
  _objc_destroyWeak(param_1 + _DAT_1127392d8);
  _objc_storeStrong(param_1 + _DAT_1127392d0,0);
  _objc_storeStrong(param_1 + _DAT_1127392cc,0);
  _objc_destroyWeak(param_1 + _DAT_112739378);
  _objc_storeStrong(param_1 + _DAT_112739374,0);
  _objc_storeStrong(param_1 + _DAT_1127392e0,0);
  _objc_destroyWeak(param_1 + _DAT_1127393b4);
  _objc_destroyWeak(param_1 + _DAT_1127392f0);
  _objc_destroyWeak(param_1 + _DAT_1127392dc);
  _objc_destroyWeak(param_1 + _DAT_1127392b8);
  _objc_destroyWeak(param_1 + _DAT_1127392c8);
  _objc_destroyWeak(param_1 + _DAT_1127392a8);
  _objc_destroyWeak(param_1 + _DAT_1127392a4);
  _objc_destroyWeak(param_1 + _DAT_112739298);
  _objc_destroyWeak(param_1 + _DAT_11273929c);
  _objc_destroyWeak(param_1 + _DAT_1127392a0);
  _objc_destroyWeak(param_1 + _DAT_112739390);
  _objc_destroyWeak(param_1 + _DAT_1127392c4);
  _objc_destroyWeak(param_1 + _DAT_1127392c0);
  _objc_destroyWeak(param_1 + _DAT_1127392bc);
  _objc_destroyWeak(param_1 + _DAT_1127392b0);
  _objc_destroyWeak(param_1 + _DAT_1127392ac);
  _objc_destroyWeak(param_1 + _DAT_112739294);
  _objc_destroyWeak(param_1 + _DAT_112739290);
  _objc_destroyWeak(param_1 + _DAT_11273928c);
  _objc_destroyWeak(param_1 + _DAT_112739288);
  _objc_destroyWeak(param_1 + _DAT_112739380);
  _objc_destroyWeak(param_1 + _DAT_112739304);
  _objc_destroyWeak(param_1 + _DAT_1127392ec);
  _objc_destroyWeak(param_1 + _DAT_112739284);
  _objc_destroyWeak(param_1 + _DAT_112739280);
  _objc_destroyWeak(param_1 + _DAT_11273927c);
  _objc_destroyWeak(param_1 + _DAT_11273937c);
  _objc_destroyWeak(param_1 + _DAT_112739274);
  _objc_destroyWeak(param_1 + _DAT_112739384);
  _objc_destroyWeak(param_1 + _DAT_1127392b4);
  _objc_destroyWeak(param_1 + _DAT_112739270);
  _objc_destroyWeak(param_1 + _DAT_1127392e4);
  _objc_destroyWeak(param_1 + _DAT_11273926c);
  _objc_destroyWeak(param_1 + _DAT_112739360);
  _objc_destroyWeak(param_1 + _DAT_112739268);
  _objc_storeStrong(param_1 + _DAT_112739204,0);
  _objc_destroyWeak(param_1 + _DAT_11273936c);
  _objc_destroyWeak(param_1 + _DAT_112739210);
  _objc_destroyWeak(param_1 + _DAT_112739368);
  _objc_destroyWeak(param_1 + _DAT_112739278);
  _objc_destroyWeak(param_1 + _DAT_1127392e8);
  _objc_destroyWeak(param_1 + _DAT_11273925c);
  _objc_destroyWeak(param_1 + _DAT_1127393a8);
  _objc_destroyWeak(param_1 + _DAT_112739370);
  _objc_destroyWeak(param_1 + _DAT_112739338);
  _objc_destroyWeak(param_1 + _DAT_112739248);
  _objc_destroyWeak(param_1 + _DAT_11273924c);
  _objc_destroyWeak(param_1 + _DAT_1127393b0);
  _objc_destroyWeak(param_1 + _DAT_112739264);
  _objc_destroyWeak(param_1 + _DAT_112739240);
  _objc_destroyWeak(param_1 + _DAT_112739238);
  _objc_destroyWeak(param_1 + _DAT_112739254);
  _objc_destroyWeak(param_1 + _DAT_11273923c);
  _objc_destroyWeak(param_1 + _DAT_112739244);
  _objc_destroyWeak(param_1 + _DAT_1127392f8);
  _objc_destroyWeak(param_1 + _DAT_112739250);
  _objc_destroyWeak(param_1 + _DAT_11273938c);
  _objc_destroyWeak(param_1 + _DAT_1127393ac);
  _objc_destroyWeak(param_1 + _DAT_112739388);
  _objc_destroyWeak(param_1 + _DAT_112739200);
  _objc_destroyWeak(param_1 + _DAT_112739258);
  _objc_destroyWeak(param_1 + _DAT_112739214);
  _objc_destroyWeak(param_1 + _DAT_112739234);
  _objc_destroyWeak(param_1 + _DAT_11273932c);
  _objc_destroyWeak(param_1 + _DAT_112739208);
  _objc_destroyWeak(param_1 + _DAT_112739340);
  _objc_destroyWeak(param_1 + _DAT_11273933c);
  _objc_destroyWeak(param_1 + _DAT_112739364);
  _objc_destroyWeak(param_1 + _DAT_1127392d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112739218);
  return;
}



/* Entry: 105eb66dc; end: 105eb6753; -[SCSpotlightPlaybackManagerFactoryImpl initWithCreationBlock:] */

undefined1 * FUN_105eb66dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edaf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105eb6754; end: 105eb677f; -[SCSpotlightPlaybackManagerFactoryImpl createPlaybackManagerWithPageSessionCoordinator:] */

void FUN_105eb6754(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb6780; end: 105eb678b; -[SCSpotlightPlaybackManagerFactoryImpl .cxx_destruct] */

void FUN_105eb6780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105eb678c; end: 105eb7507; -[SCSpotlightEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb678c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  ulong uVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  ulong uVar61;
  undefined *puVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  ulong uVar70;
  undefined8 uVar71;
  undefined *puVar72;
  undefined *puVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lStack_338;
  long lStack_1c8;
  
  puVar1 = PTR_PTR_1126c5800;
  _objc_alloc();
  lVar80 = (long)_DAT_1127393bc;
  lVar79 = param_1 + lVar80;
  _objc_loadWeakRetained(lVar79);
  lVar2 = lVar79;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0a0();
  _objc_release(lVar2);
  _objc_release(lVar79);
  lVar81 = (long)_DAT_1127393c0;
  lVar79 = param_1 + lVar81;
  _objc_loadWeakRetained(lVar79);
  lVar2 = lVar79;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar1);
  _objc_release(lVar75);
  _objc_release(lVar2);
  _objc_release(lVar79);
  puVar3 = PTR_PTR_1126c5808;
  _objc_alloc();
  lVar79 = param_1 + _DAT_1127393c4;
  _objc_loadWeakRetained();
  lVar4 = lVar79;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = (long)_DAT_1127393c8;
  lVar2 = param_1 + lVar75;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + lVar75;
  _objc_loadWeakRetained();
  lVar8 = lVar75;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = (long)_DAT_1127393cc;
  lVar9 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c24baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0ff9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar13 = lVar76;
  func_0x00010c24bc80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127393d0;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf81c80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127393d4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfdf340();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_1127393d8;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_1127393dc;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = (long)_DAT_1127393e0;
  lVar22 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar24 = lVar77;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar81;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf82700();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_1127393e4;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_1127393e8;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_1127393ec;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_1127393f0;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_1127393f4;
  _objc_loadWeakRetained();
  lVar36 = param_1 + _DAT_1127393f8;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_1127393fc;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = (long)_DAT_112739400;
  lVar40 = param_1 + lVar74;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_112739404;
  _objc_loadWeakRetained();
  lVar43 = param_1 + _DAT_112739408;
  _objc_loadWeakRetained();
  lVar44 = param_1 + _DAT_11273940c;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c24b680();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_112739410;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c24b1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar70 = param_1 + _DAT_112739414;
  uVar48 = uVar70;
  _objc_loadWeakRetained();
  func_0x00010c247980();
  uVar49 = uVar70;
  _objc_loadWeakRetained();
  func_0x00010c1070a0();
  uVar50 = uVar70;
  _objc_loadWeakRetained();
  func_0x00010c29d360();
  uVar51 = uVar70;
  _objc_loadWeakRetained();
  uVar52 = uVar51;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_112739458;
  _objc_loadWeakRetained();
  lVar54 = param_1 + _DAT_112739420;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_112739424;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar70;
  _objc_loadWeakRetained();
  func_0x00010bfa4060();
  lVar80 = param_1 + lVar80;
  _objc_loadWeakRetained();
  lVar58 = lVar80;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_112739428;
  _objc_loadWeakRetained();
  lVar60 = lVar59;
  func_0x00010c0dc960();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = (long)_DAT_11273942c;
  uVar61 = param_1 + lVar78;
  _objc_loadWeakRetained();
  puVar62 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar63 = uVar61;
  _objc_opt_isKindOfClass(uVar61,puVar62);
  if ((uVar63 & 1) == 0) {
    lStack_338 = param_1 + lVar78;
    _objc_loadWeakRetained();
    lStack_1c8 = lStack_338;
    func_0x00010c069300();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_1c8 = 0;
  }
  uVar64 = uVar70;
  _objc_loadWeakRetained();
  uVar65 = uVar64;
  func_0x00010c2653a0();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1 + _DAT_112739434;
  _objc_loadWeakRetained();
  lVar66 = lVar78;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_11273945c;
  _objc_loadWeakRetained();
  lVar68 = param_1 + _DAT_11273943c;
  _objc_loadWeakRetained();
  lVar69 = lVar68;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d0a0();
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar78);
  _objc_release(uVar65);
  _objc_release(uVar64);
  if ((uVar63 & 1) == 0) {
    _objc_release(lStack_1c8);
    _objc_release(lStack_338);
  }
  _objc_release(uVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar80);
  _objc_release(uVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar77);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar76);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar75);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar79);
  uVar61 = uVar70;
  _objc_loadWeakRetained();
  uVar51 = uVar61;
  func_0x00010c1070a0();
  if ((uVar51 & 1) == 0) {
    _objc_release(uVar61);
  }
  else {
    uVar51 = uVar70;
    _objc_loadWeakRetained();
    uVar52 = uVar51;
    func_0x00010c247980();
    _objc_release(uVar51);
    _objc_release(uVar61);
    if (uVar52 == 0x16) goto LAB_105eb7150;
  }
  uVar61 = uVar70;
  _objc_loadWeakRetained();
  func_0x00010c29d360();
  _objc_release(uVar61);
LAB_105eb7150:
  func_0x00010c1c8b80(puVar3);
  func_0x00010c1e1260(puVar3);
  uVar61 = uVar70;
  _objc_loadWeakRetained(uVar70);
  uVar51 = uVar61;
  func_0x00010c0ff100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd520(puVar3);
  _objc_release(uVar51);
  _objc_release(uVar61);
  uVar61 = uVar70;
  _objc_loadWeakRetained(uVar70);
  uVar51 = uVar61;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d90c0(puVar3);
  _objc_release(uVar51);
  _objc_release(uVar61);
  uVar61 = uVar70;
  _objc_loadWeakRetained(uVar70);
  uVar51 = uVar61;
  func_0x00010bf16300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206d80(puVar3);
  _objc_release(uVar51);
  _objc_release(uVar61);
  lVar74 = param_1 + lVar74;
  _objc_loadWeakRetained(lVar74);
  lVar79 = lVar74;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  puVar62 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(puVar3);
  func_0x00010bfc8740(puVar62);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065280(lVar79);
  _objc_release(puVar62);
  _objc_release(lVar79);
  _objc_release(lVar74);
  uVar61 = uVar70;
  _objc_loadWeakRetained();
  uVar51 = uVar61;
  func_0x00010c247980();
  _objc_release(uVar61);
  if (uVar51 != 0xffffffffffffffff) {
    uVar61 = uVar70;
    _objc_loadWeakRetained(uVar70);
    func_0x00010c247980();
    func_0x00010c206f20(puVar3);
    _objc_release(uVar61);
  }
  uVar61 = uVar70;
  _objc_loadWeakRetained();
  uVar51 = uVar61;
  func_0x00010c247a00();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar51;
  func_0x00010c08fa60();
  _objc_release(uVar51);
  _objc_release(uVar61);
  if (uVar52 != 0) {
    uVar61 = uVar70;
    _objc_loadWeakRetained(uVar70);
    uVar51 = uVar61;
    func_0x00010c247a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206f80(puVar3);
    _objc_release(uVar51);
    _objc_release(uVar61);
  }
  lVar81 = param_1 + lVar81;
  _objc_loadWeakRetained(lVar81);
  lVar79 = lVar81;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar79;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar79);
  _objc_release(lVar81);
  _objc_loadWeakRetained(uVar70);
  uVar61 = uVar70;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar61);
  _objc_release(uVar70);
  lVar79 = (long)_DAT_112739440;
  _objc_retain(puVar3);
  uVar71 = *(undefined8 *)(param_1 + lVar79);
  *(undefined **)(param_1 + lVar79) = puVar3;
  _objc_release(uVar71);
  puVar72 = PTR_PTR_1126c5810;
  _objc_alloc(PTR_PTR_1126c5810);
  puVar62 = PTR_PTR_1126ae720;
  _objc_retain(puVar3);
  func_0x00010bf11fe0(puVar62);
  _objc_retainAutoreleasedReturnValue();
  puVar73 = PTR_PTR_1126ae720;
  _objc_retain(puVar3);
  func_0x00010bf11fe0(puVar73);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01da60(puVar72);
  _objc_release(puVar73);
  _objc_release(puVar62);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112739460));
  _objc_release(puVar72);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105eb7508; end: 105eb7517;  */

void FUN_105eb7508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfeddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_infoProvider_1125d9140);
  return;
}



/* Entry: 105eb7518; end: 105eb758b; -[SCSpotlightEntryPoint dismissPresentedSpotlightViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7518(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112739414;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e480(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105eb758c; end: 105eb75c7; -[SCSpotlightEntryPoint uiContainerForCreatorsSubmission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb758c(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb75c8; end: 105eb7603; -[SCSpotlightEntryPoint uiContainerForDiscoverSubfeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb75c8(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb7604; end: 105eb7843; -[SCSpotlightEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7604(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112739460,0);
  _objc_storeStrong(param_1 + _DAT_112739438,0);
  _objc_storeStrong(param_1 + _DAT_112739430,0);
  _objc_destroyWeak(param_1 + _DAT_112739420);
  _objc_storeStrong(param_1 + _DAT_11273941c,0);
  _objc_storeStrong(param_1 + _DAT_112739418,0);
  _objc_destroyWeak(param_1 + _DAT_11273945c);
  _objc_destroyWeak(param_1 + _DAT_112739458);
  _objc_destroyWeak(param_1 + _DAT_11273943c);
  _objc_destroyWeak(param_1 + _DAT_1127393ec);
  _objc_destroyWeak(param_1 + _DAT_112739400);
  _objc_destroyWeak(param_1 + _DAT_112739454);
  _objc_destroyWeak(param_1 + _DAT_112739450);
  _objc_destroyWeak(param_1 + _DAT_11273944c);
  _objc_destroyWeak(param_1 + _DAT_11273942c);
  _objc_destroyWeak(param_1 + _DAT_11273940c);
  _objc_destroyWeak(param_1 + _DAT_112739410);
  _objc_destroyWeak(param_1 + _DAT_112739434);
  _objc_destroyWeak(param_1 + _DAT_1127393c8);
  _objc_destroyWeak(param_1 + _DAT_112739428);
  _objc_destroyWeak(param_1 + _DAT_112739448);
  _objc_destroyWeak(param_1 + _DAT_112739408);
  _objc_destroyWeak(param_1 + _DAT_1127393f8);
  _objc_destroyWeak(param_1 + _DAT_1127393f0);
  _objc_destroyWeak(param_1 + _DAT_1127393dc);
  _objc_destroyWeak(param_1 + _DAT_112739404);
  _objc_destroyWeak(param_1 + _DAT_1127393e8);
  _objc_destroyWeak(param_1 + _DAT_1127393e4);
  _objc_destroyWeak(param_1 + _DAT_112739424);
  _objc_destroyWeak(param_1 + _DAT_1127393bc);
  _objc_destroyWeak(param_1 + _DAT_1127393d8);
  _objc_destroyWeak(param_1 + _DAT_1127393d4);
  _objc_destroyWeak(param_1 + _DAT_112739444);
  _objc_destroyWeak(param_1 + _DAT_1127393c4);
  _objc_destroyWeak(param_1 + _DAT_1127393d0);
  _objc_destroyWeak(param_1 + _DAT_1127393c0);
  _objc_destroyWeak(param_1 + _DAT_1127393e0);
  _objc_destroyWeak(param_1 + _DAT_1127393cc);
  _objc_destroyWeak(param_1 + _DAT_112739414);
  _objc_destroyWeak(param_1 + _DAT_1127393f4);
  _objc_destroyWeak(param_1 + _DAT_1127393fc);
  _objc_storeStrong(param_1 + _DAT_112739440,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739464,0);
  return;
}



/* Entry: 105eb7844; end: 105eb784f; +[SCSpotlightPreviewLauncher valdiMarshallableObjectDescriptor] */

void FUN_105eb7844(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f1940;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105eb7850; end: 105eb785b; +[SCSpotlightWidgetDismissListener valdiMarshallableObjectDescriptor] */

void FUN_105eb7850(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108f1970;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105eb785c; end: 105eb7867; +[SCCSpotlightWidget componentPath] */

undefined ** FUN_105eb785c(void)

{
  return &PTR____CFConstantStringClassReference_110e2f558;
}



/* Entry: 105eb7868; end: 105eb789b; -[SCCSpotlightWidget initWithViewModel:componentContext:runtime:] */

void FUN_105eb7868(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126edaf8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105eb789c; end: 105eb78eb; -[SCCSpotlightWidget setViewModel:] */

void FUN_105eb789c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eb78ec; end: 105eb792f; -[SCCSpotlightWidget viewModel] */

void FUN_105eb78ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105eb7930; end: 105eb7943;  */

void FUN_105eb7930(undefined8 *param_1)

{
  undefined8 in_x9;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = in_x9;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105eb7944; end: 105eb7bab; -[SCStoriesSnapReadReceiptCleanupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7944(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar6 = param_1;
  func_0x000100288f58();
  if ((int)puVar6 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf07b60();
    _objc_release(puVar6);
  }
  else {
    if (param_1 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = param_1 + _DAT_11273947c;
      _objc_loadWeakRetained();
    }
    puVar1 = puVar6;
    func_0x00010c252360();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c114e20();
    if ((int)puVar2 != 0) {
      _objc_release(puVar1);
      _objc_release(puVar6);
      goto LAB_105eb7b60;
    }
    puVar3 = param_1;
    FUN_105eb7bac();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf07b60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  if (puVar2 == (undefined *)0x2) {
    _objc_initWeak(auStack_58,param_1);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112739468);
    *(undefined **)(param_1 + _DAT_112739468) = puVar6;
    _objc_release(uVar5);
    param_1 = param_1 + _DAT_112739478;
    _objc_loadWeakRetained(param_1);
    puVar6 = param_1;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c2a6420();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    puVar3 = puVar1;
    func_0x00010c25ff60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    return;
  }
LAB_105eb7b60:
                    /* WARNING: Could not recover jumptable at 0x00010be72990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performSnapReadReceiptCleanup_11257a400);
  return;
}



/* Entry: 105eb7bac; end: 105eb7bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7bac(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112739478);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105eb7bd0; end: 105eb7c03;  */

void FUN_105eb7bd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be72980(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eb7c04; end: 105eb7d7b; -[SCStoriesSnapReadReceiptCleanupEntryPoint _performSnapReadReceiptCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7c04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273946c;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab520();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1c40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112739474;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c07c8c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  if ((int)lVar5 != 0) {
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010007380c();
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 105eb7d7c; end: 105eb7ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7d7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11273946c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bcc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105eb7ea4; end: 105eb7f0f; -[SCStoriesSnapReadReceiptCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eb7ea4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273947c);
  _objc_destroyWeak(param_1 + _DAT_112739478);
  _objc_destroyWeak(param_1 + _DAT_11273946c);
  _objc_destroyWeak(param_1 + _DAT_112739474);
  _objc_destroyWeak(param_1 + _DAT_112739470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739468,0);
  return;
}



/* Entry: 105eb7f10; end: 105eb7f83; -[SCFriendStoryShareMessageReportingPlugin initWithSharedStorySnapManager:] */

undefined1 * FUN_105eb7f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edb00;
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



/* Entry: 105eb7f84; end: 105eb81ab; -[SCFriendStoryShareMessageReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_105eb7f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar3);
  func_0x00010be90d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8620(uVar5);
  _objc_release(param_1);
  _objc_release(uVar5);
  puVar6 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105eb81ac; end: 105eb82f3;  */

void FUN_105eb81ac(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_6 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = PTR_PTR_1126b2b98;
    _objc_opt_new(PTR_PTR_1126b2b98);
    func_0x00010bf43d60(uVar7);
  }
  else {
    puVar6 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar6);
    uVar7 = param_4;
    func_0x00010c258f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c0c6f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c258f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c258f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6bac0(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105eb82f4; end: 105eb8323; -[SCFriendStoryShareMessageReportingPlugin identifier] */

void FUN_105eb82f4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e5fa98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e5fa98);
  return;
}



/* Entry: 105eb8324; end: 105eb832b; -[SCFriendStoryShareMessageReportingPlugin isReportableForMessage:] */

undefined8 FUN_105eb8324(void)

{
  return 1;
}



/* Entry: 105eb832c; end: 105eb842f; -[SCFriendStoryShareMessageReportingPlugin _requestContextsWithConversationId:] */

void FUN_105eb832c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126b19f8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b19f8;
  puStack_48 = puVar1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar9 = &puStack_48;
  lVar10 = 2;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(lVar10);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar5 = ppuVar9;
  func_0x00010c08fa60();
  if (((ppuVar5 == (undefined **)0x0) || (lVar6 = lVar10, func_0x00010c08fa60(), lVar6 == 0)) ||
     (lVar6 = param_5, func_0x00010c08fa60(), lVar6 == 0)) {
    puVar3 = PTR_PTR_1126b2b98;
    _objc_opt_new(PTR_PTR_1126b2b98);
    func_0x00010bf43d60(param_7,param_2,puVar3);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    if ((puVar3 == (undefined *)0x0) || (puVar1 == (undefined *)0x0)) {
      puVar2 = PTR_PTR_1126b2b98;
      _objc_opt_new(PTR_PTR_1126b2b98);
      func_0x00010bf43d60(param_7,param_2,puVar2);
    }
    else {
      puVar2 = PTR_PTR_1126b2bf8;
      _objc_opt_new(PTR_PTR_1126b2bf8);
      func_0x00010c1b6b40();
      func_0x00010c1b64a0(puVar2,param_2,puVar1);
      func_0x00010c182aa0(puVar2,param_2,ppuVar9);
      puVar4 = PTR_PTR_1126b2c00;
      _objc_alloc();
      func_0x00010c047ac0();
      puVar7 = PTR_PTR_1126c5818;
      _objc_alloc(PTR_PTR_1126c5818);
      func_0x00010c002b20();
      puVar8 = PTR_PTR_1126b2b98;
      _objc_opt_new(PTR_PTR_1126b2b98);
      func_0x00010c20da00();
      func_0x00010bf43d60(param_7,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 105eb8430; end: 105eb862b; -[SCFriendStoryShareMessageReportingPlugin _onStoryFetchedWithMediaUrl:mediaKey:mediaIv:snapId:promise:] */

void FUN_105eb8430(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) ||
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar6 = PTR_PTR_1126b2b98;
    _objc_opt_new(PTR_PTR_1126b2b98);
    func_0x00010bf43d60(param_7,param_2,puVar6);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    if ((puVar6 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) {
      puVar7 = PTR_PTR_1126b2b98;
      _objc_opt_new(PTR_PTR_1126b2b98);
      func_0x00010bf43d60(param_7,param_2,puVar7);
    }
    else {
      puVar7 = PTR_PTR_1126b2bf8;
      _objc_opt_new(PTR_PTR_1126b2bf8);
      func_0x00010c1b6b40();
      func_0x00010c1b64a0(puVar7,param_2,puVar2);
      func_0x00010c182aa0(puVar7,param_2,param_3);
      puVar3 = PTR_PTR_1126b2c00;
      _objc_alloc();
      func_0x00010c047ac0();
      puVar4 = PTR_PTR_1126c5818;
      _objc_alloc(PTR_PTR_1126c5818);
      func_0x00010c002b20();
      puVar5 = PTR_PTR_1126b2b98;
      _objc_opt_new(PTR_PTR_1126b2b98);
      func_0x00010c20da00();
      func_0x00010bf43d60(param_7,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


