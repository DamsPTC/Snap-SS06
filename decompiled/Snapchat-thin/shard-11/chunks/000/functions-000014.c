/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080420c0; end: 108042287; -[SCCustomStoriesNetworkRequester updateCustomStoryWithCustomStoryId:currentVersion:participantsToRemove:completionQueue:completion:] */

void FUN_1080420c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108042288;
  puStack_90 = &UNK_110a18720;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_88 = param_3;
  uStack_70 = param_4;
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_opt_class(PTR_PTR_1126d8ef0);
  _objc_copyWeak(auStack_b0,auStack_68);
  _objc_retain(param_7);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108042288; end: 1080422f3;  */

void FUN_108042288(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be8cd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080422f4; end: 1080423f7;  */

void FUN_1080422f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar1);
  _objc_release(lVar1);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar1 = param_5;
    lVar2 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080423f8; end: 10804242f; -[SCCustomStoriesNetworkRequester removeMembersFromCustomStory:currentVersion:membersToRemove:completionQueue:completion:] */

void FUN_1080423f8(void)

{
  func_0x00010bed6940();
  return;
}



/* Entry: 108042430; end: 108042543; -[SCCustomStoriesNetworkRequester addModeratorForSharedStory:currentVersion:newModeratorId:completionQueue:completion:] */

void FUN_108042430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar7 = 0;
  uVar8 = 0;
  uVar4 = param_3;
  puVar3 = puVar1;
  func_0x00010bed6940(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(puVar3);
  _objc_retain(uVar4);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar6 = 0;
  uVar9 = 0;
  uVar5 = uVar4;
  puVar3 = puVar2;
  func_0x00010bed6940(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  _objc_retain(puVar3);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar4 = uVar5;
  func_0x00010bed6940(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar6);
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(uVar4);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = 0;
  func_0x00010bed6940(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  func_0x00010be8cd20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108042544; end: 108042657; -[SCCustomStoriesNetworkRequester demoteModeratorForSharedStory:currentVersion:moderatorIdToDemote:completionQueue:completion:] */

void FUN_108042544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = 0;
  uVar8 = 0;
  uVar7 = param_3;
  puVar3 = puVar1;
  func_0x00010bed6940(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar8);
  _objc_retain(puVar3);
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar5 = 0;
  uVar6 = 0;
  uVar9 = 0;
  uVar4 = uVar7;
  func_0x00010bed6940(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar9);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar7 = 0;
  func_0x00010bed6940(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  func_0x00010be8cd20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108042658; end: 10804276b; -[SCCustomStoriesNetworkRequester banParticipantForSharedStory:currentVersion:participantToBan:completionQueue:completion:] */

void FUN_108042658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar3 = param_3;
  func_0x00010bed6940(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = 0;
  func_0x00010bed6940(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  func_0x00010be8cd20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10804276c; end: 10804287f; -[SCCustomStoriesNetworkRequester unbanParticipantForSharedStory:currentVersion:participantToUnban:completionQueue:completion:] */

void FUN_10804276c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = 0;
  func_0x00010bed6940(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar3);
  func_0x00010be8cd20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108042880; end: 10804291f; -[SCCustomStoriesNetworkRequester _removeParticipantsRequestWithCustomStoryId:currentVersion:participantsToRemove:accessToken:] */

void FUN_108042880(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  func_0x00010be8cd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108042920; end: 108042b3b; -[SCCustomStoriesNetworkRequester _removeParticipantsWithCustomStoryId:currentVersion:participantsToRemove:] */

void FUN_108042920(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126d8ef8;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar3);
  _objc_release(uVar8);
  lVar4 = param_3;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4760(puVar3);
  _objc_release(lVar4);
  func_0x00010c1a4be0(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_5);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea560(puVar3);
  _objc_release(puVar5);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_5);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar4 = param_5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_5);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        puVar5 = puVar3;
        func_0x00010c12f440();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100576e9c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar8);
        _objc_release(puVar5);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar4 = param_5;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  plVar2 = plStack_120;
  lVar4 = lStack_128;
  uVar1 = uStack_130;
  _objc_retain(puVar6);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  _objc_retain(lVar4);
  _objc_retain(plVar2);
  _objc_initWeak(auStack_1b0,param_3);
  uVar9 = *(undefined8 *)(param_3 + 8);
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_108042db8;
  puStack_1f8 = &UNK_110a18750;
  _objc_copyWeak(auStack_1c0,auStack_1b0);
  _objc_retain(puVar6);
  puStack_1f0 = (undefined1 *)puVar6;
  puStack_1b8 = puVar7;
  _objc_retain(uVar8);
  uStack_1e8 = uVar8;
  _objc_retain(param_6);
  uStack_1e0 = param_6;
  _objc_retain(param_7);
  uStack_1d8 = param_7;
  _objc_retain(param_8);
  uStack_1d0 = param_8;
  _objc_retain(uVar1);
  uStack_1c8 = uVar1;
  _objc_opt_class(PTR_PTR_1126d8ef0);
  _objc_copyWeak(auStack_218,auStack_1b0);
  _objc_retain(plVar2);
  func_0x00010c0b77a0(uVar9);
  _objc_release(plVar2);
  _objc_destroyWeak(auStack_218);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1e8);
  _objc_release(puStack_1f0);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(plVar2);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar6);
  return;
}



/* Entry: 108042b3c; end: 108042db7; -[SCCustomStoriesNetworkRequester _updateCustomStoryWithCustomStoryId:currentVersion:membersToPromoteAsModerator:moderatorsToDemote:membersToRemove:membersToBan:membersToUnban:completionQueue:completion:] */

void FUN_108042b3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108042db8;
  puStack_c8 = &UNK_110a18750;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_3);
  uStack_c0 = param_3;
  uStack_88 = param_4;
  _objc_retain(param_5);
  uStack_b8 = param_5;
  _objc_retain(param_6);
  uStack_b0 = param_6;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_9);
  uStack_98 = param_9;
  _objc_opt_class(PTR_PTR_1126d8ef0);
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(param_11);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108042db8; end: 108042e33;  */

