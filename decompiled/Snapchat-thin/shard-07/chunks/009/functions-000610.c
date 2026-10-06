/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b55998; end: 105b55ac3; -[SCConversationFeedDataSource _subcribeToFriendshipFlashbacks] */

void FUN_105b55998(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x300);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
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



/* Entry: 105b55ac4; end: 105b55b0b;  */

void FUN_105b55ac4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a0e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b55b0c; end: 105b55c33; -[SCConversationFeedDataSource _subscribeToRecentlyActiveUpdates] */

void FUN_105b55b0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfebfa0();
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



/* Entry: 105b55c34; end: 105b55c7b;  */

void FUN_105b55c34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b55c7c; end: 105b55d53; -[SCConversationFeedDataSource _handleFriendshipFlashbacksUpdate:] */

void FUN_105b55c7c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x308);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071d00(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105b55d40;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x308);
    *(ulong *)(param_1 + 0x308) = uVar4;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f5d8,lVar2,1
                       );
  }
LAB_105b55d40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b55d54; end: 105b56067; -[SCConversationFeedDataSource _performUpdateFriendsFeedViewModelsWithFeedItemUpdate:viewHasChanged:source:updateIsForCommunityFeed:canRenderFeedEmptyState:] */

void FUN_105b55d54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,byte param_7,undefined1 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  byte bStack_be;
  undefined1 uStack_bd;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_2 + 0x350;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf64640();
  _objc_release(uVar1);
  if ((param_7 & 1) == 0) {
    uVar8 = param_4;
    func_0x00010bfa5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x000100bbae3c();
    _objc_release(uVar8);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_4;
      func_0x00010bfa5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a64e0(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126ba0a8;
      if ((uVar2 & 1) == 0) {
        _CACurrentMediaTime();
        func_0x00010c261900(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_2 + 0x68);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_4;
        func_0x00010bfa5ec0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5820(uVar3);
        _objc_release(uVar8);
        _objc_release(uVar3);
        _objc_release(puVar4);
      }
    }
    _objc_initWeak(auStack_80,param_2);
    lVar5 = param_2 + 0x350;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010bf64600();
    _objc_release(lVar5);
    if ((int)lVar6 != 0) {
      uVar8 = *(undefined8 *)(param_2 + 8);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105b56068;
      puStack_a0 = &UNK_110848218;
      puVar7 = auStack_88;
      _objc_copyWeak(puVar7,auStack_80);
      _objc_retain(param_4);
      uStack_98 = param_4;
      _objc_retain(param_6);
      uStack_90 = param_6;
      func_0x00010c0f88c0(uVar8);
      _objc_release(uStack_90);
      uVar8 = uStack_98;
      goto LAB_105b55ff4;
    }
  }
  else {
    _objc_initWeak(auStack_80,param_2);
  }
  _CACurrentMediaTime();
  uVar8 = *(undefined8 *)(param_2 + 8);
  puVar7 = auStack_d0;
  _objc_copyWeak(puVar7,auStack_80);
  uStack_c8 = param_1;
  _objc_retain(param_4);
  uStack_c0 = (undefined1)uVar2;
  uStack_bf = param_5;
  _objc_retain(param_6);
  bStack_be = param_7;
  uStack_bd = param_8;
  func_0x00010c0f88c0(uVar8);
  _objc_release(param_6);
  uVar8 = param_4;
LAB_105b55ff4:
  _objc_release(uVar8);
  _objc_destroyWeak(puVar7);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105b56068; end: 105b5610b;  */

void FUN_105b56068(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010beea6c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b5610c; end: 105b566c7; -[SCConversationFeedDataSource _truncateFeedItems:] */

void FUN_105b5610c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [16];
  ulong uStack_140;
  long lStack_138;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x348) != 2) {
    lVar13 = *(long *)(param_2 + 0x338);
    lVar12 = *(long *)(param_2 + 0x340);
    _objc_retain(param_4);
    _objc_retain(lVar13);
    _objc_retain(lVar12);
    uVar1 = param_4;
    func_0x00010bf529e0();
    if (uVar1 == 0) {
      uStack_140 = 0;
    }
    else {
      lVar2 = lVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      _objc_release(lVar2);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0xc142750000000000);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0;
      _objc_retain(param_4);
      uVar1 = param_4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (uVar1 == 0) {
        uStack_140 = 0;
        lStack_138 = 0;
      }
      else {
        uStack_140 = 0;
        lStack_138 = 0;
        do {
          uVar14 = 0;
          uVar9 = uVar1 + uStack_140;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(param_4);
            }
            uVar15 = *(ulong *)(uVar14 * 8);
            uVar5 = uVar15;
            func_0x00010c0fc580();
            _objc_retainAutoreleasedReturnValue();
            if (uVar5 == 0) {
              uVar5 = uVar15;
              func_0x00010bef0c80();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x000100bec110();
              if ((int)uVar6 != 0) goto LAB_105b56270;
              uVar6 = uVar15;
              func_0x00010bef0c80();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c0cb340();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x000107cfe7ac();
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              if ((uVar8 & 1) == 0) {
                uVar5 = uVar15;
                func_0x00010bef0e60();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x000100bf4a30();
                _objc_release(uVar5);
                if ((int)uVar6 == 0) goto LAB_105b563b8;
                uVar5 = uVar15;
                func_0x00010bef0c80();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar5;
                func_0x00010c0891c0();
                _objc_retainAutoreleasedReturnValue();
                if (uVar6 == 0) goto LAB_105b56270;
                func_0x00010bef0c80();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar15;
                func_0x00010c0891c0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010bf433a0();
                _objc_release(uVar7);
                _objc_release(uVar15);
                _objc_release(uVar6);
                _objc_release(uVar5);
                if (uVar8 != 0xffffffffffffffff) {
                  lStack_138 = lStack_138 + 1;
                }
              }
            }
            else {
LAB_105b56270:
              _objc_release();
            }
            uStack_140 = uStack_140 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar1 != uVar14);
          uVar1 = param_4;
          func_0x00010bf52a60();
          uStack_140 = uVar9;
        } while (uVar1 != 0);
      }
LAB_105b563b8:
      _objc_release(param_4);
      if (lStack_138 < lVar3) {
        func_0x00010bf529e0();
        uVar1 = param_4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar1;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar14;
        func_0x00010c0891c0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar9 == 0) {
          _objc_release(uVar14);
LAB_105b564b0:
          uVar14 = param_4;
          func_0x00010bf529e0();
          if (uStack_140 < uVar14) {
            do {
              uVar14 = param_4;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar14;
              func_0x00010bef0c80();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar9;
              func_0x00010c0891c0();
              _objc_retainAutoreleasedReturnValue();
              if (uVar5 == 0) {
                _objc_release(uVar9);
LAB_105b565a8:
                _objc_release(uVar14);
                break;
              }
              uVar15 = uVar14;
              func_0x00010bef0c80();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar15;
              func_0x00010c0891c0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010bf433a0();
              _objc_release(uVar6);
              _objc_release(uVar15);
              _objc_release(uVar5);
              _objc_release(uVar9);
              if (uVar7 == 0xffffffffffffffff) goto LAB_105b565a8;
              uStack_140 = uStack_140 + 1;
              lVar2 = lStack_138 + 1;
              lStack_138 = lVar3;
              if (lVar3 <= lVar2) goto LAB_105b565a8;
              _objc_release(uVar14);
              uVar14 = param_4;
              func_0x00010bf529e0();
              lStack_138 = lVar2;
            } while (uStack_140 < uVar14);
          }
          if (lVar3 <= lStack_138) goto LAB_105b56600;
          lVar2 = lVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c067fc0();
          _objc_release(lVar2);
          if (lStack_138 < lVar3) {
            uStack_140 = (uStack_140 - lStack_138) + lVar3;
          }
        }
        else {
          uVar5 = uVar1;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar5;
          func_0x00010c0891c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar15;
          func_0x00010bf433a0();
          _objc_release(uVar15);
          _objc_release(uVar5);
          _objc_release(uVar9);
          _objc_release(uVar14);
          if (uVar6 == 0xffffffffffffffff) goto LAB_105b564b0;
LAB_105b56600:
          uStack_140 = 0;
        }
        _objc_release(uVar1);
      }
      else {
        uStack_140 = 0;
      }
      _objc_release(puVar4);
    }
    _objc_release(lVar12);
    _objc_release(lVar13);
    _objc_release(param_4);
    if ((uStack_140 != 0) && (uVar1 = param_4, func_0x00010bf529e0(), uStack_140 < uVar1)) {
      *(undefined8 *)(param_2 + 0x348) = 1;
      goto LAB_105b56664;
    }
    *(undefined8 *)(param_2 + 0x348) = 0;
  }
  uStack_140 = param_4;
  func_0x00010bf529e0();
  if (*(ulong *)(param_2 + 0x328) <= uStack_140) {
    uStack_140 = *(ulong *)(param_2 + 0x328);
  }
LAB_105b56664:
  lVar12 = 0;
  uVar1 = param_4;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar12);
  _objc_retain(uStack_140);
  lVar11 = lVar12;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  if (lVar11 == 0) {
    lVar13 = *(long *)(param_4 + 0xf0);
  }
  _objc_retain(lVar13);
  _objc_release(lVar11);
  lVar11 = *(long *)(param_4 + 0xf0);
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    uStack_1f8 = false;
  }
  else {
    lVar11 = lVar13;
    func_0x00010bf529e0();
    uStack_1f8 = lVar11 == 0;
  }
  _objc_retain(lVar13);
  uVar10 = *(undefined8 *)(param_4 + 0xf0);
  *(long *)(param_4 + 0xf0) = lVar13;
  _objc_release(uVar10);
  *(long *)(param_4 + 0x168) = *(long *)(param_4 + 0x168) + 1;
  func_0x00010c29d680(*(undefined8 *)(param_4 + 0x1c0));
  _objc_initWeak(auStack_1f0,param_4);
  _CACurrentMediaTime();
  uVar10 = *(undefined8 *)(param_4 + 0xe8);
  func_0x00010bed01e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = param_1;
  _objc_copyWeak(auStack_208,auStack_1f0);
  _objc_retain(uStack_140);
  func_0x00010c29d6e0(uVar10);
  _objc_release(param_4);
  _objc_release(uStack_140);
  _objc_destroyWeak(auStack_208);
  _objc_destroyWeak(auStack_1f0);
  _objc_release(lVar13);
  _objc_release(uStack_140);
  _objc_release(lVar12);
  return;
}



/* Entry: 105b566c8; end: 105b5693b; -[SCConversationFeedDataSource _warmUpViewModelsWithFeedItemUpdate:source:] */

