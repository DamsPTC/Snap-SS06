/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10718802c; end: 107188153; -[SCChatInputStickerAccessory appendFieldsForActionType:toChatDrawerAction:] */

void FUN_10718802c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bac18;
  _objc_opt_class(PTR_PTR_1126bac18);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    if (param_3 == 1) {
      func_0x00010c06d4c0(param_1);
      func_0x00010c225dc0(param_4);
    }
    uVar4 = param_1;
    func_0x00010bf1dbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172040(param_4);
    _objc_release(uVar4);
    func_0x00010c111260(param_1);
    func_0x00010c1e1d80(param_4);
    func_0x00010c07fa20(param_1);
    func_0x00010c1b0500(param_4);
    if (param_3 == 4) {
      func_0x00010c172840(param_4);
      func_0x00010c172860(param_4);
    }
    func_0x00010c1a5b00(param_4);
    func_0x00010c1afba0(param_4);
    func_0x00010c1afbc0(param_4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107188154; end: 1071881e7; -[SCChatInputStickerAccessory previewIconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107188154(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127648e4;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010bf5fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    _objc_release(param_1);
    if (lVar2 - 1U < 3) {
      return *(undefined8 *)(&UNK_10de1fd30 + (lVar2 - 1U) * 8);
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 1071881e8; end: 107188227; -[SCChatInputStickerAccessory _searchQueryEntityIdForSearchTerm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071881e8(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127649c0) == 2) {
    func_0x00010bf960e0(PTR_PTR_1126d4e50);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107188228; end: 107188337; -[SCChatInputStickerAccessory stickerQuickReplyViewController:stickerTapped:fromPosition:fromSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cf978;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar3 = param_4;
  func_0x00010c0f0a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c680(puVar1,param_2,param_4,uVar3,param_5,param_6,0xffffffffffffffff);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127648b8);
  puVar2 = PTR_PTR_1126cf980;
  func_0x00010c2553a0(PTR_PTR_1126cf980,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010be90460(param_1,param_2,param_4,param_6);
  _objc_release(param_4);
  param_1 = param_1 + _DAT_112764934;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b1e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107188338; end: 107188353; -[SCChatInputStickerAccessory didFavoriteSticker:indexPath:superCategoryType:error:] */

void FUN_107188338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be045f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayFavoritedStickerNotifica_11255eb18,1,param_6,param_3,param_5,
             param_4);
  return;
}



/* Entry: 107188354; end: 10718836f; -[SCChatInputStickerAccessory didUnfavoriteSticker:indexPath:superCategoryType:error:] */

void FUN_107188354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be045f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayFavoritedStickerNotifica_11255eb18,0,param_6,param_3,param_5,
             param_4);
  return;
}



/* Entry: 107188370; end: 107188433; -[SCChatInputStickerAccessory didDeleteSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188370(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c27dd80();
  if (param_3 == 5) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127649a0);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112764950);
    func_0x00010c0dff20(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca300);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a9a0(uVar3,param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  lVar2 = param_1;
  func_0x00010bed5240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107188434; end: 107188583; -[SCChatInputStickerAccessory didRemoveFromRecents:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188434(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afde0;
  if (param_4 != 0) {
    lVar3 = param_1;
    func_0x000108e867d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127648c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107188584;
    puStack_48 = &UNK_110841f80;
    uStack_40 = uVar2;
    puStack_38 = puVar1;
    _objc_retain(puVar1);
    _objc_retain(uVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(puStack_38);
    _objc_release(uStack_40);
    _objc_release(puVar1);
    _objc_release(uVar2);
    return;
  }
  lVar3 = param_1;
  func_0x00010bed5240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107188584; end: 10718858f;  */

void FUN_107188584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_submitNotificationWithPresenter__1126756f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107188590; end: 10718875f; -[SCChatInputStickerAccessory _displayFavoritedStickerNotificationForAddedToFavorites:withError:sticker:superCategoryType:indexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188590(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d4d18;
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127648c0);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c271a80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf96f00();
  func_0x000108d12ef8();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112764910);
  func_0x00010c254f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127648f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c271a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar8 = uVar6;
  func_0x00010c06c020(uVar6,param_2,uVar7);
  func_0x00010bf85700(puVar1,param_2,param_3,param_4,uVar9,
                      &PTR____CFConstantStringClassReference_110dea458,uVar2,uVar4,param_6,param_7,
                      uVar5,(char)uVar8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107188760; end: 107188957; -[SCChatInputStickerAccessory didUpdateFriendmojiToBitmojiUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188760(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127648ec;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c088c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c088c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    func_0x00010c12d360(uVar3,param_2,param_3);
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c088c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c088c60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    uVar2 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c28c540(uVar6,param_2,param_3,uVar2,0);
    _objc_release(uVar2);
    func_0x00010bed7b00(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127649e8);
    uVar1 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286080(uVar2,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar1);
    lVar7 = param_1;
    func_0x00010bedf120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128c00();
      _objc_release(uVar2);
    }
    _objc_release(lVar7);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107188958; end: 10718896f; -[SCChatInputStickerAccessory actionMenuDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188958(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127649ec);
  *(undefined8 *)(param_1 + _DAT_1127649ec) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107188970; end: 1071889ef; -[SCChatInputStickerAccessory _createSearchPageDataSource] */

void FUN_107188970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010be4f380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe1a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4e88;
  _objc_alloc(PTR_PTR_1126d4e88);
  func_0x00010c04ca00();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071889f0; end: 107188a37; -[SCChatInputStickerAccessory _sortSearchStickers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071889f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276491c);
  func_0x00010c246b20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107188a38; end: 107188b1b; -[SCChatInputStickerAccessory _openSuperCategoryByDeeplinkIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107188a38(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127649f0;
  uVar1 = *(ulong *)(param_1 + lVar4);
  if (uVar1 == 0) {
    return 0;
  }
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f48ad8);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f48af8);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + lVar4);
      func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f48b38);
      if ((uVar1 & 1) == 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f48b18);
        if ((int)uVar2 == 0) {
          uVar2 = 0;
          goto LAB_107188af4;
        }
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9940();
  _objc_release(uVar2);
  uVar2 = 1;
LAB_107188af4:
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 107188b1c; end: 107188bd7; -[SCChatInputStickerAccessory _categoryCellScrollViewWillBeginDragging:] */

void FUN_107188b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c065880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f36c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282100(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c065880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f36c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c126d20(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107188bd8; end: 107188c2b; -[SCChatInputStickerAccessory _isCurrentDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107188bd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11276499c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 == param_1;
}



/* Entry: 107188c2c; end: 107188cbf; -[SCChatInputStickerAccessory _reloadStickerDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188c2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bee0ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    lVar3 = lVar1;
    func_0x00010bfb1920(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c00();
  _objc_release(uVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107188cc0; end: 107188d2f; -[SCChatInputStickerAccessory _localSearchStickerResults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188cc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127648e4;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c09de40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107188d30; end: 107188eb3; -[SCChatInputStickerAccessory _updateBitmojiPresentationModelProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba808;
  _objc_alloc();
  func_0x00010bff7e20();
  lVar8 = (long)_DAT_1127649e8;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf9ccc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8740(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + _DAT_1127648ec);
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    lVar4 = lVar3;
    func_0x00010bf1bae0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286080(uVar6,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  func_0x00010c1e12a0(param_3,param_2,*(undefined8 *)(param_1 + lVar8),2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112764944);
  *(undefined8 *)(param_1 + _DAT_112764944) = param_3;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107188eb4; end: 107188fc3; -[SCChatInputStickerAccessory _fetchFeedTree] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127648d4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa4720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112764994);
  *(undefined8 *)(param_1 + _DAT_112764994) = uVar1;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107188fc4; end: 107189037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107188fc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112764948;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010be29720(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107189038; end: 10718908b; -[SCChatInputStickerAccessory _reportStickerChatPickForSticker:stickerLocation:] */

void FUN_107189038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c27dd80(param_3);
  func_0x00010916771c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fbc0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10718908c; end: 10718916f; -[SCChatInputStickerAccessory _reportLegacyChatStickerPickForType:stickerLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718908c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127648e8);
  _objc_retain(param_3);
  func_0x00010c254380(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf5fc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be068e0(param_1);
  func_0x00010c1330c0(uVar1,param_2,param_3,param_4,lVar3 != 0,param_1);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107189170; end: 10718929f; -[SCChatInputStickerAccessory _reportChatCTPItemPickForEntityType:stickerLocation:superCategoryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189170(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127648e8);
  func_0x00010c254380(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 < 0x12) {
    ppuVar6 = (undefined **)(&PTR_PTR_110990b70)[param_3];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e55078;
  }
  func_0x000108d12ef8(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be068e0(param_1);
  lVar4 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf5fc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1328e0(uVar2,param_2,ppuVar6,param_4,param_5,lVar3,lVar5 != 0,
                      *(long *)(param_1 + _DAT_1127649d8) != 0);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071892a0; end: 107189307; -[SCChatInputStickerAccessory _drawerLocationForLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1071892a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127648e4;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  else {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010beed200();
    _objc_release(param_1);
  }
  return lVar1;
}



/* Entry: 107189308; end: 10718945f; -[SCChatInputStickerAccessory _updateStickerFavoritesRecencyWithSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189308(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000109161f30();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112764914);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0726a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107189460; end: 1071894f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189460(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112764914);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef81c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071894f4; end: 10718958b; -[SCChatInputStickerAccessory _handleFeedsRepositoryUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071894f4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3f5a0();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + (long)_DAT_1127648bc) = 1;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10718958c;
    puStack_30 = &UNK_1108b4818;
    uStack_28 = param_1;
    func_0x00010c0c0800(param_3,param_2,&puStack_48,&PTR___NSConcreteGlobalBlock_110990b50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10718958c; end: 10718976f;  */

void FUN_10718958c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  if (lVar2 == 10) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_2;
    func_0x00010bf38dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar4 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          uVar5 = *(ulong *)(lStack_128 + lVar4 * 8);
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          func_0x00010c27dd80();
          _objc_release(uVar5);
          if (uVar3 < 0x1a && (1L << (uVar3 & 0x3f) & 0x24020f4U) != 0) {
            func_0x00010bed5480(*(undefined8 *)(param_1 + 0x20));
          }
          lVar4 = lVar4 + 1;
        } while (lVar2 != lVar4);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_107189770;
    puStack_140 = &UNK_110842e18;
    uStack_138 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_158);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be8ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s__reloadStickerDataProvider_1125804e8);
  return;
}



/* Entry: 107189770; end: 10718977b;  */

void FUN_107189770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reloadStickerDataProvider_1125804e8);
  return;
}



/* Entry: 10718977c; end: 1071897f3; -[SCChatInputStickerAccessory _updateChildFeedMapWithFeed:supportedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718977c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764950);
  _objc_retain(param_3);
  func_0x00010c0df840(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071897f4; end: 1071897f7; -[SCChatInputStickerAccessory stickerDataProviderPresentingViewController] */

void FUN_1071897f4(void)

{
  return;
}



/* Entry: 1071897f8; end: 1071899b7; -[SCChatInputStickerAccessory aiStickersService:sendAIStickerItem:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071897f8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c2721e0(param_4,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf978;
  _objc_alloc(PTR_PTR_1126cf978);
  uVar3 = uVar1;
  func_0x00010c0f0a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c680(puVar2,param_2,uVar1,uVar3,param_5,0xb,0xffffffffffffffff);
  _objc_release(uVar3);
  func_0x00010be87420(param_1,param_2,puVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127648e8);
  func_0x00010c254380(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf96f00();
  if (uVar3 < 0x12) {
    ppuVar8 = (undefined **)(&PTR_PTR_110990b70)[uVar3];
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e55078;
  }
  uVar5 = 0;
  func_0x000108d12ef8(0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be068e0(param_1);
  func_0x00010c1328e0(uVar7,param_2,ppuVar8,0,uVar5,lVar6,0,0);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  func_0x00010bee0be0(param_1,param_2,uVar1);
  uVar3 = param_4;
  func_0x00010914ead4();
  if ((int)uVar3 != 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112764914);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283fc0();
    _objc_release(uVar7);
  }
  func_0x00010be5b140(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071899b8; end: 1071899c3; -[SCChatInputStickerAccessory defaultProjectNameV2] */

void FUN_1071899b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2553f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_stickers_112672f20);
  return;
}



