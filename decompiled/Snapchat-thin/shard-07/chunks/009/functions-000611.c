/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b5eae4; end: 105b5ebf3; -[SCFriendsFeedViewModelCoordinator _subscribeToLastFinishedSnapObservable] */

void FUN_105b5eae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bfb0000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b5ebf4; end: 105b5ec4b;  */

void FUN_105b5ebf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5ec4c; end: 105b5ed73; -[SCFriendsFeedViewModelCoordinator _subscribeToRenderStyleObservable] */

void FUN_105b5ec4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e08a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b5ed74; end: 105b5ee0b;  */

void FUN_105b5ed74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     ((uVar1 = *(ulong *)(param_1 + 0x148), uVar1 == 0 || (func_0x00010c071f40(), (uVar1 & 1) == 0))
     )) {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = param_2;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d5e0();
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5ee0c; end: 105b5ef1b; -[SCFriendsFeedViewModelCoordinator _subscribeToLastSentSnapObservable] */

void FUN_105b5ee0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c089e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b5ef1c; end: 105b5efaf;  */

void FUN_105b5ef1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf002e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5efb0; end: 105b5f28f; -[SCFriendsFeedViewModelCoordinator viewModelForFriendsFeedItems:currentUserBirthday:currentContextualLensSuggestions:lastInteractionStates:currentlySelectedShortcutType:currentShortcutRecipientIds:displayedSubstituteAnimationIdentifiers:currentlyReplayingSnapConversationIds:currentlyPeekingFeedIds:activeSnapCountdowns:playedStoryIds:sharedLocationUserIds:currentMapContexts:currentSaturnEmojis:friendshipFlashbacksByConversationId:recentlyActiveUserIds:streaks:hiddenState:feedIsActive:viewHasChanged:completion:] */

void FUN_105b5efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  long in_stack_00000068;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = &UNK_10f32bc6d;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  uVar2 = param_1;
  func_0x00010bee99a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010bee9b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  if (in_stack_00000068 != 0) {
    (**(code **)(in_stack_00000068 + 0x10))(in_stack_00000068,param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(in_stack_00000068);
  _objc_release(param_19);
  _objc_release(param_18);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b5f290; end: 105b5f337; -[SCFriendsFeedViewModelCoordinator resetLastPlayedSnap] */

void FUN_105b5f290(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b5f338; end: 105b5f363;  */

void FUN_105b5f338(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b5f364; end: 105b5f40b; -[SCFriendsFeedViewModelCoordinator resetLastFinishedViewingSnap] */

void FUN_105b5f364(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b5f40c; end: 105b5f437;  */

void FUN_105b5f40c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b5f438; end: 105b5f50f; -[SCFriendsFeedViewModelCoordinator resetLastSentSnapWithConversationId:] */

void FUN_105b5f438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b5f510; end: 105b5f543;  */

void FUN_105b5f510(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b5f544; end: 105b5f553; -[SCFriendsFeedViewModelCoordinator _performResetLastPlayedSnap] */

void FUN_105b5f544(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b5f554; end: 105b5f5ab; -[SCFriendsFeedViewModelCoordinator _performResetLastFinishedViewingSnap] */

void FUN_105b5f554(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar2);
    param_1 = param_1 + 0x180;
    _objc_loadWeakRetained(param_1);
    func_0x00010c29d5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105b5f5ac; end: 105b5f613; -[SCFriendsFeedViewModelCoordinator _performResetLastSentSnapWithConversationId:] */

void FUN_105b5f5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
    param_1 = param_1 + 0x180;
    _objc_loadWeakRetained(param_1);
    func_0x00010c29d5e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b5f614; end: 105b5fcdf; -[SCFriendsFeedViewModelCoordinator _viewModelsByDiffUpdateWithInfo:currentlySelectedShortcutType:currentUserBirthday:hiddenState:viewHasChanged:] */

void FUN_105b5f614(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,long param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = &UNK_10f32bcac;
  func_0x0001000ba800();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar16 = *plStack_120;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        lVar20 = *(long *)(lStack_128 + (long)puVar19 * 8);
        lVar6 = lVar20;
        FUN_105b5fce0(lVar20,(int)uVar17);
        _objc_retainAutoreleasedReturnValue();
        if ((param_7 & 1) == 0) {
          lVar7 = *(long *)(param_1 + 0x60);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar20);
          _objc_retain(lVar7);
          if (lVar20 != lVar7) {
            if (lVar7 == 0) {
              _objc_release(lVar20);
            }
            else {
              lVar8 = lVar20;
              func_0x00010c071ae0();
              _objc_release(lVar7);
              _objc_release(lVar20);
              _objc_release(lVar7);
              if ((int)lVar8 != 0) goto LAB_105b5f8c4;
            }
            goto LAB_105b5f74c;
          }
          _objc_release(lVar7);
          _objc_release(lVar20);
          _objc_release(lVar7);
LAB_105b5f8c4:
          lVar9 = *(long *)(param_1 + 0x68);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x70);
          lVar7 = lVar20;
          func_0x00010bfba020(lVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar4);
          _objc_release(lVar8);
          _objc_release(lVar7);
          lVar7 = lVar20;
          func_0x00010bfba020();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          FUN_105b5d958();
          _objc_release(lVar7);
          lVar7 = lVar20;
          if ((int)lVar8 == 0) {
            _objc_retain(lVar9);
            lVar18 = *(long *)(param_1 + 0x70);
            func_0x00010bfba020();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010bfa3d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(lVar18);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar20;
            func_0x00010bfba020(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar12;
            func_0x00010bfa3d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            lVar10 = lVar9;
          }
          else {
            lVar10 = *(long *)(param_1 + 0xb0);
            func_0x000105bae4e4(lVar10,lVar9,lVar20,lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfba020();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar8;
            func_0x00010bf866a0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = param_1;
            func_0x00010becbf60(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar20;
            func_0x00010bfba020(lVar20);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar13;
            func_0x00010bfa3d00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(lVar11);
          }
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar18);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar9);
          if (lVar10 == 0) goto LAB_105b5f74c;
        }
        else {
LAB_105b5f74c:
          lVar10 = param_1;
          func_0x00010bee98c0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar20;
          func_0x00010bfba020();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf866a0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_1;
          func_0x00010becbf60(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfba020(lVar20);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar20;
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar13);
          _objc_release(lVar20);
          _objc_release(lVar12);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
        func_0x00010befa120(puVar2);
        _objc_release(lVar10);
        _objc_release(lVar6);
        puVar19 = puVar19 + 1;
      } while (puVar5 != puVar19);
      puVar5 = param_3;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc0000000;
  pcStack_148 = FUN_105b5fd60;
  puStack_140 = &UNK_1108d7a70;
  uStack_138 = (undefined1)uVar17;
  puVar5 = param_3;
  func_0x00010050471c(param_3,&puStack_158,&PTR___NSConcreteGlobalBlock_1108d7ab0);
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar5;
  _objc_release(uVar17);
  uVar15 = 0;
  puVar5 = puVar2;
  func_0x00010050471c(puVar2,&PTR___NSConcreteGlobalBlock_1108d7ad0,
                      &PTR___NSConcreteGlobalBlock_1108d7b10);
  uVar17 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar5;
  _objc_release(uVar17);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar5;
  _objc_release(uVar17);
  if ((param_4 == 0) && (param_6 == 1)) {
    puVar19 = PTR_PTR_1126c2a28;
    _objc_alloc();
    func_0x00010bffd1a0();
    puVar14 = puVar2;
    func_0x00010bf51e00();
    puVar5 = puVar14;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar19);
  }
  else {
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar1);
    __Unwind_Resume(param_3);
    func_0x00010bfba020();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar15 & 1) == 0) {
      puVar5 = param_3;
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b5fce0; end: 105b5fd5f;  */

void FUN_105b5fce0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b5fd60; end: 105b5fd6f;  */

void FUN_105b5fd60(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  func_0x00010bfba020(param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((bVar1 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b5fd70; end: 105b5fd97;  */

void FUN_105b5fd70(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b5fd98; end: 105b5fd9f;  */

void FUN_105b5fd98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf33f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cellIdentifier_1125aa970);
  return;
}



/* Entry: 105b5fda0; end: 105b5fdc7;  */

void FUN_105b5fda0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b5fdc8; end: 105b60243; -[SCFriendsFeedViewModelCoordinator _viewModelInfoForFeedItems:currentContextualLensSuggestions:lastInteractionStates:currentShortcutRecipientIds:displayedSubstituteAnimationIdentifiers:currentlyReplayingSnapConversationIds:currentlyPeekingFeedIds:activeSnapCountdowns:feedIsActive:playedStoryIds:sharedLocationUserIds:currentMapContexts:currentSaturnEmojis:friendshipFlashbacksByConversationId:recentlyActiveUserIds:streaks:] */

void FUN_105b5fdc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puVar3 = &UNK_10f32bdc6;
  func_0x0001000ba800();
  uVar4 = *(ulong *)(param_1 + 0x150);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c27e360();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    uVar11 = param_15;
    func_0x00010bf51e00();
  }
  else {
    uVar11 = 0;
  }
  lVar6 = param_1;
  func_0x00010bebf3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bdd1cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29dc00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c25bf20();
  _objc_release(uVar9);
  bVar1 = *(byte *)(param_1 + 0x178);
  bVar2 = *(byte *)(param_1 + 0x179);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105b60244;
  puStack_e8 = &UNK_1108d7b30;
  _objc_retain(param_13);
  uStack_e0 = param_13;
  _objc_retain(param_7);
  uStack_d8 = param_7;
  lStack_d0 = param_1;
  _objc_retain(param_8);
  uStack_c8 = param_8;
  _objc_retain(param_9);
  uStack_c0 = param_9;
  _objc_retain(param_10);
  uStack_b8 = param_10;
  bStack_70 = (param_11 ^ 1) & bVar1;
  bStack_6f = (param_11 ^ 1) & bVar2;
  _objc_retain(lVar6);
  lStack_b0 = lVar6;
  _objc_retain(lVar7);
  lStack_a8 = lVar7;
  _objc_retain(param_6);
  uStack_a0 = param_6;
  _objc_retain(param_14);
  uStack_98 = param_14;
  _objc_retain(uVar8);
  uStack_90 = uVar8;
  _objc_retain(param_19);
  uStack_88 = param_19;
  uStack_78 = uVar10;
  _objc_retain(uVar11);
  uVar10 = param_3;
  uStack_80 = uVar11;
  func_0x000100504554(param_3,&puStack_100);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  func_0x0001000e2a84(puVar3);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 105b60244; end: 105b608a3;  */

void FUN_105b60244(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107cfc588();
  uVar14 = *(ulong *)(param_1 + 0x28);
  if (uVar14 != 0) {
    uVar6 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar14 & 1) == 0) {
      func_0x000100bf39e4();
    }
    _objc_release(uVar6);
  }
  uVar14 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar6);
  _objc_release(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x88);
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x48);
  bVar2 = *(byte *)(param_1 + 0x90);
  bVar3 = *(byte *)(param_1 + 0x91);
  _objc_retain(param_2);
  _objc_retain(uVar15);
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  _objc_retain(uVar10);
  _objc_retain(lVar1);
  uVar14 = param_2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  if ((bVar2 & 1) == 0) {
    func_0x00010bf4b900();
    uVar14 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar14);
    func_0x00010c0720c0();
    func_0x00010bf4b900();
  }
  if ((bVar3 & 1) == 0) {
    lVar16 = lVar1;
    func_0x00010bf529e0();
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      uVar14 = param_2;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar14;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0720c0();
      _objc_release(uVar7);
      _objc_release(uVar14);
      if ((int)uVar8 == 0) {
        lVar16 = 0;
      }
      else {
        uVar14 = param_2;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar14;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x000107cfd54c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar14);
        uVar14 = uVar8;
        func_0x00010c281c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar14 == 0) {
          lVar16 = 0;
        }
        else {
          uVar14 = uVar8;
          func_0x00010c281c20(uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar1;
          func_0x00010c0e00e0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
        }
        _objc_release(uVar8);
      }
    }
  }
  else {
    lVar16 = 0;
  }
  puVar9 = PTR_PTR_1126c2a58;
  _objc_alloc();
  func_0x00010c046220();
  _objc_release(lVar16);
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar15);
  _objc_release(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar14 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar14);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  uVar14 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar14);
  if ((*(char *)(*(long *)(param_1 + 0x30) + 0xd0) == '\x01') && (*(long *)(param_1 + 0x60) != 0)) {
    uVar14 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar14);
  }
  uVar14 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar14);
  uVar14 = param_2;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar15 = 0;
  if (uVar14 != 0) {
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    uVar14 = param_2;
    func_0x00010bfa3d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  uVar14 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar10 = uVar17;
  func_0x000105badfdc(uVar17,*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = param_2;
    func_0x000105bae9a4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000107cfafa4(param_2,uVar5 & 0xffffffff);
  puVar11 = PTR_PTR_1126c2a30;
  _objc_alloc(PTR_PTR_1126c2a30);
  func_0x00010c016440();
  _objc_release(uVar14);
  _objc_release(uVar17);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105b608a4; end: 105b60913; -[SCFriendsFeedViewModelCoordinator _timeIntervalWithDisplayTimestamp:] */

void FUN_105b608a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  _objc_retain(param_4);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInteger__1126157f8,(long)param_1);
  return;
}