void FUN_105b566c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_2 + 0xf0);
  }
  _objc_retain(lVar3);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_2 + 0xf0);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uStack_88 = false;
  }
  else {
    lVar1 = lVar3;
    func_0x00010bf529e0();
    uStack_88 = lVar1 == 0;
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(long *)(param_2 + 0xf0) = lVar3;
  _objc_release(uVar2);
  *(long *)(param_2 + 0x168) = *(long *)(param_2 + 0x168) + 1;
  func_0x00010c29d680(*(undefined8 *)(param_2 + 0x1c0));
  _objc_initWeak(auStack_80,param_2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010bed01e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = param_1;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_retain(param_5);
  func_0x00010c29d6e0(uVar2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b5693c; end: 105b56a73;  */

void FUN_105b5693c(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  dVar3 = (param_1 - *(double *)(param_2 + 0x30)) * 1000.0;
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (*(char *)(param_2 + 0x38) != '\x01')) {
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained(param_2);
    func_0x00010be5a7e0(dVar3);
    _objc_release(param_2);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105b56a74;
    puStack_68 = &UNK_1108502a8;
    _objc_copyWeak(auStack_50,param_2 + 0x28);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    lStack_60 = param_3;
    dStack_48 = dVar3;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b56a74; end: 105b56aab;  */

void FUN_105b56a74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee3b80(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b56aac; end: 105b570c7; -[SCConversationFeedDataSource _fetchFriendsFeedItemsAndUpdateWithFeedItemUpdate:viewHasAppeared:viewHasChanged:shouldLogGhostToFriendsFeed:source:updateIsForCommunityFeed:canRenderFeedEmptyState:dispatchLatency:] */

ulong FUN_105b56aac(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,int param_5,
                   undefined8 param_6,int param_7,undefined8 param_8,int param_9)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uStack_190;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_8);
  if (((param_7 != 0) && (param_5 != 0)) && (param_9 == 0)) {
    uVar3 = param_4;
    func_0x00010bfa5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x000100bbae3c();
    _objc_release(uVar3);
    if ((int)uVar15 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bfa5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ad2a0(param_1,uVar4);
      _objc_release(uVar3);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bfa5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_4;
      func_0x00010bfba060(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c0b09c0(uVar4);
      _objc_release(uVar15);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
  }
  uVar3 = param_4;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  if (param_9 == 0) {
    uVar15 = uVar3;
    if (uVar3 == 0) {
      uVar15 = *(ulong *)(param_2 + 0xf0);
    }
    _objc_retain(uVar15);
    _objc_release(uVar3);
    uVar3 = uVar15;
    FUN_105b570c8();
    _objc_retain(uVar15);
    uVar4 = *(undefined8 *)(param_2 + 0xf0);
    *(ulong *)(param_2 + 0xf0) = uVar15;
    _objc_release(uVar4);
    uVar4 = param_8;
    func_0x00010c0720c0();
    if ((int)uVar4 != 0) {
      uVar12 = *(ulong *)(param_2 + 0x328);
      uVar16 = *(ulong *)(param_2 + 0xf0);
      func_0x00010bf529e0();
      if (uVar12 < uVar16) {
        *(long *)(param_2 + 0x328) = *(long *)(param_2 + 0x328) + 0x32;
      }
    }
    uVar16 = param_2;
    if ((*(long *)(param_2 + 0x198) == 0) || (*(long *)(param_2 + 0x170) == 0xd)) {
      func_0x00010bed01e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bebe0a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar15);
    uVar15 = param_4;
    func_0x00010c11e300();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar15;
    if (uVar15 == 0) {
      uVar12 = *(ulong *)(param_2 + 0xf8);
    }
    _objc_retain(uVar12);
    _objc_release(uVar15);
    uVar15 = param_4;
    func_0x00010bfec020();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar15;
    if (uVar15 == 0) {
      uVar13 = *(ulong *)(param_2 + 0x100);
    }
    _objc_retain(uVar13);
    _objc_release(uVar15);
    uVar15 = param_4;
    func_0x00010bf4a400();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    if (uVar15 == 0) {
      uVar14 = *(ulong *)(param_2 + 0x108);
    }
    _objc_retain(uVar14);
    _objc_release(uVar15);
    uVar15 = param_4;
    func_0x00010bf49e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar15;
    if (uVar15 == 0) {
      uStack_190 = *(ulong *)(param_2 + 0x110);
    }
    _objc_retain(uStack_190);
    _objc_release(uVar15);
    _objc_retain(uVar12);
    uVar4 = *(undefined8 *)(param_2 + 0xf8);
    *(ulong *)(param_2 + 0xf8) = uVar12;
    _objc_release(uVar4);
    _objc_retain(uVar13);
    uVar4 = *(undefined8 *)(param_2 + 0x100);
    *(ulong *)(param_2 + 0x100) = uVar13;
    _objc_release(uVar4);
    _objc_retain(uVar14);
    uVar4 = *(undefined8 *)(param_2 + 0x108);
    *(ulong *)(param_2 + 0x108) = uVar14;
    _objc_release(uVar4);
    _objc_retain(uStack_190);
    uVar4 = *(undefined8 *)(param_2 + 0x110);
    *(ulong *)(param_2 + 0x110) = uStack_190;
  }
  else {
    uVar16 = uVar3;
    if (uVar3 == 0) {
      uVar16 = *(ulong *)(param_2 + 0x1f8);
    }
    _objc_retain(uVar16);
    _objc_release(uVar3);
    uVar3 = uVar16;
    FUN_105b570c8();
    _objc_retain(uVar16);
    uVar14 = 0;
    uStack_190 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x1f8);
    *(ulong *)(param_2 + 0x1f8) = uVar16;
  }
  _objc_release(uVar4);
  _objc_retain(uVar16);
  uVar15 = uVar16;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar6 = PTR_PTR_1126c29e8;
  while (PTR_PTR_1126c29e8 = puVar6, uVar15 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(uVar16);
      }
      uVar17 = *(undefined8 *)(uVar11 * 8);
      uVar4 = uVar17;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x000107cfdba8();
      if (((int)uVar4 == 0) && (uVar4 = uVar5, func_0x000107cfcd04(), (int)uVar4 != 0)) {
        func_0x000100bf377c(uVar17);
      }
      func_0x00010c258f40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107cfbbc4();
      _objc_release(uVar17);
      _objc_release(uVar5);
      uVar11 = uVar11 + 1;
    } while (uVar15 != uVar11);
    uVar15 = uVar16;
    func_0x00010bf52a60();
    puVar6 = PTR_PTR_1126c29e8;
  }
  _objc_alloc();
  func_0x00010c030640();
  _objc_release(uVar16);
  uVar15 = param_4;
  func_0x00010bfa5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c278f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becfc20(param_2);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(puVar6);
  _objc_release(uStack_190);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar16);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar3);
  uVar15 = param_4;
  func_0x00010bf529e0();
  uVar16 = uVar3;
  func_0x00010bf529e0();
  if (uVar15 == uVar16) {
    uVar15 = uVar3;
    func_0x00010bf529e0();
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar12 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_4;
        func_0x00010c0dfd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar14;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar13;
        func_0x00010c0720c0();
        if ((int)uVar15 == 0) {
          _objc_release(uVar11);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          goto LAB_105b57238;
        }
        uVar7 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar7;
        func_0x000100bf377c();
        uVar8 = param_4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x000100bf377c();
        uVar1 = (uint)uVar15 ^ (uint)uVar9;
        uVar15 = (ulong)uVar1;
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar11);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        if ((uVar1 & 1) != 0) break;
        uVar16 = uVar16 + 1;
        uVar12 = uVar3;
        func_0x00010bf529e0();
      } while (uVar16 < uVar12);
    }
  }
  else {
LAB_105b57238:
    uVar15 = 1;
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  return uVar15;
}



/* Entry: 105b570c8; end: 105b5726b;  */

uint FUN_105b570c8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar9 = param_1;
  func_0x00010bf529e0();
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar9 == uVar1) {
    uVar9 = param_2;
    func_0x00010bf529e0();
    if (uVar9 == 0) {
      uVar10 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar1 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c0dfd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c0720c0();
        if ((int)uVar5 == 0) {
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          goto LAB_105b57238;
        }
        uVar5 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000100bf377c();
        uVar7 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x000100bf377c();
        uVar10 = (uint)uVar6 ^ (uint)uVar8;
        _objc_release(uVar7);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar10 & 1) != 0) break;
        uVar9 = uVar9 + 1;
        uVar1 = param_2;
        func_0x00010bf529e0();
      } while (uVar9 < uVar1);
    }
  }
  else {
LAB_105b57238:
    uVar10 = 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar10;
}



/* Entry: 105b5726c; end: 105b576ff; -[SCConversationFeedDataSource _triggerHapticsIfNeededAndUpdateWithFeedItems:quickAddSnapchatters:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:renderContent:hasFeedItemsChanged:viewHasAppeared:viewHasChanged:shouldLogGhostToFriendsFeed:source:fetchContexts:trackingIdentifier:updateIsForCommunityFeed:canRenderFeedEmptyState:] */

void FUN_105b5726c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,byte param_15)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puStack_160;
  long lStack_158;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined1 uStack_85;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if ((param_15 & 1) == 0) {
    lVar1 = param_2 + 0x350;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      iVar3 = (int)*(undefined8 *)(param_2 + 0xd0);
      uVar2 = param_4;
      func_0x00010bf51e00(param_4);
      func_0x00010c234fa0();
      _objc_release(uVar2);
      _objc_release(lVar1);
      if (iVar3 != 0) {
        lVar1 = param_2 + 0x350;
        _objc_loadWeakRetained(lVar1);
        func_0x00010bf64500();
        _objc_release(lVar1);
      }
    }
  }
  _objc_initWeak(auStack_80,param_2);
  _CACurrentMediaTime();
  if ((param_15 & 1) == 0) {
    puStack_160 = *(undefined **)(param_2 + 0x1a0);
    _objc_retain(puStack_160);
    func_0x00010c29d680(*(undefined8 *)(param_2 + 0x1c0));
    lStack_158 = *(long *)(param_2 + 0xe8);
    _objc_retain();
  }
  else {
    lStack_158 = param_2;
    func_0x00010bde2600();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR____NSArray0__struct_11034ab48;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x168);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_copyWeak(auStack_a0,auStack_80);
  bStack_88 = param_15;
  uStack_98 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puStack_160);
  _objc_retain(param_9);
  uStack_85 = param_10;
  _objc_retain(param_13);
  uStack_90 = uVar2;
  func_0x00010c29d6e0(lStack_158);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(puStack_160);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(lStack_158);
  _objc_release(puStack_160);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b57700; end: 105b578e3;  */