void FUN_108042db8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf53a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108042e34; end: 108042f77;  */

void FUN_108042e34(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(puVar1);
  _objc_release(lVar2);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar2 = param_5;
    lVar3 = 0;
  }
  else {
    lVar2 = 0;
    lVar3 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar2,param_3,lVar3);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108042f78; end: 10804304b; -[SCCustomStoriesNetworkRequester _createUpdateCustomStoryGroupRequest:currentVersion:membersToPromoteAsModerator:moderatorsToDemote:membersToRemove:membersToBan:membersToUnban:accessToken:] */

void FUN_108042f78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000008;
  
  _objc_retain(in_stack_00000008);
  func_0x00010bdf5380(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000008);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804304c; end: 10804377b; -[SCCustomStoriesNetworkRequester _createUpdateCustomStoryGroupRequest:currentVersion:membersToPromoteAsModerator:moderatorsToDemote:membersToRemove:membersToBan:membersToUnban:] */

void FUN_10804304c(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_4f8 [8];
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  code *pcStack_4e0;
  undefined *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined1 auStack_4c8 [8];
  undefined4 uStack_4c0;
  undefined1 uStack_4bc;
  undefined1 auStack_4b8 [8];
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [128];
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  lVar3 = param_5;
  lVar9 = param_6;
  lVar10 = param_7;
  _objc_retain(param_3);
  uVar8 = (undefined1)lVar3;
  uVar7 = SUB84(puVar4,0);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126d8ef8;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar13,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar2);
  _objc_release(uVar13);
  lVar3 = param_3;
  func_0x000100576e9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4760(puVar2);
  _objc_release(lVar3);
  func_0x00010c1a4be0(puVar2);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    lVar3 = param_5;
    func_0x00010bf529e0();
    iVar1 = (int)lVar3;
  }
  if (param_6 != 0) {
    lVar3 = param_6;
    func_0x00010bf529e0();
    iVar1 = iVar1 + (int)lVar3;
  }
  if (0 < iVar1) {
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar4;
    func_0x00010c1c8e60(puVar2);
    _objc_release(puVar4);
    if (param_5 != 0) {
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      _objc_retain(param_5);
      param_4 = &uStack_330;
      uVar7 = SUB84(auStack_f0,0);
      uVar8 = 0x10;
      lVar3 = param_5;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar11 = *plStack_320;
        do {
          lVar12 = 0;
          do {
            if (*plStack_320 != lVar11) {
              _objc_enumerationMutation(param_5);
            }
            uVar13 = *(undefined8 *)(lStack_328 + lVar12 * 8);
            puVar5 = PTR_PTR_1126d8f00;
            _objc_opt_new(PTR_PTR_1126d8f00);
            func_0x000100576e9c(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar5);
            _objc_release(uVar13);
            func_0x00010c1c5b20(puVar5);
            puVar6 = puVar2;
            func_0x00010c0d03c0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar6);
            _objc_release(puVar5);
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          param_4 = &uStack_330;
          uVar7 = SUB84(auStack_f0,0);
          uVar8 = 0x10;
          lVar3 = param_5;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(param_5);
    }
    if (param_6 != 0) {
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      _objc_retain(param_6);
      param_4 = &uStack_370;
      uVar7 = SUB84(auStack_170,0);
      uVar8 = 0x10;
      lVar3 = param_6;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar11 = *plStack_360;
        do {
          lVar12 = 0;
          do {
            if (*plStack_360 != lVar11) {
              _objc_enumerationMutation(param_6);
            }
            uVar13 = *(undefined8 *)(lStack_368 + lVar12 * 8);
            puVar5 = PTR_PTR_1126d8f00;
            _objc_opt_new(PTR_PTR_1126d8f00);
            func_0x000100576e9c(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar5);
            _objc_release(uVar13);
            func_0x00010c1c5b20(puVar5);
            puVar6 = puVar2;
            func_0x00010c0d03c0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar6);
            _objc_release(puVar5);
            lVar12 = lVar12 + 1;
          } while (lVar3 != lVar12);
          param_4 = &uStack_370;
          uVar7 = SUB84(auStack_170,0);
          uVar8 = 0x10;
          lVar3 = param_6;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(param_6);
    }
  }
  lVar3 = param_8;
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar3 != 0) {
    func_0x00010bf529e0(param_8);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f0c0(puVar2);
    _objc_release(puVar5);
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    _objc_retain(param_8);
    param_4 = &uStack_3b0;
    uVar7 = SUB84(auStack_1f0,0);
    uVar8 = 0x10;
    lVar3 = param_8;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_3a0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_3a0 != lVar11) {
            _objc_enumerationMutation(param_8);
          }
          uVar13 = *(undefined8 *)(lStack_3a8 + lVar12 * 8);
          puVar5 = puVar2;
          func_0x00010bf15860(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100576e9c(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar13);
          _objc_release(puVar5);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        param_4 = &uStack_3b0;
        uVar7 = SUB84(auStack_1f0,0);
        uVar8 = 0x10;
        lVar3 = param_8;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_8);
  }
  lVar3 = param_9;
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar3 != 0) {
    func_0x00010bf529e0(param_9);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b420(puVar2);
    _objc_release(puVar5);
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    _objc_retain(param_9);
    param_4 = &uStack_3f0;
    uVar7 = SUB84(auStack_270,0);
    uVar8 = 0x10;
    lVar3 = param_9;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_3e0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_3e0 != lVar11) {
            _objc_enumerationMutation(param_9);
          }
          uVar13 = *(undefined8 *)(lStack_3e8 + lVar12 * 8);
          puVar5 = puVar2;
          func_0x00010c27f440(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100576e9c(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar13);
          _objc_release(puVar5);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        param_4 = &uStack_3f0;
        uVar7 = SUB84(auStack_270,0);
        uVar8 = 0x10;
        lVar3 = param_9;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_9);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_7 != 0) {
    func_0x00010bf529e0(param_7);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea560(puVar2);
    _objc_release(puVar5);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    _objc_retain(param_7);
    param_4 = &uStack_430;
    uVar7 = SUB84(auStack_2f0,0);
    uVar8 = 0x10;
    lVar3 = param_7;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_420;
      do {
        lVar12 = 0;
        do {
          if (*plStack_420 != lVar11) {
            _objc_enumerationMutation(param_7);
          }
          uVar13 = *(undefined8 *)(lStack_428 + lVar12 * 8);
          puVar5 = puVar2;
          func_0x00010c12f440(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100576e9c(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar13);
          _objc_release(puVar5);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        param_4 = &uStack_430;
        uVar7 = SUB84(auStack_2f0,0);
        uVar8 = 0x10;
        lVar3 = param_7;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_7);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(lVar9);
  _objc_retain(lVar10);
  _objc_initWeak(auStack_4b8,param_3);
  uVar13 = *(undefined8 *)(param_3 + 8);
  puStack_4f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_4e8 = 0xc2000000;
  pcStack_4e0 = FUN_108043924;
  puStack_4d8 = &UNK_110a18780;
  _objc_copyWeak(auStack_4c8,auStack_4b8);
  _objc_retain(param_4);
  puStack_4d0 = param_4;
  uStack_4c0 = uVar7;
  uStack_4bc = uVar8;
  _objc_opt_class(PTR_PTR_1126d8f08);
  _objc_copyWeak(auStack_4f8,auStack_4b8);
  _objc_retain(lVar10);
  func_0x00010c0b77a0(uVar13);
  _objc_release(lVar10);
  _objc_destroyWeak(auStack_4f8);
  _objc_release(puStack_4d0);
  _objc_destroyWeak(auStack_4c8);
  _objc_destroyWeak(auStack_4b8);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_4);
  return;
}



/* Entry: 10804377c; end: 108043923; -[SCCustomStoriesNetworkRequester updateMembershipWithCustomStoryId:updateMembershipType:enableAutoSaveToMemories:completionQueue:completion:] */

void FUN_10804377c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108043924;
  puStack_88 = &UNK_110a18780;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  uStack_70 = param_4;
  uStack_6c = param_5;
  _objc_opt_class(PTR_PTR_1126d8f08);
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(param_7);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108043924; end: 108043993;  */

void FUN_108043924(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bedb7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108043994; end: 108043a7f;  */

void FUN_108043994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar1);
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_5,param_3,param_4)
  ;
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108043a80; end: 108043ba7; -[SCCustomStoriesNetworkRequester _updateMembershipRequestWithCustomStoryId:updateMembershipType:enableAutoSaveToMemories:accessToken:] */