/* Entry: 1071899c4; end: 107189a87; -[SCChatInputStickerAccessory additionalS2RDebugOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071899c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ea0dd8;
  puVar3 = *(undefined **)(param_1 + _DAT_1127649d4);
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar1);
    puVar2 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + _DAT_1127649e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107189a88; end: 107189aa7; -[SCChatInputStickerAccessory inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189a88(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127649e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107189aa8; end: 107189ac7; -[SCChatInputStickerAccessory inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189aa8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276499c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107189ac8; end: 107189ad7; -[SCChatInputStickerAccessory setDefaultDrawerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189ac8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112764998) = param_1;
  return;
}



/* Entry: 107189ad8; end: 10718a01b; -[SCChatInputStickerAccessory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107189ad8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276499c);
  _objc_destroyWeak(param_1 + _DAT_1127649e0);
  _objc_storeStrong(param_1 + _DAT_112764984,0);
  _objc_storeStrong(param_1 + _DAT_112764980,0);
  _objc_storeStrong(param_1 + _DAT_11276497c,0);
  _objc_storeStrong(param_1 + _DAT_112764978,0);
  _objc_storeStrong(param_1 + _DAT_112764974,0);
  _objc_storeStrong(param_1 + _DAT_112764970,0);
  _objc_storeStrong(param_1 + _DAT_11276496c,0);
  _objc_storeStrong(param_1 + _DAT_112764968,0);
  _objc_storeStrong(param_1 + _DAT_112764a18,0);
  _objc_storeStrong(param_1 + _DAT_112764964,0);
  _objc_storeStrong(param_1 + _DAT_112764960,0);
  _objc_storeStrong(param_1 + _DAT_112764990,0);
  _objc_storeStrong(param_1 + _DAT_112764940,0);
  _objc_storeStrong(param_1 + _DAT_11276495c,0);
  _objc_storeStrong(param_1 + _DAT_112764a0c,0);
  _objc_storeStrong(param_1 + _DAT_112764908,0);
  _objc_storeStrong(param_1 + _DAT_112764954,0);
  _objc_storeStrong(param_1 + _DAT_112764928,0);
  _objc_storeStrong(param_1 + _DAT_11276490c,0);
  _objc_storeStrong(param_1 + _DAT_112764904,0);
  _objc_storeStrong(param_1 + _DAT_112764900,0);
  _objc_storeStrong(param_1 + _DAT_1127648fc,0);
  _objc_storeStrong(param_1 + _DAT_1127648ec,0);
  _objc_storeStrong(param_1 + _DAT_1127648c8,0);
  _objc_storeStrong(param_1 + _DAT_11276492c,0);
  _objc_storeStrong(param_1 + _DAT_1127648e0,0);
  _objc_storeStrong(param_1 + _DAT_1127648dc,0);
  _objc_storeStrong(param_1 + _DAT_112764918,0);
  _objc_storeStrong(param_1 + _DAT_1127648d8,0);
  _objc_storeStrong(param_1 + _DAT_112764948,0);
  _objc_storeStrong(param_1 + _DAT_112764950,0);
  _objc_storeStrong(param_1 + _DAT_1127648d4,0);
  _objc_storeStrong(param_1 + _DAT_1127648d0,0);
  _objc_storeStrong(param_1 + _DAT_1127648cc,0);
  _objc_storeStrong(param_1 + _DAT_1127648c4,0);
  _objc_storeStrong(param_1 + _DAT_112764a24,0);
  _objc_storeStrong(param_1 + _DAT_11276498c,0);
  _objc_storeStrong(param_1 + _DAT_1127649cc,0);
  _objc_storeStrong(param_1 + _DAT_112764988,0);
  _objc_storeStrong(param_1 + _DAT_1127648f4,0);
  _objc_storeStrong(param_1 + _DAT_112764914,0);
  _objc_storeStrong(param_1 + _DAT_112764994,0);
  _objc_storeStrong(param_1 + _DAT_1127649e8,0);
  _objc_storeStrong(param_1 + _DAT_112764944,0);
  _objc_storeStrong(param_1 + _DAT_1127649d4,0);
  _objc_destroyWeak(param_1 + _DAT_112764958);
  _objc_storeStrong(param_1 + _DAT_1127649b0,0);
  _objc_storeStrong(param_1 + _DAT_112764938,0);
  _objc_storeStrong(param_1 + _DAT_1127649a8,0);
  _objc_storeStrong(param_1 + _DAT_1127649a4,0);
  _objc_storeStrong(param_1 + _DAT_1127649b8,0);
  _objc_storeStrong(param_1 + _DAT_1127649b4,0);
  _objc_storeStrong(param_1 + _DAT_11276493c,0);
  _objc_storeStrong(param_1 + _DAT_1127649d8,0);
  _objc_storeStrong(param_1 + _DAT_1127649d0,0);
  _objc_storeStrong(param_1 + _DAT_1127649bc,0);
  _objc_storeStrong(param_1 + _DAT_1127649f0,0);
  _objc_storeStrong(param_1 + _DAT_1127649c4,0);
  _objc_storeStrong(param_1 + _DAT_112764920,0);
  _objc_storeStrong(param_1 + _DAT_112764924,0);
  _objc_storeStrong(param_1 + _DAT_11276494c,0);
  _objc_destroyWeak(param_1 + _DAT_112764a20);
  _objc_storeStrong(param_1 + _DAT_1127649ec,0);
  _objc_storeStrong(param_1 + _DAT_1127648f0,0);
  _objc_storeStrong(param_1 + _DAT_1127649ac,0);
  _objc_storeStrong(param_1 + _DAT_112764a00,0);
  _objc_storeStrong(param_1 + _DAT_1127649fc,0);
  _objc_storeStrong(param_1 + _DAT_1127649c8,0);
  _objc_storeStrong(param_1 + _DAT_1127648c0,0);
  _objc_destroyWeak(param_1 + _DAT_112764934);
  _objc_destroyWeak(param_1 + _DAT_1127648b4);
  _objc_storeStrong(param_1 + _DAT_1127648b0,0);
  _objc_storeStrong(param_1 + _DAT_1127649a0,0);
  _objc_storeStrong(param_1 + _DAT_112764930,0);
  _objc_storeStrong(param_1 + _DAT_112764a14,0);
  _objc_storeStrong(param_1 + _DAT_1127648e8,0);
  _objc_storeStrong(param_1 + _DAT_112764910,0);
  _objc_storeStrong(param_1 + _DAT_1127648f8,0);
  _objc_destroyWeak(param_1 + _DAT_1127648e4);
  _objc_storeStrong(param_1 + _DAT_11276491c,0);
  _objc_storeStrong(param_1 + _DAT_112764a04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127648b8,0);
  return;
}



/* Entry: 10718a01c; end: 10718a2bb; -[SCChatStickerPickerController initWithViewFrame:userSession:bottomInset:stickerPickerLogger:menuDelegate:friendmojiFilteredContainer:presentationModelProvider:ctpItemViewService:stickerSearcher:stickerInjector:customStickerManager:aiStickersService:bitmoji3DContentFetcher:userBlizzardLogger:avatarProvider:creativeToolsABProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10718a01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_10);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126c3440;
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_alloc();
  func_0x00010c014e00(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  puStack_a0 = PTR_PTR_1126f8ac8;
  puVar2 = &uStack_a8;
  uStack_a8 = param_6;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithPickerView__1125eb1d0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112764a28;
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar4));
    func_0x00010c1b61e0(*(undefined8 *)((long)puVar2 + lVar4));
  }
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_10);
  return puVar2;
}



/* Entry: 10718a2bc; end: 10718a2bf; -[SCChatStickerPickerController contentView] */