void FUN_105b57700(double param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined1 uStack_44;
  
  _objc_retain(param_3);
  lVar2 = param_2 + 0x68;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) &&
     (bVar1 = *(byte *)(param_2 + 0x80), lVar3 = lVar2, func_0x00010bee9f40(),
     (uint)bVar1 == (uint)lVar3)) {
    _CACurrentMediaTime();
    dVar6 = *(double *)(param_2 + 0x70);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105b578e4;
    puStack_b8 = &UNK_1108d72b0;
    lStack_b0 = lVar2;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uStack_a8 = param_3;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uStack_a0 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uStack_98 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uStack_90 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uStack_88 = uVar5;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    uStack_80 = uVar4;
    _objc_retain(uVar5);
    uStack_48 = *(undefined1 *)(param_2 + 0x81);
    uStack_47 = *(undefined2 *)(param_2 + 0x82);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uStack_78 = uVar5;
    dStack_58 = (param_1 - dVar6) * 1000.0;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    uStack_70 = uVar4;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uStack_68 = uVar5;
    _objc_retain(uVar4);
    uStack_45 = *(undefined1 *)(param_2 + 0x80);
    uStack_44 = *(undefined1 *)(param_2 + 0x84);
    uStack_50 = *(undefined8 *)(param_2 + 0x78);
    uStack_60 = uVar4;
    func_0x0001000d76cc("APPSTORE",&puStack_d0);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105b578e4; end: 105b5796f;  */

void FUN_105b578e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010bee3ac0(*(undefined8 *)(param_1 + 0x78),uVar1,param_2,uVar2,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined2 *)(param_1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b57970; end: 105b5816f; -[SCConversationFeedDataSource _updateViewModelsAndReload:quickAddSnapchatters:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:shortcutRecipientsWithFeedItems:renderContent:viewHasAppeared:shouldLogGhostToFriendsFeed:hasFeedItemsChanged:viewModelGenerationMs:source:fetchContexts:trackingIdentifier:updateIsForCommunityFeed:canRenderFeedEmptyState:priorWarmupCount:] */

void FUN_105b57970(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9,undefined8 param_10,
                  undefined4 param_11,undefined4 param_12,ulong param_13,undefined8 param_14,
                  undefined8 param_15,byte param_16)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lStack_f8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  
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
  lVar15 = 0x1e8;
  if (param_16 == 0) {
    lVar15 = 0x20;
  }
  lVar15 = *(long *)(param_2 + lVar15);
  _objc_retain(lVar15);
  lStack_f8 = lVar15;
  if ((param_16 & 1) == 0) {
    func_0x00010be5a7e0(param_1,param_2);
    if (*(char *)(param_2 + 0x1e0) == '\x01') {
      func_0x00010be56860(param_2);
    }
    func_0x00010bf529e0();
    lVar13 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar13);
    _objc_retain(param_5);
    if (lVar13 == param_5) {
      uVar12 = 0;
    }
    else if (param_5 == 0) {
      uVar12 = 1;
    }
    else {
      lVar3 = lVar13;
      func_0x00010c071ae0();
      uVar12 = (uint)lVar3 ^ 1;
    }
    _objc_release(param_5);
    _objc_release(lVar13);
    lVar13 = *(long *)(param_2 + 0x30);
    _objc_retain(lVar13);
    _objc_retain(param_6);
    if (lVar13 == param_6) {
      uStack_bc = 0;
    }
    else if (param_6 == 0) {
      uStack_bc = 1;
    }
    else {
      lVar3 = lVar13;
      func_0x00010c071ae0();
      uStack_bc = (uint)lVar3 ^ 1;
    }
    _objc_release(param_6);
    _objc_release(lVar13);
    lVar13 = *(long *)(param_2 + 0x38);
    _objc_retain(lVar13);
    _objc_retain(param_7);
    if (lVar13 == param_7) {
      uStack_c0 = 0;
    }
    else if (param_7 == 0) {
      uStack_c0 = 1;
    }
    else {
      lVar3 = lVar13;
      func_0x00010c071ae0();
      uStack_c0 = (uint)lVar3 ^ 1;
    }
    _objc_release(param_7);
    _objc_release(lVar13);
    lVar13 = *(long *)(param_2 + 0x40);
    _objc_retain(lVar13);
    _objc_retain(param_8);
    if (lVar13 == param_8) {
      uStack_c4 = 0;
    }
    else if (param_8 == 0) {
      uStack_c4 = 1;
    }
    else {
      lVar3 = lVar13;
      func_0x00010c071ae0();
      uStack_c4 = (uint)lVar3 ^ 1;
    }
    _objc_release(param_8);
    _objc_release(lVar13);
  }
  else {
    func_0x00010bf529e0();
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uVar12 = 0;
  }
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_2 + 0x28) = param_5;
  _objc_release(uVar4);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = param_6;
  _objc_release(uVar4);
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(long *)(param_2 + 0x38) = param_7;
  _objc_release(uVar4);
  _objc_retain(param_8);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(long *)(param_2 + 0x40) = param_8;
  _objc_release(uVar4);
  lVar13 = param_2 + 0x350;
  _objc_loadWeakRetained();
  lVar3 = lVar13;
  func_0x00010bf645e0();
  _objc_release(lVar13);
  func_0x000107ea5df8(lVar3,lVar3,lVar15,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar14 = param_4;
  func_0x00010bf529e0();
  if (uVar14 != 0) {
    uVar14 = 0;
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf33f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar6);
      uVar14 = uVar14 + 1;
      uVar7 = param_4;
      func_0x00010bf529e0();
    } while (uVar14 < uVar7);
  }
  puVar6 = puVar5;
  func_0x00010bf51e00();
  bVar2 = param_16 == 0;
  lVar13 = 0x50;
  if (bVar2) {
    lVar13 = 0x48;
  }
  lVar9 = 0x200;
  if (bVar2) {
    lVar9 = 0xd8;
  }
  lVar10 = 0x208;
  if (bVar2) {
    lVar10 = 0xe0;
  }
  uVar4 = *(undefined8 *)(param_2 + lVar13);
  *(undefined **)(param_2 + lVar13) = puVar6;
  _objc_release(uVar4);
  *(undefined1 *)(param_2 + lVar9) = 1;
  func_0x00010c0d9840(*(undefined8 *)(param_2 + lVar10));
  uVar14 = param_13;
  func_0x00010c0720c0();
  if ((uVar14 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  uVar12 = uVar12 | uStack_bc | uStack_c0 | uStack_c4;
  bVar1 = *(byte *)(param_2 + 0x210);
  lVar13 = lVar3;
  func_0x00010bfd5320();
  if ((bVar1 != param_16) || ((((uint)lVar13 | uVar12) & 1) != 0)) {
    *(byte *)(param_2 + 0x210) = param_16;
    lVar13 = param_2 + 0x350;
    _objc_loadWeakRetained(lVar13);
    if (lStack_f8 < 1 && (uVar12 & 1) == 0) {
      func_0x00010bf644a0(lVar13);
    }
    else {
      uVar14 = param_4;
      func_0x00010bf51e00(param_4);
      func_0x00010bf644c0(lVar13);
      _objc_release(uVar14);
    }
    _objc_release(lVar13);
  }
  if ((param_16 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010bf79b60(uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_4);
    func_0x00010bf79b80(param_1,uVar4);
    _objc_release(uVar4);
    func_0x00010c0f1560(*(undefined8 *)(param_2 + 0x1c0));
    if ((((char)param_11 != '\0') && (param_11._1_1_ != '\0')) &&
       (uVar4 = param_14, func_0x000100bbae3c(), (int)uVar4 != 0)) {
      lVar13 = lVar3;
      func_0x00010c0674e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      lVar9 = lVar3;
      func_0x00010bf6d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      lVar10 = lVar3;
      func_0x00010c28d760(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      lVar11 = lVar3;
      func_0x00010c0d19c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar13);
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b09c0();
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126ba0a8;
      _CACurrentMediaTime();
      func_0x00010c261900(puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5820();
      _objc_release(uVar4);
      _objc_release(puVar6);
    }
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x288));
  }
  lVar13 = param_2 + 0x350;
  _objc_loadWeakRetained(lVar13);
  func_0x00010bf64560();
  _objc_release(lVar13);
  param_2 = param_2 + 0x350;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf64480();
  _objc_release(param_2);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b58170; end: 105b582f3; -[SCConversationFeedDataSource _updateViewModelsForWarmup:viewModelGenerationMs:source:] */

void FUN_105b58170(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be5a7e0(param_1,param_2,param_3,param_5,1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar6 = param_4;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf33f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_3,puVar2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar6 = uVar6 + 1;
      uVar3 = param_4;
      func_0x00010bf529e0();
    } while (uVar6 < uVar3);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined **)(param_2 + 0x48) = puVar2;
  _objc_release(uVar5);
  *(undefined1 *)(param_2 + 0xd8) = 1;
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0xe0),param_3,PTR____kCFBooleanTrue_11034ab68);
  param_2 = param_2 + 0x350;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf644a0();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b582f4; end: 105b58437; -[SCConversationFeedDataSource _logViewModelUpdateForSource:isWarmingUp:durationMs:] */

void FUN_105b582f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  _objc_retain(param_3);
  func_0x00010c29d620(uVar4,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bfac1e0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e1f518,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105b58438; end: 105b58707; -[SCConversationFeedDataSource _logNotificationToMessageReadyForFeedViewModels:] */

void FUN_105b58438(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
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
  puVar8 = param_3;
  func_0x00010bf529e0();
  if (puVar8 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c29d8;
    func_0x00010c130600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x1d8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123820();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar8 = &uStack_130;
  puVar4 = param_3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = PTR_PTR_1126c29a8;
        uVar9 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
        _objc_retain(uVar9);
        _objc_opt_class(puVar2);
        uVar5 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar2);
        uVar1 = uVar9;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar9);
        if (uVar1 != 0) {
          uVar5 = uVar9;
          func_0x000105bb5a48(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126c29d8;
          func_0x00010bf33900(PTR_PTR_1126c29d8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + 0x1d8);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c123820();
          _objc_release(uVar3);
          uVar6 = uVar9;
          func_0x000105bb4e38();
          if ((int)uVar6 == 0) {
            uVar6 = uVar9;
            func_0x000105bb5cb4();
            if ((int)uVar6 != 0) {
              puVar7 = PTR_PTR_1126c0960;
              func_0x00010c108120(PTR_PTR_1126c0960);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105b58640;
            }
            func_0x000105bb4db8();
            if ((int)uVar9 != 0) {
              puVar7 = PTR_PTR_1126c0960;
              func_0x00010c0cb7c0(PTR_PTR_1126c0960);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_105b58640;
            }
          }
          else {
            puVar7 = PTR_PTR_1126c0960;
            func_0x00010c2668e0(PTR_PTR_1126c0960);
            _objc_retainAutoreleasedReturnValue();
LAB_105b58640:
            uVar3 = *(undefined8 *)(param_1 + 0x1d8);
            func_0x00010c269d40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c123800();
            _objc_release(uVar3);
            _objc_release(puVar7);
          }
          _objc_release(puVar2);
          _objc_release(uVar5);
        }
        _objc_release(uVar1);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar4 != puVar8);
      puVar8 = &uStack_130;
      puVar4 = param_3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar4 = param_3;
  func_0x00010bde2600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,0,
             &PTR____CFConstantStringClassReference_110e1f538,puVar8 == puVar4,1);
  return;
}



/* Entry: 105b58708; end: 105b5877f; -[SCConversationFeedDataSource viewModelCoordinatorWantsToReloadViewModels:] */

void FUN_105b58708(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde2600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,0,
             &PTR____CFConstantStringClassReference_110e1f538,param_3 == lVar1,1);
  return;
}



/* Entry: 105b58780; end: 105b5879b; -[SCConversationFeedDataSource refreshViewModelsForViewChange:] */

