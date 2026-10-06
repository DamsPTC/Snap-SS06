/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079dcdac; end: 1079dceb7; -[SCDiscoverFeedFriendStoriesSectionDataProvider _fetchStoriesDataAndPerformViewModelUpdateFromPullToRefresh:] */

void FUN_1079dcdac(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  *(char *)(param_1 + 0x69) = (char)param_3;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286ee0();
    _objc_release(uVar2);
  }
  *(undefined8 *)(param_1 + 0x60) = 1;
  uVar1 = *(undefined1 *)(param_1 + 0x68);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar1;
  func_0x00010bfa9a40(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1079dceb8; end: 1079dcf83;  */

void FUN_1079dceb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1079dcf84;
  puStack_50 = &UNK_1108488f8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = *(undefined1 *)(param_1 + 0x28);
  uStack_48 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1079dcf84; end: 1079dcfbb;  */

void FUN_1079dcf84(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dcfbc; end: 1079dd0e7; -[SCDiscoverFeedFriendStoriesSectionDataProvider _rankAndUpdateViewModelsWithQueriedStories:showMutedStories:] */

void FUN_1079dcfbc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010bfaa7c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1079dd0e8; end: 1079dd157;  */

void FUN_1079dd0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85c40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dd158; end: 1079dd52b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _rankAndUpdateViewModelsWithQueriedStories:viewedStoryWhitelist:lastExpandedUnwatchedStoryId:showMutedStories:] */

undefined *
FUN_1079dd158(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_208 [8];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf52a60();
  puVar6 = param_3;
  if (puVar1 != (undefined *)0x0) {
    lVar7 = 0;
    lVar5 = *plStack_1a0;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        if (*(long *)(lStack_1a8 + (long)puVar6 * 8) == 0) {
          lVar7 = lVar7 + 1;
        }
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar6);
      puVar1 = param_3;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
    _objc_release(param_3);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar7 == 0) goto LAB_1079dd3a8;
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010bf529e0();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132d60(uVar4);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar7 = *plStack_1e0;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          if (*(long *)(lStack_1e8 + (long)puVar8 * 8) != 0) {
            func_0x00010befa120(puVar6);
          }
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar1 = param_3;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar1 = puVar6;
    func_0x00010bf51e00();
    _objc_release(param_3);
    param_3 = puVar1;
  }
  _objc_release(puVar6);
LAB_1079dd3a8:
  _objc_retain(param_3);
  puVar6 = param_3;
  if ((param_6 & 1) == 0) {
    func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1109f3f50);
    _objc_release(param_3);
  }
  puVar1 = puVar6;
  func_0x00010bf529e0();
  puVar8 = param_3;
  func_0x00010bf529e0();
  puVar2 = puVar6;
  FUN_1079d7134(puVar6,param_4,param_5,*(undefined8 *)(param_1 + 0xf0));
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_1f8,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  puVar3 = auStack_1f8;
  _objc_copyWeak(auStack_208,puVar3);
  _objc_retain(puVar2);
  _objc_retain(param_4);
  uStack_200 = puVar1 < puVar8;
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_208);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(auStack_1f8);
    __Unwind_Resume(param_3);
    func_0x00010c07fc80(puVar3);
    return (undefined *)(ulong)((uint)puVar3 ^ 1);
  }
  return param_3;
}



/* Entry: 1079dd52c; end: 1079dd547;  */