/* Entry: 105b60914; end: 105b60b83; -[SCFriendsFeedViewModelCoordinator _viewModelForFriendsFeedItemInfo:currentUserBirthday:identifier:] */

void FUN_105b60914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f32be3b;
  func_0x0001000ba800();
  func_0x00010bde3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c29a8;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f6e0();
  uVar7 = param_3;
  func_0x00010bfba020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdcc40(param_3);
  uVar10 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf50580();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cfb554();
  func_0x00010bffd200(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b60b84; end: 105b616b3; -[SCFriendsFeedViewModelCoordinator _componentViewModelForFriendsFeedItemInfo:currentUserBirthday:] */

void FUN_105b60b84(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  ulong uStack_100;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f32be92;
  func_0x0001000ba800();
  uVar2 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100bf377c();
  lVar4 = *(long *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c067fc0();
  _objc_release(lVar4);
  _objc_initWeak(auStack_80,param_1);
  puVar6 = PTR_PTR_1126ae720;
  dVar35 = 1.60807493534087e-314;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(uVar2);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c1409a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be19800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar2;
  func_0x000105bae7cc(uVar2,puVar6,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x110)
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075e40(param_3);
  uVar9 = param_3;
  func_0x00010c24d520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010beef160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_retain(uVar2);
  uVar9 = uVar2;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x000100bf4a30();
  _objc_release(uVar9);
  if ((int)uVar11 != 0) {
    uVar9 = uVar2;
    func_0x00010bef0e60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cff704();
    _objc_release(uVar11);
    _objc_release(uVar9);
  }
  _objc_release(uVar2);
  _objc_retain(lVar10);
  lVar8 = lVar10;
  func_0x00010c08fa60();
  if (((lVar8 == 0) || (lVar5 != 3)) || ((int)uVar3 != 0)) {
    _objc_retain(lVar10);
    lStack_c0 = lVar10;
  }
  else {
    lVar5 = lVar10;
    func_0x00010c0d3c80();
    puVar32 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(lVar5);
    func_0x00010bef6f20(lVar5);
    _objc_release(puVar32);
    lStack_c0 = lVar5;
    func_0x00010bf51e00();
    _objc_release(lVar5);
  }
  _objc_release(lVar10);
  _objc_release(lVar10);
  uVar9 = uVar2;
  func_0x000107cf83f8(uVar2,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0xf0));
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c24d520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x000105bae8bc(uVar2,uVar11,uVar9,*(undefined8 *)(param_1 + 0xb0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar11 = param_3;
  func_0x00010c24d520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be198a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar11 = param_3;
  func_0x00010c07fd20();
  uVar13 = param_3;
  func_0x00010bfdcc40();
  uVar14 = param_3;
  func_0x00010c09f580(param_3);
  uVar33 = *(undefined8 *)(param_1 + 0x118);
  uVar34 = *(undefined8 *)(param_1 + 200);
  uVar15 = param_3;
  func_0x00010bf13040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010beef440();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c130200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(ulong *)(param_1 + 0x160);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf1f3c0();
  uVar20 = uVar2;
  func_0x00010663e218(uVar2,uVar11 & 0xffffffff,uVar13 & 0xffffffff,uVar14,8,uVar33,uVar34,uVar16,
                      uVar17,uVar19 & 0xff);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  uVar11 = uVar20;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar11 == 0) {
    uStack_100 = 0;
  }
  else {
    uStack_100 = param_3;
    func_0x00010bf12e80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar11);
  uStack_c8 = *(undefined8 *)(param_1 + 0x100);
  if ((int)uVar3 == 0) {
    func_0x000107d05810(uStack_c8,*(undefined8 *)(param_1 + 0x110));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d0573c();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_3;
  func_0x00010bfdcc40();
  if ((int)uVar3 != 0) {
    uVar3 = uVar2;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cfc9b8();
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c25c3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x000105bac09c(uVar2,uVar3,*(undefined8 *)(param_1 + 0x20),6,*(undefined8 *)(param_1 + 0x130)
                      ,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x170));
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c25c3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x000105bac09c(uVar2,uVar3,*(undefined8 *)(param_1 + 0x20),7,*(undefined8 *)(param_1 + 0x130)
                      ,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x170));
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x000105bade14(uVar2,uVar13,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar13 = param_3;
  func_0x00010c25c3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar2;
  func_0x000105bacaec(uVar2,uVar13,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x170));
  _objc_release(uVar13);
  uVar13 = uVar2;
  func_0x000105bae1a8(uVar2,*(undefined8 *)(param_1 + 0x168));
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x000105bae398(uVar2,*(undefined8 *)(param_1 + 200));
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x000105baa72c(param_3,*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x110),*(undefined1 *)(param_1 + 0x179));
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c078da0(param_3);
  uVar19 = uVar2;
  func_0x000105baed4c(uVar2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x000105baf5f0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar2;
  func_0x000105bafa04();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x000105bafb08();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bfdcc40(param_3);
  uVar23 = param_3;
  func_0x00010bf13040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010beef440();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar2;
  func_0x000105bb0264(uVar2,uVar22,uVar15,uVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  _objc_release(uVar23);
  uVar33 = *(undefined8 *)(param_1 + 0x10);
  uVar22 = param_3;
  func_0x00010c1409a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x000105bb049c(uVar2,uVar33,uVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  uVar22 = param_3;
  func_0x00010c1409a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar2;
  func_0x000105bb1bd0(uVar2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  func_0x000105bb1e2c();
  func_0x000105bb2128(lVar4,lStack_c0,*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x110));
  if (dVar35 < 0.0) {
    uVar33 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010c269d40(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064ea350();
    _objc_release(uVar33);
  }
  puVar32 = PTR_PTR_1126c2a38;
  _objc_alloc();
  uVar22 = param_3;
  func_0x00010c1409a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar2;
  func_0x00010c0fc580();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078da0();
  uVar29 = param_3;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f660();
  uVar31 = param_3;
  func_0x00010c24d520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d600(dVar35,puVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar22);
  _objc_release(0);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar25);
  _objc_release(uVar21);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uStack_c8);
  _objc_release(uStack_100);
  _objc_release(uVar20);
  _objc_release(lVar5);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(lStack_c0);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 105b616b4; end: 105b61717;  */

void FUN_105b616b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1ccc0();
  func_0x00010c0df840(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b61718; end: 105b617e3; -[SCFriendsFeedViewModelCoordinator _getAdSlugVariant:] */

undefined8 FUN_105b61718(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107cfb510();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf36520();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105b617e4; end: 105b61a0f; -[SCFriendsFeedViewModelCoordinator _friendsFeedDisplayNameForFeedItem:rightButtonViewModel:adSlugVariant:] */

void FUN_105b617e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f32bef9;
  func_0x0001000ba800(&UNK_10f32bef9);
  uVar2 = param_3;
  func_0x000100bf39e4();
  uVar3 = param_3;
  func_0x000100bf377c();
  uVar4 = param_3;
  if ((int)uVar2 == 0) {
    func_0x000107cf8700(param_3,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_105b61a10;
    uStack_60 = 0x105b61a20;
    uStack_58 = 0;
    func_0x00010c0bd8e0();
    puVar5 = (undefined *)puStack_78[5];
    _objc_retain(puVar5);
    __Block_object_dispose(&uStack_80,8);
    uVar2 = uStack_58;
  }
  else {
    func_0x000107cf7ef0(param_3,*(undefined8 *)(param_1 + 200));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x000107cf8cd4(param_3,uVar3,uVar4,param_5,*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x110));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2a40;
    func_0x00010bf86040(PTR_PTR_1126c2a40);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b61a10; end: 105b61a27;  */

void FUN_105b61a10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b61a28; end: 105b61aeb;  */

void FUN_105b61a28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107cf8218(param_2,*(undefined1 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x100),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2a40;
  func_0x00010bf86040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b61aec; end: 105b61ee7; -[SCFriendsFeedViewModelCoordinator _friendsFeedIconForFeedItem:staleContent:currentUserBirthday:hasConsumableContent:] */

void FUN_105b61aec(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f32bf52;
  func_0x0001000ba800(&UNK_10f32bf52);
  puVar6 = param_3;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x000100bf4a30();
  _objc_release(puVar6);
  puVar6 = param_3;
  func_0x000107cfb628(param_3,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x128));
  if ((((uint)puVar2 ^ 1) & (uint)puVar6) == 1) {
    uVar3 = *(ulong *)(param_1 + 0xf8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_105b61e5c;
    }
  }
  if (((ulong)puVar2 & 1) == 0) {
    puVar6 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x000107cff040();
    _objc_release(puVar2);
    _objc_release(puVar6);
    if ((int)puVar7 == 0) goto LAB_105b61ce4;
    puVar6 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar6);
    if ((int)puVar7 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar6 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x000107cfd54c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010c2420e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdc680();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar6 = PTR_PTR_1126c2a48;
    puVar2 = param_3;
    func_0x00010bef0c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x00010bef1640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
LAB_105b61ce4:
    puVar6 = *(undefined **)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bfe5520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_retain(puVar2);
    puVar7 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_105b61a10;
      uStack_70 = 0x105b61a20;
      uStack_68 = 0;
      func_0x00010c0be400(puVar2);
      puVar6 = (undefined *)puStack_88[5];
      _objc_retain(puVar6);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
LAB_105b61e5c:
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b61ee8; end: 105b61faf; -[SCFriendsFeedViewModelCoordinator _staleContentsByConversationIdForFriendsFeedItems:currentMapContexts:friendshipFlashbacksByConversationId:recentlyActiveUserIds:] */

void FUN_105b61ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105b61ff8;
  puStack_50 = &UNK_1108d7c10;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108d7bf0,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b61fb0; end: 105b61ff7;  */

void FUN_105b61fb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b61ff8; end: 105b621d7;  */

void FUN_105b61ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_2;
    func_0x000105bae9a4(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar9 = *(long *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar9 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126c2a50;
    _objc_alloc(PTR_PTR_1126c2a50);
    lVar3 = lVar9;
    func_0x00010bfba820(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c0c58c0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0cb920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c0c58c0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c013700(puVar10);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar1 = uVar8;
  func_0x00010c09ec00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x000107cffc24(param_2,uVar1,puVar10,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0),
                      *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x128));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar9);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b621d8; end: 105b62297; -[SCFriendsFeedViewModelCoordinator _avatarIconInfosByConversationIdForFriendsFeedItems:currentMapContexts:currentSaturnEmojis:] */

void FUN_105b621d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b622e0;
  puStack_48 = &UNK_1108d7c60;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108d7c40,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b62298; end: 105b622df;  */

void FUN_105b62298(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b622e0; end: 105b6237f;  */

void FUN_105b622e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000105bae9a4(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000105baeb84(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x000107cf7cdc(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b62380; end: 105b62397; -[SCFriendsFeedViewModelCoordinator delegate] */

void FUN_105b62380(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b62398; end: 105b623a3; -[SCFriendsFeedViewModelCoordinator setDelegate:] */

void FUN_105b62398(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x180,param_3);
  return;
}



/* Entry: 105b623a4; end: 105b62673; -[SCFriendsFeedViewModelCoordinator .cxx_destruct] */

void FUN_105b623a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x180);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
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
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105b62674; end: 105b6286f;  */

undefined8 FUN_105b62674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bf920(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105b62870; end: 105b62923;  */

void FUN_105b62870(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b62924; end: 105b62a0b;  */

void FUN_105b62924(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf25ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b62a0c; end: 105b62a83;  */

void FUN_105b62a0c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b62a84; end: 105b62bbf;  */

undefined1 FUN_105b62a84(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bf920(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105b62bc0; end: 105b62bfb;  */

void FUN_105b62bc0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b62bfc; end: 105b62c87;  */

void FUN_105b62bfc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf25ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b62c88; end: 105b62c9b;  */

void FUN_105b62c88(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b62c9c; end: 105b62e8f;  */

long FUN_105b62c9c(ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf529e0();
  if ((uVar1 == 0) ||
     (lVar8 = param_4, func_0x00010bf529e0(), puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990,
     lVar8 == 0)) {
    lVar8 = 0;
    goto LAB_105b62e58;
  }
  func_0x00010bf529e0(param_1);
  func_0x00010bfed060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4b900();
  uVar3 = param_2;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf529e0();
    if (1 < uVar1) {
      func_0x00010bf529e0(param_2);
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
    }
    uVar1 = uVar3;
    func_0x00010bf529e0();
    if (uVar1 == 0) goto LAB_105b62e3c;
    func_0x00010bf529e0(uVar3);
    uVar1 = uVar3;
    func_0x00010c0dfd40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010bf529e0();
    if (uVar9 == 0) {
      lVar8 = 0;
    }
    else {
      uVar9 = 0;
      lVar8 = 0;
      do {
        uVar4 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010bf4b900();
        _objc_release(uVar4);
        if ((int)lVar5 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed060();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf433a0();
          if (puVar7 == (undefined *)0x1) {
            lVar8 = lVar8 + 1;
          }
          _objc_release(puVar6);
        }
        uVar9 = uVar9 + 1;
        uVar4 = param_1;
        func_0x00010bf529e0();
      } while (uVar9 < uVar4);
    }
    _objc_release(uVar1);
  }
  else {
LAB_105b62e3c:
    lVar8 = 0;
  }
  _objc_release(puVar2);
  param_2 = uVar3;
LAB_105b62e58:
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar8;
}



/* Entry: 105b62e90; end: 105b62f87;  */

void FUN_105b62e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2a60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c00cf40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  uVar2 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1a0140(puVar1);
  _objc_release(uVar2);
  func_0x00010c222640(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b62f88; end: 105b63147;  */

void FUN_105b62f88(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126bdd28;
  uVar3 = param_1;
  if ((param_1 == 0) || (puVar2 = PTR_PTR_1126bdd30, (uVar4 & 1) == 0)) {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    _objc_release(param_1);
    puVar1 = PTR_PTR_1126b4d28;
    if ((param_1 != 0) && (puVar2 = PTR_PTR_1126bdd28, (uVar4 & 1) != 0)) goto LAB_105b63004;
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    _objc_release(param_1);
    puVar2 = PTR_PTR_1126c2118;
    puVar1 = PTR_PTR_1126b4d28;
    if ((param_1 == 0) || ((uVar4 & 1) == 0)) {
      _objc_retain(param_1);
      _objc_opt_class(puVar2);
      _objc_opt_isKindOfClass(param_1,puVar2);
      _objc_release(param_1);
      uVar4 = 0;
      if ((param_1 != 0) && ((uVar3 & 1) != 0)) {
        uVar4 = param_1;
        func_0x000108535b00(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_105b63054;
    }
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    uVar4 = uVar3;
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105b63004:
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    uVar4 = uVar3;
    func_0x00010c280580(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
LAB_105b63054:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105b63148; end: 105b63853;  */

void FUN_105b63148(undefined8 param_1,ulong param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,uint param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1d8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_49);
  _objc_retain(param_48);
  _objc_retain(param_47);
  _objc_retain(param_46);
  _objc_retain(param_45);
  _objc_retain(param_44);
  _objc_retain(param_43);
  _objc_retain(param_42);
  _objc_retain(param_41);
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_36);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108d7e20);
  if ((char)param_19 == '\0') {
    if ((param_2 != 0) && (uVar1 = param_2, func_0x00010bfddf20(), (uVar1 & 1) == 0))
    goto LAB_105b63464;
  }
  else if ((param_19 & 0x100) == 0) {
LAB_105b63464:
    uStack_200 = 1;
    puStack_1d8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uStack_210 = 0;
    uStack_208 = 2;
    goto LAB_105b634e0;
  }
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    uStack_208 = 1;
    puStack_1d8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uStack_210 = 0;
    uStack_200 = 2;
  }
  else {
    puStack_1d8 = param_4;
    func_0x00010bf51e00();
    uStack_210 = 2;
    uStack_200 = 3;
    uStack_208 = 1;
  }
LAB_105b634e0:
  uVar3 = param_8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar4 = param_33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_33);
  uVar5 = param_35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_35);
  uVar6 = param_36;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_36);
  uVar7 = param_6;
  uVar8 = param_7;
  func_0x000107204770(param_6,param_7,uVar3,param_9,param_10,param_3,uStack_200,0x1e,uStack_208,
                      uStack_210,4,0,param_11,0,param_23,param_12,param_13,param_14,param_15,0,
                      param_16,0,0,param_17,param_18,param_22,0x16,0,param_21,0x30,0,param_24,
                      param_25,param_26,param_27,param_28,0,param_29,param_30,param_31,param_32,0,0,
                      param_45,param_46,param_47,uVar4,param_34,uVar5,uVar6,param_26,param_37,
                      param_38,param_39,param_40,param_41,param_43,param_42,param_44,param_48,
                      param_49);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puStack_1d8);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_storyId_112674158);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105b63854; end: 105b6385b;  */

void FUN_105b63854(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b6385c; end: 105b63887;  */

long FUN_105b6385c(double param_1)

{
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  return (long)(param_1 * 1000.0);
}



/* Entry: 105b63888; end: 105b639df; -[SCFriendsFeedImpressionLogger initWithGraphene:performerProvider:userTrackedLogger:] */

undefined1 *
FUN_105b63888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec0f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b639e0; end: 105b63b4b; -[SCFriendsFeedImpressionLogger didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105b639e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      func_0x00010be71b00(param_1);
      goto LAB_105b63b2c;
    }
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) goto LAB_105b63b2c;
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba1f8;
    _objc_opt_class(PTR_PTR_1126ba1f8);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010be71ac0(param_1);
  }
  else {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010be71ae0(param_1);
  }
  _objc_release(uVar5);
LAB_105b63b2c:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b63b4c; end: 105b63c23; -[SCFriendsFeedImpressionLogger _performDidFeedAppearWithTrackingData:] */

void FUN_105b63b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b63c24; end: 105b63c57;  */

void FUN_105b63c24(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b63c58; end: 105b63d4f; -[SCFriendsFeedImpressionLogger _didFeedAppearWithTrackingData:] */

void FUN_105b63c58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdfc740(param_1);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105b63d50;
  uStack_130 = param_1;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_138,lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 105b63d50; end: 105b63df7; -[SCFriendsFeedImpressionLogger _performDidFeedDisappear] */

void FUN_105b63d50(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b63df8; end: 105b63e23;  */

void FUN_105b63df8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b63e24; end: 105b63e87; -[SCFriendsFeedImpressionLogger _didFeedDisappear] */

void FUN_105b63e24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b63e88; end: 105b63f5f; -[SCFriendsFeedImpressionLogger _performDidCellDisplayWithTrackingData:] */

void FUN_105b63e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b63f60; end: 105b63f93;  */

void FUN_105b63f60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b63f94; end: 105b63fe3; -[SCFriendsFeedImpressionLogger _didCellDisplayWithTrackingData:] */

void FUN_105b63f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be57ae0(param_1,param_2,param_3);
  func_0x00010be59420(param_1,param_2,param_3);
  func_0x00010be53c40(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b63fe4; end: 105b64183; -[SCFriendsFeedImpressionLogger _logReplyButtonForTrackingData:] */

void FUN_105b63fe4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = param_3;
  func_0x00010bf33f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c140b20();
  if ((int)uVar3 == 0) {
    if (puVar1 != (undefined *)0x1) goto LAB_105b64170;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010c131aa0(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126c2a68;
    _objc_alloc_init(PTR_PTR_1126c2a68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  else {
    if (puVar1 == (undefined *)0x1) goto LAB_105b64170;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar3,param_2,puVar2);
  }
  _objc_release(puVar2);
LAB_105b64170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b64184; end: 105b6437f; -[SCFriendsFeedImpressionLogger _logStreakRestoreButtonForTrackingData:] */

void FUN_105b64184(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = param_3;
  func_0x00010bf33f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar5,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf9caa0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar5 == 0) {
    _objc_release();
    if (puVar1 == (undefined *)0x0) goto LAB_105b64368;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b2cb0;
    func_0x00010c25c160(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c2a70;
    _objc_opt_new(PTR_PTR_1126c2a70);
    func_0x00010c1ed260();
    puVar3 = param_3;
    func_0x00010c122e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1844c0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c206fa0(puVar2,param_2,0x16);
    puVar3 = param_3;
    func_0x00010bf9caa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25be80();
    func_0x00010c20e2c0(puVar2,param_2,(long)(int)puVar4);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf9caa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c270aa0();
    func_0x00010c20e300(puVar2,param_2,puVar4);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  else {
    _objc_release();
    if (puVar1 != (undefined *)0x0) goto LAB_105b64368;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar5,param_2,puVar1);
  }
  _objc_release(puVar1);
LAB_105b64368:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b64380; end: 105b644b7; -[SCFriendsFeedImpressionLogger _logFrozenStreakForTrackingData:] */

void FUN_105b64380(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c25c000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c073f40();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = param_3;
  func_0x00010bf33f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    if ((int)uVar1 == 0) goto LAB_105b644a0;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2cb0;
    func_0x00010bfbb400(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    if ((uVar1 & 1) != 0) goto LAB_105b644a0;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar4,param_2,uVar2);
  }
  _objc_release(uVar2);
LAB_105b644a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b644b8; end: 105b64517; -[SCFriendsFeedImpressionLogger .cxx_destruct] */

void FUN_105b644b8(long param_1)

{
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



/* Entry: 105b64518; end: 105b64523; +[SCFriendsFeedItemImpressionTracker announcerIdentifier] */

undefined ** FUN_105b64518(void)

{
  return &PTR____CFConstantStringClassReference_110e1f878;
}



/* Entry: 105b64524; end: 105b6452b; -[SCFriendsFeedItemImpressionTracker addListener:] */

void FUN_105b64524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105b6452c; end: 105b64533; -[SCFriendsFeedItemImpressionTracker removeListener:] */

void FUN_105b6452c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105b64534; end: 105b64597; -[SCFriendsFeedItemImpressionTracker init] */

undefined1 * FUN_105b64534(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec0f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b64598; end: 105b647c7; -[SCFriendsFeedItemImpressionTracker initWithPlusFeatureLogger:sponsoredSnapAdResponseParser:friendsFeedCellVisibilityObservable:] */

undefined8 *
FUN_105b64598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126ec0f8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar5 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar5);
    puVar3 = auStack_68;
    _objc_initWeak(puVar3,puVar1);
    lVar6 = puVar1[4];
    if (lVar6 != 0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e0ea0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      lVar4 = lVar6;
      func_0x00010c25ff60(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_70);
    }
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b647c8; end: 105b6480f;  */

void FUN_105b647c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a0c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b64810; end: 105b648df; -[SCFriendsFeedItemImpressionTracker feedDidAppearWithVisibleViewModels:friendsFeedSessionId:forRowsAtIndexes:] */

void FUN_105b64810(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105b648e0(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x000100817178(param_3,&PTR___NSConcreteGlobalBlock_1108d7f60);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar2;
  _objc_release(uVar3);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b648e0; end: 105b64a47;  */

void FUN_105b648e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bd86738(param_1,param_3,&PTR___NSConcreteGlobalBlock_1108d7f10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b64a48; end: 105b64af3; -[SCFriendsFeedItemImpressionTracker feedDidDisappearWithVisibleViewModels:forRowsAtIndexes:] */

void FUN_105b64a48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_105b648e0(param_3,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010bf7dbc0(uVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b64af4; end: 105b64b4f; -[SCFriendsFeedItemImpressionTracker feedDidAppearFromFriendStoryPlayback] */

void FUN_105b64af4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb8238,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b64b50; end: 105b64bab; -[SCFriendsFeedItemImpressionTracker feedDidDisappearForFriendStoryPlayback] */

void FUN_105b64b50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb8258,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b64bac; end: 105b64c07; -[SCFriendsFeedItemImpressionTracker feedDidAppearFromMessagingPlayback] */

void FUN_105b64bac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb8278,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b64c08; end: 105b64c63; -[SCFriendsFeedItemImpressionTracker feedDidDisappearForMessagingPlayback] */

void FUN_105b64c08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb8298,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b64c64; end: 105b64deb; -[SCFriendsFeedItemImpressionTracker cellDidAppearWithViewModel:previousViewModel:forRowAtIndex:] */

void FUN_105b64c64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    _objc_retain(param_4);
    lVar1 = param_3;
    func_0x000105bb5c04();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107cfbdb4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010bf33a40(param_1);
    }
    lVar1 = param_3;
    func_0x00010bfa3920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb9d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010bed03e0(param_1);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_105b64dec(param_3,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar4);
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar5);
      _objc_release(param_1);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b64dec; end: 105b64f67;  */

void FUN_105b64dec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  FUN_105b665ac(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  if (param_2 != 0) {
    lVar3 = param_2;
    FUN_105b665ac(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar3);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar1);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105b64f68; end: 105b651df; -[SCFriendsFeedItemImpressionTracker _tryLogPresenceHintsViewedEvent:] */

void FUN_105b64f68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107cf92c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb9d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf1ac80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  func_0x00010c0be480(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfce6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar5);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(lVar2);
      func_0x00010c0be480(uVar8);
      _objc_release(lVar2);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c0bf3e0(param_2);
  _objc_release(uVar8);
  return;
}



/* Entry: 105b651e0; end: 105b653c7;  */

void FUN_105b651e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0bf3e0(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105b653c8; end: 105b65467; -[SCFriendsFeedItemImpressionTracker cellDidAppearWithStoryViewModel:forRowAtIndex:] */

void FUN_105b653c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    lVar1 = param_1;
    func_0x00010be1fae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb81b8,param_1,
                          lVar1);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105b65468; end: 105b65593; -[SCFriendsFeedItemImpressionTracker cellDidDisappearWithViewModel:forRowAtIndex:] */

void FUN_105b65468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    lVar1 = param_3;
    func_0x000105bb5c04();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107cfbdb4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010bf33a80(param_1);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_105b64dec(param_3,0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar4);
      _objc_release(param_1);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b65594; end: 105b6561b; -[SCFriendsFeedItemImpressionTracker cellDidDisappearWithStoryViewModel:forRowAtIndex:] */

void FUN_105b65594(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be1fae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eb81d8,param_1,
                          lVar1);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105b6561c; end: 105b6572f; -[SCFriendsFeedItemImpressionTracker cellDidHandleInteractionWithViewModel:forRowAtIndex:actionIdentifier:] */

void FUN_105b6561c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(param_5);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf33f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4);
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126c2a78;
    _objc_alloc(PTR_PTR_1126c2a78);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_105b65730(param_3,0,puVar3,uVar4,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c054f60(puVar2);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_release(puVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105b65730; end: 105b65b4b;  */

void FUN_105b65730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_1a8;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105b664cc;
  uStack_88 = 0x105b664dc;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105b664cc;
  uStack_b8 = 0x105b664dc;
  uStack_b0 = 0;
  uVar1 = param_1;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  func_0x00010bf50940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105b66f50;
  puStack_f0 = &UNK_1108d7f80;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105b66fc4;
  puStack_120 = &UNK_1108d7fb0;
  puStack_118 = &uStack_a8;
  puStack_110 = &uStack_d8;
  puStack_e8 = &uStack_a8;
  puStack_e0 = &uStack_d8;
  func_0x00010c0bcde0();
  _objc_release(uVar1);
  lVar2 = puStack_d0[5];
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uStack_1a8 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uVar1;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_105b664cc;
  uStack_148 = 0x105b664dc;
  uStack_140 = 0;
  uVar1 = param_1;
  func_0x00010bfa3920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf86020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd8e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c2a88;
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x000105bb5a48();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_105b66d18(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf50940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdcc40();
  uVar8 = param_1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf12e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  uVar10 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cfa64c();
  func_0x00010bffd1e0(puVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  _objc_release(uStack_1a8);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b65b4c; end: 105b65b73; -[SCFriendsFeedItemImpressionTracker friendsFeedImpressionUpdatesObservable] */

void FUN_105b65b4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b65b74; end: 105b65b9b; -[SCFriendsFeedItemImpressionTracker friendsFeedCellInteractionEventsObservable] */

void FUN_105b65b74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b65b9c; end: 105b65e07; -[SCFriendsFeedItemImpressionTracker _handleFriendsFeedVisibilityEvent:] */

void FUN_105b65b9c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  code *pcStack_268;
  code *pcStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    uVar19 = *(undefined8 *)(param_1 + 0x48);
    uVar20 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar19);
    _objc_retain(uVar20);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = param_3;
    func_0x00010bf344c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        uVar23 = *(undefined8 *)((long)puVar21 * 8);
        uVar4 = uVar23;
        func_0x00010c29d560(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf33f20();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar19;
        func_0x00010bf4b900(uVar19);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = uVar23;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0f7de0(uVar23);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec9e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_105b65730(uVar4,puVar7,uVar23,uVar6,uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(uVar5);
        _objc_release(uVar23);
        _objc_release(puVar7);
        _objc_release(uVar4);
        puVar21 = puVar21 + 1;
      } while (puVar3 != puVar21);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar2 = puVar8;
    func_0x00010bf51e00();
    _objc_release(puVar8);
    _objc_release(uVar20);
    _objc_release(uVar19);
    puVar3 = puVar2;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puStack_320 = &uStack_328;
  uStack_328 = 0;
  uStack_318 = 0x3032000000;
  pcStack_310 = FUN_105b664cc;
  uStack_308 = 0x105b664dc;
  uStack_300 = 0;
  puVar2 = puVar3;
  func_0x00010bf96da0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x00010c0c0020();
  _objc_release(puVar2);
  _objc_retain(puVar3);
  ppuStack_270 = &puStack_278;
  puStack_278 = (undefined *)0x0;
  pcStack_268 = (code *)0x3032000000;
  pcStack_260 = FUN_105b664cc;
  ppuStack_258 = (undefined **)0x105b664dc;
  uStack_250 = 0;
  puVar2 = puVar3;
  func_0x000105bb5a48();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar3;
  func_0x000105bb5c04(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_2d0 = puVar8;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = (code *)0x105b67078;
  puStack_2b8 = &UNK_1108d80a0;
  ppuStack_2a8 = &puStack_278;
  _objc_retain(puVar2);
  puStack_2a0 = puVar8;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x105b670a8;
  puStack_288 = &UNK_1108d8070;
  puStack_2f8 = puVar8;
  ppuStack_2f0 = (undefined **)0xc2000000;
  uStack_2e8 = 0x105b67100;
  puStack_2e0 = &UNK_1108d8070;
  ppuStack_2d8 = &puStack_278;
  ppuStack_2b0 = (undefined **)puVar2;
  ppuStack_280 = &puStack_278;
  func_0x00010c0c0560(puVar21);
  puVar7 = ppuStack_270[5];
  _objc_retain();
  _objc_release(ppuStack_2b0);
  _objc_release(puVar21);
  _objc_release(puVar2);
  __Block_object_dispose(&puStack_278,8);
  _objc_release(uStack_250);
  _objc_release(puVar3);
  puVar2 = puVar3;
  func_0x000105bb5c04(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126c2140;
  _objc_opt_new();
  func_0x00010c2b1a60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar2);
  ppuStack_2f0 = &puStack_2f8;
  puStack_2f8 = (undefined *)0x0;
  uVar19 = 0x2020000000;
  uStack_2e8 = 0x2020000000;
  puStack_2e0 = (undefined *)0x0;
  puStack_278 = puVar8;
  ppuStack_270 = (undefined **)0xc2000000;
  pcStack_268 = FUN_105b67158;
  pcStack_260 = (code *)&UNK_1108d8040;
  puStack_2d0 = puVar8;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = (code *)0x105b6716c;
  puStack_2b8 = &UNK_1108d8070;
  puStack_2a0 = puVar8;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x105b67180;
  puStack_288 = &UNK_1108d8070;
  ppuStack_2b0 = ppuStack_2f0;
  ppuStack_280 = ppuStack_2f0;
  ppuStack_258 = ppuStack_2f0;
  func_0x00010c0c0560(puVar2);
  __Block_object_dispose(&puStack_2f8,8);
  _objc_release(puVar2);
  func_0x00010c2b1b80(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(puVar2);
  ppuStack_2b0 = &puStack_278;
  puStack_278 = (undefined *)0x0;
  pcStack_268 = (code *)0x3032000000;
  pcStack_260 = FUN_105b664cc;
  ppuStack_258 = (undefined **)0x105b664dc;
  uStack_250 = 0;
  puStack_2d0 = puVar8;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_105b67194;
  puStack_2b8 = &UNK_1108d8070;
  puStack_2a0 = puVar8;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x105b671ec;
  puStack_288 = &UNK_1108d8070;
  ppuStack_280 = ppuStack_2b0;
  ppuStack_270 = ppuStack_2b0;
  func_0x00010c0c0560(puVar2);
  puVar8 = ppuStack_270[5];
  _objc_retain();
  __Block_object_dispose(&puStack_278,8);
  _objc_release(uStack_250);
  _objc_release(puVar2);
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c2adcc0(puVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar9 = puVar21;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000107cf92c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126c21e8;
  _objc_alloc();
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01b6a0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar19);
  _objc_release(puVar13);
  _objc_release(puVar12);
  ppuStack_240 = &PTR____CFConstantStringClassReference_110f42058;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_248 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_238 = &PTR____CFConstantStringClassReference_110f42078;
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_208 = puVar12;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_230 = &PTR____CFConstantStringClassReference_110f41858;
  puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_200 = puVar13;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110f42d78;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_1e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3070;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110e02998;
  puVar15 = puVar7;
  puStack_1f8 = puVar14;
  if (puVar7 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_210 = &PTR____CFConstantStringClassReference_110eb5858;
  puVar22 = (undefined *)puStack_320[5];
  puVar16 = puVar22;
  puStack_1e0 = puVar15;
  if (puVar22 == (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1d8 = puVar16;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar22 == (undefined *)0x0) {
    _objc_release(puVar16);
  }
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar21);
  _objc_release(puVar2);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_328,8);
  _objc_release(uStack_300);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  ___stack_chk_fail();
  lVar18 = 8;
  __Block_object_dispose(&uStack_328);
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 105b65e08; end: 105b664cb; -[SCFriendsFeedItemImpressionTracker _getImpressionLoggingDictWithViewModel:forRowAtIndex:] */

void FUN_105b65e08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  code *pcStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_105b664cc;
  uStack_1b8 = 0x105b664dc;
  uStack_1b0 = 0;
  lVar14 = param_3;
  func_0x00010bf96da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x00010c0c0020();
  _objc_release(lVar14);
  _objc_retain(param_3);
  ppuStack_120 = &puStack_128;
  puStack_128 = (undefined *)0x0;
  pcStack_118 = (code *)0x3032000000;
  pcStack_110 = FUN_105b664cc;
  ppuStack_108 = (undefined **)0x105b664dc;
  uStack_100 = 0;
  lVar14 = param_3;
  func_0x000105bb5a48();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000105bb5c04(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar4;
  uStack_178 = 0xc2000000;
  pcStack_170 = (code *)0x105b67078;
  puStack_168 = &UNK_1108d80a0;
  ppuStack_158 = &puStack_128;
  _objc_retain(lVar14);
  puStack_150 = puVar4;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105b670a8;
  puStack_138 = &UNK_1108d8070;
  puStack_1a8 = puVar4;
  ppuStack_1a0 = (undefined **)0xc2000000;
  uStack_198 = 0x105b67100;
  puStack_190 = &UNK_1108d8070;
  ppuStack_188 = &puStack_128;
  ppuStack_160 = (undefined **)lVar14;
  ppuStack_130 = &puStack_128;
  func_0x00010c0c0560(lVar1);
  puVar2 = ppuStack_120[5];
  _objc_retain();
  _objc_release(ppuStack_160);
  _objc_release(lVar1);
  _objc_release(lVar14);
  __Block_object_dispose(&puStack_128,8);
  _objc_release(uStack_100);
  _objc_release(param_3);
  lVar14 = param_3;
  func_0x000105bb5c04(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2140;
  _objc_opt_new();
  func_0x00010c2b1a60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(lVar14);
  ppuStack_1a0 = &puStack_1a8;
  puStack_1a8 = (undefined *)0x0;
  uVar16 = 0x2020000000;
  uStack_198 = 0x2020000000;
  puStack_190 = (undefined *)0x0;
  puStack_128 = puVar4;
  ppuStack_120 = (undefined **)0xc2000000;
  pcStack_118 = FUN_105b67158;
  pcStack_110 = (code *)&UNK_1108d8040;
  puStack_180 = puVar4;
  uStack_178 = 0xc2000000;
  pcStack_170 = (code *)0x105b6716c;
  puStack_168 = &UNK_1108d8070;
  puStack_150 = puVar4;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105b67180;
  puStack_138 = &UNK_1108d8070;
  ppuStack_160 = ppuStack_1a0;
  ppuStack_130 = ppuStack_1a0;
  ppuStack_108 = ppuStack_1a0;
  func_0x00010c0c0560(lVar14);
  __Block_object_dispose(&puStack_1a8,8);
  _objc_release(lVar14);
  func_0x00010c2b1b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5900(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_retain(lVar14);
  ppuStack_160 = &puStack_128;
  puStack_128 = (undefined *)0x0;
  pcStack_118 = (code *)0x3032000000;
  pcStack_110 = FUN_105b664cc;
  ppuStack_108 = (undefined **)0x105b664dc;
  uStack_100 = 0;
  puStack_180 = puVar4;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105b67194;
  puStack_168 = &UNK_1108d8070;
  puStack_150 = puVar4;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105b671ec;
  puStack_138 = &UNK_1108d8070;
  ppuStack_130 = ppuStack_160;
  ppuStack_120 = ppuStack_160;
  func_0x00010c0c0560(lVar14);
  puVar4 = ppuStack_120[5];
  _objc_retain();
  __Block_object_dispose(&puStack_128,8);
  _objc_release(uStack_100);
  _objc_release(lVar14);
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c2adcc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x000107cf92c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126c21e8;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c01b6a0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar16);
  _objc_release(puVar9);
  _objc_release(puVar8);
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f42058;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f8 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f42078;
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_b8 = puVar8;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f41858;
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_b0 = puVar9;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f42d78;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3070;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e02998;
  puVar11 = puVar2;
  puStack_a8 = puVar10;
  if (puVar2 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110eb5858;
  puVar15 = (undefined *)puStack_1d0[5];
  puVar12 = puVar15;
  puStack_90 = puVar11;
  if (puVar15 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar12;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar15 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar14);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(uStack_1b0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  lVar14 = 8;
  __Block_object_dispose(&uStack_1d8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 105b664cc; end: 105b664e3;  */

void FUN_105b664cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b664e4; end: 105b66523;  */

void FUN_105b664e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b66524; end: 105b66527;  */

void FUN_105b66524(void)

{
  return;
}