void FUN_108043a80(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8f10;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000100576e9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a4760(puVar1);
  _objc_release(uVar2);
  func_0x00010c21c660(puVar1);
  if (param_4 == 4) {
    if (param_5 == 0) {
      func_0x00010c18e680(puVar1);
    }
    else {
      func_0x00010c194a00();
    }
  }
  puVar3 = puVar1;
  func_0x00010059c104(puVar1,param_6,&PTR____CFConstantStringClassReference_110ecff58,
                      &PTR____CFConstantStringClassReference_110ecffb8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108043ba8; end: 108043d3f; -[SCCustomStoriesNetworkRequester deleteCustomStoryWithCustomStoryId:completionQueue:completion:] */

void FUN_108043ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108043d40;
  puStack_80 = &UNK_11094a660;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_opt_class(PTR_PTR_1126d8f18);
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_5);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108043d40; end: 108043da7;  */

void FUN_108043d40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdfa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108043da8; end: 108043eb7;  */

void FUN_108043da8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  _objc_release(param_5);
  func_0x00010be56480(lVar1);
  _objc_release(lVar1);
  if ((param_4 == 0) && (param_5 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252ee0();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1 == 0x194);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108043eb8; end: 108043fa3; -[SCCustomStoriesNetworkRequester _deleteRequestWithCustomStoryId:accessToken:] */

void FUN_108043eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8f20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000100576e9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a4760(puVar1);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010059c104(puVar1,param_4,&PTR____CFConstantStringClassReference_110ecff58,
                      &PTR____CFConstantStringClassReference_110ecff78,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108043fa4; end: 10804414f; -[SCCustomStoriesNetworkRequester fetchCustomStoryWithCustomStoryId:completionQueue:completion:] */

void FUN_108043fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108044150;
  puStack_80 = &UNK_11094a660;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_opt_class(PTR_PTR_1126d8f28);
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108044150; end: 1080441b7;  */

void FUN_108044150(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be22260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080441b8; end: 10804427b;  */

void FUN_1080441b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(lVar2);
  uVar1 = param_5;
  if (param_4 != 0) {
    uVar1 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10804427c; end: 108044367; -[SCCustomStoriesNetworkRequester _getRequestWithCustomStoryId:accessToken:] */

void FUN_10804427c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8f30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000100576e9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a4760(puVar1);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010059c104(puVar1,param_4,&PTR____CFConstantStringClassReference_110ecff58,
                      &PTR____CFConstantStringClassReference_110ecffd8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108044368; end: 108044507; -[SCCustomStoriesNetworkRequester listUserCustomStoryGroupsWithSnapchatterId:isPublic:completionQueue:completion:] */

void FUN_108044368(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108044508;
  puStack_88 = &UNK_110a18840;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  uStack_70 = param_4;
  _objc_opt_class(PTR_PTR_1126d8f38);
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(param_6);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108044508; end: 108044593;  */

void FUN_108044508(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100576e9c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be4c640(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108044594; end: 108044677;  */

void FUN_108044594(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar2);
  _objc_release(lVar2);
  if (param_4 == 0) {
    lVar2 = 0;
    uVar1 = param_5;
  }
  else {
    uVar1 = 0;
    lVar2 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108044678; end: 10804475f; -[SCCustomStoriesNetworkRequester _listUserCustomStoryGroupsRequestWithSnapchatterId:accessToken:isPublic:] */

void FUN_108044678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8f40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  func_0x00010c1ec400(puVar1);
  _objc_release(param_3);
  func_0x00010c1b3a20(puVar1);
  puVar3 = puVar1;
  func_0x00010059c104(puVar1,param_4,&PTR____CFConstantStringClassReference_110ecff58,
                      &PTR____CFConstantStringClassReference_110ed0058,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108044760; end: 1080449db; -[SCCustomStoriesNetworkRequester _addBlockedUsersExcetpionsRequestWithStoryId:snapchatterIds:accessToken:] */

void FUN_108044760(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d8f48;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar6,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar2);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c165100(puVar2);
  _objc_release(puVar3);
  lVar4 = param_3;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar6 = *(undefined8 *)(lVar13 * 8);
      func_0x000100576e9c(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar6);
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  puVar7 = PTR_PTR_1126d8f50;
  _objc_opt_new();
  func_0x00010c1a4760();
  func_0x00010c1cca00(puVar7);
  puVar8 = puVar2;
  func_0x00010bef7220(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar8);
  ppuVar9 = &PTR____CFConstantStringClassReference_110ecff58;
  ppuVar10 = &PTR____CFConstantStringClassReference_110ed0018;
  uVar6 = 0;
  puVar8 = puVar2;
  func_0x00010059c104(puVar2,param_5,&PTR____CFConstantStringClassReference_110ecff58,
                      &PTR____CFConstantStringClassReference_110ed0018,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar10);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  _objc_initWeak(auStack_198,param_3);
  uVar12 = *(undefined8 *)(param_3 + 8);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_108044bb0;
  puStack_1b8 = &UNK_110a188a0;
  _objc_copyWeak(auStack_1a0,auStack_198);
  _objc_retain(ppuVar9);
  ppuStack_1b0 = ppuVar9;
  _objc_retain(ppuVar10);
  ppuStack_1a8 = ppuVar10;
  _objc_opt_class(PTR_PTR_1126d8f58);
  _objc_copyWeak(auStack_1d8,auStack_198);
  _objc_retain(ppuVar9);
  _objc_retain(param_6);
  func_0x00010c0b77a0(uVar12);
  _objc_release(param_6);
  _objc_release(ppuVar9);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(ppuStack_1a8);
  _objc_release(ppuStack_1b0);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 1080449dc; end: 108044baf; -[SCCustomStoriesNetworkRequester addSharedStoryBlockedUsersExceptionsWithStoryId:snapchatterIds:completionQueue:completion:] */

void FUN_1080449dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108044bb0;
  puStack_88 = &UNK_110a188a0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_opt_class(PTR_PTR_1126d8f58);
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0b77a0(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108044bb0; end: 108044c17;  */

void FUN_108044bb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc6180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108044c18; end: 108044d1b;  */

void FUN_108044c18(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar1);
  _objc_release(lVar1);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar1 = param_5;
    lVar2 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = param_4;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108044d1c; end: 108044d6f; -[SCCustomStoriesNetworkRequester .cxx_destruct] */

void FUN_108044d1c(long param_1)

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



/* Entry: 108044d70; end: 108044d97;  */

undefined ** FUN_108044d70(long param_1)

{
  if (param_1 - 1U < 10) {
    return (undefined **)(&PTR_PTR_110a18990)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 108044d98; end: 10804521b;  */

undefined ***
FUN_108044d98(undefined **param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **unaff_x21;
  undefined **unaff_x23;
  undefined **ppuVar12;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined ***pppuStack_260;
  undefined **ppuStack_258;
  ulong uStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined ***pppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *apuStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uStack_1f8 = param_3;
  _objc_retain(param_3);
  ppuVar11 = param_1;
  FUN_1084e73c8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_218 = param_1;
  FUN_1084dc8b8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = (undefined ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  ppuStack_208 = param_1;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar12 = ppuVar11;
  ppuStack_210 = ppuVar11;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar11 = (undefined **)*puStack_1a0;
    unaff_x23 = &PTR____CFConstantStringClassReference_110ed03b8;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != ppuVar11) {
          _objc_enumerationMutation(ppuVar12);
        }
        unaff_x27 = *(undefined ***)(lStack_1a8 + (long)unaff_x21 * 8);
        unaff_x28 = unaff_x27;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = unaff_x28;
        func_0x00010c08fa60();
        _objc_release(unaff_x28);
        unaff_x26 = (undefined **)0x0;
        if (ppuVar10 != (undefined **)0x0) {
          if ((param_2 & 1) == 0) {
            unaff_x26 = unaff_x27;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = unaff_x26;
            func_0x00010bf529e0();
            _objc_release(unaff_x26);
            unaff_x28 = (undefined **)0x0;
            if (ppuVar10 == (undefined **)0x0) goto LAB_108044f54;
          }
          unaff_x26 = unaff_x27;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = ppuStack_208;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x26);
          if (unaff_x28 == (undefined **)0x0) {
            unaff_x26 = unaff_x27;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(pppuVar4);
            _objc_release(unaff_x26);
          }
        }
LAB_108044f54:
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (ppuVar5 != unaff_x21);
      ppuVar5 = ppuVar12;
      func_0x00010bf52a60();
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar12);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  ppuVar6 = ppuStack_208;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_1f0;
  ppuVar10 = apuStack_170;
  ppuVar9 = (undefined **)0x10;
  ppuStack_200 = ppuVar6;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar12 = (undefined **)*puStack_1e0;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1e0 != ppuVar12) {
          _objc_enumerationMutation(ppuStack_200);
        }
        ppuVar10 = *(undefined ***)(lStack_1e8 + (long)ppuVar11 * 8);
        ppuVar5 = ppuVar10;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppuVar5;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = unaff_x28;
        func_0x00010c0720c0();
        _objc_release(unaff_x28);
        _objc_release(ppuVar5);
        ppuVar5 = ppuVar10;
        if ((int)unaff_x21 == 0) {
          unaff_x21 = ppuVar10;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = ppuStack_210;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x26;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = unaff_x28;
          func_0x00010bf529e0();
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
          _objc_release(unaff_x21);
          unaff_x23 = (undefined **)0x0;
          if (ppuVar9 != (undefined **)0x0) {
            func_0x00010c27dd80();
            unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            FUN_108044d70();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = unaff_x21;
            ppuStack_220 = ppuVar5;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar5;
            goto LAB_10804511c;
          }
        }
        else {
          if ((param_2 & 1) == 0) {
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(pppuVar4);
          }
          else {
            func_0x00010c27dd80();
            unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            FUN_108044d70();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = unaff_x21;
            ppuStack_220 = ppuVar5;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = ppuVar5;
LAB_10804511c:
            _objc_release(ppuVar5);
            func_0x00010c11ac00(ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(pppuVar4);
            _objc_release(ppuVar10);
            ppuVar10 = ppuVar9;
          }
          _objc_release(ppuVar10);
          unaff_x26 = ppuVar10;
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar6 != ppuVar11);
      ppuVar5 = &puStack_1f0;
      ppuVar10 = apuStack_170;
      ppuVar9 = (undefined **)0x10;
      ppuVar6 = ppuStack_200;
      func_0x00010bf52a60();
      unaff_x27 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuStack_200);
  pppuVar7 = pppuVar4;
  func_0x00010bf51e00();
  _objc_release(pppuVar4);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_210);
  _objc_release(uStack_1f8);
  ppuVar6 = ppuStack_218;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar7);
    return pppuVar7;
  }
  ___stack_chk_fail();
  ppuVar3 = ppuStack_210;
  ppuVar2 = ppuStack_218;
  ppuVar1 = ppuStack_220;
  pcStack_228 = FUN_10804521c;
  ppuStack_280 = unaff_x28;
  ppuStack_278 = unaff_x27;
  ppuStack_270 = unaff_x26;
  ppuStack_268 = ppuVar12;
  pppuStack_260 = pppuVar4;
  ppuStack_258 = unaff_x23;
  uStack_250 = param_2;
  ppuStack_248 = unaff_x21;
  ppuStack_240 = ppuVar11;
  pppuStack_238 = pppuVar7;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar9);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  puStack_288 = PTR_PTR_1126fc310;
  pppuVar4 = &ppuStack_290;
  ppuStack_290 = ppuVar6;
  _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined ***)0x0) {
    _objc_retain(ppuVar5);
    ppuVar11 = pppuVar4[1];
    pppuVar4[1] = ppuVar5;
    _objc_release(ppuVar11);
    _objc_retain(ppuVar10);
    ppuVar11 = pppuVar4[2];
    pppuVar4[2] = ppuVar10;
    _objc_release(ppuVar11);
    _objc_retain(ppuVar9);
    ppuVar11 = pppuVar4[3];
    pppuVar4[3] = ppuVar9;
    _objc_release(ppuVar11);
    _objc_retain(param_6);
    ppuVar11 = pppuVar4[4];
    pppuVar4[4] = param_6;
    _objc_release(ppuVar11);
    _objc_retain(param_7);
    ppuVar11 = pppuVar4[5];
    pppuVar4[5] = param_7;
    _objc_release(ppuVar11);
    _objc_retain(param_8);
    ppuVar11 = pppuVar4[6];
    pppuVar4[6] = param_8;
    _objc_release(ppuVar11);
    _objc_retain(ppuVar1);
    ppuVar11 = pppuVar4[7];
    pppuVar4[7] = ppuVar1;
    _objc_release(ppuVar11);
    _objc_retain(ppuVar2);
    ppuVar11 = pppuVar4[8];
    pppuVar4[8] = ppuVar2;
    _objc_release(ppuVar11);
    _objc_retain(ppuVar3);
    ppuVar11 = pppuVar4[9];
    pppuVar4[9] = ppuVar3;
    _objc_release(ppuVar11);
    ppuVar11 = (undefined **)PTR_PTR_1126ae790;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    ppuVar12 = pppuVar4[10];
    pppuVar4[10] = ppuVar11;
    _objc_release(ppuVar12);
    _objc_release(puVar8);
    ppuVar11 = (undefined **)PTR_PTR_1126ae720;
    _objc_retain(ppuVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = pppuVar4[0xb];
    pppuVar4[0xb] = ppuVar11;
    _objc_release(ppuVar12);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar9);
  _objc_release(ppuVar10);
  _objc_release(ppuVar5);
  return pppuVar4;
}



/* Entry: 10804521c; end: 1080454df; -[SCCustomStoriesDataMutator initWithCustomStoriesNetworkRequester:customStoriesDataSyncer:blockedSnapchatterFetcher:snapchatterFetcher:userSession:docObjectContext:storiesBlizzardLogger:grapheneMetricsEmitter:circumstanceEngine:] */

undefined8 *
FUN_10804521c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fc310;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_11);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_11);
  }
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



/* Entry: 1080454e0; end: 10804551f;  */

void FUN_1080454e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110ed0458,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 108045520; end: 10804569b; -[SCCustomStoriesDataMutator removeCustomStoryWithPublicationId:completionQueue:completionBlock:] */

void FUN_108045520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c109e40(*(undefined8 *)(param_1 + 0x60));
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10804569c;
  puStack_80 = &UNK_1108a0570;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_5);
  ppuVar1 = &puStack_98;
  uStack_68 = param_5;
  _objc_retainBlock(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ba20(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804569c; end: 1080456e7;  */

void FUN_10804569c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080456e8; end: 1080456fb; -[SCCustomStoriesDataMutator removeCustomStoryFromDiskOnlyWithPublicationId:] */

void FUN_1080456e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8cbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeOrLeaveCustomStoryDidFini_112580c90,param_3,2,1,0,0);
  return;
}



/* Entry: 1080456fc; end: 1080458a7; -[SCCustomStoriesDataMutator leaveCustomStoryWithPublicationId:leaveByBlocking:isPendingMembership:completionQueue:completionBlock:] */

void FUN_1080456fc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c109e40(*(undefined8 *)(param_1 + 0x60));
  _objc_initWeak(auStack_68,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1080458a8;
  puStack_98 = &UNK_110a189e0;
  uStack_70 = param_4;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retainBlock(&puStack_b0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287a80(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1080458a8; end: 108045913;  */

void FUN_1080458a8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  if ((param_2 == 0) || (param_4 != 0)) {
    func_0x00010c252ee0(param_3);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108045914; end: 108045b9f; -[SCCustomStoriesDataMutator transferSharedStoryOwnership:currentOwnerId:newOwnerId:completionQueue:completion:] */

void FUN_108045914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108045bb8;
  puStack_d0 = &UNK_110a18a10;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c8 = param_3;
  _objc_retain(param_4);
  uStack_c0 = param_4;
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_5;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_f0,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_f0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108045ba0; end: 108045bb7;  */

void FUN_108045ba0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108045bb8; end: 108045c43;  */

void FUN_108045bb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_10805914c(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108045c44; end: 108045d0b;  */

void FUN_108045c44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea0f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x40), lVar1 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108045d0c;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x00010007380c(lVar2,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 108045d0c; end: 108045d1b;  */

void FUN_108045d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108045d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108045d1c; end: 108045edb; -[SCCustomStoriesDataMutator _sendTransferSharedStoryOwnershipRequest:originalSharedStory:currentOwnerId:newOwnerId:completionQueue:completion:] */

void FUN_108045d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c298be0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c27a360(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108045edc; end: 108046023;  */

void FUN_108045edc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be27ce0(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 108046024; end: 108046053;  */

void FUN_108046024(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108046034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108046054; end: 1080463ef; -[SCCustomStoriesDataMutator updateCustomStoryWithMetadata:numOfSnapchattersSelected:numOfGroupsSelected:completionQueue:successBlock:failureBlock:] */

void FUN_108046054(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,ulong param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  func_0x00010c288340();
  if ((uVar2 & 1) == 0) {
LAB_1080460f4:
    uVar2 = param_3;
    func_0x00010c288340();
    if (((uint)uVar2 >> 4 & 1) == 0) {
      uStack_128 = 0;
      uStack_118 = 0x3032000000;
      pcStack_110 = FUN_108045ba0;
      uStack_108 = 0x108045bb0;
      uStack_100 = 0;
      puStack_120 = &uStack_128;
      _objc_initWeak(auStack_130,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_108046560;
      puStack_148 = &UNK_110947df8;
      puStack_138 = &uStack_128;
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      uStack_140 = param_3;
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      _objc_retain(param_8);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_178,auStack_130);
      uStack_170 = param_4;
      uStack_168 = param_5;
      _objc_retain(param_7);
      func_0x00010c0f8500(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_7);
      _objc_destroyWeak(auStack_178);
      _objc_release(param_3);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(uStack_140);
      _objc_destroyWeak(auStack_130);
      __Block_object_dispose(&uStack_128,8);
      uVar2 = uStack_100;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_108046484;
      puStack_b8 = &UNK_11085adb8;
      _objc_retain(param_3);
      puStack_f8 = puVar1;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_10804654c;
      puStack_e0 = &UNK_110842508;
      uStack_b0 = param_3;
      _objc_retain(param_7);
      uStack_d8 = param_7;
      func_0x00010c0f8500(uVar4);
      _objc_release(uVar4);
      _objc_release(uStack_d8);
      uVar2 = uStack_b0;
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010c28d2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_1080463f0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_1080460f4;
    if ((param_6 == 0) || (param_8 == 0)) goto LAB_10804637c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x108046440;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_8);
    uStack_80 = param_8;
    _objc_retain(param_3);
    uStack_88 = param_3;
    func_0x00010007380c(param_6,&puStack_a8);
    _objc_release(uStack_88);
    uVar2 = uStack_80;
  }
  _objc_release(uVar2);
LAB_10804637c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1080463f0; end: 108046483;  */

bool FUN_1080463f0(long param_1,int param_2)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60(param_1);
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x00010c27fd20(param_1);
  }
  _objc_release(param_1);
  return lVar1 - 1U < 0x1e;
}



/* Entry: 108046484; end: 10804654b;  */

void FUN_108046484(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11ac00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_1084dc184(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126d8f60;
  FUN_108509e24(PTR_PTR_1126d8f60,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar4[0x15] = 0;
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10804654c; end: 10804655f;  */

void FUN_10804654c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108046558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108046560; end: 1080466f7;  */

void FUN_108046560(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c11ac00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  FUN_108058a74(param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080466f8; end: 10804673b;  */

void FUN_1080466f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804673c; end: 108046a5f; -[SCCustomStoriesDataMutator _sendUpdateCustomStoryMetadataRequestWithMetadata:originalCustomStory:numOfSnapchattersSelected:numOfGroupsSelected:completionQueue:successBlock:failureBlock:] */

void FUN_10804673c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = param_3;
  func_0x00010c288340();
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (((uint)uVar1 >> 1 & 1) == 0) {
    func_0x00010c298be0();
    uVar1 = param_4;
    func_0x00010c1057e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c29ef80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_d0;
    _objc_copyWeak(puVar5,auStack_70);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uStack_c8 = param_5;
    uStack_c0 = param_6;
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    func_0x00010c284e00(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_3);
    uVar1 = param_4;
  }
  else {
    uVar1 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d200(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108046a60;
    puStack_a0 = &UNK_110a18ad0;
    puVar5 = auStack_78;
    _objc_copyWeak(puVar5,auStack_70);
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_7);
    uStack_90 = param_7;
    _objc_retain(param_8);
    uStack_88 = param_8;
    _objc_retain(param_9);
    uStack_80 = param_9;
    func_0x00010c287a80(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    uVar1 = uStack_98;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108046a60; end: 108046afb;  */

void FUN_108046a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27c60();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108046afc; end: 108046bcf;  */

void FUN_108046afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c28d520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be27ce0(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108046bd0; end: 108046e1f; -[SCCustomStoriesDataMutator removeParticipantsFromCustomStoryId:participants:completionQueue:completion:] */

void FUN_108046bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108046e20;
  puStack_c8 = &UNK_110947e28;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108046e20; end: 108046ea7;  */

void FUN_108046e20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_1080593c4(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108046ea8; end: 108046f6f;  */

void FUN_108046ea8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9fdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108046f70;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x00010007380c(lVar1,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 108046f70; end: 108046f7f;  */

void FUN_108046f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108046f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108046f80; end: 108047127; -[SCCustomStoriesDataMutator _sendRemoveParticipantsRequestWithCustomStoryId:originalCustomStory:participants:completionQueue:completion:] */

void FUN_108046f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c298be0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c12d160(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108047128; end: 10804726f;  */

void FUN_108047128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be27ce0(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 108047270; end: 10804729f;  */

void FUN_108047270(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108047280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1080472a0; end: 10804751b; -[SCCustomStoriesDataMutator createCustomStoryWithMetadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:completionQueue:successBlock:failureBlock:] */

void FUN_1080472a0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1080463f0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if ((param_8 != 0) && (param_10 != 0)) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10804751c;
      puStack_78 = &UNK_110849530;
      _objc_retain(param_10);
      lStack_70 = param_10;
      func_0x00010007380c(param_8,&puStack_90);
      _objc_release(lStack_70);
    }
  }
  else {
    _objc_initWeak(auStack_98,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_b8,auStack_98);
    uStack_b0 = param_4;
    uStack_a8 = param_5;
    uStack_a0 = param_6;
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010c0d42c0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_b8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10804751c; end: 10804752f;  */

void FUN_10804751c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804752c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,4);
  return;
}



/* Entry: 108047530; end: 108047703;  */

void FUN_108047530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126c24b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11be0();
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1057e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010be162a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29ef80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010be162a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d340(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdec9e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108047704; end: 1080478d7; -[SCCustomStoriesDataMutator _createCustomStoryHelperWithMetadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:completionQueue:successBlock:failureBlock:] */

void FUN_108047704(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010bf55a20(uVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1080478d8; end: 108047963;  */

void FUN_1080478d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27ae0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108047964; end: 108047a0b; -[SCCustomStoriesDataMutator updateLocalMyMostRecentPostTimestampWithCustomStoriesMetadata:] */

void FUN_108047964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108047a0c;
  puStack_30 = &UNK_11085adb8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_48,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108047a0c; end: 108047b4b;  */

void FUN_108047a0c(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar8 = *(long *)(param_2 + 0x20);
  _objc_retain(lVar8);
  puVar6 = auStack_d8;
  uVar7 = 0x10;
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        FUN_1084dd47c(param_1,param_3,*(undefined8 *)(lStack_118 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar6 = auStack_d8;
      uVar7 = 0x10;
      lVar2 = lVar8;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_108045ba0;
  uStack_1a0 = 0x108045bb0;
  uStack_198 = 0;
  puStack_1b8 = &uStack_1c0;
  _objc_initWeak(auStack_1c8,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_108047dc4;
  puStack_1e8 = &UNK_110947e28;
  puStack_1d0 = &uStack_1c0;
  _objc_retain(puVar5);
  puStack_1e0 = (undefined1 *)puVar5;
  _objc_retain(puVar6);
  uVar4 = *(undefined8 *)(param_3 + 0x50);
  puStack_1d8 = puVar6;
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar7);
  _objc_retain(in_x5);
  _objc_copyWeak(auStack_208,auStack_1c8);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(in_x6);
  func_0x00010c0f8500(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(in_x6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_208);
  _objc_release(in_x5);
  _objc_release(uVar7);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1e0);
  _objc_destroyWeak(auStack_1c8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(uStack_198);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 108047b4c; end: 108047dc3; -[SCCustomStoriesDataMutator addModeratorForSharedStory:newModeratorId:completionQueue:completion:failureBlock:] */

void FUN_108047b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108047dc4;
  puStack_c8 = &UNK_110947e28;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108047dc4; end: 108047e4b;  */

void FUN_108047dc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_1080599a8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108047e4c; end: 108047f13;  */

void FUN_108047e4c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9e7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108047f14;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x00010007380c(lVar2,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 108047f14; end: 108047f23;  */

void FUN_108047f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108047f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108047f24; end: 108047f93;  */

void FUN_108047f24(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 108047f94; end: 108048177; -[SCCustomStoriesDataMutator _sendAddModeratorRequestWithSharedStoryId:originalSharedStory:newModeratorId:completionQueue:completion:failureBlock:] */

void FUN_108047f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c298be0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010bef9d80(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108048178; end: 108048317;  */

void FUN_108048178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_80,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010be27ce0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108048318; end: 10804837b;  */

void FUN_108048318(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  else {
    func_0x00010c0a4660(*(undefined8 *)(lVar1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_10804836c;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,1);
LAB_10804836c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804837c; end: 1080483df;  */

void FUN_10804837c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080483e0; end: 10804862f; -[SCCustomStoriesDataMutator demoteModeratorForSharedStory:moderatorIdToDemote:completionQueue:completion:] */

void FUN_1080483e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108048630;
  puStack_c8 = &UNK_110947e28;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108048630; end: 1080486b7;  */

void FUN_108048630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_108059b74(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080486b8; end: 10804877f;  */

void FUN_1080486b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9ee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108048780;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x00010007380c(lVar1,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 108048780; end: 10804878f;  */

void FUN_108048780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804878c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108048790; end: 10804894b; -[SCCustomStoriesDataMutator _sendDemoteModeratorRequestWithSharedStoryId:originalSharedStory:moderatorIdToDemote:completionQueue:completion:] */

void FUN_108048790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c298be0(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bf6d7a0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804894c; end: 108048ad3;  */

void FUN_10804894c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_78,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010be27ce0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108048ad4; end: 108048b37;  */

void FUN_108048ad4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  else {
    func_0x00010c0a4660(*(undefined8 *)(lVar1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) goto LAB_108048b28;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,1);
LAB_108048b28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108048b38; end: 108048b4f;  */

void FUN_108048b38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108048b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 108048b50; end: 108048d9f; -[SCCustomStoriesDataMutator addSharedStoryBlockedUsersExceptionsWithStoryId:snapchatterIds:completionQueue:completion:] */

void FUN_108048b50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_108045ba0;
  uStack_80 = 0x108045bb0;
  uStack_78 = 0;
  puStack_98 = &uStack_a0;
  _objc_initWeak(auStack_a8,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108048da0;
  puStack_c8 = &UNK_110947e28;
  puStack_b0 = &uStack_a0;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108048da0; end: 108048e27;  */

void FUN_108048da0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1084dc184(param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_108059d40(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108048e28; end: 108048eef;  */

void FUN_108048e28(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9e7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108048ef0;
    puStack_30 = &UNK_110849530;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x00010007380c(lVar1,&puStack_48);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 108048ef0; end: 108048eff;  */

void FUN_108048ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108048efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108048f00; end: 10804908f; -[SCCustomStoriesDataMutator _sendAddSharedStoryBlockedUsersExceptionsRequestWithStoryId:originalSharedStory:snapchatterIds:completionQueue:completion:] */

void FUN_108048f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010befb420(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108049090; end: 1080491cf;  */

void FUN_108049090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be27c00(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 1080491d0; end: 1080491ff;  */

void FUN_1080491d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080491e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}