uint FUN_1079dd52c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07fc80(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1079dd548; end: 1079dd57f;  */

void FUN_1079dd548(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dd580; end: 1079dd817; -[SCDiscoverFeedFriendStoriesSectionDataProvider _updateViewModelsWithFriendStories:pseudoUnviewedStoryIdSet:hasHiddenMutedStories:] */

void FUN_1079dd580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bfc22a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1079dd818;
  uStack_70 = 0x1079dd828;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf00ae0();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = uVar4;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138100();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1109f3f70);
  _objc_initWeak(auStack_98,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_98);
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  uStack_a0 = param_5;
  func_0x00010bfaa4c0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079dd818; end: 1079dd82f;  */

void FUN_1079dd818(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079dd830; end: 1079dd877;  */

void FUN_1079dd830(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2444e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079dd878; end: 1079dd8e7;  */

void FUN_1079dd878(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcdce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dd8e8; end: 1079ddd8b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _applyChangeWithFriendStories:friendStoriesToDiplay:justViewedStories:sectionViewModel:newViewModels:hasHiddenMutedStories:snapchatterByUserId:] */

void FUN_1079dd8e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,int param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  uVar3 = 0;
  uVar10 = 0x3f800000;
  if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1270;
    func_0x00010bf715e0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar1);
    uVar10 = param_1;
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b1270;
      func_0x00010bf71640(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c20(uVar3);
      _objc_release(puVar2);
      _objc_release(uVar3);
      uVar3 = uVar10;
    }
    uVar10 = param_1;
    if ((float)param_1 == 0.0) {
      uVar10 = *(undefined8 *)(param_2 + 0xf8);
      puVar2 = PTR_PTR_1126b3e98;
      func_0x00010bf60460(PTR_PTR_1126b3e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132d60(uVar10);
      _objc_release(puVar2);
      uVar10 = 0x3f800000;
    }
  }
  if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1270;
    func_0x00010bf71600(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf1f320(uVar4);
    uVar12 = (uint)uVar1;
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  else {
    uVar12 = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf71660(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf1f320(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar4);
  lVar5 = param_2;
  func_0x00010bec4740(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    if ((*(byte *)(param_2 + 0x6a) & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x58);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28c020();
      _objc_release(uVar4);
    }
    lVar8 = param_2;
    func_0x00010bdf5a00(uVar10,uVar3,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(param_8);
    _objc_release(lVar8);
  }
  if (param_9 != 0) {
    uVar6 = (ulong)((uint)uVar1 & uVar12);
    FUN_1079d8e80(uVar10,uVar3,uVar6);
    func_0x000108f57f7c();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_1079d8b88(uVar10,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  lVar8 = param_8;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_2 + 0x10);
    func_0x00010bf529e0();
    if (lVar8 != 0) goto LAB_1079ddc18;
    FUN_1079d6ac8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1079ddc18:
    lVar8 = 0;
  }
  lVar11 = *(long *)(param_2 + 8);
  _objc_retain(lVar11);
  _objc_retain(param_8);
  if (param_8 == 0 && lVar11 == 0) {
LAB_1079ddc38:
    lVar11 = *(long *)(param_2 + 0x40);
    _objc_retain(lVar11);
    _objc_retain(lVar8);
    if (lVar11 == lVar8) {
      _objc_release(lVar8);
      _objc_release(lVar11);
    }
    else {
      if (lVar8 == 0) goto LAB_1079ddcb8;
      lVar9 = lVar11;
      func_0x00010c071ae0();
      _objc_release(lVar8);
      _objc_release(lVar11);
      if ((int)lVar9 == 0) goto LAB_1079ddcdc;
    }
    if ((*(byte *)(param_2 + 0x69) & 1) == 0) goto LAB_1079ddd14;
  }
  else if ((param_8 == 0) || (lVar11 == 0)) {
    _objc_release(param_8);
LAB_1079ddcb8:
    _objc_release(lVar11);
  }
  else {
    lVar9 = lVar11;
    func_0x00010c071b60();
    _objc_release(param_8);
    _objc_release(lVar11);
    if ((int)lVar9 != 0) goto LAB_1079ddc38;
  }
LAB_1079ddcdc:
  lVar11 = param_8;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(long *)(param_2 + 8) = lVar11;
  _objc_release(uVar10);
  _objc_retain(lVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  *(long *)(param_2 + 0x40) = lVar8;
  _objc_release(uVar10);
  func_0x00010bee9840(param_2);
LAB_1079ddd14:
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1079ddd8c; end: 1079de1fb; -[SCDiscoverFeedFriendStoriesSectionDataProvider _createViewModelsWithFriendStories:fullPlayList:justViewedStories:snapchatterByUserId:cellSizeMultiplier:labelHeightReduction:mainTitleOneLine:layoutConfig:] */

void FUN_1079ddd8c(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined1 uStack_158;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  uVar11 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puVar1 = param_5;
  func_0x00010bf529e0();
  puVar10 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_3 + 0xa0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1270;
    func_0x00010bf715a0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c067e20();
    _objc_release(puVar1);
    _objc_release(uVar4);
    if ((*(byte *)(param_3 + 0x100) & 1) == 0) {
      uVar5 = *(undefined8 *)(param_3 + 0xa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b1270;
      func_0x00010bf71600(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf1f320();
      uStack_158 = (undefined1)uVar4;
      _objc_release(puVar1);
      _objc_release(uVar5);
    }
    else {
      uStack_158 = 0;
    }
    uVar5 = *(undefined8 *)(param_3 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1270;
    func_0x00010bf71700(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf1f320();
    _objc_release(puVar1);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_3 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1270;
    func_0x00010bf71720(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c067e20();
    _objc_release(puVar1);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_3 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1270;
    func_0x00010bf715c0(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf1f320();
    _objc_release(puVar1);
    _objc_release(uVar7);
    lVar8 = *(long *)(param_3 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar8 != 0) {
      _objc_initWeak(auStack_90,param_3);
      puStack_b8 = puVar1;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1079de1fc;
      puStack_a0 = &UNK_110849200;
      _objc_copyWeak(auStack_98,auStack_90);
      func_0x00010c13a600(lVar8);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puVar9 = PTR_PTR_1126d5bb0;
    func_0x00010bf4f680();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1079de23c;
    puStack_120 = &UNK_1109f3fc0;
    uStack_118 = uVar3;
    _objc_retain(param_7);
    uStack_110 = param_7;
    lStack_108 = lVar8;
    puStack_100 = puVar9;
    _objc_retain(param_8);
    uStack_c4 = uStack_158;
    uStack_c3 = (undefined1)uVar4;
    uStack_f8 = param_8;
    lStack_f0 = param_3;
    uStack_e0 = uVar2;
    uStack_d8 = uVar5;
    uStack_d0 = uVar11;
    uStack_cc = param_1;
    uStack_c8 = param_2;
    uStack_c2 = lVar8 != 0;
    uStack_c1 = param_9;
    _objc_retain(param_10);
    uStack_c0 = (undefined1)uVar6;
    uStack_e8 = param_10;
    _objc_retain(puVar9);
    _objc_retain(lVar8);
    puVar10 = param_5;
    func_0x00010bd86420(param_5,&puStack_138);
    _objc_release(uStack_e8);
    _objc_release(uStack_f8);
    _objc_release(puStack_100);
    _objc_release(lStack_108);
    _objc_release(uStack_110);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1079de1fc; end: 1079de23b;  */

void FUN_1079de1fc(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be14720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079de23c; end: 1079de357;  */

void FUN_1079de23c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beee780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0fd5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf33460();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_2;
  FUN_1079d7fbc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                *(undefined4 *)(param_1 + 0x70),param_2,*(undefined8 *)(param_1 + 0x38),param_3,
                uVar1,*(undefined8 *)(param_1 + 0x40),0,0,
                *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x100),*(undefined8 *)(param_1 + 0x58),
                *(undefined2 *)(param_1 + 0x74));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1079de358; end: 1079de3db; -[SCDiscoverFeedFriendStoriesSectionDataProvider _viewModelDidUpdateAndNotify:] */

void FUN_1079de358(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x60) = 2;
  lVar1 = param_1 + 0x110;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
  _objc_release(lVar1);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf51e00(uVar2);
    func_0x00010be777a0(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdf7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dataProviderEventDidUpdate_11255b930);
    return;
  }
  return;
}



/* Entry: 1079de3dc; end: 1079de557; -[SCDiscoverFeedFriendStoriesSectionDataProvider _dataProviderEventDidUpdate] */

void FUN_1079de3dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  func_0x00010c0b0d80(uVar6,param_2,lVar5 != 0,uVar1);
  if (*(long *)(param_1 + 0x40) == 0) {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010bf51e00();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = *(long *)(param_1 + 0x40);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1d0640(puVar3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f8a6f8);
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f8a718);
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f8a6d8,param_1,puVar3)
  ;
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar2 + 0x18);
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar4 = PTR_PTR_1126d5ba0;
    _objc_opt_new(PTR_PTR_1126d5ba0);
    func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110f8a6f8);
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)(puVar2 + 0x18);
    func_0x00010bf51e00(uVar1);
    func_0x00010c1d0640(puVar3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f8a718);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(puVar2 + 0x38);
    _objc_opt_class(puVar2);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f8a6d8,puVar2,puVar3
                       );
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1079de558; end: 1079de64b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _myStoriesDataProviderEventDidUpdate] */

void FUN_1079de558(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar3 = PTR_PTR_1126d5ba0;
    _objc_opt_new(PTR_PTR_1126d5ba0);
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f8a6f8);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf51e00(uVar4);
    func_0x00010c1d0640(puVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110f8a718);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f8a6d8,param_1,
                        puVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1079de64c; end: 1079de84b; -[SCDiscoverFeedFriendStoriesSectionDataProvider _configureStoryCardCollectionViewCell:] */

void FUN_1079de64c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c21b0;
  _objc_opt_class(PTR_PTR_1126c21b0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d5be0;
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
  func_0x00010c171460(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d5be0;
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
  func_0x00010c20c920(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4ff0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c1aa2c0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4ff0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c20c5a0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_DAT_1126a4ff8;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c171460(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079de84c; end: 1079debf7; -[SCDiscoverFeedFriendStoriesSectionDataProvider _prefetchThumbnailsIfNeededForViewModels:] */

void FUN_1079de84c(undefined8 param_1,long param_2,undefined **param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf48f60();
  _objc_release(lVar2);
  if (lVar3 == 4) {
LAB_1079de8d4:
    uVar4 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bfb8e80();
    iVar1 = (int)uVar16;
  }
  else {
    if (lVar3 != 2) {
      if (lVar3 != 1) {
        uVar13 = 0;
        goto LAB_1079de924;
      }
      goto LAB_1079de8d4;
    }
    uVar4 = *(undefined8 *)(param_2 + 0xe8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bfb8e60();
    iVar1 = (int)uVar16;
  }
  uVar13 = (ulong)iVar1;
  _objc_release(uVar4);
LAB_1079de924:
  uVar14 = param_4;
  func_0x00010bf529e0();
  if (uVar14 <= uVar13) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    uVar14 = 0;
    uVar16 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      uVar5 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      FUN_1079d8cd8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar8 = puVar7;
      func_0x00010bf529e0();
      puVar9 = puVar7;
      if ((undefined *)0x1e < puVar8) {
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
      puVar8 = puVar9;
      param_3 = &PTR___NSConcreteGlobalBlock_1109f4010;
      func_0x000100504554(puVar9,&PTR___NSConcreteGlobalBlock_1109f4010);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(uVar5);
      if (uVar6 != 0) {
        uVar5 = uVar6;
        func_0x000107dd5184();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c08fa60();
        if (uVar10 != 0) {
          uVar10 = uVar6;
          func_0x000107dd4c00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126aebf0;
          _objc_alloc(PTR_PTR_1126aebf0);
          lVar3 = param_2;
          _objc_opt_class(param_2);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c011b80(puVar7);
          _objc_release(lVar3);
          puVar9 = PTR_PTR_1126b85a8;
          _objc_alloc(PTR_PTR_1126b85a8);
          puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c01cf00(param_1,uVar16,uVar4,puVar9);
          _objc_release(puVar11);
          uVar15 = *(undefined8 *)(param_2 + 0x90);
          _objc_retain(uVar6);
          func_0x00010bfa7900(uVar15);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(puVar9);
          _objc_release(puVar7);
          _objc_release(uVar10);
        }
        _objc_release(uVar5);
      }
      _objc_release(puVar8);
      _objc_release(uVar6);
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(uVar4);
  uVar16 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(uVar16);
  func_0x00010c0c0800(param_3);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1079debf8; end: 1079decb3;  */

void FUN_1079debf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079decb4; end: 1079decbb;  */

void FUN_1079decb4(void)

{
  return;
}



/* Entry: 1079decbc; end: 1079decd3; -[SCDiscoverFeedFriendStoriesSectionDataProvider dataProviderDelegate] */

void FUN_1079decbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079decd4; end: 1079decdf; -[SCDiscoverFeedFriendStoriesSectionDataProvider setDataProviderDelegate:] */

void FUN_1079decd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x110,param_3);
  return;
}



/* Entry: 1079dece0; end: 1079dece7; -[SCDiscoverFeedFriendStoriesSectionDataProvider sectionDataModel] */

undefined8 FUN_1079dece0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1079dece8; end: 1079decef; -[SCDiscoverFeedFriendStoriesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1079dece8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 1079decf0; end: 1079ded1f; -[SCDiscoverFeedFriendStoriesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1079decf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079ded20; end: 1079deeb3; -[SCDiscoverFeedFriendStoriesSectionDataProvider .cxx_destruct] */

void FUN_1079ded20(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
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
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1079deeb4; end: 1079df13f;  */

void FUN_1079deeb4(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bf34020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0720c0();
  ppuVar5 = param_2;
  if ((int)ppuVar2 == 0) {
    ppuVar2 = ppuVar1;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      ppuVar5 = ppuVar1;
      func_0x00010c0720c0();
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea8df8;
      if ((int)ppuVar5 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      goto LAB_1079df0e4;
    }
    func_0x00010bf4ddc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c21b8;
    _objc_opt_class(PTR_PTR_1126c21b8);
    ppuVar2 = ppuVar5;
    _objc_opt_isKindOfClass(ppuVar5,puVar3);
    ppuVar7 = ppuVar5;
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    _objc_retain(ppuVar7);
    _objc_release(ppuVar5);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar7 != (undefined **)0x0) {
      func_0x00010bf6e5e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar5;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      goto LAB_1079df0d8;
    }
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf4ddc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c22c0;
    _objc_opt_class(PTR_PTR_1126c22c0);
    ppuVar2 = ppuVar5;
    _objc_opt_isKindOfClass(ppuVar5,puVar3);
    ppuVar7 = ppuVar5;
    if (((ulong)ppuVar2 & 1) == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    _objc_retain(ppuVar7);
    _objc_release(ppuVar5);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db8b78;
    }
    else {
      func_0x00010bf85960();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar5;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar6 = ppuVar7;
    func_0x00010c25a160(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0741a0();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar6);
    if (ppuVar7 != (undefined **)0x0) {
      _objc_release(ppuVar4);
LAB_1079df0d8:
      _objc_release(ppuVar5);
    }
  }
  _objc_release(ppuVar7);
LAB_1079df0e4:
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1079df140; end: 1079df1b7; -[SCDiscoverFeedFriendsSectionContentDataModel initWithSectionTitle:] */

undefined1 * FUN_1079df140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f92a0;
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



/* Entry: 1079df1b8; end: 1079df1db; -[SCDiscoverFeedFriendsSectionContentDataModel copyWithZone:] */

undefined8 FUN_1079df1b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079df1dc; end: 1079df1e3; -[SCDiscoverFeedFriendsSectionContentDataModel hash] */

void FUN_1079df1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1079df1e4; end: 1079df273; -[SCDiscoverFeedFriendsSectionContentDataModel isEqual:] */

long FUN_1079df1e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079df258;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1079df258;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1079df258;
    }
  }
  lVar3 = 1;
LAB_1079df258:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079df274; end: 1079df27b; -[SCDiscoverFeedFriendsSectionContentDataModel sectionTitle] */

undefined8 FUN_1079df274(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079df27c; end: 1079df287; -[SCDiscoverFeedFriendsSectionContentDataModel .cxx_destruct] */

void FUN_1079df27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079df288; end: 1079df2ab; -[SCDiscoverFeedFriendsMyStoriesSectionContentDataModel copyWithZone:] */

undefined8 FUN_1079df288(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079df2ac; end: 1079df31b; -[SCDiscoverFeedFriendsMyStoriesSectionContentDataModel isEqual:] */

uint FUN_1079df2ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 1079df31c; end: 1079df33f; -[SCStoriesCarouselSectionContentDataModel copyWithZone:] */

undefined8 FUN_1079df31c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079df340; end: 1079df3af; -[SCStoriesCarouselSectionContentDataModel isEqual:] */

uint FUN_1079df340(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 1079df3b0; end: 1079df423; -[SCFriendingInlineSuggestionsDataServices initWithFriendingSuggestionsDataCoordinator:] */

undefined1 * FUN_1079df3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f92a8;
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



/* Entry: 1079df424; end: 1079df42b; -[SCFriendingInlineSuggestionsDataServices friendSuggestionsDataCoordinator] */

undefined8 FUN_1079df424(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079df42c; end: 1079df437; -[SCFriendingInlineSuggestionsDataServices .cxx_destruct] */

void FUN_1079df42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079df438; end: 1079df4bf; -[SCFriendingInlineSuggestionsDataModel initWithSuggestedSnapchatter:isFriendRequestProcessing:] */

undefined1 *
FUN_1079df438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f92b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079df4c0; end: 1079df4e3; -[SCFriendingInlineSuggestionsDataModel copyWithZone:] */

undefined8 FUN_1079df4c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079df4e4; end: 1079df54f; -[SCFriendingInlineSuggestionsDataModel hash] */

undefined8 * FUN_1079df4e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079df5d4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1079df5d4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1079df5d4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1079df5d4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1079df550; end: 1079df5ef; -[SCFriendingInlineSuggestionsDataModel isEqual:] */

long FUN_1079df550(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079df5d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1079df5d4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1079df5d4;
    }
  }
  lVar3 = 1;
LAB_1079df5d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079df5f0; end: 1079df5f7; -[SCFriendingInlineSuggestionsDataModel suggestedSnapchatter] */

undefined8 FUN_1079df5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079df5f8; end: 1079df5ff; -[SCFriendingInlineSuggestionsDataModel isFriendRequestProcessing] */

undefined1 FUN_1079df5f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079df600; end: 1079df60b; -[SCFriendingInlineSuggestionsDataModel .cxx_destruct] */

void FUN_1079df600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079df60c; end: 1079df79b; -[SCNotificationOptInDataProvider initWithCreatorSettingFetcher:creatorSettingsDataTracker:] */

undefined1 *
FUN_1079df60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f92b8;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079df79c; end: 1079df7a7; +[SCNotificationOptInDataProvider announcerIdentifier] */

undefined ** FUN_1079df79c(void)

{
  return &PTR____CFConstantStringClassReference_110ea8e38;
}



/* Entry: 1079df7a8; end: 1079df7af; -[SCNotificationOptInDataProvider addListener:] */

void FUN_1079df7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079df7b0; end: 1079df7b7; -[SCNotificationOptInDataProvider removeListener:] */

void FUN_1079df7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079df7b8; end: 1079df897; -[SCNotificationOptInDataProvider isFriendNotificationOptedInWithUserId:] */

undefined1 FUN_1079df7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1079df898; end: 1079df8cb;  */

void FUN_1079df898(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf4b900(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 1079df8cc; end: 1079df95b; -[SCNotificationOptInDataProvider initOptInUserIdSetIfNecessaryWithCompletion:] */

void FUN_1079df8cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1079df95c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079df95c; end: 1079dfa87;  */

void FUN_1079df95c(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x30) != '\x01') {
    FUN_107b085b8(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38),1);
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
    dVar4 = param_1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1109f4030);
    func_0x00010befa160(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
    *(undefined1 *)(*(long *)(param_2 + 0x20) + 0x30) = 1;
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    _CACurrentMediaTime();
    if (lVar3 != 0) {
      FUN_107b087a4(lVar3,(long)((dVar4 - param_1) * 1000.0));
    }
    if (*(long *)(param_2 + 0x28) != 0) {
      (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
    }
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001079df9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1079dfa88; end: 1079dfa8f;  */

void FUN_1079dfa88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1079dfa90; end: 1079dfc0b; -[SCNotificationOptInDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1079dfa90(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar5);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b4030;
    func_0x00010bf5b2c0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b4030;
    func_0x00010bf5b2e0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if (((uVar3 & 1) != 0) || ((int)uVar4 != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1079dfc0c;
      puStack_68 = &UNK_110841f80;
      _objc_retain(param_5);
      uStack_60 = param_5;
      lStack_58 = param_1;
      func_0x00010c0f7fc0(uVar5,param_2,&puStack_80);
      _objc_release(uStack_60);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1079dfc0c; end: 1079dfde3;  */

void FUN_1079dfc0c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(ulong *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b4038;
  func_0x00010bf5b6e0(PTR_PTR_1126b4038);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b4040;
  _objc_opt_class(PTR_PTR_1126b4040);
  uVar2 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar1);
  uVar4 = uVar7;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar7);
  uVar2 = uVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = uVar4;
    func_0x00010c079480();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    uVar7 = uVar4;
    func_0x00010bfe5ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      func_0x00010c12d360(uVar8);
    }
    else {
      func_0x00010befa120();
    }
    _objc_release(uVar7);
    uVar2 = uVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c079480(uVar4);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar5 = puVar3;
    func_0x00010bdcc240(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(uVar4 + 0x18);
  _objc_retain(puVar5);
  _objc_opt_class(uVar4);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1079dfde4; end: 1079dfe5b; -[SCNotificationOptInDataProvider _announceOptInDoorbellClickEventWithData:] */

void FUN_1079dfde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ea8e58,param_1,param_3
                     );
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079dfe5c; end: 1079dfebb; -[SCNotificationOptInDataProvider .cxx_destruct] */

void FUN_1079dfe5c(long param_1)

{
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



/* Entry: 1079dfebc; end: 1079e00ab; -[SCMyStoriesPlaybackDataProvider initWithCachedReadReceiptViewStateProvider:docObjectContext:myStoriesStore:currentUserId:snapProProfileIdProvider:circumstanceEngine:storiesConfigProvider:] */

undefined8 *
FUN_1079dfebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f92c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_release(param_8);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079e00ac; end: 1079e00db;  */

void FUN_1079e00ac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001005929c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1079e00dc; end: 1079e02e7; -[SCMyStoriesPlaybackDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1079e00dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar13 = auStack_f0;
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      lVar1 = param_1;
      func_0x00010c293c40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar2 = param_1;
        func_0x00010bf62620();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar15);
          _objc_release(lVar3);
        }
      }
      else {
        lVar2 = lVar1;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar14 = lVar14 + 1;
    } while (lVar5 != lVar14);
    puVar13 = auStack_f0;
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar15;
  func_0x00010bf51e00();
  (**(code **)(param_4 + 0x10))(param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar15);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  lVar5 = *(long *)(param_3 + 0x18);
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b1270;
    func_0x00010c117140(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1f360();
    _objc_release(puVar15);
    _objc_release(uVar6);
    lVar8 = lVar5;
    if ((int)uVar7 != 0) {
      func_0x000107d178f0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    uVar9 = *(ulong *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c07f540();
    _objc_release(uVar10);
    _objc_release(uVar9);
    uVar12 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c07f360();
    _objc_release(uVar7);
    _objc_release(uVar12);
    lVar5 = lVar8;
    if (((uVar11 & 1) != 0) || ((int)uVar6 != 0)) {
      func_0x000107d179cc(lVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
    }
    lVar8 = lVar5;
    func_0x00010c25b340(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar8;
    func_0x000107a87a14();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar15 = PTR_PTR_1126cc618;
    _objc_alloc(PTR_PTR_1126cc618);
    uVar6 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf00760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar14;
    FUN_107a86ee8(lVar14,uVar7,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05b080(puVar15);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar14);
    _objc_release(lVar5);
  }
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1079e02e8; end: 1079e054f; -[SCMyStoriesPlaybackDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

void FUN_1079e02e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b1270;
    func_0x00010c117140(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f360();
    _objc_release(puVar10);
    _objc_release(uVar2);
    lVar4 = lVar1;
    if ((int)uVar3 != 0) {
      func_0x000107d178f0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    uVar5 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c07f540();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07f360();
    _objc_release(uVar3);
    _objc_release(uVar8);
    lVar1 = lVar4;
    if (((uVar7 & 1) != 0) || ((int)uVar2 != 0)) {
      func_0x000107d179cc(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    lVar4 = lVar1;
    func_0x00010c25b340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    func_0x000107a87a14();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar10 = PTR_PTR_1126cc618;
    _objc_alloc(PTR_PTR_1126cc618);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf00760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    FUN_107a86ee8(lVar9,uVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05b080(puVar10);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar9);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1079e0550; end: 1079e074b; -[SCMyStoriesPlaybackDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

void FUN_1079e0550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfa94a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_1079e0718:
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07f540();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c07f360();
    _objc_release(uVar6);
    _objc_release(uVar5);
    lVar7 = lVar1;
    if (((uVar4 & 1) != 0) || ((int)uVar9 != 0)) {
      func_0x000107d179cc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar7 == 0) goto LAB_1079e0718;
    }
    lVar1 = lVar7;
    func_0x00010c25b340(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x000107a87a14();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar10 = PTR_PTR_1126d5bf0;
    _objc_alloc(PTR_PTR_1126d5bf0);
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf00760();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    FUN_107a86ee8(lVar8,uVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007fe0(puVar10);
    _objc_release(lVar1);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1079e074c; end: 1079e08b3; -[SCMyStoriesPlaybackDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

void FUN_1079e074c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfa94c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf00760();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f3c0();
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_107a87760(lVar2,param_4,uVar4,uVar9,uVar6,uVar10,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1079e08b4; end: 1079e08bb; -[SCMyStoriesPlaybackDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_1079e08b4(void)

{
  return 0;
}



/* Entry: 1079e08bc; end: 1079e08c3; -[SCMyStoriesPlaybackDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e08bc(void)

{
  return 0;
}



/* Entry: 1079e08c4; end: 1079e08cb; -[SCMyStoriesPlaybackDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e08c4(void)

{
  return 0;
}



/* Entry: 1079e08cc; end: 1079e08d3; -[SCMyStoriesPlaybackDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e08cc(void)

{
  return 0;
}



/* Entry: 1079e08d4; end: 1079e08d7; -[SCMyStoriesPlaybackDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_1079e08d4(void)

{
  return;
}



/* Entry: 1079e08d8; end: 1079e0a0f; -[SCMyStoriesPlaybackDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

void FUN_1079e08d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa94a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107d17800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107a87a14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126d5bf8;
  _objc_alloc(PTR_PTR_1126d5bf8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf00760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  FUN_107a86ee8(uVar4,uVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d8c0(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079e0a10; end: 1079e0a87; -[SCMyStoriesPlaybackDataProvider .cxx_destruct] */

void FUN_1079e0a10(long param_1)

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



/* Entry: 1079e0a88; end: 1079e0f33; -[SCRemoteStoriesDataProvider initWithStoriesDataCoordinator:friendStoriesPlaybackDataProvider:mixerNetworkRequester:snapReadReceiptCoordinator:grapheneMetricsEmitter:circumstanceEngine:adConfigProvider:networkConnectivityMonitor:locationProvider:storiesConfigProvider:docObjectContext:adRenderDataParser:discoverFeedDataMutator:discoverFeedDataFetcher:contentObjectResolver:] */

undefined8 *
FUN_1079e0a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f92c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_14);
    _objc_retain(param_15);
    _objc_retain(param_16);
    _objc_retain(param_17);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar4 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d5c08;
    _objc_alloc();
    func_0x00010c034d00(0);
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar4);
    _objc_release(param_17);
    _objc_release(param_16);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_8);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_5);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 1079e0f34; end: 1079e0f83;  */

void FUN_1079e0f34(void)

{
  _objc_alloc(PTR_PTR_1126d5c00);
  func_0x00010c02c380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079e0f84; end: 1079e0f8b; -[SCRemoteStoriesDataProvider addDataUpdateListener:] */

void FUN_1079e0f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079e0f8c; end: 1079e0f93; -[SCRemoteStoriesDataProvider removeDataUpdateListener:] */

void FUN_1079e0f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079e0f94; end: 1079e0f97; -[SCRemoteStoriesDataProvider handleDataRequest:] */

void FUN_1079e0f94(void)

{
  return;
}



/* Entry: 1079e0f98; end: 1079e0fa3; +[SCRemoteStoriesDataProvider dataCoordinatorIdentifier] */

undefined ** FUN_1079e0f98(void)

{
  return &PTR____CFConstantStringClassReference_110ea8ed8;
}



/* Entry: 1079e0fa4; end: 1079e1027; -[SCRemoteStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

void FUN_1079e0fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf62620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e1028; end: 1079e11bb; -[SCRemoteStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

void FUN_1079e1028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1079e11bc;
  uStack_50 = 0x1079e11cc;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c293c40();
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = uVar4;
  _objc_release(uVar1);
  lVar2 = puStack_68[5];
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar4);
    uVar4 = puStack_68[5];
    _objc_retain(uVar4);
    _objc_release(param_3);
  }
  else {
    uVar4 = puStack_68[5];
    _objc_retain(uVar4);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079e11bc; end: 1079e11d3;  */

void FUN_1079e11bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1079e11d4; end: 1079e122f;  */

void FUN_1079e11d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e1230; end: 1079e1237; -[SCRemoteStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_1079e1230(void)

{
  return 0;
}



/* Entry: 1079e1238; end: 1079e123f; -[SCRemoteStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_1079e1238(void)

{
  return 0;
}



/* Entry: 1079e1240; end: 1079e1343; -[SCRemoteStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

void FUN_1079e1240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1079e11bc;
  uStack_40 = 0x1079e11cc;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e1344; end: 1079e139f;  */

void FUN_1079e1344(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0a9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079e13a0; end: 1079e13a7; -[SCRemoteStoriesDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e13a0(void)

{
  return 0;
}



/* Entry: 1079e13a8; end: 1079e13af; -[SCRemoteStoriesDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_1079e13a8(void)

{
  return 0;
}



/* Entry: 1079e13b0; end: 1079e14d3; -[SCRemoteStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1079e13b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2589a0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1079e14d4; end: 1079e154b;  */

void FUN_1079e14d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be74e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1079e154c; end: 1079e158b; -[SCRemoteStoriesDataProvider storyAvailability] */

undefined8 FUN_1079e154c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c259180();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1079e158c; end: 1079e158f; -[SCRemoteStoriesDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_1079e158c(void)

{
  return;
}



/* Entry: 1079e1590; end: 1079e16f3; -[SCRemoteStoriesDataProvider _playbackMetadataMapWithAllStoryIds:existingMap:] */

void FUN_1079e1590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3032000000;
  pcStack_50 = FUN_1079e11bc;
  uStack_48 = 0x1079e11cc;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_70,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_60[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  __Block_object_dispose(&uStack_68,8);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079e16f4; end: 1079e1747;  */

void FUN_1079e16f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be74e60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079e1748; end: 1079e196b; -[SCRemoteStoriesDataProvider _playbackMetadataMapOnQueueWithAllStoryIds:existingMap:] */

void FUN_1079e1748(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar2 = param_4;
  func_0x00010bf002e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(puVar1);
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar12 = param_4;
  func_0x00010c0d3c80();
  if (puVar12 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar12);
    puVar2 = puVar12;
  }
  _objc_release(puVar12);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  uVar9 = 0x10;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar11 = *plStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + (long)puVar12 * 8);
        lVar4 = *(long *)(param_1 + 0x28);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          func_0x00010c1d0640(puVar2);
        }
        _objc_release(lVar5);
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      uVar9 = 0x10;
      puVar3 = puVar1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
      puVar12 = (undefined *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1079e196c;
  uStack_170 = unaff_x24;
  puStack_168 = puVar12;
  puStack_160 = puVar2;
  puStack_158 = puVar3;
  puStack_150 = puVar1;
  puStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010c08fa60();
  if (puVar7 == (undefined1 *)0x0) {
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1079e1abc;
    puStack_180 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_178 = param_6;
    func_0x00010007380c(uVar9,&puStack_198);
    puVar12 = puStack_178;
  }
  else {
    puVar12 = PTR_PTR_1126d5c10;
    _objc_alloc();
    func_0x00010c05b480();
    uVar10 = *(undefined8 *)(puVar6 + 0x38);
    _objc_retain();
    func_0x00010c0f7fc0(uVar10);
    _objc_release(puVar12);
  }
  _objc_release(puVar12);
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(puVar8);
  return;
}



/* Entry: 1079e196c; end: 1079e1abb; -[SCRemoteStoriesDataProvider fetchStorySummaryInfoWithUserId:ignoreBlockerStories:completionQueue:completion:] */

void FUN_1079e196c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1079e1abc;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_48 = param_6;
    func_0x00010007380c(param_5,&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126d5c10;
    _objc_alloc();
    func_0x00010c05b480();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