void FUN_105b58780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,1,
             &PTR____CFConstantStringClassReference_110e1f6f8,param_3,1);
  return;
}



/* Entry: 105b5879c; end: 105b587db; -[SCConversationFeedDataSource _enableCommunityViewing] */

undefined8 FUN_105b5879c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105b587dc; end: 105b5880b; -[SCConversationFeedDataSource _viewerIsOnCommunityFeed] */

void FUN_105b587dc(void)

{
  func_0x00010be08aa0();
  return;
}



/* Entry: 105b5880c; end: 105b5899f; -[SCConversationFeedDataSource _communityFeedViewModelCoordinator] */

void FUN_105b5880c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = param_1;
  func_0x00010be08aa0();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x270);
    lVar6 = *(long *)(param_1 + 0x1f0);
    if (lVar6 == 0) {
      puVar1 = PTR_PTR_1126c29c8;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c2923e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x218);
      uVar3 = *(undefined8 *)(param_1 + 0x220);
      uVar11 = *(undefined8 *)(param_1 + 0x240);
      uVar12 = *(undefined8 *)(param_1 + 0x248);
      uVar13 = *(undefined8 *)(param_1 + 0x1c8);
      uVar7 = *(undefined8 *)(param_1 + 600);
      uVar8 = *(undefined8 *)(param_1 + 0x260);
      uVar9 = *(undefined8 *)(param_1 + 0x158);
      uVar10 = *(undefined8 *)(param_1 + 0x268);
      lVar6 = param_1;
      func_0x00010be974a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c034b60(puVar1,*(undefined2 *)(param_1 + 200),uVar4,uVar2,uVar5,uVar3,uVar11,
                          uVar12,uVar13,uVar7,uVar8,uVar9,uVar10,lVar6,0);
      uVar4 = *(undefined8 *)(param_1 + 0x1f0);
      *(undefined **)(param_1 + 0x1f0) = puVar1;
      _objc_release(uVar4);
      _objc_release(lVar6);
      _objc_release(uVar2);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x1f0));
      lVar6 = *(long *)(param_1 + 0x1f0);
    }
    _objc_retain(lVar6);
    _os_unfair_lock_unlock(param_1 + 0x270);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105b589a0; end: 105b58a43; -[SCConversationFeedDataSource _rightButtonViewModelsCoordinator] */

void FUN_105b589a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c29e0;
  _objc_alloc(PTR_PTR_1126c29e0);
  uVar3 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c004640(puVar1,param_2,uVar3,uVar4,uVar5,uVar6,puVar2,*(undefined8 *)(param_1 + 0x160)
                      ,*(undefined8 *)(param_1 + 0x1d0));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b58a44; end: 105b58aab; -[SCConversationFeedDataSource _allFeedItems] */

void FUN_105b58a44(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be08aa0();
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)(param_1 + 0xf0);
    _objc_retain(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    if (*(long *)(param_1 + 0xf0) != 0) {
      func_0x00010befa160(puVar2);
    }
    if (*(long *)(param_1 + 0x1f8) != 0) {
      func_0x00010befa160(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b58aac; end: 105b58c43; -[SCConversationFeedDataSource _updateFeedPaginatorsIfNeeded] */

void FUN_105b58aac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x270);
  lVar5 = *(long *)(param_1 + 0x188);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0x280);
      *(undefined8 *)(param_1 + 0x280) = 0;
LAB_105b58bd4:
      _objc_release(lVar5);
      lVar1 = param_1 + 0x270;
      _os_unfair_lock_unlock();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      _os_unfair_lock_unlock(param_1 + 0x270);
      __Unwind_Resume();
      _os_unfair_lock_lock(lVar1 + 0x270);
      uVar6 = *(undefined8 *)(lVar1 + 0x280);
      _objc_retain(uVar6);
      _os_unfair_lock_unlock(lVar1 + 0x270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar5);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar2 = lVar7;
      func_0x00010c22d760();
      if (lVar2 == 0xc) {
        if (*(long *)(param_1 + 0x280) == 0) {
          _objc_retain(lVar7);
          lVar3 = lVar7;
          func_0x00010010fab4(lVar7,PTR_DAT_1126a5080);
          lVar1 = lVar7;
          if ((int)lVar3 == 0) {
            lVar1 = 0;
          }
          _objc_retain(lVar1);
          _objc_release(lVar7);
          uVar6 = *(undefined8 *)(param_1 + 0x280);
          *(long *)(param_1 + 0x280) = lVar1;
          _objc_release(uVar6);
        }
        goto LAB_105b58bd4;
      }
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105b58c44; end: 105b58c7f; -[SCConversationFeedDataSource communityFeedDataPaginator] */

void FUN_105b58c44(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x270);
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b58c80; end: 105b58cbb; -[SCConversationFeedDataSource _refreshViewModelsAfterFriendmojiSettingsChange] */

void FUN_105b58c80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bee9f40();
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,1,
             &PTR____CFConstantStringClassReference_110e1f738,uVar1,1);
  return;
}



/* Entry: 105b58cbc; end: 105b58e83; -[SCConversationFeedDataSource _subscribeToFanPassSubscriptionUpdates] */

void FUN_105b58cbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_70 = &uStack_78;
    uStack_78 = 0;
    uStack_68 = 0x2020000000;
    uStack_60 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x230);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf5ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_58);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    __Block_object_dispose(&uStack_78,8);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105b58e84; end: 105b58f2b;  */

void FUN_105b58e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_2);
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97ce0(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b58f2c; end: 105b58f7b;  */

void FUN_105b58f2c(long param_1,undefined8 param_2,int param_3)

{
  _objc_retain(param_2);
  func_0x00010c06b700();
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b58f7c; end: 105b58ffb;  */

void FUN_105b58f7c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01')) {
    lVar1 = param_2;
    func_0x00010bf529e0();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be88dc0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b58ffc; end: 105b59037; -[SCConversationFeedDataSource _refreshViewModelsAfterFanPassSubscriptionsChange] */

void FUN_105b58ffc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bee9f40();
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,1,
             &PTR____CFConstantStringClassReference_110e1f758,uVar1,1);
  return;
}



/* Entry: 105b59038; end: 105b59103; -[SCConversationFeedDataSource _onStreaksUpdate:] */

void FUN_105b59038(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x310);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071d00(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105b590f0;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x310);
    *(ulong *)(param_1 + 0x310) = uVar3;
    _objc_release(uVar2);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f718,0,1);
  }
LAB_105b590f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b59104; end: 105b5932b; -[SCConversationFeedDataSource _onRecentlyActiveUpdate:] */

/* WARNING: Possible PIC construction at 0x000105b592dc: Changing call to branch */

void FUN_105b59104(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar10 = *(long *)(lVar11 * 8);
      lVar4 = lVar10;
      func_0x00010c07be00();
      if ((int)lVar4 != 0) {
        lVar4 = lVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          func_0x00010c2923e0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar10);
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar9 = *(undefined **)(param_1 + 800);
  _objc_retain(puVar9);
  _objc_retain(puVar2);
  if (puVar9 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar9);
LAB_105b592e0:
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    if ((*(byte *)(param_3 + 0x330) & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_3 + 0x330) = 1;
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar9);
    }
    else {
      puVar6 = puVar9;
      func_0x00010c072060();
      _objc_release(puVar2);
      _objc_release(puVar9);
      if (((ulong)puVar6 & 1) != 0) goto LAB_105b592e0;
    }
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + 800);
    *(undefined **)(param_1 + 800) = puVar2;
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105b5932c; end: 105b5935b; -[SCConversationFeedDataSource expandPaginationWindow] */

void FUN_105b5932c(long param_1)

{
  if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x330) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,0,
             &PTR____CFConstantStringClassReference_110e1f798,0,1);
  return;
}



/* Entry: 105b5935c; end: 105b59403; -[SCConversationFeedDataSource handleTapViewAllCell] */

void FUN_105b5935c(long param_1)

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



/* Entry: 105b59404; end: 105b5942f;  */

void FUN_105b59404(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b59430; end: 105b59453; -[SCConversationFeedDataSource _handleTapViewAllCell] */

void FUN_105b59430(long param_1)

{
  *(undefined8 *)(param_1 + 0x348) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,0,
             &PTR____CFConstantStringClassReference_110db6818,0,1);
  return;
}



/* Entry: 105b59454; end: 105b5946b; -[SCConversationFeedDataSource delegate] */

void FUN_105b59454(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b5946c; end: 105b59477; -[SCConversationFeedDataSource setDelegate:] */

void FUN_105b5946c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x350,param_3);
  return;
}



/* Entry: 105b59478; end: 105b598ff; -[SCConversationFeedDataSource .cxx_destruct] */

void FUN_105b59478(long param_1)

{
  _objc_destroyWeak(param_1 + 0x350);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
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
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
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



/* Entry: 105b59900; end: 105b59917;  */

void FUN_105b59900(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b59918; end: 105b59987;  */

void FUN_105b59918(long param_1,undefined8 param_2)

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



/* Entry: 105b59988; end: 105b5998b;  */

void FUN_105b59988(void)

{
  return;
}



/* Entry: 105b5998c; end: 105b59a4b; -[SCFriendsFeedCampaignButtonViewModelProvider initWithAdResponseParser:adConfigProviderV2:] */

undefined1 *
FUN_105b5998c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec0d0;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b59a4c; end: 105b59c07; -[SCFriendsFeedCampaignButtonViewModelProvider campaignButtonViewModelForResponseBytes:] */

void FUN_105b59a4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126c29f0;
    _objc_alloc(PTR_PTR_1126c29f0);
    func_0x00010bff1e00();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f480();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0f3e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        lVar1 = param_1;
        func_0x00010bdc5840(param_1,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0fec20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf36500();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar1);
        _objc_release(uVar5);
      }
      puVar3 = PTR_PTR_1126c29f0;
      _objc_alloc(PTR_PTR_1126c29f0);
      func_0x00010bff1e00();
      uVar8 = *(ulong *)(param_1 + 0x18);
      func_0x00010bf529e0();
      if (0xf < uVar8) {
        func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
      }
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar3,param_3);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b59c08; end: 105b59c9f; -[SCFriendsFeedCampaignButtonViewModelProvider _adSnapForCampaignCTAFromAdResponse:] */