void FUN_10718a2bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fbab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pickerMenuView_11261c8c8);
  return;
}



/* Entry: 10718a2c0; end: 10718a30f; -[SCChatStickerPickerController setMenuDataSource:] */

void FUN_10718a2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0fbaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10718a310; end: 10718a357; -[SCChatStickerPickerController updateVisibleStickerCategoryCellCollectionViewAnimated:topMargin:] */

void FUN_10718a310(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0fbaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10718a358; end: 10718a387; -[SCChatStickerPickerController resetStickerScrollPositionsToTop] */

void FUN_10718a358(undefined8 param_1)

{
  func_0x00010c0fbaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10718a388; end: 10718a40b; -[SCChatStickerPickerController numberOfSuperCategories] */

undefined8 FUN_10718a388(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0fbaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fbaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0df480(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10718a40c; end: 10718a443; -[SCChatStickerPickerController openSuperCategoryIfAvailableWithType:] */

void FUN_10718a40c(undefined8 param_1)

{
  func_0x00010c0fbaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10718a444; end: 10718a4d7; -[SCChatStickerPickerController stickerSuperCategoryForIndex:] */

void FUN_10718a444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0fbaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0fbaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c254ac0(uVar2,param_2,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10718a4d8; end: 10718a4e7; -[SCChatStickerPickerController updateChatExplicitSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718a4d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764a28),PTR_s_updateChatExplicitSearchText__11267eb30
            );
  return;
}



/* Entry: 10718a4e8; end: 10718a52b; -[SCChatStickerPickerController explicitSearchQueryObservable] */

void FUN_10718a4e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0fbaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf9ccc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10718a52c; end: 10718a53b; -[SCChatStickerPickerController pickerMenuView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10718a52c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764a28);
}



/* Entry: 10718a53c; end: 10718a54f; -[SCChatStickerPickerController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718a53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764a28,0);
  return;
}



/* Entry: 10718a550; end: 10718a69b; -[SCCustomStickerEmptyPage initWithFrame:sourceType:userSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10718a550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f8ad0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112764a2c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release();
    lVar5 = (long)_DAT_112764a30;
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b9f68);
    uVar3 = uVar2;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764a34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112764a34) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar5 = *(long *)((long)puVar1 + lVar5);
    if (lVar5 != 3 && lVar5 != 1) {
      if (lVar5 != 0) goto LAB_10718a670;
      func_0x00010bead1a0(puVar1);
      func_0x00010beab2c0(puVar1);
    }
    func_0x00010bead500(puVar1);
  }
LAB_10718a670:
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 10718a69c; end: 10718a6a3;  */

void FUN_10718a69c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_downloader_1125bfe78);
  return;
}



/* Entry: 10718a6a4; end: 10718a92b; -[SCCustomStickerEmptyPage _setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718a6a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4d880();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar12 = (long)_DAT_112764a38;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar12));
  func_0x00010befbb60(param_1);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_90 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  lStack_a0 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493c0(0xc051800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2a5060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493c0(0xc059000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493e0(0x3fe28f5c28f5c28f);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(lStack_a0);
  _objc_release(lStack_98);
  lVar2 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10718a92c;
  lStack_f0 = lVar3;
  uStack_e8 = uVar7;
  uStack_e0 = uVar4;
  puStack_d8 = puVar1;
  uStack_d0 = uVar8;
  uStack_c8 = uVar6;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_f8,lVar2);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + _DAT_112764a34);
  func_0x00010bfe63a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(lVar2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar10);
  _objc_copyWeak(auStack_100,auStack_f8);
  func_0x00010bf88c20(uVar11);
  _objc_release(puVar10);
  _objc_release(lVar2);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_f8);
  return;
}



/* Entry: 10718a92c; end: 10718aa9f; -[SCCustomStickerEmptyPage _loadImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718a92c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764a34);
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar3);
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10718aaa0; end: 10718aae7;  */

void FUN_10718aaa0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10718aae8; end: 10718ab77; -[SCCustomStickerEmptyPage _updateImage:] */

void FUN_10718aae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10718ab78;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10718ab78; end: 10718ab8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718ab78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112764a38),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10718ab8c; end: 10718ad8b; -[SCCustomStickerEmptyPage _setupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718ab8c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112764a3c;
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar10;
  _objc_release(uVar12);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar17),param_2,0);
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c219b60(uVar12,param_2,0);
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x000108e86838();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13,param_2,uVar12,0);
  _objc_release(uVar12);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar17),param_2,param_1,
                      PTR_s__tryButtonTapped_1125377b8,0x40);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar17));
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  lStack_68 = lVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112764a38);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bf493c0(0x403e000000000000,uVar13,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar13,uVar3,uVar18);
  lVar14 = (long)_DAT_112764a40;
  uVar12 = *(undefined8 *)(lVar2 + lVar14);
  *(undefined **)(lVar2 + lVar14) = puVar10;
  _objc_release(uVar12);
  func_0x00010c1cfce0(*(undefined8 *)(lVar2 + lVar14),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar2 + lVar14),param_2,1);
  uVar12 = 0x4030000000000000;
  puVar10 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + lVar14),param_2,puVar10);
  _objc_release(puVar10);
  lVar16 = (long)_DAT_112764a30;
  puVar10 = PTR_PTR_1126d4eb0;
  func_0x00010c0999c0(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(lVar2 + lVar16));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar2 + lVar14),param_2,puVar10);
  _objc_release(puVar10);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar14),param_2,0);
  puVar10 = *(undefined **)(lVar2 + lVar14);
  lStack_120 = lVar2;
  func_0x00010befbb60();
  lVar16 = *(long *)(lVar2 + lVar16);
  lStack_128 = lVar2;
  if (lVar16 == 3 || lVar16 == 1) {
    func_0x000108e86868();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar2 + lVar14),param_2,lStack_120);
    _objc_release(lStack_120);
    puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lStack_120 = *(long *)(lVar2 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lStack_120;
    func_0x00010bf493a0(lStack_120,param_2,lStack_128);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + lVar14);
    lStack_118 = lVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar2;
    func_0x00010c274200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4034000000000000,uVar5,param_2,lVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + lVar14);
    uStack_110 = uVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf49420(0x4050800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + lVar14);
    uStack_108 = uVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0xc02e000000000000;
    uVar9 = uVar7;
    func_0x00010bf493c0(0xc02e000000000000,uVar7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    plVar11 = &lStack_118;
    uStack_100 = uVar9;
  }
  else {
    if (lVar16 != 0) goto LAB_10718b1b8;
    func_0x000108e86850();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar2 + lVar14),param_2,lStack_120);
    _objc_release(lStack_120);
    puStack_130 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lStack_120 = *(long *)(lVar2 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lStack_120;
    func_0x00010bf493a0(lStack_120,param_2,lStack_128);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + lVar14);
    lStack_f8 = lVar16;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = *(long *)(lVar2 + _DAT_112764a3c);
    func_0x00010bf1ff80(lVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4044000000000000,uVar5,param_2,lVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + lVar14);
    uStack_f0 = uVar15;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0x4050800000000000;
    uVar8 = uVar6;
    func_0x00010bf49420(0x4050800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + lVar14);
    uStack_e8 = uVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(lVar2 + _DAT_112764a38);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0(uVar7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    plVar11 = &lStack_f8;
    uStack_e0 = uVar9;
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,plVar11,4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010beef8c0(puStack_130);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(lVar17);
  _objc_release(uVar5);
  _objc_release(lVar16);
  _objc_release(lStack_128);
  _objc_release();
LAB_10718b1b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_112764a44;
  uVar15 = *(undefined8 *)(lStack_120 + lVar16);
  _objc_retain(puVar10);
  func_0x00010bfb68e0(uVar15);
  uVar9 = *(undefined8 *)(lStack_120 + lVar16);
  uVar15 = uVar12;
  uVar8 = uVar13;
  func_0x00010c262ca0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(puVar10,param_2,uVar9);
  _objc_release();
  iVar1 = (int)puVar10;
  _CGRectContainsPoint(uVar12,uVar13,uVar3,uVar18,uVar15,uVar8);
  _objc_release(uVar9);
  if (iVar1 != 0) {
    func_0x00010bf6b020(lStack_120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lStack_120);
    return;
  }
  return;
}



