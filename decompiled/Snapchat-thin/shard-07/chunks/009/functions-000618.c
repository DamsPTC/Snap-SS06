/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b8e1f8; end: 105b8e287;  */

void FUN_105b8e1f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b8e288; end: 105b8e3d3; -[SCFriendsFeedViewController _fetchAndSyncFriendsFeedWithConversationIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8e288(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_2 + _DAT_112731360);
  if (0x13 < uVar2 || (1L << (uVar2 & 0x3f) & 0xb9001U) == 0) {
    _CACurrentMediaTime();
    _objc_initWeak(auStack_48,param_2);
    uVar1 = *(undefined8 *)(param_2 + _DAT_112730ef0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = param_1;
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(param_4);
    uStack_50 = uVar2;
    func_0x00010bfa4e00(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105b8e3d4; end: 105b8e4b3;  */

void FUN_105b8e3d4(double param_1,long param_2,undefined1 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  double dStack_50;
  undefined1 uStack_48;
  
  _CACurrentMediaTime();
  dVar2 = *(double *)(param_2 + 0x30);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b8e4b4;
  puStack_70 = &UNK_1108ad600;
  _objc_copyWeak(auStack_60,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_68 = uVar1;
  dStack_50 = (param_1 - dVar2) * 1000.0;
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 105b8e4b4; end: 105b8e4ff;  */

void FUN_105b8e4b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar2);
  func_0x00010be533e0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,uVar2,
                      *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b8e500; end: 105b8e5bb; -[SCFriendsFeedViewController _logFetchAndSyncFeedWithConversationsCount:shortcutType:elapsedTimeMs:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8e500(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + _DAT_112731360) == param_5) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112731198);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3f40(param_1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273119c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b8e5bc; end: 105b8e783; -[SCFriendsFeedViewController feedCellForIdentifier:] */

void FUN_105b8e5bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_5 = 0x10;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        puVar8 = *(undefined **)(lVar9 * 8);
        puVar4 = PTR_PTR_1126c2c78;
        _objc_opt_class(PTR_PTR_1126c2c78);
        puVar5 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          _objc_retain(puVar8);
          puVar4 = puVar8;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf33f20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0720c0();
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (((ulong)puVar6 & 1) != 0) goto LAB_105b8e734;
          _objc_release(puVar8);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      param_5 = 0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    puVar8 = (undefined *)0x0;
LAB_105b8e734:
    _objc_release(lVar2);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126b1010;
    _objc_retain(param_5);
    _objc_alloc(puVar8);
    func_0x00010c02ec80();
    func_0x00010c1eb2c0();
    func_0x00010c1eb220(puVar8);
    func_0x00010c1b0840(puVar8);
    func_0x00010c1d86a0(puVar8);
    func_0x00010c182d40(puVar8);
    _objc_release(param_5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a580(puVar8);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105b8e784; end: 105b8e867; -[SCFriendsFeedViewController _replyParametersWithPageSource:navigationType:context:replyType:replyState:cellViewPosition:] */

void FUN_105b8e784(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1010;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c02ec80();
  func_0x00010c1eb2c0();
  func_0x00010c1eb220(puVar1,param_2,param_7);
  func_0x00010c1b0840(puVar1,param_2,param_3 == 0);
  func_0x00010c1d86a0(puVar1,param_2,param_3);
  func_0x00010c182d40(puVar1,param_2,param_5);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a580(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b8e868; end: 105b8ea53; -[SCFriendsFeedViewController _showCameraForUserId:isAiChatbot:replyUsername:displayName:pageSource:navigationType:context:replyType:replyState:isMischief:cellViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8e868(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) || (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010be8f160(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c1eb2e0(lVar1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112730f74);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0ee920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010901cdb0(uVar4,puVar5);
      func_0x00010c1af8a0(lVar1);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    func_0x00010c1eb300(lVar1);
    func_0x00010c078c00();
    func_0x00010c1eb080(lVar1);
    func_0x00010c1b2900(lVar1);
    lVar2 = lVar1;
    func_0x00010c271d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be476c0(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b8ea54; end: 105b8eaab; -[SCFriendsFeedViewController dismissCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8ea54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731034;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b8eaac; end: 105b8eaaf; -[SCFriendsFeedViewController actionHandler:willStartAction:source:] */

void FUN_105b8eaac(void)

{
  return;
}



/* Entry: 105b8eab0; end: 105b8eab3; -[SCFriendsFeedViewController actionHandler:didEndAction:source:] */

void FUN_105b8eab0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeExistingPostSnapFeedScope_112580988);
  return;
}



/* Entry: 105b8eab4; end: 105b8eb0b; -[SCFriendsFeedViewController _removeExistingPostSnapFeedScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8eab4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731414;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_112731040));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105b8eb0c; end: 105b8eb1b; -[SCFriendsFeedViewController _shouldReloadSection:snapchattersChanged:sectionVisible:shouldDisplay:] */

uint FUN_105b8eb0c(void)

{
  uint in_w3;
  uint in_w4;
  uint in_w5;
  
  return in_w3 & in_w4 | in_w4 ^ in_w5;
}



/* Entry: 105b8eb1c; end: 105b8edb3; -[SCFriendsFeedViewController _reloadDataSource:addFriendsSectionWithQuickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:isHidingOldConversations:shouldReloadSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8eb1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte in_stack_00000000;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311f0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112731204;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf49e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cda80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311e4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c11e300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205ee0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311e8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfec020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205ee0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311ec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4a400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205ee0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010beb32a0(param_1);
  if ((in_stack_00000000 & 1) != 0) {
    lVar6 = param_1;
    func_0x00010beb5380(param_1);
    lVar3 = param_1;
    func_0x00010beb5380(param_1);
    lVar4 = param_1;
    func_0x00010beb5380(param_1);
    lVar5 = param_1;
    func_0x00010beb5380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__reloadSnapchatterSectionsWithQu_1125804d0,lVar6,lVar3,lVar4,lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSnapchatterSectionsVisibi_112595aa8);
  return;
}



/* Entry: 105b8edb4; end: 105b8ef2f; -[SCFriendsFeedViewController _reloadSnapchatterSectionsWithQuickAddChange:addedMeChange:contactSnapchatterChange:contactNonSnapchatterChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8edb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  func_0x00010bdc81a0(param_1,param_2,puVar1,param_3,
                      &PTR____CFConstantStringClassReference_110ea9018);
  func_0x00010bdc81a0(param_1,param_2,puVar1,param_4,
                      &PTR____CFConstantStringClassReference_110ea8ff8);
  func_0x00010bdc81a0(param_1,param_2,puVar1,param_5,
                      &PTR____CFConstantStringClassReference_110ea9038);
  func_0x00010bdc81a0(param_1,param_2,puVar1,param_6,
                      &PTR____CFConstantStringClassReference_110ea9098);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c128fc0(lVar3,param_2,puVar2,5);
    _objc_release(puVar2);
    _objc_release(lVar3);
    if ((int)param_3 != 0) {
      *(undefined1 *)(param_1 + _DAT_112731410) = *(undefined1 *)(param_1 + _DAT_1127313a4);
    }
    if ((int)param_4 != 0) {
      *(undefined1 *)(param_1 + _DAT_112731418) = *(undefined1 *)(param_1 + _DAT_1127313a8);
    }
    if ((int)param_5 != 0) {
      *(undefined1 *)(param_1 + _DAT_11273141c) = *(undefined1 *)(param_1 + _DAT_1127313ac);
    }
    if ((int)param_6 != 0) {
      *(undefined1 *)(param_1 + _DAT_112731420) = *(undefined1 *)(param_1 + _DAT_1127313b0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b8ef30; end: 105b8ef7b; -[SCFriendsFeedViewController _updateSnapchatterSectionsVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8ef30(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112731410) = *(undefined1 *)(param_1 + _DAT_1127313a4);
  *(undefined1 *)(param_1 + _DAT_112731418) = *(undefined1 *)(param_1 + _DAT_1127313a8);
  *(undefined1 *)(param_1 + _DAT_11273141c) = *(undefined1 *)(param_1 + _DAT_1127313ac);
  *(undefined1 *)(param_1 + _DAT_112731420) = *(undefined1 *)(param_1 + _DAT_1127313b0);
  return;
}



/* Entry: 105b8ef7c; end: 105b8efdf; -[SCFriendsFeedViewController _addSectionToReloadIfNeeded:shouldChange:sectionType:] */

void FUN_105b8ef7c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  _objc_retain(param_3);
  if ((param_4 != 0) &&
     (func_0x00010c1560a0(param_1,param_2,param_5), param_1 != 0x7fffffffffffffff)) {
    func_0x00010bef92c0(param_3,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b8efe0; end: 105b8f103; -[SCFriendsFeedViewController _launchChatCameraScopeWithConfiguration:isAiChatbot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8efe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112731034);
  func_0x00010c071800();
  if (iVar1 != 0) {
    if ((int)param_4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112730f20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_4 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
    }
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b8f104;
    puStack_58 = &UNK_1108488f8;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = (undefined1)param_4;
    uStack_50 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b8f104; end: 105b8f1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8f104(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bde2400(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112731038);
    func_0x00010bf23680(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d78c0();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_112731034),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b8f1c0; end: 105b8f3ab; -[SCFriendsFeedViewController _shouldDisplayAddFriendsSectionWithIsHidingOldConversations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8f1c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112731030);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b900();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273129c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((((uVar2 & 1) != 0) || ((int)uVar4 != 0)) &&
     ((uVar1 = *(ulong *)(param_1 + _DAT_112731360), uVar1 < 0xc ||
      (uVar1 < 0x13 && (1L << (uVar1 & 0x3f) & 0x46000U) != 0)))) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127311e4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127311e8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127311ec);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127311f0);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x000105bd8080(uVar5,uVar6,uVar7,uVar8,*(undefined8 *)(param_1 + _DAT_112730f68),
                        *(undefined8 *)(param_1 + _DAT_112731120),uVar2,uVar4,param_3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar9 = (uint)uVar3;
    *(byte *)(param_1 + _DAT_1127313a4) = (byte)(uVar9 >> 1) & 1;
    *(byte *)(param_1 + _DAT_1127313a8) = (byte)(uVar9 >> 2) & 1;
    *(byte *)(param_1 + _DAT_1127313ac) = (byte)(uVar9 >> 3) & 1;
    *(char *)(param_1 + _DAT_1127313b0) = (char)(uVar9 >> 4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideAllFriendingSections_11256ae68);
  return;
}



/* Entry: 105b8f3ac; end: 105b8f3bb; -[SCFriendsFeedViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8f3ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731320),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105b8f3bc; end: 105b8f553; -[SCFriendsFeedViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105b8f3bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + (long)_DAT_112731320);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  uVar4 = 0;
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (*(long *)(param_1 + (long)_DAT_112731424) == 0) {
        uVar3 = *(ulong *)(param_1 + (long)_DAT_112731204);
        func_0x00010c29dba0(uVar3,param_2,*(long *)(param_1 + (long)_DAT_112731360) == 0xc);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf529e0();
        _objc_release(uVar3);
      }
      else {
        uVar4 = 0;
      }
    }
    else if (lVar2 == 1) {
      func_0x00010beca540(param_1,param_2,param_3,param_4);
      uVar4 = param_1;
    }
    else if (lVar2 == 2) {
      func_0x00010beca4c0(param_1,param_2,param_3,param_4);
      uVar4 = param_1;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      func_0x00010beca520(param_1,param_2,param_3,param_4);
      uVar4 = param_1;
    }
    else if (lVar2 == 4) {
      func_0x00010beca500(param_1,param_2,param_3,param_4);
      uVar4 = param_1;
    }
  }
  else if (lVar2 == 5) {
    func_0x00010beca4e0(param_1,param_2,param_3,param_4);
    uVar4 = param_1;
  }
  else if (lVar2 == 6) {
    uVar4 = (ulong)(*(long *)(param_1 + (long)_DAT_112731424) != 0);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105b8f554; end: 105b8f5e3; -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionAddedMe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b8f554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_1127313a8) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127311e8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c267f60();
    _objc_release(param_3);
    _objc_release(uVar2);
    return uVar1;
  }
  return 0;
}



/* Entry: 105b8f5e4; end: 105b8f673; -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionQuickAdd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b8f5e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_1127313a4) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127311e4);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c267f60();
    _objc_release(param_3);
    _objc_release(uVar2);
    return uVar1;
  }
  return 0;
}



/* Entry: 105b8f674; end: 105b8f703; -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionContactSnapchtters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b8f674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_1127313ac) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127311ec);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c267f60();
    _objc_release(param_3);
    _objc_release(uVar2);
    return uVar1;
  }
  return 0;
}



/* Entry: 105b8f704; end: 105b8f71b; -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionCommunities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105b8f704(long param_1)

{
  return *(long *)(param_1 + _DAT_1127313b4) != 0;
}



/* Entry: 105b8f71c; end: 105b8f7ab; -[SCFriendsFeedViewController _tableView:numberOfRowsInSectionContactNonSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b8f71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_1127313b0) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127311f0);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c267f60();
    _objc_release(param_3);
    _objc_release(uVar2);
    return uVar1;
  }
  return 0;
}



/* Entry: 105b8f7ac; end: 105b8fc3b; -[SCFriendsFeedViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8f7ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = *(long *)(param_1 + _DAT_112731320);
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c067fc0();
  _objc_release(lVar9);
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      func_0x00010beca460(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b8f9ec;
    }
    if (lVar1 == 2) {
      func_0x00010beca3e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b8f9ec;
    }
    if (lVar1 == 3) {
      func_0x00010beca440(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b8f9ec;
    }
  }
  else {
    if (lVar1 == 4) {
      func_0x00010beca420(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b8f9ec;
    }
    if (lVar1 == 5) {
      func_0x00010beca400(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b8f9ec;
    }
    if (lVar1 == 6) {
      param_1 = *(long *)(param_1 + _DAT_112731424);
      _objc_retain(param_1);
      goto LAB_105b8f9ec;
    }
  }
  uVar2 = *(ulong *)(param_1 + _DAT_112731204);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c142240();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (lVar1 < (long)uVar3) {
    func_0x00010c142240(param_4);
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar1 = param_4;
    func_0x00010c142240();
    uVar4 = uVar2;
    func_0x00010bf529e0();
    puVar5 = PTR_PTR_1126c2a28;
    lVar9 = param_3;
    if (lVar1 == uVar4 - 1) {
      _objc_retain(uVar3);
      _objc_opt_class(puVar5);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar5);
      _objc_release(uVar3);
      if (((uVar4 & 1) == 0) || (uVar3 == 0)) goto LAB_105b8fa3c;
      func_0x00010bf6e060(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
    }
    else {
LAB_105b8fa3c:
      uVar6 = uVar3;
      func_0x00010c13fd60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e060(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      func_0x00010c21b140(lVar9);
      func_0x00010c21b100(lVar9);
      func_0x00010c1aa200(lVar9);
      func_0x00010c1aa2c0(lVar9);
      func_0x00010c1a2ec0(lVar9);
      func_0x00010c16f480(lVar9);
      func_0x00010c1832e0(lVar9);
      func_0x00010c183320(lVar9);
      func_0x00010c1bbb80(lVar9);
      func_0x00010c1bbba0(lVar9);
      func_0x00010c1a0920(lVar9);
      func_0x00010c1a0900(lVar9);
      func_0x00010c168220(lVar9);
      func_0x00010c1ed880(lVar9);
      func_0x00010c202a60(lVar9);
      func_0x00010c1c72c0(lVar9);
      func_0x00010c16d9c0(lVar9);
      func_0x00010c2226c0(lVar9);
      func_0x00010c191080(lVar9);
      func_0x00010c1808a0(lVar9);
      puVar5 = PTR_PTR_1126c29a8;
      uVar8 = *(undefined8 *)(param_1 + _DAT_112731220);
      _objc_retain(uVar3);
      _objc_opt_class(puVar5);
      uVar7 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar5);
      uVar4 = uVar3;
      if ((uVar7 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar3);
      func_0x00010c142240(param_4);
      func_0x00010bf33a60(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
    _objc_release(uVar3);
    param_1 = lVar9;
  }
  else {
    param_1 = param_3;
    func_0x00010bf6e060(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_105b8f9ec:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b8fc3c; end: 105b8fcc7; -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForAddedMe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8fc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311e8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c267f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8fcc8; end: 105b8fd53; -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForQuickAdd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8fcc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311e4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c267f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8fd54; end: 105b8fddf; -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForContactSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8fd54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311ec);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c267f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8fde0; end: 105b8fe0f; -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForCommunities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8fde0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313b4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8fe10; end: 105b8fe9b; -[SCFriendsFeedViewController _tableView:cellForRowAtIndexPathForContactNonSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8fe10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311f0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c267f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8fe9c; end: 105b901b7; -[SCFriendsFeedViewController tableView:willDisplayCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105b8fe9c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar12 = *(long *)(param_5 + _DAT_112731320);
  lVar1 = param_9;
  func_0x00010c1554e0();
  uVar10 = (uint)lVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c067fc0();
  _objc_release(lVar12);
  if (lVar1 == 4) {
    uVar13 = param_8;
    func_0x00010be51e20(param_5);
    uVar10 = (uint)uVar13;
  }
  else if (lVar1 == 0) {
    func_0x00010bed8940(param_5);
    uVar10 = (uint)(*(long *)(param_5 + _DAT_112731360) == 0xc);
    lVar12 = (long)_DAT_112731204;
    uVar2 = *(ulong *)(param_5 + lVar12);
    func_0x00010c29dba0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_9;
    func_0x00010c142240();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (lVar1 < (long)uVar3) {
      func_0x00010c142240(param_9);
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c29a8;
      _objc_opt_class(PTR_PTR_1126c29a8);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar3 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      param_6 = param_7;
      FUN_105b901b8(param_9,param_7,*(undefined1 *)(param_5 + _DAT_1127313c4));
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar13 = *(undefined8 *)(param_5 + lVar12);
      uVar6 = uVar4;
      func_0x00010bf33f20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecb00(uVar13);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar7 = PTR_PTR_1126c2c88;
      _objc_alloc();
      func_0x00010c061e20();
      puVar8 = PTR_PTR_1126c2c90;
      _objc_alloc();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffd360();
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010be07c00(param_5);
      uVar10 = (uint)puVar9;
      uVar6 = uVar3;
      func_0x000105bb5c04();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar6;
      func_0x000107cfbdb4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar3;
      func_0x00010c08fa60();
      if (uVar6 != 0) {
        uVar6 = uVar3;
        func_0x00010be4e9a0(param_5);
        uVar10 = (uint)uVar6;
      }
      _objc_release(uVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar21 = 0.0;
  if (uVar10 != 0) {
    _objc_retain(param_6);
    func_0x00010c124560(param_6);
    uVar13 = param_6;
    func_0x00010c262ca0(param_6);
    _objc_retainAutoreleasedReturnValue();
    dVar21 = param_1;
    uVar15 = param_2;
    uVar17 = param_3;
    uVar19 = param_4;
    func_0x00010bf51460(param_1,param_2,param_3,param_4,param_6);
    dVar14 = dVar21;
    uVar16 = uVar15;
    uVar18 = uVar17;
    uVar20 = uVar19;
    func_0x00010bfb68e0(param_6);
    _objc_release(param_6);
    _CGRectIntersection(dVar14,uVar16,uVar18,uVar20,dVar21,uVar15,uVar17,uVar19);
    _CGRectGetHeight();
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    if (param_1 == 0.0) {
      dVar21 = 0.0;
    }
    else {
      dVar21 = (double)NEON_fminnm(dVar14 / param_1,0x3ff0000000000000);
    }
    _objc_release(uVar13);
  }
  return dVar21;
}



/* Entry: 105b901b8; end: 105b902f3;  */

undefined8
FUN_105b901b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  if (param_7 != 0) {
    _objc_retain(param_6);
    func_0x00010c124560(param_6);
    uVar1 = param_6;
    func_0x00010c262ca0(param_6);
    _objc_retainAutoreleasedReturnValue();
    dVar2 = param_1;
    uVar9 = param_2;
    uVar5 = param_3;
    uVar7 = param_4;
    func_0x00010bf51460(param_1,param_2,param_3,param_4,param_6);
    dVar3 = dVar2;
    uVar4 = uVar9;
    uVar6 = uVar5;
    uVar8 = uVar7;
    func_0x00010bfb68e0(param_6);
    _objc_release(param_6);
    _CGRectIntersection(dVar3,uVar4,uVar6,uVar8,dVar2,uVar9,uVar5,uVar7);
    _CGRectGetHeight();
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    if (param_1 == 0.0) {
      uVar9 = 0;
    }
    else {
      uVar9 = NEON_fminnm(dVar3 / param_1,0x3ff0000000000000);
    }
    _objc_release(uVar1);
  }
  return uVar9;
}



/* Entry: 105b902f4; end: 105b90477; -[SCFriendsFeedViewController _logContactSeenWithCell:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b902f4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2c68;
  _objc_opt_class(PTR_PTR_1126c2c68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b1910;
  _objc_opt_class(PTR_PTR_1126b1910);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar4 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112730f7c);
  _objc_retain(uVar5);
  uVar2 = uVar4;
  func_0x00010c244760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010beed3c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c0bccc0(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b90478; end: 105b905c7;  */

void FUN_105b90478(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010beee1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b16e0;
  _objc_opt_class(PTR_PTR_1126b16e0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf49da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c2c98;
  _objc_alloc(PTR_PTR_1126c2c98);
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010c142240(lVar5);
  func_0x00010c150c20(uVar2);
  func_0x00010c01d7c0((double)lVar5,param_1,puVar3);
  uVar1 = uVar2;
  func_0x00010bfded40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7500(puVar3);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3ae0();
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b905c8; end: 105b90763; -[SCFriendsFeedViewController _loadStoryWithStoryId:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b905c8(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined **unaff_x22;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112731258);
  func_0x00010c231e40();
  if ((param_4 == 0x1e) && (iVar1 != 0)) {
    lVar5 = *(long *)(param_1 + _DAT_1127311cc);
    if (lVar5 != 0) {
      *(long *)(param_1 + _DAT_1127311cc) = lVar5 + -1;
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112730f88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_40 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105b90764;
      puStack_60 = &UNK_110851330;
      _objc_retain(param_3);
      unaff_x22 = &puStack_78;
      param_2 = auStack_48;
      lStack_58 = param_3;
      _objc_copyWeak(auStack_50);
      func_0x00010c25b4c0(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_release(lStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 5);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 != (undefined1 *)0x0) && (puVar4 = param_2, func_0x00010bfddf20(), (int)puVar4 != 0))
  {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    func_0x00010be4d400();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b90764; end: 105b907cf;  */

void FUN_105b90764(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 != 0) && (lVar1 = param_2, func_0x00010bfddf20(), (int)lVar1 != 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4d400();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b907d0; end: 105b90933; -[SCFriendsFeedViewController _loadFriendStoryPlaybackSequenceWithStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b907d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = auStack_48;
  _objc_copyWeak(auStack_50);
  func_0x00010c25b360(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined1 *)0x0) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    func_0x00010be4d420();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105b90934; end: 105b9098f;  */

void FUN_105b90934(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4d420();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b90990; end: 105b90ba3; -[SCFriendsFeedViewController _loadFriendStorySnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105b90990(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = &uStack_130;
  puVar18 = auStack_f0;
  lVar19 = 0x10;
  puVar17 = param_3;
  func_0x00010bf52a60();
  if (puVar17 != (undefined8 *)0x0) {
    lVar24 = *plStack_120;
    puVar25 = (undefined8 *)0x5;
    do {
      puVar21 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar24) {
          _objc_enumerationMutation(param_3);
        }
        if (puVar25 == puVar21) goto LAB_105b90b54;
        puVar22 = *(undefined8 **)(lStack_128 + (long)puVar21 * 8);
        uVar2 = *(undefined8 *)(param_1 + _DAT_112730fc8);
        func_0x00010c2923e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar22;
        func_0x0001084d1fa0(puVar22,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x000107d22a6c(puVar22,1,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar22;
        func_0x00010bf267e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010b26c050(puVar3,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        uVar2 = *(undefined8 *)(param_1 + _DAT_112730f80);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = (undefined1 *)0x1;
        lVar19 = 0;
        puVar4 = puVar22;
        func_0x00010bfa85c0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(puVar5);
        _objc_release(puVar22);
        _objc_release(puVar3);
        puVar21 = (undefined8 *)((long)puVar21 + 1);
      } while (puVar17 != puVar21);
      puVar4 = &uStack_130;
      puVar18 = auStack_f0;
      lVar19 = 0x10;
      puVar17 = param_3;
      func_0x00010bf52a60();
      puVar25 = (undefined8 *)((long)puVar25 - (long)puVar21);
    } while (puVar17 != (undefined8 *)0x0);
  }
LAB_105b90b54:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar18);
  _objc_retain(lVar19);
  lVar23 = (long)_DAT_112731320;
  lVar24 = *(long *)((long)param_3 + lVar23);
  if ((lVar24 != 0) && (func_0x00010bf529e0(), lVar24 != 0)) {
    lVar24 = lVar19;
    func_0x00010c1554e0();
    lVar6 = *(long *)((long)param_3 + lVar23);
    func_0x00010bf529e0();
    if (lVar24 < lVar6) {
      lVar23 = *(long *)((long)param_3 + lVar23);
      func_0x00010c1554e0(lVar19);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar23;
      func_0x00010c067fc0();
      _objc_release(lVar23);
      if (lVar24 == 0) {
        lVar23 = (long)_DAT_112731204;
        uVar7 = *(ulong *)((long)param_3 + lVar23);
        func_0x00010c29dba0();
        _objc_retainAutoreleasedReturnValue();
        lVar24 = lVar19;
        func_0x00010c142240();
        uVar8 = uVar7;
        func_0x00010bf529e0();
        if (lVar24 < (long)uVar8) {
          func_0x00010c142240(lVar19);
          uVar8 = uVar7;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126c2c78;
          _objc_retain(puVar18);
          _objc_opt_class(puVar9);
          puVar10 = puVar18;
          _objc_opt_isKindOfClass(puVar18,puVar9);
          puVar1 = puVar18;
          if (((ulong)puVar10 & 1) == 0) {
            puVar1 = (undefined1 *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(puVar18);
          puVar10 = puVar1;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar9 = PTR_PTR_1126c29a8;
          _objc_opt_class(PTR_PTR_1126c29a8);
          puVar11 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar9);
          puVar1 = puVar10;
          if (((ulong)puVar11 & 1) == 0) {
            puVar1 = (undefined1 *)0x0;
          }
          _objc_retain(puVar1);
          _objc_release(puVar10);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar2 = *(undefined8 *)((long)param_3 + lVar23);
          uVar12 = uVar8;
          func_0x00010bf33f20(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecb00(uVar2);
          func_0x00010c0df780(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          puVar13 = PTR_PTR_1126c2c88;
          _objc_alloc();
          func_0x00010c061e20(0);
          _objc_release(puVar1);
          puVar14 = PTR_PTR_1126c2c90;
          _objc_alloc(PTR_PTR_1126c2c90);
          puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bffd360(puVar14);
          _objc_release(puVar15);
          func_0x00010be07c00(param_3);
          puVar15 = PTR_PTR_1126c29a8;
          uVar2 = *(undefined8 *)((long)param_3 + (long)_DAT_112731220);
          _objc_retain(uVar8);
          _objc_opt_class(puVar15);
          uVar16 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar15);
          uVar12 = uVar8;
          if ((uVar16 & 1) == 0) {
            uVar12 = 0;
          }
          _objc_retain(uVar12);
          _objc_release(uVar8);
          func_0x00010c142240(lVar19);
          func_0x00010bf33aa0(uVar2);
          _objc_release(uVar12);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar9);
          _objc_release(uVar8);
        }
        _objc_release(uVar7);
      }
    }
  }
  _objc_release(lVar19);
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar17 = *(undefined8 **)((long)puVar4 + (long)_DAT_11273134c);
  func_0x00010bfecfa0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar17;
  func_0x00010c142240();
  _objc_release(puVar17);
  return puVar4;
}



/* Entry: 105b90ba4; end: 105b90f0b; -[SCFriendsFeedViewController tableView:didEndDisplayingCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105b90ba4(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar13 = (long)_DAT_112731320;
  lVar1 = *(long *)(param_1 + lVar13);
  if ((lVar1 != 0) && (func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_5;
    func_0x00010c1554e0();
    lVar2 = *(long *)(param_1 + lVar13);
    func_0x00010bf529e0();
    if (lVar1 < lVar2) {
      lVar13 = *(long *)(param_1 + lVar13);
      func_0x00010c1554e0(param_5);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar13;
      func_0x00010c067fc0();
      _objc_release(lVar13);
      if (lVar1 == 0) {
        lVar13 = (long)_DAT_112731204;
        uVar3 = *(ulong *)(param_1 + lVar13);
        func_0x00010c29dba0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_5;
        func_0x00010c142240();
        uVar4 = uVar3;
        func_0x00010bf529e0();
        if (lVar1 < (long)uVar4) {
          func_0x00010c142240(param_5);
          uVar5 = uVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126c2c78;
          _objc_retain(param_4);
          _objc_opt_class(puVar6);
          uVar7 = param_4;
          _objc_opt_isKindOfClass(param_4,puVar6);
          uVar4 = param_4;
          if ((uVar7 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(param_4);
          uVar7 = uVar4;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar6 = PTR_PTR_1126c29a8;
          _objc_opt_class(PTR_PTR_1126c29a8);
          uVar8 = uVar7;
          _objc_opt_isKindOfClass(uVar7,puVar6);
          uVar4 = uVar7;
          if ((uVar8 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar7);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar14 = *(undefined8 *)(param_1 + lVar13);
          uVar7 = uVar5;
          func_0x00010bf33f20(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecb00(uVar14);
          func_0x00010c0df780(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          puVar9 = PTR_PTR_1126c2c88;
          _objc_alloc();
          func_0x00010c061e20(0);
          _objc_release(uVar4);
          puVar10 = PTR_PTR_1126c2c90;
          _objc_alloc(PTR_PTR_1126c2c90);
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bffd360(puVar10);
          _objc_release(puVar11);
          func_0x00010be07c00(param_1);
          puVar11 = PTR_PTR_1126c29a8;
          uVar14 = *(undefined8 *)(param_1 + _DAT_112731220);
          _objc_retain(uVar5);
          _objc_opt_class(puVar11);
          uVar7 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar11);
          uVar4 = uVar5;
          if ((uVar7 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar5);
          func_0x00010c142240(param_5);
          func_0x00010bf33aa0(uVar14);
          _objc_release(uVar4);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar6);
          _objc_release(uVar5);
        }
        _objc_release(uVar3);
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(param_3 + _DAT_11273134c);
  func_0x00010bfecfa0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c142240();
  _objc_release(lVar12);
  return lVar1;
}



/* Entry: 105b90f0c; end: 105b90f53; -[SCFriendsFeedViewController rowForCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b90f0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273134c);
  func_0x00010bfecfa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142240();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105b90f54; end: 105b91033; -[SCFriendsFeedViewController tableView:viewForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b90f54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112731320);
  func_0x00010c0dfd40(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 < 3) {
    if (lVar2 == 1) {
      piVar3 = (int *)&DAT_1127312f8;
    }
    else {
      if (lVar2 != 2) goto LAB_105b91024;
      piVar3 = (int *)&DAT_1127312fc;
    }
LAB_105b91004:
    if ((*(byte *)(param_1 + piVar3[0x2b]) & 1) == 0) goto LAB_105b91024;
  }
  else {
    if (lVar2 == 3) {
      piVar3 = (int *)&DAT_112731300;
      goto LAB_105b91004;
    }
    if ((lVar2 != 4) ||
       (piVar3 = (int *)&DAT_112731304, *(char *)(param_1 + _DAT_1127313b0) != '\x01'))
    goto LAB_105b91024;
  }
  func_0x00010c269d40(*(undefined8 *)(param_1 + *piVar3));
  _objc_retainAutoreleasedReturnValue();
LAB_105b91024:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b91034; end: 105b91037; -[SCFriendsFeedViewController _headerViewForFRNDSection:] */

void FUN_105b91034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be34e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__headerViewForSection__11256ad40);
  return;
}



/* Entry: 105b91038; end: 105b91083; -[SCFriendsFeedViewController _headerViewForSection:] */

void FUN_105b91038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2ca0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0511e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b91084; end: 105b91267; -[SCFriendsFeedViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105b91084(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = *(long *)(param_2 + _DAT_112731320);
  func_0x00010c1554e0(param_5);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c067fc0();
  _objc_release(lVar5);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112731204);
      func_0x00010c29dba0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240(param_5);
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33e20();
      if (param_1 < 0.0) {
        uVar4 = *(undefined8 *)(param_2 + _DAT_112731234);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001064ea350();
        _objc_release(uVar4);
        param_1 = 0.0;
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      goto LAB_105b9123c;
    }
    if ((lVar1 == 1) || (lVar1 == 2)) goto LAB_105b91134;
  }
  else if (lVar1 < 5) {
    if (lVar1 == 3) {
LAB_105b91134:
      func_0x00010c1554e0(param_5);
      func_0x00010beca480(param_2);
      goto LAB_105b9123c;
    }
    if (lVar1 == 4) {
      param_1 = 60.0;
      goto LAB_105b9123c;
    }
  }
  else {
    if (lVar1 == 5) {
      func_0x00010c1554e0(param_5);
      func_0x00010beca4a0(param_2);
      goto LAB_105b9123c;
    }
    if (lVar1 == 6) {
      func_0x00010be35020(param_2);
      goto LAB_105b9123c;
    }
  }
  param_1 = 0.0;
LAB_105b9123c:
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105b91268; end: 105b91273; -[SCFriendsFeedViewController _tableView:heightForCellInLegacyFRNDSection:] */

undefined8 FUN_105b91268(void)

{
  return 0x404e000000000000;
}



/* Entry: 105b91274; end: 105b91297; -[SCFriendsFeedViewController _tableView:heightForCommunitiesSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b91274(long param_1)

{
  undefined8 in_d3;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_1127313b4));
  return in_d3;
}



/* Entry: 105b91298; end: 105b9135f; -[SCFriendsFeedViewController tableView:heightForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b91298(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + _DAT_112731320);
  _objc_retain(param_3);
  func_0x00010c0dfd40(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c25dfa0();
  _objc_release(param_3);
  uVar4 = 0x10000000000000;
  if (lVar3 != 1) {
    uVar4 = 0;
  }
  uVar2 = lVar1 - 1;
  uVar5 = uVar4;
  if ((uVar2 < 4) &&
     (uVar5 = *(undefined8 *)(&PTR_DAT_1108d9c30)[uVar2],
     *(char *)(param_1 + *(int *)(&PTR_DAT_1108d9c10)[uVar2]) == '\0')) {
    uVar5 = uVar4;
  }
  return uVar5;
}



/* Entry: 105b91360; end: 105b9138b; -[SCFriendsFeedViewController tableView:heightForFooterInSection:] */

undefined8 FUN_105b91360(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25dfa0();
  uVar1 = 0x10000000000000;
  if (param_3 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105b9138c; end: 105b91393; -[SCFriendsFeedViewController tableView:shouldHighlightRowAtIndexPath:] */

undefined8 FUN_105b9138c(void)

{
  return 0;
}



/* Entry: 105b91394; end: 105b91597; -[SCFriendsFeedViewController _feedCellForConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b91394(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      puVar4 = PTR_PTR_1126c2c78;
      uVar10 = *(ulong *)(lVar9 * 8);
      _objc_retain(uVar10);
      _objc_opt_class(puVar4);
      uVar5 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar4);
      uVar7 = uVar10;
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar10);
      if (uVar7 != 0) {
        uVar5 = uVar10;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c29a8;
        _objc_opt_class(PTR_PTR_1126c29a8);
        uVar6 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar4);
        uVar7 = uVar5;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar5);
        if (uVar7 != 0) {
          uVar7 = uVar5;
          func_0x000105bb5a48(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          _objc_release(uVar5);
          if ((uVar6 & 1) != 0) goto LAB_105b91548;
        }
        _objc_release(uVar10);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  uVar10 = 0;
LAB_105b91548:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfecdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + (long)_DAT_112731320),PTR_s_indexOfObject__1125d8d40,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c30b8);
  return;
}



/* Entry: 105b91598; end: 105b915af; -[SCFriendsFeedViewController _sectionIdForFeedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b91598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfecdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731320),PTR_s_indexOfObject__1125d8d40,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c30b8);
  return;
}



/* Entry: 105b915b0; end: 105b915f3; -[SCFriendsFeedViewController _visibleIndexPaths] */

void FUN_105b915b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfed1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b915f4; end: 105b916a3; -[SCFriendsFeedViewController currentlyShowingLoadingView] */

void FUN_105b915f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29d020();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d5e0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 105b916a4; end: 105b916db; -[SCFriendsFeedViewController loadMoreFeedItemsIfCloseToLoadingView] */

void FUN_105b916a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf61020();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__loadMoreConversationsIfPossible_1125711a8,0);
    return;
  }
  return;
}



/* Entry: 105b916dc; end: 105b917a7; -[SCFriendsFeedViewController sectionIndexFromSectionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b916dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  uVar2 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ea9018,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ea8ff8,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ea9038,param_2,param_3);
      if ((uVar2 & 1) == 0) {
        iVar1 = 0x10ea9098;
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ea9098,param_2,param_3);
        if (iVar1 == 0) {
          uVar3 = 0x7fffffffffffffff;
          goto LAB_105b91784;
        }
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3130;
      }
      else {
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3100;
      }
    }
    else {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c30e8;
    }
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3118;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731320);
  func_0x00010bfecde0(uVar3,param_2,ppuVar4);
LAB_105b91784:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105b917a8; end: 105b91977; -[SCFriendsFeedViewController didPullToRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b917a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  *(undefined1 *)(param_2 + _DAT_112731398) = 1;
  lVar5 = *(long *)(param_2 + _DAT_112731360);
  if (lVar5 != 0xc) {
    puVar1 = PTR_PTR_1126c2c20;
    func_0x00010c11b800(PTR_PTR_1126c2c20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07c20(param_2);
    _objc_release(puVar1);
  }
  lVar2 = param_2;
  func_0x00010bdc53e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  if (lVar5 == 0xc) {
    func_0x00010c11b8a0(param_1,param_2);
  }
  else {
    puVar1 = PTR_PTR_1126c2ca8;
    _objc_alloc();
    func_0x00010c0163c0();
    lVar5 = (long)_DAT_11273139c;
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_2);
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c11b8c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_58;
    _objc_copyWeak(puVar3,auStack_48);
    uStack_50 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105b91978; end: 105b919eb;  */

void FUN_105b91978(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010c11b8a0(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b919ec; end: 105b91b57; -[SCFriendsFeedViewController _newStoriesDidComeIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b919ec(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273137c);
  func_0x00010c07ab40();
  if ((iVar1 != 0) && (*(long *)(param_1 + _DAT_112731428) == 0)) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b91b58;
    puStack_58 = &UNK_110842c58;
    _objc_copyWeak(auStack_50,auStack_48);
    ppuVar2 = &puStack_70;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112730f88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_48);
    _objc_retain(ppuVar2);
    func_0x00010c25b4c0(uVar3);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_78);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105b91b58; end: 105b91bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b91b58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108d8fc0);
    func_0x00010c28a5c0(*(undefined8 *)(param_1 + _DAT_1127313f8));
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b91bd4; end: 105b91bdb;  */

void FUN_105b91bd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b91bdc; end: 105b91c57;  */

void FUN_105b91bdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be824a0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b91c58; end: 105b91d0b; -[SCFriendsFeedViewController pullToRefreshDidFinishWithStartTime:updateIsForCommunityFeed:success:] */

void FUN_105b91c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105b91d0c;
  puStack_68 = &UNK_11086cd18;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  uStack_4f = param_5;
  func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_80);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b91d0c; end: 105b91d47;  */

void FUN_105b91d0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be847c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b91d48; end: 105b91f07; -[SCFriendsFeedViewController _pullToRefreshDidFinishWithStartTime:updateIsForCommunityFeed:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b91d48(double param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  double dVar9;
  
  uVar6 = *(undefined8 *)(param_2 + (long)_DAT_112731358);
  dVar9 = param_1;
  _objc_retain(uVar6);
  func_0x00010c255980(uVar6);
  lVar7 = (long)_DAT_112731354;
  if (*(long *)(param_2 + lVar7) == 0) {
    uVar8 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_2 + (long)_DAT_11273134c);
    func_0x00010c070ea0();
    if ((uVar2 & 1) == 0) {
      uVar8 = (uint)*(undefined8 *)(param_2 + lVar7);
      func_0x00010bf77fc0();
      uVar8 = uVar8 ^ 1;
    }
    else {
      uVar8 = 0;
    }
  }
  uVar2 = param_2;
  func_0x00010be001a0();
  if ((uVar2 & 1) == 0) {
    lVar7 = param_2 + (long)_DAT_112730fc0;
    _objc_loadWeakRetained();
    lVar3 = lVar7;
    func_0x00010c0799e0();
    _objc_release(lVar7);
    if (((uint)lVar3 & uVar8) == 1) {
      func_0x00010c152860(param_2);
    }
  }
  *(undefined1 *)(param_2 + (long)_DAT_112731398) = 0;
  uVar4 = *(undefined8 *)(param_2 + (long)_DAT_11273139c);
  *(undefined8 *)(param_2 + (long)_DAT_11273139c) = 0;
  _objc_release(uVar4);
  _CACurrentMediaTime();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20478;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddee38;
  }
  _objc_retain(ppuVar1);
  func_0x00010c25d8c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112731234;
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001064e790c();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001064e7878(dVar9 - param_1);
  _objc_release(ppuVar1);
  _objc_release(uVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105b91f08; end: 105b922eb; -[SCFriendsFeedViewController handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b91f08(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  uVar3 = param_1;
  func_0x00010bf33920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c2c78;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    func_0x00010bfd2c80(uVar3);
  }
  uVar6 = uVar2;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_105b8e1e0;
    uStack_78 = 0x105b8e1f0;
    uStack_70 = 0;
    uVar7 = uVar6;
    func_0x00010bfa3ca0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be3e0();
    _objc_release(uVar7);
    uVar7 = uVar6;
    func_0x00010bfa3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 == 0) {
      uVar7 = uVar6;
      func_0x00010bf0e4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010b0af134();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar11 = puStack_90[5];
      ppuVar1 = &PTR____CFConstantStringClassReference_110e17978;
      if ((int)uVar10 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e20498;
      }
      puStack_90[5] = ppuVar1;
      _objc_release(uVar11);
    }
    puVar4 = PTR_PTR_1126b2cb0;
    func_0x00010bf34140(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar7 = uVar6;
    func_0x00010c268c60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010c2ac460(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar11 = *(undefined8 *)(param_1 + (long)_DAT_112731230);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar11);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105b922ec; end: 105b923b3;  */

void FUN_105b922ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b923b4; end: 105b926b3; -[SCFriendsFeedViewController handlePanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b923b4(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  lVar10 = (long)_DAT_1127312f4;
  uVar7 = *(undefined8 *)(param_4 + lVar10);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(uVar7);
  _objc_release(lVar1);
  lVar9 = (long)_DAT_11273142c;
  dVar11 = *(double *)(param_4 + lVar9);
  lVar1 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar11 = (param_1 - dVar11) / (param_3 - *(double *)(param_4 + lVar9));
  uVar7 = 0x3ff0000000000000;
  dVar12 = 1.0 - dVar11;
  _objc_release(lVar1);
  lVar1 = param_6;
  func_0x00010c252440();
  _objc_release(param_6);
  if (lVar1 < 3) {
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        *(double *)(param_4 + lVar9) = param_1;
        uVar8 = *(undefined8 *)(param_4 + lVar10);
        uVar2 = uVar8;
        func_0x00010c29bf00(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297a00(uVar8);
        _objc_release(uVar2);
        lVar1 = param_4;
        func_0x00010bdd0ea0(param_1,param_2,dVar11,uVar7);
        *(char *)(param_4 + _DAT_112731430) = (char)lVar1;
        if ((int)lVar1 == 0) {
          return;
        }
        func_0x00010be87160(param_4);
        uVar3 = param_4 + _DAT_112730fc4;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        func_0x00010c10b980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        puVar5 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
        _objc_opt_class(PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8);
        uVar6 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        uVar3 = uVar4;
        if ((uVar6 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar4);
        uVar7 = *(undefined8 *)(param_4 + _DAT_112731434);
        *(ulong *)(param_4 + _DAT_112731434) = uVar3;
      }
      else {
        if ((lVar1 != 2) || (*(char *)(param_4 + _DAT_112731430) != '\x01')) {
          return;
        }
        func_0x00010c0f3740(dVar12,param_4);
        func_0x00010c286a00(1.0 - dVar12,*(undefined8 *)(param_4 + _DAT_112731434));
        uVar7 = *(undefined8 *)(param_4 + _DAT_1127310c8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf78340(1.0 - dVar12);
      }
      goto LAB_105b92694;
    }
  }
  else {
    if (2 < lVar1 - 3U) {
      return;
    }
    if (*(char *)(param_4 + _DAT_112731430) != '\x01') {
      return;
    }
    if (0.5 <= dVar12) {
      func_0x00010c0f3740(0x3ff0000000000000,param_4);
      func_0x00010bf2e5a0(*(undefined8 *)(param_4 + _DAT_112731434));
    }
    else {
      func_0x00010c0f3740(0,param_4);
      func_0x00010bfaf8e0(*(undefined8 *)(param_4 + _DAT_112731434));
      func_0x00010be08080(param_1,param_2,param_4);
    }
  }
  *(undefined8 *)(param_4 + lVar9) = 0;
  uVar7 = *(undefined8 *)(param_4 + _DAT_1127310c8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75b00();
LAB_105b92694:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105b926b4; end: 105b92887; -[SCFriendsFeedViewController _emitOpenChatEventForEdgeSwipeAtLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b926b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,lVar8);
  _objc_release(lVar1);
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = (long)_DAT_112731204;
  uVar2 = *(ulong *)(param_3 + lVar8);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010bf529e0();
    lVar4 = lVar1;
    func_0x00010c142240();
    if (lVar4 < (long)uVar3) {
      func_0x00010c142240(lVar1);
      uVar5 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c29a8;
      _objc_opt_class(PTR_PTR_1126c29a8);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar3 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      if (uVar3 != 0) {
        uVar9 = *(undefined8 *)(param_3 + lVar8);
        uVar7 = uVar5;
        func_0x00010bf33f20(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecb00(uVar9);
        _objc_release(uVar7);
        func_0x00010bf33ac0(*(undefined8 *)(param_3 + _DAT_112731220));
      }
      _objc_release(uVar3);
      _objc_release(uVar5);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b92888; end: 105b9296b; -[SCFriendsFeedViewController _attemptToScrollToPannableCellAtLocation:withVelocity:] */

undefined8
FUN_105b92888(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < 0.0) {
    return 0;
  }
  uVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,uVar1,param_5,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bdd0e80(param_4,param_5,uVar2);
  _objc_release(uVar2);
  return param_4;
}



/* Entry: 105b9296c; end: 105b92b1f; -[SCFriendsFeedViewController _attemptToScrollToPannableCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b9296c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar7 = 0;
    goto LAB_105b92a60;
  }
  uVar1 = *(ulong *)(param_1 + (long)_DAT_112731204);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_105b92a4c:
    uVar7 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf529e0();
    lVar3 = param_3;
    func_0x00010c142240();
    if ((long)uVar2 <= lVar3) goto LAB_105b92a4c;
    func_0x00010c142240(param_3);
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c22ee20();
    if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c10b160(), (uVar4 & 1) == 0)) {
      uVar4 = param_1;
      func_0x00010beb6e00();
      puVar5 = PTR_PTR_1126c29a8;
      if ((int)uVar4 != 0) {
        func_0x00010bed1fc0(param_1);
        goto LAB_105b92a3c;
      }
      _objc_retain(uVar2);
      _objc_opt_class(puVar5);
      uVar6 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar5);
      uVar4 = uVar2;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar2);
      func_0x00010bdd0dc0(param_1);
      uVar6 = uVar2;
      func_0x00010bf33f20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c109ca0(param_1);
      _objc_release(uVar6);
      func_0x00010c142240(param_3);
      func_0x00010c109c20(param_1);
      _objc_release(uVar4);
      uVar7 = 1;
    }
    else {
LAB_105b92a3c:
      uVar7 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_105b92a60:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105b92b20; end: 105b92beb; -[SCFriendsFeedViewController handleDoubleTap:] */

void FUN_105b92b20(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  func_0x00010bf33920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2c78;
  _objc_retain(param_1);
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 != 0) {
    func_0x00010bfd0ee0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b92bec; end: 105b92d1b; -[SCFriendsFeedViewController handleDelayedTap:] */

void FUN_105b92bec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  func_0x00010bf33920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2c78;
  _objc_retain(param_1);
  _objc_opt_class(puVar2);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar4 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bfd5ca0();
  _objc_release(uVar3);
  if (((uVar4 & 1) == 0) && (uVar1 != 0)) {
    func_0x00010bfd0cc0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b92d1c; end: 105b92e63; -[SCFriendsFeedViewController handleLongPress:] */

void FUN_105b92d1c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  uVar2 = param_1;
  func_0x00010bf33920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c2c78;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010bfd5ca0();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    lVar7 = param_3;
    func_0x00010c252440();
    if (lVar7 == 1) {
      func_0x00010bf2f180(param_1);
    }
    if (uVar1 != 0) {
      func_0x00010bfd1760(uVar2);
    }
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b92e64; end: 105b92f03; -[SCFriendsFeedViewController cellAtPoint:] */

void FUN_105b92e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b92f04; end: 105b92f47; -[SCFriendsFeedViewController cancelTapGestureRecognizers] */

/* WARNING: Possible PIC construction at 0x000105b92f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b92f28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b92f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127312ec),PTR_s_sc_cancel_112630c48);
  return;
}



/* Entry: 105b92f48; end: 105b93257; -[SCFriendsFeedViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105b92f48(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_5);
  lVar5 = param_3 + (long)_DAT_112730fc0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c074200();
  _objc_retain(0);
  _objc_release(lVar5);
  if ((int)lVar6 == 0) {
    uVar8 = 0;
    goto LAB_105b93220;
  }
  uVar8 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  uVar2 = param_3;
  func_0x00010bf33920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar6 = *(long *)(param_3 + (long)_DAT_112731320);
  func_0x00010c1554e0(uVar3);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c067fc0();
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126c2c78;
  _objc_retain(uVar2);
  _objc_opt_class(puVar4);
  uVar8 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if ((uVar1 == 0) || (lVar5 != 0)) {
    if (lVar5 - 1U < 3) {
      if (param_5 == *(long *)(param_3 + (long)_DAT_1127312e4)) {
LAB_105b931dc:
        uVar8 = 1;
      }
      else {
        uVar8 = (ulong)(param_5 == *(long *)(param_3 + (long)_DAT_1127312ec));
      }
    }
    else {
LAB_105b931c8:
      uVar8 = 0;
    }
  }
  else {
    uVar8 = uVar2;
    if (param_5 == *(long *)(param_3 + (long)_DAT_1127312ec)) {
      func_0x00010c269040(uVar2);
    }
    else if (param_5 == *(long *)(param_3 + (long)_DAT_1127312f0)) {
      func_0x00010bf6b000(uVar2);
    }
    else if (param_5 == *(long *)(param_3 + (long)_DAT_1127312e8)) {
      func_0x00010bf884e0(uVar2);
    }
    else if (param_5 == *(long *)(param_3 + (long)_DAT_1127312e4)) {
      func_0x00010c0b4e60(uVar2);
    }
    else {
      lVar6 = (long)_DAT_1127312f4;
      lVar5 = *(long *)(param_3 + lVar6);
      if (param_5 != lVar5) goto LAB_105b931dc;
      func_0x00010c0711a0();
      uVar7 = *(undefined8 *)(param_3 + lVar6);
      uVar8 = param_3;
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(uVar7);
      _objc_release(uVar8);
      uVar8 = 0;
      if ((ABS(param_2) <= ABS(param_1)) && (0.0 <= param_1)) {
        uVar8 = uVar2;
        func_0x00010bfa3880();
        if (((uint)uVar8 & (uint)lVar5) != 1) goto LAB_105b931c8;
        func_0x00010bdd0e80(param_3);
        uVar8 = param_3;
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105b93220:
  _objc_release(0);
  _objc_release(param_5);
  return uVar8;
}



/* Entry: 105b93258; end: 105b9332f; -[SCFriendsFeedViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_105b93258(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b93330;
  puStack_40 = &UNK_1108d9010;
  ppuVar1 = &puStack_58;
  lStack_38 = param_1;
  _objc_retainBlock();
  ppuVar2 = ppuVar1;
  (*(code *)ppuVar1[2])();
  if ((int)ppuVar2 == 0) {
    ppuVar2 = (undefined **)(ulong)(param_3 != *(long *)(param_1 + _DAT_1127312e4));
  }
  else {
    ppuVar2 = ppuVar1;
    (*(code *)ppuVar1[2])(ppuVar1,param_4);
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 105b93330; end: 105b933ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105b93330(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_2 == *(long *)(lVar2 + _DAT_1127312e8)) ||
     (param_2 == *(long *)(lVar2 + _DAT_1127312ec))) {
    bVar1 = true;
  }
  else {
    bVar1 = param_2 == *(long *)(lVar2 + _DAT_1127312f0);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105b933ac; end: 105b93403; -[SCFriendsFeedViewController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_105b933ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 105b93404; end: 105b9364b; -[SCFriendsFeedViewController cellHandleTapOnChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b93404(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010be82d80();
    if ((uVar2 & 1) != 0) goto LAB_105b934bc;
    lVar3 = *(long *)(param_1 + (long)_DAT_112730fa0);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) goto LAB_105b934bc;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c29a8;
    _objc_opt_class(PTR_PTR_1126c29a8);
    uVar5 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    uVar2 = uVar1;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112731204);
    uVar5 = uVar2;
    func_0x00010bf33f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecb00(uVar6);
    _objc_release(uVar5);
    func_0x00010bf33ac0(*(undefined8 *)(param_1 + (long)_DAT_112731220));
    func_0x00010bdd0dc0(param_1);
    uVar5 = uVar1;
    func_0x00010bf33f20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109ca0(param_1);
    _objc_release(uVar5);
    func_0x00010c14c8a0(*(undefined8 *)(param_1 + (long)_DAT_1127312e8));
    func_0x00010c14c8a0(*(undefined8 *)(param_1 + (long)_DAT_1127312e4));
    uVar5 = param_1;
    func_0x00010c10b160();
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11273134c);
      func_0x00010bfecfa0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142240();
      _objc_release(uVar6);
      func_0x00010c109c20(param_1);
      lVar3 = param_1 + (long)_DAT_112730fc4;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c0d5fc0();
      _objc_release(lVar3);
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar1);
LAB_105b934bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9364c; end: 105b93a3b; -[SCFriendsFeedViewController prepareNextVCWithViewModel:atRow:navigationAction:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9364c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c29a8;
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
  uVar3 = uVar1;
  func_0x000105bb5a48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1389c0(*(undefined8 *)(param_1 + _DAT_112731204));
  uVar4 = uVar1;
  func_0x00010bf12e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf12e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112730f00);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfa3920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c24d520();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar7 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puStack_e8 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 5;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_100 = (undefined **)0xc2000000;
    puStack_f8 = &UNK_105ba98a8;
    pcStack_f0 = (code *)&UNK_110847658;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_105ba98b8;
    puStack_98 = &UNK_1108d86a0;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    puStack_c8 = &UNK_105ba98cc;
    puStack_c0 = &UNK_1108d79b0;
    puStack_b8 = puStack_e8;
    puStack_90 = puStack_e8;
    puStack_80 = puStack_e8;
    func_0x00010c0c0200(uVar7);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_88,8);
  }
  _objc_release(uVar7);
  func_0x00010c0a2b20(uVar5);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar5);
  ppuStack_100 = &puStack_108;
  puStack_108 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x3032000000;
  pcStack_f0 = FUN_105b8e1e0;
  puStack_e8 = (undefined8 *)0x105b8e1f0;
  uStack_e0 = 0;
  uVar4 = param_3;
  func_0x00010bf96da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar4);
  param_1 = param_1 + _DAT_112730fc4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c183a80();
  _objc_release(param_1);
  __Block_object_dispose(&puStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105b93a3c; end: 105b93a9f;  */

void FUN_105b93a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b93aa0; end: 105b93b0f;  */

void FUN_105b93aa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b93b10; end: 105b93b13; -[SCFriendsFeedViewController presentAlertViewIfAppropriateForViewModel:] */

void FUN_105b93b10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7cb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNFMOnboardingForViewMode_11257cc80);
  return;
}



/* Entry: 105b93b14; end: 105b93bcf; -[SCFriendsFeedViewController _attemptToBoostSnapDownloadIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b93b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000105bb5cb4();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127311d0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x000105bb5998(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x000105bb5a48(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c074920(param_3);
    func_0x00010c09ba80(uVar2,param_2,uVar1,uVar3,uVar4,10);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b93bd0; end: 105b93d83; -[SCFriendsFeedViewController _presentNFMOnboardingForViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b93bd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x000107cf9bb0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731068);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c07ee20();
    _objc_release(uVar2);
    if ((int)uVar10 != 0) {
      uVar3 = *(ulong *)(param_1 + _DAT_112731064);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf01180();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) == 0) {
        lVar11 = (long)_DAT_11273106c;
        lVar6 = *(long *)(param_1 + lVar11);
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 != 0) {
          func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar11));
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar7 = PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        func_0x00010c038f40();
        puVar8 = PTR_PTR_1126c2cc0;
        _objc_alloc(PTR_PTR_1126c2cc0);
        lVar6 = param_3;
        func_0x00010bfddd60();
        uVar9 = 0;
        if ((int)lVar6 != 0) {
          lVar6 = param_3;
          func_0x00010c06f6e0(param_3);
          uVar9 = (uint)lVar6 ^ 1;
        }
        func_0x00010c048e20(puVar8,param_2,lVar1,uVar9,param_1,puVar7);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar11),param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar10 = 1;
        goto LAB_105b93ca4;
      }
    }
  }
  uVar10 = 0;
LAB_105b93ca4:
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 105b93d84; end: 105b93eaf; -[SCFriendsFeedViewController _isAiChatbotForCell:] */

undefined1 FUN_105b93d84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar3 = uVar1;
  func_0x00010bf96da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar3);
  uVar2 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105b93eb0; end: 105b93ee3;  */

void FUN_105b93eb0(long param_1,undefined8 param_2)

{
  func_0x000100bf0d4c(param_2,0);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 105b93ee4; end: 105b9418b; -[SCFriendsFeedViewController _replyConfigurationForCell:pageSource:navigationType:isReplyCta:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b93ee4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105b8e1e0;
  uStack_80 = 0x105b8e1f0;
  lVar5 = param_1;
  func_0x00010bfc8720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f200(param_1);
  func_0x00010c142280(param_1);
  lVar6 = param_1;
  func_0x00010be8f160();
  _objc_retainAutoreleasedReturnValue();
  lStack_78 = lVar6;
  _objc_release(lVar5);
  uVar2 = uVar1;
  func_0x00010bf96da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf96da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000107cfa164();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(puStack_98[5]);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112731360);
  func_0x000105bddfd4(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0a20(puStack_98[5]);
  _objc_release(uVar7);
  func_0x00010c1b3de0(puStack_98[5]);
  uVar7 = puStack_98[5];
  func_0x00010c271d80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(lStack_78);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105b9418c; end: 105b942cf;  */

void FUN_105b9418c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1eb300(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cf94b0();
  func_0x00010c1af8a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b942d0; end: 105b949f3; -[SCFriendsFeedViewController cellHandleDoubleTapOnChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b942d0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar8 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  if ((int)lVar11 != 0) {
    func_0x00010bed1fc0(param_1);
    goto LAB_105b94970;
  }
  puVar2 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar3 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010bfd5ca0();
  if (((uVar8 & 1) != 0) || (uVar8 = uVar1, func_0x000105bb5060(), (int)uVar8 == 0))
  goto LAB_105b94970;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar8 = uVar1;
  puStack_90 = &uStack_98;
  func_0x00010bf50940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105b949f4;
  puStack_a8 = &UNK_1108d9bb0;
  puStack_a0 = &uStack_98;
  func_0x00010c0bcde0();
  _objc_release(uVar8);
  if ((*(byte *)(puStack_90 + 3) & 1) == 0) {
    puVar4 = PTR_PTR_1126b2cb0;
    func_0x00010bf88560(PTR_PTR_1126b2cb0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar8 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920();
    func_0x00010c25d8c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2ac460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar8);
    uVar7 = *(undefined8 *)(param_1 + _DAT_112731230);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar7);
    *(undefined1 *)(param_1 + _DAT_1127313a0) = 1;
    lVar11 = (long)_DAT_112731074;
    uVar8 = *(ulong *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c097260();
    if ((int)uVar3 == 0) {
LAB_105b94718:
      _objc_release(uVar8);
LAB_105b94720:
      uVar8 = param_3;
      func_0x00010bfa3900();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar10 = uVar3;
      func_0x00010010fab4(uVar3,PTR_DAT_1126a5088);
      uVar8 = uVar3;
      if ((int)uVar10 == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar3);
      puStack_e8 = &uStack_f0;
      uStack_f0 = 0;
      uStack_e0 = 0x3032000000;
      pcStack_d8 = FUN_105b8e1e0;
      uStack_d0 = 0x105b8e1f0;
      uStack_c8 = 0;
      puStack_130 = &uStack_138;
      uStack_138 = 0;
      uStack_128 = 0x2020000000;
      uStack_120 = 0;
      uVar3 = uVar8;
      func_0x00010c1409a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf920();
      _objc_release(uVar3);
      if (puStack_e8[5] == 0) {
        lVar11 = param_1;
        func_0x00010be8f020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be3e040(param_1);
        func_0x00010be476c0(param_1);
      }
      else {
        lVar11 = *(long *)(param_1 + _DAT_112731044);
        puVar2 = PTR_PTR_1126ae6b8;
        func_0x00010c0860a0(PTR_PTR_1126ae6b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf246c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        lVar12 = (long)_DAT_112731414;
        _objc_retain(lVar11);
        uVar7 = *(undefined8 *)(param_1 + lVar12);
        *(long *)(param_1 + lVar12) = lVar11;
        _objc_release(uVar7);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112731040));
      }
      _objc_release(lVar11);
      __Block_object_dispose(&uStack_138,8);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x00010c097240();
      _objc_release(uVar9);
      _objc_release(uVar8);
      if ((int)uVar7 == 0) goto LAB_105b94720;
      uVar8 = param_3;
      func_0x00010bfa3900();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar10 = uVar3;
      func_0x00010010fab4(uVar3,PTR_DAT_1126a5088);
      uVar8 = uVar3;
      if ((int)uVar10 == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar3);
      uStack_f0 = 0;
      uStack_e0 = 0x3032000000;
      pcStack_d8 = FUN_105b8e1e0;
      uStack_d0 = 0x105b8e1f0;
      uStack_c8 = 0;
      uVar3 = uVar8;
      puStack_e8 = &uStack_f0;
      func_0x00010c1409a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = puVar2;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_105b94a08;
      puStack_100 = &UNK_1108d6e70;
      puStack_f8 = &uStack_f0;
      func_0x00010c0bf920();
      _objc_release(uVar3);
      if (puStack_e8[5] == 0) {
        __Block_object_dispose(&uStack_f0,8);
        _objc_release(uStack_c8);
        goto LAB_105b94718;
      }
      uVar7 = *(undefined8 *)(param_1 + _DAT_112731050);
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf246e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112731438);
      *(undefined8 *)(param_1 + _DAT_112731438) = uVar7;
      _objc_release(uVar9);
      _objc_release(puVar2);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273104c));
      uVar7 = *(undefined8 *)(param_1 + _DAT_112731078);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142280(param_1);
      func_0x00010c0a9780(uVar7);
      _objc_release(uVar7);
    }
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    _objc_release(uVar8);
    _objc_release(puVar6);
  }
  __Block_object_dispose(&uStack_98,8);
LAB_105b94970:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b949f4; end: 105b94a07;  */

void FUN_105b949f4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b94a08; end: 105b94a3f;  */

void FUN_105b94a08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b94a40; end: 105b94b6b;  */

void FUN_105b94a40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b94b6c; end: 105b950eb; -[SCFriendsFeedViewController cellHandleLongPressOnCell:identifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b94b6c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010beb6e00();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if ((int)lVar6 == 0) {
    func_0x00010c0b4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = uVar2;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2cc8;
    _objc_opt_class(PTR_PTR_1126c2cc8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      uVar5 = uVar2;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2cd0;
      _objc_opt_class(PTR_PTR_1126c2cd0);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar4);
      uVar3 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar5);
      if (uVar3 != 0) {
        lVar6 = param_1;
        func_0x00010c0f2220();
        uVar8 = param_3;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126c29a8;
        _objc_opt_class(PTR_PTR_1126c29a8);
        uVar9 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        uVar7 = uVar8;
        if ((uVar9 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        uVar11 = *(undefined8 *)(param_1 + _DAT_112731204);
        uVar9 = uVar7;
        func_0x00010bf33f20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfecb00(uVar11);
        _objc_release(uVar9);
        func_0x00010bf33ac0(*(undefined8 *)(param_1 + _DAT_112731220));
        if (uVar7 == 0) {
          func_0x00010be79ec0(param_1);
        }
        else {
          lVar10 = (long)_DAT_11273143c;
          if ((*(byte *)(param_1 + lVar10) & 1) == 0) {
            puStack_140 = &uStack_b0;
            uStack_b0 = 0;
            uStack_a0 = 0x2020000000;
            pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffffffffff00);
            puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_130 = 0xc2000000;
            pcStack_128 = FUN_105b951fc;
            puStack_120 = &UNK_1108d9100;
            puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_158 = 0xc2000000;
            uStack_150 = 0x105b9520c;
            puStack_148 = &UNK_11086bc10;
            puStack_118 = puStack_140;
            puStack_a8 = puStack_140;
            func_0x00010c0be180(uVar5);
            if ((*(byte *)(puStack_a8 + 3) & 1) == 0) {
              func_0x00010be79ec0(param_1);
            }
            else {
              _objc_initWeak(auStack_80,param_1);
              func_0x000105bb5a48();
              _objc_retainAutoreleasedReturnValue();
              *(undefined1 *)(param_1 + lVar10) = 1;
              uVar11 = *(undefined8 *)(param_1 + _DAT_112730f60);
              func_0x00010c269d40(uVar11);
              _objc_retainAutoreleasedReturnValue();
              _objc_copyWeak(auStack_170,auStack_80);
              _objc_retain(uVar5);
              lStack_168 = lVar6;
              func_0x00010bfa9ee0(uVar11);
              _objc_release(uVar11);
              _objc_release(uVar3);
              _objc_destroyWeak(auStack_170);
              _objc_release(uVar8);
              _objc_destroyWeak(auStack_80);
            }
            __Block_object_dispose(&uStack_b0,8);
          }
        }
        _objc_release(uVar7);
      }
      _objc_release(uVar3);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0;
      uStack_a0 = 0x3032000000;
      pcStack_98 = FUN_105b8e1e0;
      uStack_90 = 0x105b8e1f0;
      uStack_88 = 0;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_105b950ec;
      puStack_c8 = &UNK_1108d90a0;
      puStack_c0 = &uStack_b0;
      puStack_a8 = &uStack_b0;
      _objc_copyWeak(auStack_b8,auStack_80);
      puStack_110 = puVar4;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_105b95184;
      puStack_f8 = &UNK_1108d90d0;
      puStack_f0 = &uStack_b0;
      _objc_copyWeak(auStack_e8,auStack_80);
      func_0x00010c0bfde0(uVar3);
      lVar10 = (long)_DAT_112731244;
      lVar6 = *(long *)(param_1 + lVar10);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar10));
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_b8);
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_80);
    }
    _objc_release(uVar1);
  }
  else {
    func_0x00010bed1fc0(param_1);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b950ec; end: 105b95183;  */

void FUN_105b950ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bddaa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