void FUN_105b59c08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef60a0();
  if (lVar1 == 0x16) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f480();
    uVar3 = uVar3 & 0xffffffff;
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  lVar1 = param_3;
  func_0x00010bef52e0(param_3,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b59ca0; end: 105b59cdb; -[SCFriendsFeedCampaignButtonViewModelProvider .cxx_destruct] */

void FUN_105b59ca0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b59cdc; end: 105b59d4f; -[SCFriendsFeedHapticsFeedbackRuleEvaluator initWithMessagingExperimentService:] */

undefined1 * FUN_105b59cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec0d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b59d50; end: 105b5a6f7; -[SCFriendsFeedHapticsFeedbackRuleEvaluator shouldTriggerHapticsFeedbackForFriendsFeedItems:] */

long FUN_105b59d50(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined8 *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined *puStack_418;
  undefined8 *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 *puStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  code *pcStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar12 = *(ulong *)(param_1 + 8);
  if (uVar12 == 0) {
    _objc_retain(param_3);
    uVar12 = *(ulong *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = param_3;
  }
  else {
    _objc_retain(uVar12);
    _objc_retain(param_3);
    if (uVar12 != param_3) {
      if (param_3 == 0) {
        _objc_release(uVar12);
      }
      else {
        uVar13 = uVar12;
        func_0x00010c071ae0();
        _objc_release(param_3);
        _objc_release(uVar12);
        if ((uVar13 & 1) != 0) {
          lVar14 = 0;
          goto LAB_105b5a5d0;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf51e00();
      uVar12 = param_3;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)(param_1 + 8);
      *(ulong *)(param_1 + 8) = uVar12;
      _objc_release(uVar11);
      _objc_retain(uVar4);
      _objc_retain(param_3);
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uVar11 = uVar4;
      func_0x000100504554(uVar4,&PTR___NSConcreteGlobalBlock_1108d73d0);
      func_0x00010bf72060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_retain(param_3);
      uVar12 = param_3;
      func_0x00010bf52a60();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      lVar2 = lRam0000000000000000;
      lVar14 = 0;
      if (uVar12 != 0) {
        do {
          uVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(param_3);
            }
            uVar15 = *(ulong *)(uVar13 * 8);
            uVar6 = uVar15;
            func_0x000100bf39e4();
            if ((uVar6 & 1) == 0) {
              uVar6 = uVar15;
              func_0x00010bfa3d00(uVar15);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
              _objc_retain(puVar7);
              _objc_retain(uVar15);
              puVar8 = puVar7;
              func_0x000100bf377c();
              uVar6 = uVar15;
              func_0x000100bf377c();
              if (((uint)puVar8 & (uint)uVar6) == 1) {
                uStack_140 = 0;
                uStack_130 = 0x3032000000;
                uStack_128 = 0x105b5a730;
                uStack_120 = 0x105b5a740;
                uStack_118 = 0;
                uStack_160 = 0;
                puStack_158 = &uStack_160;
                uStack_150 = 0x2020000000;
                uStack_148 = 0;
                uStack_180 = 0;
                puStack_178 = &uStack_180;
                uStack_170 = 0x2020000000;
                uStack_168 = 0;
                uStack_1a0 = 0;
                puStack_198 = &uStack_1a0;
                uStack_190 = 0x2020000000;
                uStack_188 = 0;
                uStack_1c0 = 0;
                puStack_1b8 = &uStack_1c0;
                uStack_1b0 = 0x2020000000;
                uStack_1a8 = 0;
                uStack_1e0 = 0;
                puStack_1d8 = &uStack_1e0;
                uStack_1d0 = 0x2020000000;
                uStack_1c8 = 0;
                uStack_200 = 0;
                puStack_1f8 = &uStack_200;
                uStack_1f0 = 0x2020000000;
                uStack_1e8 = 0;
                uStack_220 = 0;
                puStack_218 = &uStack_220;
                uStack_210 = 0x2020000000;
                uStack_208 = 0;
                uStack_240 = 0;
                puStack_238 = &uStack_240;
                uStack_230 = 0x2020000000;
                uStack_228 = 0;
                uStack_260 = 0;
                uStack_250 = 0x2020000000;
                uStack_248 = 0;
                uStack_280 = 0;
                puStack_278 = &uStack_280;
                uStack_270 = 0x2020000000;
                uStack_268 = 0;
                uStack_2a0 = 0;
                puStack_298 = &uStack_2a0;
                uStack_290 = 0x2020000000;
                uStack_288 = 0;
                uStack_2c0 = 0;
                puStack_2b8 = &uStack_2c0;
                uStack_2b0 = 0x2020000000;
                uStack_2a8 = 0;
                uStack_2e0 = 0;
                puStack_2d8 = &uStack_2e0;
                uStack_2d0 = 0x2020000000;
                uStack_2c8 = 0;
                uStack_300 = 0;
                puStack_2f8 = &uStack_300;
                uStack_2f0 = 0x2020000000;
                uStack_2e8 = 0;
                puVar8 = puVar7;
                puStack_258 = &uStack_260;
                puStack_138 = &uStack_140;
                func_0x00010bef0c80(puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar8;
                func_0x00010c0cb340();
                _objc_retainAutoreleasedReturnValue();
                puStack_330 = puVar3;
                uStack_328 = 0xc2000000;
                pcStack_320 = FUN_105b5a748;
                puStack_318 = &UNK_1108d73f0;
                puStack_308 = &uStack_160;
                puStack_358 = puVar3;
                uStack_350 = 0xc2000000;
                pcStack_348 = FUN_105b5a7d4;
                puStack_340 = &UNK_1108d7420;
                puStack_338 = &uStack_180;
                puStack_380 = puVar3;
                uStack_378 = 0xc2000000;
                uStack_370 = 0x105b5a804;
                puStack_368 = &UNK_1108d7450;
                puStack_360 = &uStack_1a0;
                puStack_3a8 = puVar3;
                uStack_3a0 = 0xc2000000;
                uStack_398 = 0x105b5a834;
                puStack_390 = &UNK_1108d7480;
                puStack_388 = &uStack_1c0;
                puStack_408 = puVar3;
                uStack_400 = 0xc2000000;
                pcStack_3f8 = FUN_105b5a864;
                puStack_3f0 = &UNK_1108d7560;
                puStack_3e8 = &uStack_1e0;
                puStack_3e0 = &uStack_200;
                puStack_3d8 = &uStack_220;
                puStack_3d0 = &uStack_240;
                puStack_3c8 = &uStack_280;
                puStack_3c0 = &uStack_2a0;
                puStack_3b8 = &uStack_2e0;
                puStack_3b0 = &uStack_300;
                puStack_430 = puVar3;
                uStack_428 = 0xc2000000;
                pcStack_420 = FUN_105b5abf4;
                puStack_418 = &UNK_1108d7620;
                puStack_438 = &uStack_260;
                puStack_458 = puVar3;
                uStack_450 = 0xc2000000;
                pcStack_448 = FUN_105b5ac68;
                puStack_440 = &UNK_1108d7650;
                puStack_410 = puStack_438;
                puStack_310 = &uStack_140;
                func_0x00010c0bfe20();
                _objc_release(puVar9);
                _objc_release(puVar8);
                uStack_478 = 0;
                uStack_468 = 0x2020000000;
                uStack_460 = 0;
                uVar10 = uVar15;
                puStack_470 = &uStack_478;
                func_0x00010bef0c80();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar10;
                func_0x00010c0cb340();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0bfe20();
                _objc_release(uVar6);
                _objc_release(uVar10);
                bVar1 = *(byte *)(puStack_470 + 3);
                __Block_object_dispose(&uStack_478,8);
                __Block_object_dispose(&uStack_300,8);
                __Block_object_dispose(&uStack_2e0,8);
                __Block_object_dispose(&uStack_2c0,8);
                __Block_object_dispose(&uStack_2a0,8);
                __Block_object_dispose(&uStack_280,8);
                __Block_object_dispose(&uStack_260,8);
                __Block_object_dispose(&uStack_240,8);
                __Block_object_dispose(&uStack_220,8);
                __Block_object_dispose(&uStack_200,8);
                __Block_object_dispose(&uStack_1e0,8);
                __Block_object_dispose(&uStack_1c0,8);
                __Block_object_dispose(&uStack_1a0,8);
                __Block_object_dispose(&uStack_180,8);
                __Block_object_dispose(&uStack_160,8);
                __Block_object_dispose(&uStack_140,8);
                _objc_release(uStack_118);
                _objc_release(uVar15);
                _objc_release(puVar7);
                _objc_release(puVar7);
                if ((bVar1 & 1) != 0) {
LAB_105b5a5a0:
                  lVar14 = 1;
                  goto LAB_105b5a5a4;
                }
              }
              else {
                _objc_release(uVar15);
                _objc_release(puVar7);
                _objc_release(puVar7);
                if ((((uint)puVar8 ^ 1) & (uint)uVar6 & 1) != 0) goto LAB_105b5a5a0;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar12 != uVar13);
          uVar12 = param_3;
          func_0x00010bf52a60();
        } while (uVar12 != 0);
        lVar14 = 0;
      }
LAB_105b5a5a4:
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(param_3);
      _objc_release(uVar4);
      _objc_release(uVar4);
      goto LAB_105b5a5d0;
    }
    _objc_release(param_3);
  }
  _objc_release(uVar12);
  lVar14 = 0;
LAB_105b5a5d0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_478,8);
    __Block_object_dispose(&uStack_300,8);
    __Block_object_dispose(&uStack_2e0,8);
    __Block_object_dispose(&uStack_2c0,8);
    __Block_object_dispose(&uStack_2a0,8);
    __Block_object_dispose(&uStack_280,8);
    __Block_object_dispose(&uStack_260,8);
    __Block_object_dispose(&uStack_240,8);
    __Block_object_dispose(&uStack_220,8);
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_1a0,8);
    __Block_object_dispose(&uStack_180,8);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    __Unwind_Resume(param_3);
    _objc_storeStrong(param_3 + 0x10,0);
    lVar14 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar14,0);
    return lVar14;
  }
  return lVar14;
}



/* Entry: 105b5a6f8; end: 105b5a727; -[SCFriendsFeedHapticsFeedbackRuleEvaluator .cxx_destruct] */

void FUN_105b5a6f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b5a728; end: 105b5a747;  */