/* Entry: 10718ad8c; end: 10718b1f3; -[SCCustomStickerEmptyPage _setupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718ad8c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar15,uVar16,uVar17);
  lVar12 = (long)_DAT_112764a40;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar9;
  _objc_release(uVar11);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar12),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar12),param_2,1);
  uVar11 = 0x4030000000000000;
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar12),param_2,puVar9);
  _objc_release(puVar9);
  lVar14 = (long)_DAT_112764a30;
  puVar9 = PTR_PTR_1126d4eb0;
  func_0x00010c0999c0(PTR_PTR_1126d4eb0,param_2,*(undefined8 *)(param_1 + lVar14));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12),param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  puVar9 = *(undefined **)(param_1 + lVar12);
  lStack_b0 = param_1;
  func_0x00010befbb60();
  lVar14 = *(long *)(param_1 + lVar14);
  lStack_b8 = param_1;
  if (lVar14 == 3 || lVar14 == 1) {
    func_0x000108e86868();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12),param_2,lStack_b0);
    _objc_release(lStack_b0);
    puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lStack_b0 = *(long *)(param_1 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lStack_b0;
    func_0x00010bf493a0(lStack_b0,param_2,lStack_b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    lStack_a8 = lVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010bf493c0(0x4034000000000000,uVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    uStack_a0 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf49420(0x4050800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    uStack_98 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0xc02e000000000000;
    uVar8 = uVar4;
    func_0x00010bf493c0(0xc02e000000000000,uVar4,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    plVar10 = &lStack_a8;
    uStack_90 = uVar8;
  }
  else {
    if (lVar14 != 0) goto LAB_10718b1b8;
    func_0x000108e86850();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12),param_2,lStack_b0);
    _objc_release(lStack_b0);
    puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lStack_b0 = *(long *)(param_1 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lStack_b0;
    func_0x00010bf493a0(lStack_b0,param_2,lStack_b8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar12);
    lStack_88 = lVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + _DAT_112764a3c);
    func_0x00010bf1ff80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010bf493c0(0x4044000000000000,uVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    uStack_80 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0x4050800000000000;
    uVar6 = uVar3;
    func_0x00010bf49420(0x4050800000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar12);
    uStack_78 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + _DAT_112764a38);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    plVar10 = &lStack_88;
    uStack_70 = uVar8;
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,plVar10,4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010beef8c0(puStack_c0);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(lVar14);
  _objc_release(lStack_b8);
  _objc_release();
LAB_10718b1b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = (long)_DAT_112764a44;
  uVar13 = *(undefined8 *)(lStack_b0 + lVar14);
  _objc_retain(puVar9);
  func_0x00010bfb68e0(uVar13);
  uVar8 = *(undefined8 *)(lStack_b0 + lVar14);
  uVar13 = uVar11;
  uVar6 = uVar15;
  func_0x00010c262ca0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(puVar9,param_2,uVar8);
  _objc_release();
  iVar1 = (int)puVar9;
  _CGRectContainsPoint(uVar11,uVar15,uVar16,uVar17,uVar13,uVar6);
  _objc_release(uVar8);
  if (iVar1 != 0) {
    func_0x00010bf6b020(lStack_b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lStack_b0);
    return;
  }
  return;
}



/* Entry: 10718b1f4; end: 10718b2f7; -[SCCustomStickerEmptyPage _tryButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718b1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112764a44;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  _objc_retain(param_7);
  func_0x00010bfb68e0(uVar3);
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  uVar3 = param_1;
  uVar5 = param_2;
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,uVar2);
  _objc_release();
  iVar1 = (int)param_7;
  _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar3,uVar5);
  _objc_release(uVar2);
  if (iVar1 != 0) {
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 10718b2f8; end: 10718b32b; -[SCCustomStickerEmptyPage _tryButtonTapped] */

void FUN_10718b2f8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10718b32c; end: 10718b333; -[SCCustomStickerEmptyPage gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10718b32c(void)

{
  return 1;
}



/* Entry: 10718b334; end: 10718b353; -[SCCustomStickerEmptyPage delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718b334(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10718b354; end: 10718b367; -[SCCustomStickerEmptyPage setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718b354(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764a48,param_3);
  return;
}



/* Entry: 10718b368; end: 10718b413; -[SCCustomStickerEmptyPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718b368(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112764a48);
  _objc_storeStrong(param_1 + _DAT_112764a34,0);
  _objc_storeStrong(param_1 + _DAT_112764a4c,0);
  _objc_storeStrong(param_1 + _DAT_112764a2c,0);
  _objc_storeStrong(param_1 + _DAT_112764a40,0);
  _objc_storeStrong(param_1 + _DAT_112764a50,0);
  _objc_storeStrong(param_1 + _DAT_112764a3c,0);
  _objc_storeStrong(param_1 + _DAT_112764a44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764a38,0);
  return;
}



/* Entry: 10718b414; end: 10718b783; -[SCStickerDataProvider initForTarget:userSession:infoStickerDataProvider:hideAnimatedStickers:hideRecentStickersCategory:delegate:circumstanceEngine:itemsRepository:stickerItemPresentationModelSource:bitmojiStickerCategoryIconProvider:friendmojiFilteredContainer:stickerInjector:shouldFilterUnmigratedStickers:shouldFilterCTPItemBlock:creativeToolsABProvider:bitmojiAppEventsEmitter:] */

undefined8 *
FUN_10718b414(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,uint param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  puStack_70 = PTR_PTR_1126f8ad8;
  puVar3 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar3 + 2,param_4);
    _objc_retain(param_5);
    uVar4 = puVar3[4];
    puVar3[4] = param_5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar4 = puVar3[1];
    puVar3[1] = puVar5;
    _objc_release(uVar4);
    puVar3[3] = param_3;
    ppuVar1 = &PTR_PTR_1126d4f08;
    if (param_3 != 0x1f8b58) {
      ppuVar1 = &PTR_PTR_1126d4f10;
    }
    ppuVar2 = &PTR_PTR_1126d4f00;
    if (param_3 != 0x17d46fa8) {
      ppuVar2 = ppuVar1;
    }
    puVar5 = *ppuVar2;
    _objc_opt_new();
    uVar4 = puVar3[7];
    puVar3[7] = puVar5;
    _objc_release(uVar4);
    *(undefined1 *)(puVar3 + 5) = param_6;
    _objc_storeWeak(puVar3 + 6,param_8);
    _objc_retain(param_9);
    uVar4 = puVar3[10];
    puVar3[10] = param_9;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar4 = puVar3[0xd];
    puVar3[0xd] = puVar5;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar3[0xb];
    puVar3[0xb] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar3[0xe];
    puVar3[0xe] = param_11;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar3[0xf];
    puVar3[0xf] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar3[0x10];
    puVar3[0x10] = param_13;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar4 = puVar3[0x11];
    puVar3[0x11] = param_14;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + 0x99) = param_15;
    uVar4 = param_17;
    _objc_retainBlock();
    uVar7 = puVar3[0x12];
    puVar3[0x12] = uVar4;
    _objc_release(uVar7);
    _objc_retain(param_18);
    uVar4 = puVar3[0xc];
    puVar3[0xc] = param_18;
    _objc_release(uVar4);
    _objc_retain(param_19);
    uVar4 = puVar3[0x14];
    puVar3[0x14] = param_19;
    _objc_release(uVar4);
    if ((param_7 & 1) == 0) {
      uVar4 = puVar3[1];
      puVar6 = puVar3;
      func_0x00010be86f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(puVar6);
    }
    func_0x00010bdc86a0(puVar3);
  }
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
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10718b784; end: 10718bb37; -[SCStickerDataProvider initForChatWithSearchPageDataSource:searchSource:inputText:customStickers:userSession:delegate:stickerSearchObservable:circumstanceEngine:itemsRepository:stickerItemPresentationModelSource:bitmojiStickerCategoryIconProvider:friendmojiFilteredContainer:stickerInjector:shouldRenderChatSearchResultsAsCTItems:creativeToolsABProvider:bitmojiAppEventsEmitter:] */