void FUN_105b5a728(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 105b5a748; end: 105b5a7d3;  */

void FUN_105b5a748(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c281c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c2420e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfdc680();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b5a7d4; end: 105b5a863;  */

void FUN_105b5a7d4(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105b5a864; end: 105b5aa17;  */

void FUN_105b5a864(long param_1,undefined8 param_2)

{
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b5aa18;
  puStack_30 = &UNK_1108d74b0;
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105b5aa28;
  puStack_58 = &UNK_1108431e0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105b5aa38;
  puStack_80 = &UNK_110847180;
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = *(undefined8 *)(param_1 + 0x38);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105b5aa48;
  puStack_a8 = &UNK_1108d74e0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105b5aa58;
  puStack_d0 = &UNK_1108431e0;
  uStack_c8 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x48);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105b5aa68;
  puStack_f8 = &UNK_110847180;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105b5aa78;
  puStack_120 = &UNK_110847180;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x105b5aa8c;
  puStack_148 = &UNK_110847180;
  uStack_168 = *(undefined8 *)(param_1 + 0x50);
  uStack_190 = *(undefined8 *)(param_1 + 0x58);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x105b5aa9c;
  puStack_170 = &UNK_110847180;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x105b5aaac;
  puStack_198 = &UNK_1108d7530;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x105b5aabc;
  puStack_1c0 = &UNK_1108d74e0;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x105b5aacc;
  puStack_1e8 = &UNK_1108d74e0;
  uStack_1b8 = uStack_1e0;
  uStack_140 = uStack_168;
  uStack_f0 = uStack_118;
  uStack_28 = uStack_1e0;
  func_0x00010c0bc660(param_2,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&PTR___NSConcreteGlobalBlock_1108d7510,0,0,
                      &puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,&puStack_200);
  return;
}



/* Entry: 105b5aa18; end: 105b5aadb;  */

void FUN_105b5aa18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 105b5aadc; end: 105b5abef;  */

void FUN_105b5aadc(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 105b5abf0; end: 105b5abf3;  */

void FUN_105b5abf0(void)

{
  return;
}



/* Entry: 105b5abf4; end: 105b5ac53;  */

void FUN_105b5abf4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b5ac54;
  puStack_20 = &UNK_1108d75d0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf7e0(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1108d7600);
  return;
}



/* Entry: 105b5ac54; end: 105b5ac67;  */

void FUN_105b5ac54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 105b5ac68; end: 105b5ac97;  */

void FUN_105b5ac68(long param_1,undefined1 param_2)

{
  func_0x00010c07bde0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105b5ac98; end: 105b5ad2f;  */

void FUN_105b5ac98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if ((lVar3 == 0) || (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) != '\0')) {
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar3 == 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c2420e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfdc680();
    *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5ad30; end: 105b5ae67;  */

void FUN_105b5ad30(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
      uVar2 = param_2;
      func_0x00010c07bde0();
      uVar1 = (undefined1)uVar2;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5ae68; end: 105b5b0bf;  */

void FUN_105b5ae68(long param_1,undefined8 param_2)

{
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) {
    return;
  }
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105b5b0c0;
  puStack_38 = &UNK_1108d7740;
  uStack_2c0 = *(undefined8 *)(param_1 + 0x28);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105b5b0e0;
  puStack_68 = &UNK_1108d7770;
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = *(undefined8 *)(param_1 + 0x40);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105b5b100;
  puStack_98 = &UNK_1108874b0;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x105b5b120;
  puStack_c8 = &UNK_1108d77a0;
  uStack_b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105b5b140;
  puStack_f8 = &UNK_1108d7770;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105b5b160;
  puStack_128 = &UNK_1108874b0;
  uStack_148 = *(undefined8 *)(param_1 + 0x58);
  uStack_178 = *(undefined8 *)(param_1 + 0x60);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x105b5b180;
  puStack_158 = &UNK_1108874b0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x105b5b1a0;
  puStack_188 = &UNK_110860b78;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x105b5b1bc;
  puStack_1b0 = &UNK_110868438;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x105b5b1cc;
  puStack_1d8 = &UNK_110847658;
  uStack_218 = 0xc2000000;
  uStack_210 = 0x105b5b1dc;
  puStack_208 = &UNK_1108874b0;
  uStack_228 = *(undefined8 *)(param_1 + 0x68);
  uStack_258 = *(undefined8 *)(param_1 + 0x70);
  puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  uStack_240 = 0x105b5b1fc;
  puStack_238 = &UNK_1108874b0;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  uStack_270 = 0x105b5b21c;
  puStack_268 = &UNK_1108d77d0;
  puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a8 = 0xc2000000;
  uStack_2a0 = 0x105b5b23c;
  puStack_298 = &UNK_1108d77a0;
  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d8 = 0xc2000000;
  uStack_2d0 = 0x105b5b25c;
  puStack_2c8 = &UNK_1108d77a0;
  uStack_290 = uStack_2c0;
  uStack_288 = uStack_2b8;
  uStack_260 = uStack_2c0;
  uStack_230 = uStack_2c0;
  uStack_200 = uStack_2c0;
  uStack_1f8 = uStack_228;
  uStack_1d0 = uStack_2c0;
  uStack_1a8 = uStack_2c0;
  uStack_180 = uStack_2c0;
  uStack_150 = uStack_2c0;
  uStack_120 = uStack_2c0;
  uStack_118 = uStack_148;
  uStack_f0 = uStack_2c0;
  uStack_c0 = uStack_2c0;
  uStack_90 = uStack_2c0;
  uStack_60 = uStack_2c0;
  uStack_30 = uStack_2c0;
  uStack_28 = uStack_2b8;
  func_0x00010c0bc660(param_2,param_2,&puStack_50,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110,
                      &puStack_140,&puStack_170,&puStack_1a0,&puStack_1c8,&puStack_1f0,&puStack_220,
                      &puStack_250,&puStack_280,&puStack_2b0,&puStack_2e0);
  return;
}



/* Entry: 105b5b0c0; end: 105b5b27b;  */

void FUN_105b5b0c0(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
       param_3 & (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) ^ 1);
  return;
}



/* Entry: 105b5b27c; end: 105b5b3e3;  */

void FUN_105b5b27c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  return;
}



/* Entry: 105b5b3e4; end: 105b5b3e7;  */

void FUN_105b5b3e4(void)

{
  return;
}



/* Entry: 105b5b3e8; end: 105b5b447;  */

void FUN_105b5b3e8(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105b5b448;
  puStack_28 = &UNK_1108d7850;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bf7e0(param_2,param_2,&puStack_40,&PTR___NSConcreteGlobalBlock_1108d7880);
  return;
}



/* Entry: 105b5b448; end: 105b5b46b;  */

void FUN_105b5b448(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
       param_3 & (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) ^ 1);
  return;
}



/* Entry: 105b5b46c; end: 105b5b4b3;  */

void FUN_105b5b46c(long param_1,undefined1 param_2)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    func_0x00010c07bde0();
  }
  else {
    param_2 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105b5b4b4; end: 105b5b76f; -[SCFriendsFeedRightButtonViewModelCoordinator initWithContextPostSnapFeedDataFetcher:messagingExperimentService:friendsFeedContextConfigFetcher:performer:timeProvider:nglStudySettings:playableCTAProvider:] */

undefined8 *
FUN_105b5b4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126ec0e0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_4);
    _objc_release(param_4);
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



/* Entry: 105b5b770; end: 105b5b883;  */

void FUN_105b5b770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24aac0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b5b884; end: 105b5beb3; -[SCFriendsFeedRightButtonViewModelCoordinator viewModelsForFriendsFeedItems:currentContextualLensSuggestions:lastInteractionStates:lastPlayedSnapIdentifier:staleContentsByConversationId:] */

void FUN_105b5b884(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined4 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = &UNK_10f32bb27;
  func_0x0001000ba800();
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = &PTR___NSConcreteGlobalBlock_110a07fc8;
  lVar23 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110a07fc8);
  uVar26 = uVar2;
  func_0x00010c1050a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x28));
  lVar3 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar3;
  func_0x00010c27d380();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126c29f8;
  _objc_alloc();
  dVar29 = param_1 - (double)(lVar23 * 0x3c);
  if (lVar23 < 1) {
    dVar29 = 0.0;
  }
  func_0x00010c009fc0(param_1 + -900.0,param_1 + -14400.0,param_1 + -28800.0,dVar29);
  uVar5 = *(ulong *)(param_2 + 0x18);
  if (uVar5 == 0) {
    uVar22 = 0xffffffffffffffff;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar5;
    func_0x00010c23eb40();
    _objc_release(uVar5);
  }
  _CACurrentMediaTime();
  if ((long)uVar22 < 0) {
    lVar23 = 0;
  }
  else {
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_105b5beb4;
    puStack_128 = &UNK_1108d7900;
    _objc_retain(param_7);
    uStack_120 = param_7;
    _objc_retain(uVar26);
    uStack_118 = uVar26;
    _objc_retain(param_6);
    uStack_110 = param_6;
    _objc_retain(puVar4);
    lVar3 = param_4;
    puStack_108 = puVar4;
    func_0x00010c124d20();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    _objc_release(puStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  _CACurrentMediaTime();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(param_4);
  puVar20 = &uStack_180;
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar21 = *plStack_170;
    do {
      lVar25 = 0;
      do {
        if (*plStack_170 != lVar21) {
          _objc_enumerationMutation(param_4);
        }
        lVar27 = *(long *)(lStack_178 + lVar25 * 8);
        lVar7 = lVar27;
        func_0x00010bef0c80(lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        uVar2 = uVar26;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar28 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1a8 = &uStack_1b0;
        uStack_1b0 = 0;
        uStack_1a0 = 0x3032000000;
        pcStack_198 = FUN_105b5c168;
        uStack_190 = 0x105b5c178;
        uStack_188 = 0;
        uVar10 = param_8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c0200();
        lVar7 = param_2;
        func_0x00010be97480();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar27;
        func_0x00010c08fa60();
        if (lVar11 != 0) {
          func_0x00010c1d0640(ppuVar6);
        }
        if (0x7fffffffffffffff < uVar22 || lVar23 < (long)uVar22) {
          func_0x00010c076920(lVar7);
        }
        _objc_release(lVar7);
        _objc_release(uVar10);
        ppuVar19 = (undefined **)0x8;
        __Block_object_dispose(&uStack_1b0,8);
        _objc_release(uStack_188);
        _objc_release(uVar9);
        _objc_release(uVar28);
        _objc_release(uVar2);
        _objc_release(lVar27);
        _objc_release(lVar8);
        lVar25 = lVar25 + 1;
      } while (lVar3 != lVar25);
      puVar20 = &uStack_180;
      lVar3 = param_4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  _CACurrentMediaTime();
  ppuVar12 = ppuVar6;
  func_0x00010bf51e00(ppuVar6);
  _objc_release(ppuVar6);
  _objc_release(puVar4);
  _objc_release(uVar26);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume();
  _objc_retain(ppuVar19);
  _objc_retain(puVar20);
  uVar24 = (undefined4)*(undefined8 *)(param_4 + 0x20);
  puVar13 = puVar20;
  func_0x00010bef0c80(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(puVar14);
  _objc_release(puVar13);
  uVar26 = *(undefined8 *)(param_4 + 0x28);
  puVar13 = puVar20;
  func_0x00010bef0c80(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + 0x30);
  puVar15 = puVar20;
  func_0x00010bfa3d00(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_4 + 0x38);
  _objc_retain(puVar20);
  _objc_retain(uVar26);
  _objc_retain(uVar2);
  _objc_retain(uVar28);
  puVar16 = puVar20;
  FUN_105b5d3e4();
  if (((ulong)puVar16 & 1) == 0) {
    puVar16 = puVar20;
    func_0x00010bef0e60();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x000107cff2d8();
    _objc_release(puVar17);
    _objc_release(puVar16);
    if (((ulong)puVar18 & 1) != 0) goto LAB_105b5c048;
    puVar16 = puVar20;
    FUN_105b5d0e8(puVar20,uVar26,uVar2,uVar24,uVar28,0);
    _objc_release(uVar28);
    _objc_release(uVar2);
    _objc_release(uVar26);
    _objc_release(puVar20);
    _objc_release(uVar2);
    _objc_release(puVar15);
    _objc_release(uVar26);
    _objc_release(puVar14);
    _objc_release(puVar13);
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (((ulong)puVar16 & 1) == 0) goto LAB_105b5c090;
    func_0x00010c067fc0(ppuVar19);
    func_0x00010c0df780(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105b5c048:
    _objc_release(uVar28);
    _objc_release(uVar2);
    _objc_release(uVar26);
    _objc_release(puVar20);
    _objc_release(uVar2);
    _objc_release(puVar15);
    _objc_release(uVar26);
    _objc_release(puVar14);
    _objc_release(puVar13);
LAB_105b5c090:
    _objc_retain(ppuVar19);
    ppuVar12 = ppuVar19;
  }
  _objc_release(puVar20);
  _objc_release(ppuVar19);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 105b5beb4; end: 105b5c167;  */

void FUN_105b5beb4(long param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar8 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bef0c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010bef0c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  uVar4 = param_3;
  FUN_105b5d3e4();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010bef0e60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000107cff2d8();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) != 0) goto LAB_105b5c048;
    uVar4 = param_3;
    FUN_105b5d0e8(param_3,uVar9,uVar10,uVar8,uVar11,0);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(param_3);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar4 & 1) != 0) {
      func_0x00010c067fc0(param_2);
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b5c09c;
    }
  }
  else {
LAB_105b5c048:
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(param_3);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_retain(param_2);
  puVar7 = param_2;
LAB_105b5c09c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105b5c168; end: 105b5c17f;  */

void FUN_105b5c168(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b5c180; end: 105b5c1b7;  */

void FUN_105b5c180(long param_1,undefined8 param_2)

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



/* Entry: 105b5c1b8; end: 105b5d097; -[SCFriendsFeedRightButtonViewModelCoordinator _rightButtonViewModelForFeedItem:isJustViewedSnap:contextPostSnapParamsForLastUnexpiredViewedSnap:lensSuggestion:lastInteractionState:psaConfig:disableSmartCTA:friendshipFlashbackContent:] */

void FUN_105b5c1b8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,char param_9,
                  undefined4 param_10,long param_11)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_f0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105b5d098;
  puStack_98 = &UNK_1108d7930;
  _objc_retain(param_3);
  ppuStack_90 = param_3;
  _objc_retain(param_5);
  lStack_88 = param_5;
  _objc_retain(param_7);
  uStack_70 = (undefined1)param_4;
  uStack_80 = param_7;
  _objc_retain(param_8);
  ppuVar1 = &puStack_b0;
  uStack_78 = param_8;
  _objc_retainBlock();
  ppuVar2 = param_3;
  func_0x000105bae104();
  if ((int)ppuVar2 == 0) {
    uVar19 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf1f3c0();
    uVar19 = (uint)uVar6 ^ 1;
    _objc_release(uVar3);
  }
  ppuVar2 = param_3;
  func_0x000100bf39e4();
  ppuVar16 = param_3;
  if ((int)ppuVar2 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((uVar5 & 1) != 0) {
      puVar20 = (undefined *)0x0;
      goto LAB_105b5c61c;
    }
    ppuVar2 = param_3;
    func_0x000107cfb4d4();
    if ((int)ppuVar2 != 0) {
      puVar20 = PTR_PTR_1126c2a00;
      func_0x00010bf35d60(PTR_PTR_1126c2a00);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b5c61c;
    }
    func_0x000107cfb510();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar16;
    func_0x00010c08fa60();
    puVar20 = PTR_PTR_1126c2a00;
    if (ppuVar2 != (undefined **)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf2be80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2c360(puVar20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(ppuVar16);
      goto LAB_105b5c61c;
    }
LAB_105b5c5c8:
    _objc_release(ppuVar16);
    goto LAB_105b5c5d0;
  }
  ppuVar2 = param_3;
  func_0x000107cfb48c();
  puVar20 = PTR_PTR_1126c2a00;
  ppuVar13 = ppuVar1;
  if ((int)ppuVar2 != 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befea60(puVar20);
    _objc_retainAutoreleasedReturnValue();
LAB_105b5c364:
    _objc_release(ppuVar13);
    goto LAB_105b5c61c;
  }
  ppuVar2 = param_3;
  func_0x000107cfb790();
  if ((int)ppuVar2 != 0) {
    puVar14 = PTR_PTR_1126c2a08;
    func_0x00010bfcec80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar14;
    func_0x00010b0aef54();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c2a10;
    _objc_alloc(PTR_PTR_1126c2a10);
    puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0512a0(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar20);
    puVar20 = PTR_PTR_1126c2a00;
    func_0x00010c27fe00(PTR_PTR_1126c2a00);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar21);
    _objc_release(puVar14);
    goto LAB_105b5c61c;
  }
  ppuVar2 = param_3;
  FUN_105b5d3e4();
  if ((int)ppuVar2 != 0) {
    puVar20 = PTR_PTR_1126c2a00;
    func_0x00010bf3a660(PTR_PTR_1126c2a00);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105b5c61c;
  }
  ppuVar2 = param_3;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x000107cff2d8();
  _objc_release(ppuVar7);
  _objc_release(ppuVar2);
  puVar20 = PTR_PTR_1126c2a00;
  if ((int)ppuVar8 != 0) {
    ppuVar2 = param_3;
    func_0x00010bef0e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar2;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf28900(puVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
LAB_105b5c818:
    _objc_release(ppuVar2);
    goto LAB_105b5c61c;
  }
  ppuVar2 = param_3;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x000107cff5f8();
  _objc_release(ppuVar7);
  _objc_release(ppuVar2);
  ppuVar2 = (undefined **)PTR_PTR_1126c2a08;
  if ((int)ppuVar8 == 0) {
    if (param_11 != 0) {
      lVar11 = param_11;
      func_0x00010bfb25e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfba7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      puVar14 = PTR_PTR_1126c2a10;
      _objc_alloc(PTR_PTR_1126c2a10);
      puVar20 = puVar14;
      func_0x00010b0aef3c();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0512a0(puVar14);
      _objc_release(puVar18);
      _objc_release(puVar21);
      _objc_release(puVar20);
      puVar20 = PTR_PTR_1126c2a00;
      func_0x00010c27fe00(PTR_PTR_1126c2a00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      goto LAB_105b5c818;
    }
    ppuVar2 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x000107cfd324();
    if (((ulong)ppuVar8 & 1) == 0) {
      _objc_release(ppuVar7);
      _objc_release(ppuVar2);
    }
    else {
      ppuVar8 = param_3;
      func_0x00010bef0e60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c10ac80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x000107cff500();
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar2);
      if (((ulong)ppuVar10 & 1) == 0) {
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar16;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar13;
        func_0x000107cfd6cc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar16);
        func_0x00010bf28160();
        puVar14 = PTR_PTR_1126c2a08;
        func_0x00010c0cea60();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar19 & 1) == 0) {
          puVar21 = puVar14;
          func_0x00010b0aef24();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar21 = (undefined *)0x0;
        }
        puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR_PTR_1126c2a10;
        _objc_alloc(PTR_PTR_1126c2a10);
        puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0512a0(puVar17);
        _objc_release(puVar20);
        puVar20 = PTR_PTR_1126c2a00;
        func_0x00010c27fe00(PTR_PTR_1126c2a00);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        _objc_release(puVar18);
        _objc_release(puVar21);
        _objc_release(puVar14);
        goto LAB_105b5c610;
      }
    }
    ppuVar2 = param_3;
    FUN_105b5d0e8(param_3,param_5,param_7,param_4,param_8,0);
    puVar20 = PTR_PTR_1126c2a00;
    if ((int)ppuVar2 != 0) {
      lVar11 = param_5;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf529e0();
      _objc_release(lVar11);
      if (lVar12 != 0) {
        puVar20 = PTR_PTR_1126c2a00;
        func_0x00010bf4f660(PTR_PTR_1126c2a00);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105b5c61c;
      }
      ppuVar2 = param_3;
      func_0x000105bae104();
      puVar14 = PTR_PTR_1126c2a08;
      puVar20 = PTR_PTR_1126c2a00;
      if (((ulong)ppuVar2 & 1) != 0) {
        lVar11 = param_5;
        func_0x00010bf4f080(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1323a0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        goto LAB_105b5c61c;
      }
      lVar11 = param_5;
      func_0x00010bf4f080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x00010b0aef6c();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar15;
      func_0x00010c2827c0();
      _objc_release(lVar15);
      puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puVar18 = puVar21;
      if (lVar12 < 3) {
        if (lVar12 == 1) {
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          puStack_f0 = (undefined *)0x0;
        }
        else {
LAB_105b5cff4:
          puStack_f0 = (undefined *)0x0;
          puVar17 = puVar20;
        }
      }
      else if (lVar12 == 3) {
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar21);
        puStack_f0 = (undefined *)0x0;
      }
      else {
        if (lVar12 != 4) goto LAB_105b5cff4;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        puStack_f0 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar21 = PTR_PTR_1126c2a10;
      _objc_alloc(PTR_PTR_1126c2a10);
      func_0x00010c0512a0();
      puVar20 = PTR_PTR_1126c2a00;
      func_0x00010c27fe00(PTR_PTR_1126c2a00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
      _objc_release(puStack_f0);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(lVar11);
      _objc_release(puVar14);
      goto LAB_105b5c61c;
    }
    if (param_6 != 0) {
      if (param_9 == '\0') {
        func_0x00010c097220(PTR_PTR_1126c2a00);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105b5c61c;
      }
      (*(code *)ppuVar1[2])(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6a140(puVar20);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b5c364;
    }
    ppuVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x000107cf9e44();
    if (((ulong)ppuVar13 & 1) == 0) {
      ppuVar13 = param_3;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar13;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar7 != (undefined **)0x0) {
LAB_105b5cdd4:
        _objc_release(ppuVar7);
        _objc_release(ppuVar13);
        goto LAB_105b5cde4;
      }
      ppuVar7 = param_3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x000107cf97e4();
      if ((int)ppuVar8 == 0) goto LAB_105b5cdd4;
      ppuVar8 = param_3;
      func_0x000105bae104();
      _objc_release(ppuVar7);
      _objc_release(ppuVar13);
      _objc_release(ppuVar2);
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar2 = (undefined **)PTR_PTR_1126c2a08;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar2;
        func_0x00010b0aea2c();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR_PTR_1126c2a10;
        _objc_alloc(PTR_PTR_1126c2a10);
        puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0512a0(puVar14);
        _objc_release(puVar21);
        _objc_release(puVar20);
        puVar20 = PTR_PTR_1126c2a00;
        func_0x00010c27fe00(PTR_PTR_1126c2a00);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(ppuVar16);
        goto LAB_105b5c610;
      }
    }
    else {
LAB_105b5cde4:
      _objc_release(ppuVar2);
    }
    ppuVar2 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar13;
    func_0x00010c0720c0();
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    if ((int)ppuVar7 != 0) {
      puVar20 = PTR_PTR_1126c2a00;
      func_0x00010c13f280(PTR_PTR_1126c2a00);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b5c61c;
    }
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar16;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x000107cfcd04();
    if (((ulong)ppuVar13 & 1) == 0) {
      _objc_release(ppuVar2);
      goto LAB_105b5c5c8;
    }
    ppuVar13 = param_3;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar13;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x000100bf3858();
    _objc_release(ppuVar7);
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    _objc_release(ppuVar16);
    if ((int)ppuVar8 != 0) {
      puVar20 = PTR_PTR_1126c2a00;
      func_0x00010bf35d60(PTR_PTR_1126c2a00);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b5c61c;
    }
LAB_105b5c5d0:
    puVar20 = PTR_PTR_1126c2a00;
    ppuVar2 = ppuVar1;
    (*(code *)ppuVar1[2])(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a140(puVar20);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = param_3;
    FUN_105b5d4f8();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) goto LAB_105b5c5d0;
    puVar20 = PTR_PTR_1126c2a00;
    func_0x00010c09a8e0(PTR_PTR_1126c2a00);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105b5c610:
  _objc_release(ppuVar2);
LAB_105b5c61c:
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(ppuStack_90);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 105b5d098; end: 105b5d0e7;  */

void FUN_105b5d098(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105b5d0e8(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),1);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b5d0e8; end: 105b5d3e3;  */

undefined8
FUN_105b5d0e8(double param_1,ulong param_2,ulong param_3,undefined8 param_4,int param_5,
             undefined8 param_6,uint param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x000100bf377c();
  if ((param_2 & 1) == 0) {
    dVar7 = param_1;
    dVar10 = 0.0;
    if (param_5 != 0) {
      uVar6 = param_4;
      func_0x00010c08a160(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar7 = param_1;
      _objc_release(uVar6);
      dVar10 = param_1;
    }
    _objc_retain(param_3);
    _objc_retain(param_6);
    dVar9 = dVar7;
    if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c07e8a0(), dVar9 = dVar7, (uVar1 & 1) != 0))
    {
LAB_105b5d194:
      _objc_release(param_6);
      _objc_release(param_3);
    }
    else {
      uVar1 = param_3;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010beeed20();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar4 == 0x46) {
        uVar4 = uVar3;
        func_0x00010c118680();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c11cb60();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (param_7 == 0) {
          func_0x00010c0929e0(param_6);
          dVar8 = dVar7;
        }
        else {
          func_0x00010c094700();
          dVar8 = dVar7;
        }
        dVar7 = dVar8;
        if ((((int)uVar5 == 3) && (func_0x00010c27d360(param_6), 0.0 < dVar7)) &&
           (func_0x00010c27d360(param_6), dVar7 <= dVar8)) {
          dVar8 = dVar7;
        }
      }
      else {
        uVar4 = uVar3;
        func_0x00010beeed20();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar4 == 0xe) {
          if (param_7 == 0) {
            func_0x00010c0929e0(param_6);
            dVar8 = dVar7;
          }
          else {
            func_0x00010c094700();
            dVar8 = dVar7;
          }
        }
        else {
          dVar9 = dVar7;
          if ((param_7 & 1) != 0) goto LAB_105b5d194;
          func_0x00010bf69540(param_6);
          dVar8 = dVar7;
        }
      }
      func_0x00010c29eae0(param_3);
      dVar9 = dVar7;
      _objc_release(param_6);
      _objc_release(param_3);
      if ((dVar8 <= dVar7) && (func_0x00010c29eae0(param_3), dVar10 <= dVar9)) {
        dVar10 = dVar9;
      }
    }
    if (0.0 < dVar10) {
      uVar6 = param_4;
      func_0x00010c088500(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar7 = dVar9;
      _objc_release(uVar6);
      uVar6 = param_4;
      func_0x00010c08a0a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(uVar6);
      if (dVar7 <= dVar9) {
        dVar7 = dVar9;
      }
      if (dVar7 < dVar10) {
        uVar6 = 1;
        goto LAB_105b5d210;
      }
    }
  }
  uVar6 = 0;
LAB_105b5d210:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 105b5d3e4; end: 105b5d4f7;  */

undefined1 FUN_105b5d3e4(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf96da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c0c0020(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105b5d4f8; end: 105b5d62b;  */

void FUN_105b5d4f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105b5c168;
  uStack_40 = 0x105b5c178;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bef0e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c0bcd20(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b5d62c; end: 105b5d6bb; -[SCFriendsFeedRightButtonViewModelCoordinator .cxx_destruct] */

void FUN_105b5d62c(long param_1)

{
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



/* Entry: 105b5d6bc; end: 105b5d737;  */

void FUN_105b5d6bc(long param_1,long param_2,byte param_3)

{
  byte bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x000100bec1f0(param_2,0);
    bVar1 = (byte)lVar2;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (param_3 | bVar1) & 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5d738; end: 105b5d77b;  */

void FUN_105b5d738(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f680();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b5d77c; end: 105b5d77f;  */

void FUN_105b5d77c(void)

{
  return;
}



/* Entry: 105b5d780; end: 105b5d957;  */

void FUN_105b5d780(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bef08c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cf9e44();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf96da0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x000107cf9cc8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126c2a18;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef0c80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bef08c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c0f4aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0050e0();
    lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = puVar6;
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b5d958; end: 105b5db7b;  */

bool FUN_105b5d958(double param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  _objc_retain();
  _objc_retain(param_4);
  uVar6 = param_2;
  func_0x00010bef0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000100bf4a30();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    uVar6 = param_2;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 != 0) {
      uVar7 = param_2;
      func_0x00010bef0c80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0cb940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar7);
      _objc_release(uVar6);
      if (uVar8 != 0) {
        uVar6 = param_2;
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0cb940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar7;
        func_0x00010c0720c0();
        if ((uVar6 & 1) == 0) {
          uVar9 = param_4;
          func_0x00010bf5e5e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_2;
          func_0x00010bef0c80(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010bf866a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380(uVar9);
          uVar11 = (ulong)param_1;
          _objc_release(uVar8);
          _objc_release(uVar6);
          if ((long)param_3 < 10) {
            bVar3 = SBORROW8(uVar11,9);
            bVar4 = (long)(uVar11 - 9) < 0;
            bVar5 = uVar11 == 9;
LAB_105b5dae4:
            bVar4 = !bVar5 && bVar4 == bVar3;
          }
          else {
            lVar1 = uVar11 - param_3;
            if ((long)param_3 <= (long)uVar11) {
              if (param_3 < 0x3c) {
                bVar3 = false;
                bVar5 = uVar11 < 0x3c && lVar1 == 0;
                bVar4 = uVar11 < 0x3c && lVar1 < 0;
              }
              else {
                if (param_3 < 0xe10) {
                  bVar2 = 0xe0e < uVar11;
                  bVar4 = uVar11 == 0xe0f;
                  lVar10 = 0x3b;
                }
                else {
                  lVar10 = 0x1517f;
                  if (param_3 < 0x15180) {
                    bVar2 = 0x1517e < uVar11;
                    bVar4 = uVar11 == 0x1517f;
                    lVar10 = 0xe0f;
                  }
                  else {
                    if (0x93a7f < param_3) {
                      bVar3 = SBORROW8(lVar1,0x93a7f);
                      bVar4 = lVar1 + -0x93a7f < 0;
                      bVar5 = lVar1 == 0x93a7f;
                      goto LAB_105b5dae4;
                    }
                    bVar2 = 0x93a7e < uVar11;
                    bVar4 = uVar11 == 0x93a7f;
                  }
                }
                bVar3 = (!bVar2 || bVar4) && SBORROW8(lVar1,lVar10);
                bVar5 = (!bVar2 || bVar4) && lVar1 == lVar10;
                bVar4 = (!bVar2 || bVar4) && lVar1 - lVar10 < 0;
              }
              goto LAB_105b5dae4;
            }
            bVar4 = true;
          }
          _objc_release(uVar9);
        }
        else {
          bVar4 = false;
        }
        _objc_release(uVar7);
        goto LAB_105b5da54;
      }
    }
  }
  bVar4 = false;
LAB_105b5da54:
  _objc_release(param_4);
  _objc_release(param_2);
  return bVar4;
}



/* Entry: 105b5db7c; end: 105b5e4bb; -[SCFriendsFeedViewModelCoordinator initWithPerformer:currentUserId:friendmojiDataProvider:friendmojiPresenter:conversationManager:circumstanceEngine:sponsoredSnapAdResponseParser:friendsFeedActionTextGenerator:friendsFeedIconGenerator:messagingExperimentService:storiesConfigProvider:rightButtonViewModelCoordinator:supportsGreyFilteredCells:featureSettingsService:plusFeatureGating:creatorSubscriptionsInfoProvider:fanPassBadgeEnabled:friendsFeedTracker:friendsFeedGrapheneV2:simpleSnapchatExperimentConfigProvider:platformUIExperimentsService:suggestionInFriendsFeedEnabled:myAIInGroupChatEnabled:renderStyleProvider:animationTriggerGatingEnabled:snapCountdownProviderEnabled:] */

undefined8 *
FUN_105b5db7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined4 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  puStack_80 = PTR_PTR_1126ec0e8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x2f) = (undefined1)param_29;
    *(undefined1 *)((long)puVar1 + 0x179) = param_29._1_1_;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[7];
    puVar1[7] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[8];
    puVar1[8] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[9];
    puVar1[9] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[10];
    puVar1[10] = param_20;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_9;
    _objc_release(uVar2);
    uVar2 = param_25;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1a) = param_15;
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_18);
    _objc_retain(param_17);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf80280();
    *(char *)(puVar1 + 0x1e) = (char)uVar4;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x21];
    puVar1[0x21] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_28;
    _objc_release(uVar2);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_13);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7ba0(puVar1);
    func_0x00010bec7b60(puVar1);
    func_0x00010bec7b80(puVar1);
    uVar2 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf8f720();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      func_0x00010bec82e0(puVar1);
    }
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(param_12);
    _objc_release(param_17);
    _objc_release(param_18);
  }
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 105b5e4bc; end: 105b5e4c3;  */