undefined8 *
FUN_10718b784(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126f8ad8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_10718baa4;
  _objc_storeWeak(puVar1 + 2,param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar6 = puVar1[1];
  puVar1[1] = puVar2;
  _objc_release(uVar6);
  _objc_retain(param_6);
  uVar6 = puVar1[0x15];
  puVar1[0x15] = param_6;
  _objc_release(uVar6);
  _objc_storeWeak(puVar1 + 6,param_8);
  puVar1[3] = 0x1f8b58;
  puVar2 = PTR_PTR_1126d4f08;
  _objc_opt_new();
  uVar6 = puVar1[7];
  puVar1[7] = puVar2;
  _objc_release(uVar6);
  _objc_retain(param_10);
  uVar6 = puVar1[10];
  puVar1[10] = param_10;
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar6 = puVar1[0xd];
  puVar1[0xd] = puVar2;
  _objc_release(uVar6);
  _objc_retain(param_11);
  uVar6 = puVar1[0xb];
  puVar1[0xb] = param_11;
  _objc_release(uVar6);
  _objc_retain(param_12);
  uVar6 = puVar1[0xe];
  puVar1[0xe] = param_12;
  _objc_release(uVar6);
  _objc_retain(param_13);
  uVar6 = puVar1[0xf];
  puVar1[0xf] = param_13;
  _objc_release(uVar6);
  _objc_retain(param_14);
  uVar6 = puVar1[0x10];
  puVar1[0x10] = param_14;
  _objc_release(uVar6);
  _objc_retain(param_15);
  uVar6 = puVar1[0x11];
  puVar1[0x11] = param_15;
  _objc_release(uVar6);
  *(undefined1 *)(puVar1 + 0x13) = param_16;
  _objc_retain(param_18);
  uVar6 = puVar1[0xc];
  puVar1[0xc] = param_18;
  _objc_release(uVar6);
  _objc_retain(param_19);
  uVar6 = puVar1[0x14];
  puVar1[0x14] = param_19;
  _objc_release(uVar6);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar5 = puVar1;
  if (param_9 == 0) {
    lVar3 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      uVar6 = puVar1[1];
      func_0x00010be9c580(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10718ba70;
    }
  }
  else {
    uVar6 = puVar1[1];
    func_0x00010be9c560(puVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_10718ba70:
    func_0x00010befa120(uVar6);
    _objc_release(puVar5);
  }
  func_0x00010bdc86a0(puVar1);
LAB_10718baa4:
  _objc_release(param_19);
  _objc_release(param_18);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10718bb38; end: 10718bb7f; -[SCStickerDataProvider dealloc] */

void FUN_10718bb38(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  puStack_28 = PTR_PTR_1126f8ad8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10718bb80; end: 10718bbef; -[SCStickerDataProvider updateBitmoji] */

void FUN_10718bb80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdd4ae0(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be8d600(param_1,param_2,4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be3c680(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10718bbf0; end: 10718bdc7; -[SCStickerDataProvider _searchChatSuperCategoryWithSearchPageDataSource:searchSource:inputText:] */

void FUN_10718bbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126ae820;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126d4e80;
  func_0x00010c254d40(PTR_PTR_1126d4e80,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010c0d9840(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126d4eb8;
  _objc_alloc();
  func_0x00010bffdee0();
  puVar5 = PTR_PTR_1126ae558;
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ea0ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d4ec0;
  func_0x00010c270f80(PTR_PTR_1126d4ec0,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d4ec8;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c04c6c0(puVar6,param_2,puVar7,0,puVar4);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126d4ed0;
    puVar9 = PTR_PTR_1126d4eb8;
    pcStack_68 = FUN_10718bdc8;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_a0 = puVar5;
    puStack_98 = puVar4;
    puStack_90 = puVar6;
    puStack_88 = puVar3;
    puStack_80 = puVar2;
    puStack_78 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (puVar7[0x98] == '\x01') {
      _objc_retain(puVar10);
      _objc_alloc();
      func_0x00010bffdec0();
      puVar9 = puVar8;
    }
    else {
      _objc_retain(puVar10);
      _objc_alloc();
      func_0x00010bffdee0();
    }
    _objc_release(puVar10);
    puVar5 = PTR_PTR_1126ae558;
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ea0ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d4ec0;
    func_0x00010c270f80(PTR_PTR_1126d4ec0,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d4ec8;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0;
    puVar3 = puVar2;
    puVar4 = puVar1;
    func_0x00010c04c6c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      puVar5 = puVar3;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010bf529e0();
      _objc_release(puVar5);
      if (puVar1 == (undefined *)0x0) {
        func_0x00010be8d600(puVar9,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar9;
      }
      else {
        puVar5 = puVar9;
        func_0x00010be9c580(puVar9,param_2,puVar3,uVar11,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be3c680(puVar9,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar6 = puVar9;
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10718bdc8; end: 10718bf67; -[SCStickerDataProvider _searchChatSuperCategoryWithSearchObservable:] */

void FUN_10718bdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126d4ed0;
  puVar2 = PTR_PTR_1126d4eb8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010bffdec0();
    puVar2 = puVar1;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010bffdee0();
  }
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126ae558;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ea0ed8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d4ec0;
  func_0x00010c270f80(PTR_PTR_1126d4ec0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d4ec8;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  puVar6 = puVar5;
  puVar8 = puVar3;
  func_0x00010c04c6c0();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    _objc_retain(puVar8);
    puVar1 = puVar6;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar3 == (undefined *)0x0) {
      func_0x00010be8d600(puVar2,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
    }
    else {
      puVar1 = puVar2;
      func_0x00010be9c580(puVar2,param_2,puVar6,uVar7,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3c680(puVar2,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar4 = puVar2;
    }
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10718bf68; end: 10718c047; -[SCStickerDataProvider updateChatSearchPageDataSource:searchSource:inputText:] */

void FUN_10718bf68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be8d600(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_1;
    func_0x00010be9c580(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3c680(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10718c048; end: 10718c0af; -[SCStickerDataProvider updateChatSearchObservable:] */

void FUN_10718c048(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    func_0x00010be8d600();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010be9c560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3c680(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10718c0b0; end: 10718c1cf; -[SCStickerDataProvider _recentlyUsedStickerSuperCategoryWithTarget:] */

void FUN_10718c0b0(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined **unaff_x27;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  long lStack_a8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d4eb8;
  _objc_alloc();
  func_0x00010c03d300();
  func_0x00010bddc000();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126d4ec8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c04c6c0();
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  if (puVar8 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar8;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c27dd80();
    _objc_release(puVar13);
    puVar4 = puVar8;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27dd80();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar5 == (undefined *)0x4) {
      lVar12 = *(long *)(puVar2 + 0x68);
      puVar5 = puVar8;
      func_0x00010bfa3d00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c0df840(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
        _objc_release(puVar13);
        _objc_release(puVar5);
        goto LAB_10718c378;
      }
      lVar12 = *(long *)(puVar2 + 0x18);
      _objc_release();
      _objc_release(puVar13);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar12 != 0x1f8b58) {
        uVar15 = *(undefined8 *)(puVar2 + 0x68);
        puVar3 = puVar8;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be3c680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        _objc_release(puVar13);
        _objc_release(puVar3);
        puVar13 = puVar2;
        goto LAB_10718c58c;
      }
    }
    else {
LAB_10718c378:
      _objc_release(puVar4);
    }
    puVar13 = puVar2;
    func_0x00010bddbfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b8,puVar2);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10718c600;
    puStack_d0 = &UNK_110990c40;
    unaff_x27 = &puStack_e8;
    param_2 = auStack_b8;
    _objc_copyWeak(auStack_c8);
    ppuVar6 = &puStack_e8;
    uStack_c0 = puVar3 == (undefined *)0xd;
    _objc_retainBlock();
    puVar3 = puVar8;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c27dd80();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x7) {
      puVar5 = PTR_PTR_1126b61c0;
      func_0x00010bf61040();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d4eb8;
      _objc_alloc();
      func_0x00010c00f6c0();
      puVar4 = PTR_PTR_1126d4ec8;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04c6c0();
      _objc_release(puVar7);
    }
    else {
      puVar4 = PTR_PTR_1126d4ed8;
      _objc_alloc();
      uVar15 = *(undefined8 *)(puVar2 + 0x58);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c012340();
      _objc_release(uVar15);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar15 = *(undefined8 *)(puVar2 + 0x68);
      puVar5 = puVar8;
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar15);
    }
    _objc_release(puVar3);
    _objc_release(puVar5);
    func_0x00010be3c680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar13);
    puVar13 = puVar2;
  }
LAB_10718c58c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x27 + 4);
    _objc_destroyWeak(auStack_b8);
    __Unwind_Resume();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    puVar2 = puVar8 + 0x20;
    _objc_loadWeakRetained();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(param_2);
      puVar9 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar9 != (undefined1 *)0x0) {
        puVar14 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar16 = *(ulong *)((long)puVar14 * 8);
          uVar10 = uVar16;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if ((((((uVar10 != 0) && (uVar10 = uVar16, func_0x00010bf96f00(), uVar10 != 8)) &&
                ((puVar2[0x28] != '\x01' ||
                 (uVar10 = uVar16, func_0x00010c06c000(), (uVar10 & 1) == 0)))) &&
               ((uVar10 = *(ulong *)(puVar2 + 0x90), uVar10 == 0 ||
                ((**(code **)(uVar10 + 0x10))(uVar10,uVar16), (uVar10 & 1) == 0)))) &&
              ((puVar2[0x99] != '\x01' ||
               (uVar10 = uVar16, func_0x000108eb8474(), (uVar10 & 1) == 0)))) &&
             (((puVar8[0x28] != '\x01' || (*(long *)(puVar2 + 0x18) != 0x17d46fa8)) ||
              (uVar10 = uVar16, func_0x00010bf96f00(), uVar10 != 10)))) {
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126ba8d8;
            _objc_opt_class(PTR_PTR_1126ba8d8);
            uVar11 = uVar16;
            _objc_opt_isKindOfClass(uVar16,puVar3);
            uVar10 = uVar16;
            if ((uVar11 & 1) == 0) {
              uVar10 = 0;
            }
            _objc_retain(uVar10);
            _objc_release(uVar16);
            uVar16 = uVar10;
            func_0x00010bfee000();
            _objc_release(uVar10);
            if (uVar16 == 5) {
              uVar10 = *(ulong *)(puVar2 + 0x60);
              func_0x00010c074700();
              if ((uVar10 & 1) == 0) {
                func_0x00010befa120(puVar13);
              }
            }
            else {
              uVar16 = *(ulong *)(puVar2 + 0x88);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar16;
              func_0x00010c07faa0();
              if ((int)uVar10 != 0) {
                uVar15 = *(undefined8 *)(puVar2 + 0x70);
                func_0x00010c10f580(uVar15);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar16;
                func_0x00010c230560();
                if ((uVar10 & 1) == 0) {
                  func_0x00010befa120(puVar13);
                }
                _objc_release(uVar15);
              }
              _objc_release(uVar16);
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar9 != puVar14);
        puVar9 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
    }
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      puVar13 = *(undefined **)(param_2 + 0x68);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10718c1d0; end: 10718c5ff; -[SCStickerDataProvider updateSuperCategoryWithFeed:] */

void FUN_10718c1d0(undefined *param_1,undefined1 *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined **unaff_x27;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
    goto LAB_10718c58c;
  }
  puVar2 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c27dd80();
  _objc_release(puVar2);
  puVar4 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c27dd80();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar5 == (undefined *)0x4) {
    lVar13 = *(long *)(param_1 + 0x68);
    puVar5 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      _objc_release(puVar2);
      _objc_release(puVar5);
      goto LAB_10718c378;
    }
    lVar13 = *(long *)(param_1 + 0x18);
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar13 != 0x1f8b58) {
      uVar12 = *(undefined8 *)(param_1 + 0x68);
      puVar3 = param_3;
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3c680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(puVar2);
      _objc_release(puVar3);
      goto LAB_10718c58c;
    }
  }
  else {
LAB_10718c378:
    _objc_release(puVar4);
  }
  puVar2 = param_1;
  func_0x00010bddbfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10718c600;
  puStack_90 = &UNK_110990c40;
  unaff_x27 = &puStack_a8;
  param_2 = auStack_78;
  _objc_copyWeak(auStack_88);
  ppuVar6 = &puStack_a8;
  uStack_80 = puVar3 == (undefined *)0xd;
  _objc_retainBlock();
  puVar3 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c27dd80();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x7) {
    puVar5 = PTR_PTR_1126b61c0;
    func_0x00010bf61040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4eb8;
    _objc_alloc();
    func_0x00010c00f6c0();
    puVar4 = PTR_PTR_1126d4ec8;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c6c0();
    _objc_release(puVar7);
  }
  else {
    puVar4 = PTR_PTR_1126d4ed8;
    _objc_alloc();
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c012340();
    _objc_release(uVar12);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar12 = *(undefined8 *)(param_1 + 0x68);
    puVar5 = param_3;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar12);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  func_0x00010be3c680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
LAB_10718c58c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x27 + 4);
    _objc_destroyWeak(auStack_78);
    __Unwind_Resume();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    puVar2 = param_3 + 0x20;
    _objc_loadWeakRetained();
    param_1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(param_2);
      puVar8 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar8 != (undefined1 *)0x0) {
        puVar11 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar14 = *(ulong *)((long)puVar11 * 8);
          uVar9 = uVar14;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if ((((((uVar9 != 0) && (uVar9 = uVar14, func_0x00010bf96f00(), uVar9 != 8)) &&
                ((puVar2[0x28] != '\x01' ||
                 (uVar9 = uVar14, func_0x00010c06c000(), (uVar9 & 1) == 0)))) &&
               ((uVar9 = *(ulong *)(puVar2 + 0x90), uVar9 == 0 ||
                ((**(code **)(uVar9 + 0x10))(uVar9,uVar14), (uVar9 & 1) == 0)))) &&
              ((puVar2[0x99] != '\x01' || (uVar9 = uVar14, func_0x000108eb8474(), (uVar9 & 1) == 0))
              )) && (((param_3[0x28] != '\x01' || (*(long *)(puVar2 + 0x18) != 0x17d46fa8)) ||
                     (uVar9 = uVar14, func_0x00010bf96f00(), uVar9 != 10)))) {
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR_PTR_1126ba8d8;
            _objc_opt_class(PTR_PTR_1126ba8d8);
            uVar10 = uVar14;
            _objc_opt_isKindOfClass(uVar14,puVar3);
            uVar9 = uVar14;
            if ((uVar10 & 1) == 0) {
              uVar9 = 0;
            }
            _objc_retain(uVar9);
            _objc_release(uVar14);
            uVar14 = uVar9;
            func_0x00010bfee000();
            _objc_release(uVar9);
            if (uVar14 == 5) {
              uVar9 = *(ulong *)(puVar2 + 0x60);
              func_0x00010c074700();
              if ((uVar9 & 1) == 0) {
                func_0x00010befa120(param_1);
              }
            }
            else {
              uVar14 = *(ulong *)(puVar2 + 0x88);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar14;
              func_0x00010c07faa0();
              if ((int)uVar9 != 0) {
                uVar12 = *(undefined8 *)(puVar2 + 0x70);
                func_0x00010c10f580(uVar12);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar14;
                func_0x00010c230560();
                if ((uVar9 & 1) == 0) {
                  func_0x00010befa120(param_1);
                }
                _objc_release(uVar12);
              }
              _objc_release(uVar14);
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar8 != puVar11);
        puVar8 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
    }
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      param_1 = *(undefined **)(param_2 + 0x68);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10718c600; end: 10718c8cb;  */

void FUN_10718c600(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  if (lVar2 != 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = *(ulong *)(lVar10 * 8);
        uVar4 = uVar11;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if ((((((uVar4 != 0) && (uVar4 = uVar11, func_0x00010bf96f00(), uVar4 != 8)) &&
              ((*(char *)(lVar2 + 0x28) != '\x01' ||
               (uVar4 = uVar11, func_0x00010c06c000(), (uVar4 & 1) == 0)))) &&
             ((uVar4 = *(ulong *)(lVar2 + 0x90), uVar4 == 0 ||
              ((**(code **)(uVar4 + 0x10))(uVar4,uVar11), (uVar4 & 1) == 0)))) &&
            ((*(char *)(lVar2 + 0x99) != '\x01' ||
             (uVar4 = uVar11, func_0x000108eb8474(), (uVar4 & 1) == 0)))) &&
           (((*(char *)(param_1 + 0x28) != '\x01' || (*(long *)(lVar2 + 0x18) != 0x17d46fa8)) ||
            (uVar4 = uVar11, func_0x00010bf96f00(), uVar4 != 10)))) {
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126ba8d8;
          _objc_opt_class(PTR_PTR_1126ba8d8);
          uVar6 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar5);
          uVar4 = uVar11;
          if ((uVar6 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar11);
          uVar11 = uVar4;
          func_0x00010bfee000();
          _objc_release(uVar4);
          if (uVar11 == 5) {
            uVar4 = *(ulong *)(lVar2 + 0x60);
            func_0x00010c074700();
            if ((uVar4 & 1) == 0) {
              func_0x00010befa120(puVar9);
            }
          }
          else {
            uVar11 = *(ulong *)(lVar2 + 0x88);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar11;
            func_0x00010c07faa0();
            if ((int)uVar4 != 0) {
              uVar7 = *(undefined8 *)(lVar2 + 0x70);
              func_0x00010c10f580(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar11;
              func_0x00010c230560();
              if ((uVar4 & 1) == 0) {
                func_0x00010befa120(puVar9);
              }
              _objc_release(uVar7);
            }
            _objc_release(uVar11);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar9 = *(undefined **)(param_2 + 0x68);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10718c8cc; end: 10718c923; -[SCStickerDataProvider superCategoryForFeedType:] */

void FUN_10718c8cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10718c924; end: 10718cb0f; -[SCStickerDataProvider _categoryIconForFeed:] */

void FUN_10718c924(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b0c40;
  puVar6 = (undefined *)0x0;
  if (0x19 < uVar2) goto LAB_10718c9c8;
  if ((1L << (uVar2 & 0x3f) & 0x3ffdddfU) == 0) {
    if (uVar2 != 5) {
      if (uVar2 != 0xd) goto LAB_10718c9c8;
      if (*(long *)(param_1 + 0x18) == 0x17d46fa8) {
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar4,param_2,0x14e,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar3 = PTR_PTR_1126ae558;
        func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        goto LAB_10718caf4;
      }
      goto LAB_10718c98c;
    }
    puVar3 = param_1;
    func_0x00010be19f00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c253a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
    if (puVar5 == (undefined *)0x0) {
LAB_10718caf4:
      puVar6 = PTR_PTR_1126d4ec0;
      func_0x00010c270f80(PTR_PTR_1126d4ec0,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
    }
    else {
      puVar6 = PTR_PTR_1126d4ec0;
      func_0x00010bf1a960(PTR_PTR_1126d4ec0,param_2,puVar5,puVar5,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
  }
  else {
LAB_10718c98c:
    func_0x00010be19f00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d4ec0;
    func_0x00010c270f80(PTR_PTR_1126d4ec0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
  }
  _objc_release(puVar3);
LAB_10718c9c8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10718cb10; end: 10718cdc7; -[SCStickerDataProvider _futureIconImageWithFeed:] */

void FUN_10718cb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10718cdc8;
  uStack_80 = 0x10718cdd8;
  uStack_78 = 0;
  uVar2 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1100();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar5 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar6 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  puVar7 = PTR_PTR_1126d4ee0;
  func_0x00010bf4c240(PTR_PTR_1126d4ee0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c1267e0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10718cdc8; end: 10718cddf;  */

void FUN_10718cdc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10718cde0; end: 10718ce17;  */

void FUN_10718cde0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10718ce18; end: 10718ce1b;  */

void FUN_10718ce18(void)

{
  return;
}



/* Entry: 10718ce1c; end: 10718ce63;  */

void FUN_10718ce1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2720;
  func_0x00010c14d040(PTR_PTR_1126b2720,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10718ce64; end: 10718ceeb; -[SCStickerDataProvider _addStickerSuperCategories] */

void FUN_10718ce64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (((lVar1 == 0x13112 || lVar1 == 0x17d46fa8) || lVar1 == 0x1f8b58) &&
     (lVar1 = param_1, func_0x00010c22f3a0(), (int)lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010bdd4ae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 8));
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebe230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sortSuperCategories_11258d230);
  return;
}



/* Entry: 10718ceec; end: 10718cefb; -[SCStickerDataProvider _sortSuperCategories] */

void FUN_10718ceec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sortUsingComparator__11266f510,
             &PTR___NSConcreteGlobalBlock_110990cb0);
  return;
}



/* Entry: 10718cefc; end: 10718cf57;  */

ulong FUN_10718cefc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010c27dd80();
  lVar1 = param_3;
  func_0x00010c27dd80();
  _objc_release(param_3);
  uVar2 = (ulong)(lVar1 < param_2);
  if (param_2 < lVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 10718cf58; end: 10718d007; -[SCStickerDataProvider _categoryIconWithNormalImageNamed:target:] */

void FUN_10718cf58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d4ec0;
  if (param_4 == 0x1f8b58) {
    func_0x00010c270f80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1a960(PTR_PTR_1126d4ec0,param_2,puVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10718d008; end: 10718d017; -[SCStickerDataProvider _snapchatStickersCategoryIconForTarget:] */

void FUN_10718d008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__categoryIconWithNormalImageName_1125549a0,
             &PTR____CFConstantStringClassReference_110ea0f58,param_3);
  return;
}



/* Entry: 10718d018; end: 10718d0a3; -[SCStickerDataProvider findStickerSuperCategory:] */

ulong FUN_10718d018(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c0dfd40(lVar2,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c27dd80();
      _objc_release(lVar2);
      if (lVar1 == param_3) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
  return 0;
}



/* Entry: 10718d0a4; end: 10718d14b; -[SCStickerDataProvider _removeStickerSuperCategoryWithType:] */

void FUN_10718d0a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010be38d40();
  if (lVar1 == 0x7fffffffffffffff) {
    puVar2 = PTR_PTR_1126d4ee8;
    _objc_alloc_init(PTR_PTR_1126d4ee8);
  }
  else {
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8),param_2,lVar1);
    puVar2 = PTR_PTR_1126d4ee8;
    _objc_alloc(PTR_PTR_1126d4ee8);
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e340(puVar2,param_2,0,0,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10718d14c; end: 10718d2f7; -[SCStickerDataProvider _insertOrUpdateStickerSuperCategory:] */

void FUN_10718d14c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = PTR_PTR_1126d4ee8;
    _objc_alloc_init(PTR_PTR_1126d4ee8);
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    lVar2 = param_1;
    func_0x00010be38d40(param_1,param_2,lVar1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    if (lVar2 == 0x7fffffffffffffff) {
      uVar3 = uVar8;
      func_0x00010bf529e0(uVar8);
      func_0x00010bfece00(uVar8,param_2,param_3,0,uVar3,0x400,&PTR___NSConcreteGlobalBlock_110990cd0
                         );
      func_0x00010c066b00(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar8);
      puVar4 = PTR_PTR_1126d4ee8;
      _objc_alloc(PTR_PTR_1126d4ee8);
      puVar5 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined *)0x0;
      puVar7 = puVar5;
    }
    else {
      func_0x00010c1d04c0(uVar8,param_2,param_3,lVar2);
      puVar4 = PTR_PTR_1126d4ee8;
      _objc_alloc(PTR_PTR_1126d4ee8);
      puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x0;
      puVar7 = puVar6;
    }
    func_0x00010c01e340(puVar4,param_2,puVar5,puVar6,0);
    _objc_release(puVar7);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10718d2f8; end: 10718d39f; -[SCStickerDataProvider _indexOfSuperCategoryWithType:] */

undefined8 FUN_10718d2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0x7fffffffffffffff;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10718d3a0;
  puStack_58 = &UNK_110990cf0;
  uStack_48 = param_3;
  puStack_38 = puStack_50;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + 8),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10718d3a0; end: 10718d3f3;  */

void FUN_10718d3a0(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010c27dd80();
  if (param_2 == *(long *)(param_1 + 0x28)) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 10718d3f4; end: 10718d4af; -[SCStickerDataProvider _bitmojiStickerSuperCategoryForTarget:] */

void FUN_10718d3f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar3 = param_1;
  func_0x00010c22f3a0();
  if ((int)uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuVar2 = (undefined **)0x0;
    if (param_3 == 0x1f8b58) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ea0f78;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea0fb8;
    if (param_3 != 0x17d46fa8) {
      ppuVar1 = ppuVar2;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110ea0f98;
    if (param_3 != 0x13112) {
      ppuVar2 = ppuVar1;
    }
    func_0x00010bddc000(param_1,param_2,ppuVar2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4ec8;
    _objc_alloc(PTR_PTR_1126d4ec8);
    func_0x00010c04c6c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10718d4b0; end: 10718d4b7; -[SCStickerDataProvider numberOfSuperCategoriesInStickerPickerMenu:] */

void FUN_10718d4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10718d4b8; end: 10718d58b; -[SCStickerDataProvider stickerPickerMenu:numberOfCategoriesInSuperCategory:] */

undefined8 FUN_10718d4b8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  uVar2 = 0;
  if ((-1 < (long)param_4) && (param_4 < uVar1)) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c0dfd40(lVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27dd80();
    if (lVar4 == 4) {
      uVar1 = param_1;
      func_0x00010c22f3a0();
      _objc_release(lVar3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    else {
      _objc_release(lVar3);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar5,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c253a60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  return uVar2;
}



/* Entry: 10718d58c; end: 10718d5e7; -[SCStickerDataProvider shouldDisplayBitmojiLinkingPage] */

uint FUN_10718d58c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108e07010();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd46e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10718d5e8; end: 10718d633; -[SCStickerDataProvider stickerPickerMenu:stickerSuperCategoryForIndex:] */

void FUN_10718d5e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 8),param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