/* WARNING: Removing unreachable block (ram,0x000108f470cc) */
/* WARNING: Removing unreachable block (ram,0x000108f470c4) */
/* WARNING: Removing unreachable block (ram,0x000108f47118) */
/* WARNING: Removing unreachable block (ram,0x000108f470f8) */
/* WARNING: Removing unreachable block (ram,0x000108f4711c) */
/* WARNING: Removing unreachable block (ram,0x000108f47148) */
/* WARNING: Removing unreachable block (ram,0x000108f47128) */

void FUN_105b5e4bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e56fd8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b5e4c4; end: 105b5e583;  */

void FUN_105b5e4c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  if (lVar4 == 3) {
    ppuVar5 = *(undefined ***)(param_1 + 0x28);
    func_0x00010c269d40(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c105520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105b5e584; end: 105b5e63b;  */

void FUN_105b5e584(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfba140();
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b5e63c; end: 105b5e6c7;  */

void FUN_105b5e63c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cbf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b5e6c8; end: 105b5e837;  */

void FUN_105b5e6c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90a20();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b5e838; end: 105b5e8c3;  */

void FUN_105b5e838(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a20;
  func_0x00010c24b800(PTR_PTR_1126c2a20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f360(uVar1,param_2,puVar2);
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b5e8c4; end: 105b5e97b;  */

void FUN_105b5e8c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073900();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b5e97c; end: 105b5ea8b; -[SCFriendsFeedViewModelCoordinator _subscribeToLastSnapObservable] */

void FUN_105b5e97c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c089f80(uVar1);
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



/* Entry: 105b5ea8c; end: 105b5eae3;  */

void FUN_105b5ea8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


