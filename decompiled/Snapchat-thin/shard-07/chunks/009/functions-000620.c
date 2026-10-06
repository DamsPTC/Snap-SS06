/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b9b6f8; end: 105b9b813; -[SCFriendsFeedViewController createChatScope:wantsToDismissForCallWithChatIdentifier:callMediaType:] */

void FUN_105b9b6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9b814; end: 105b9b84b;  */

void FUN_105b9b814(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be47620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9b84c; end: 105b9b8b7; -[SCFriendsFeedViewController _launchCallWithIdentifier:callMediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f84);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e080();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b9b8b8; end: 105b9b94b; -[SCFriendsFeedViewController groupJoinPermissionTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b8b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273110c;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b9b94c; end: 105b9b9c7; -[SCFriendsFeedViewController didTapCreateButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b94c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731238);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cd80();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be84e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pushStartChatViewWithCreateButt_11257ed20,1,0);
  return;
}



/* Entry: 105b9b9c8; end: 105b9ba83; -[SCFriendsFeedViewController _subscribeToMoreUnreadShortcutsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9b9c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311bc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d0fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedbc80(param_1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b9ba84; end: 105b9bba7; -[SCFriendsFeedViewController _cleanUpMoreUnreadShortcuts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105b9ba84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be8c960();
  lVar5 = (long)_DAT_11273132c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar5 = (long)_DAT_11273133c;
  if (*(long *)(param_1 + lVar5) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = *(long *)(param_1 + lVar5);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65be0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar2);
  }
  lVar5 = (long)_DAT_1127313bc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_1127313b8;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar4));
  lVar5 = *(long *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(lVar5 + _DAT_112730f14);
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf8fac0();
  _objc_release(lVar4);
  return lVar5;
}



/* Entry: 105b9bba8; end: 105b9bbef; -[SCFriendsFeedViewController _getIsCommunitiesViewingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b9bba8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8fac0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105b9bbf0; end: 105b9bc53; -[SCFriendsFeedViewController _reloadDataMinUpdateCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9bbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f14);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c128ba0();
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b9bc54; end: 105b9bc7b; -[SCFriendsFeedViewController didTapMoreUnreadButton] */

void FUN_105b9bc54(undefined8 param_1)

{
  func_0x00010be562a0();
                    /* WARNING: Could not recover jumptable at 0x00010be08390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitShortcutEventWithSelectedSh_11255fa80,4)
  ;
  return;
}



/* Entry: 105b9bc7c; end: 105b9be67; -[SCFriendsFeedViewController _didQueryFriendStoryLoadingStatusForStoryId:initialPublicStory:summaryData:cell:cellIndexPath:] */

void FUN_105b9bc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b9be68;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_initWeak(auStack_90,param_1);
  uVar1 = param_5;
  func_0x00010bf00d20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_90);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be824a0(param_1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9be68; end: 105b9bef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9be68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c2d58;
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112730f88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cf80();
  lVar4 = (long)_DAT_11273145c;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4),
             PTR_s_addDataUpdateListener__11259b8c0);
  return;
}



/* Entry: 105b9bef4; end: 105b9bfcb;  */

void FUN_105b9bef4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf83280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c142240(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1554e0();
  func_0x00010be7eb40(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b9bfcc; end: 105b9c2f7; -[SCFriendsFeedViewController _presentStoriesWithStoryId:initialPublicStory:storiesSummaryInfo:fromBaseView:playbackDataModels:viewLocationPosition:sourceSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9bfcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
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
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_1 + _DAT_112731070);
  func_0x00010c0d0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06dbc0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + _DAT_112731428) = param_9;
    lVar3 = param_1 + _DAT_112730fc0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c09fde0();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar3);
    if (param_4 == 0) {
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127310b4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_d0,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_7);
      uStack_c0 = param_9;
      uStack_c8 = param_8;
      func_0x00010bfef0c0(uVar4);
      _objc_release(uVar4);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      puVar5 = auStack_d0;
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127310b4);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105b9c2f8;
      puStack_a0 = &UNK_11085b370;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      uStack_98 = param_3;
      _objc_retain(param_4);
      lStack_90 = param_4;
      _objc_retain(param_5);
      uStack_88 = param_5;
      _objc_retain(param_6);
      uStack_80 = param_6;
      _objc_retain(param_7);
      uStack_78 = param_7;
      func_0x00010bfef0c0(uVar4);
      _objc_release(uVar4);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(lStack_90);
      _objc_release(uStack_98);
      puVar5 = auStack_70;
    }
    _objc_destroyWeak(puVar5);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9c2f8; end: 105b9c403;  */

void FUN_105b9c2f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105b9c404;
  puStack_68 = &UNK_11085b370;
  _objc_copyWeak(auStack_38,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b9c404; end: 105b9c43f;  */

void FUN_105b9c404(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9c440; end: 105b9c53b;  */

void FUN_105b9c440(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b9c53c;
  puStack_70 = &UNK_1108a0d90;
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b9c53c; end: 105b9c577;  */

void FUN_105b9c53c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde8040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9c578; end: 105b9ce1f; -[SCFriendsFeedViewController _contentSessionScopePresentStoriesWithStoryId:storiesSummaryInfo:fromBaseView:playbackDataModels:viewLocationPosition:sourceSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9c578(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar13 = param_6;
  _objc_retain();
  FUN_105b6385c();
  puVar1 = PTR_PTR_1126b4d30;
  _objc_alloc();
  lVar28 = param_7;
  func_0x00010bfb1920(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0();
  _objc_release(lVar28);
  puVar2 = PTR_PTR_1126b4d40;
  _objc_alloc();
  lVar28 = param_2;
  func_0x00010be6ddc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1127312b8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010bff7200();
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(lVar28);
  lVar28 = param_7;
  func_0x00010bf51e00();
  lVar27 = (long)_DAT_11273116c;
  puVar4 = PTR____NSArray0__struct_11034ab48;
  FUN_105b62e90(PTR____NSArray0__struct_11034ab48,*(undefined8 *)(param_2 + _DAT_1127310b0),
                *(undefined8 *)(param_2 + lVar27),*(undefined8 *)(param_2 + _DAT_1127310ac),
                *(undefined8 *)(param_2 + _DAT_112730f90),0x1e);
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_112731004;
  uVar5 = 0;
  func_0x000107d00a08(0,*(undefined8 *)(param_2 + lVar27),*(undefined8 *)(param_2 + _DAT_1127310a4),
                      *(undefined8 *)(param_2 + _DAT_1127310f4),*(undefined8 *)(param_2 + lVar30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x000107af933c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + _DAT_1127310a8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  func_0x00010799ad20(0,uVar3,0,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar7 = lVar28;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar28);
  lVar11 = lVar7;
  func_0x00010bf529e0();
  lVar28 = 0;
  if (lVar11 != 0) {
    lVar28 = lVar11 + -1;
  }
  *(long *)(param_2 + _DAT_112731460) = lVar28;
  func_0x00010c066720(puVar4);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  lVar28 = param_7;
  func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_1108d9410);
  func_0x00010befa160(puVar8);
  _objc_release(lVar28);
  uVar5 = uVar3;
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1108d9450);
  func_0x00010befa160(puVar8);
  _objc_release(uVar5);
  uVar9 = *(undefined8 *)(param_2 + _DAT_112730fdc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  if ((int)uVar5 != 0) {
    puVar10 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar10);
    lVar28 = param_7;
    func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_1108d9470);
    lVar29 = (long)_DAT_112731168;
    lVar11 = *(long *)(param_2 + lVar29);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      uVar5 = *(undefined8 *)(param_2 + lVar29);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb9520();
      _objc_release(uVar5);
    }
    puVar10 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar10);
    uVar5 = *(undefined8 *)(param_2 + _DAT_112731014);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(uVar3);
    func_0x00010c1071c0(uVar5);
    _objc_release(uVar5);
    _objc_release(lVar28);
  }
  puVar10 = puVar8;
  func_0x00010bf51e00(puVar8);
  func_0x00010be488e0(param_2);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b4d38;
  uVar9 = *(undefined8 *)(param_2 + lVar27);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bfba1c0();
  if ((int)uVar5 == 0) {
    uVar26 = *(undefined8 *)(param_2 + _DAT_112731428);
    uVar15 = *(undefined8 *)(param_2 + _DAT_112730fc8);
    uVar16 = *(undefined8 *)(param_2 + _DAT_112730f80);
    lVar28 = param_2 + _DAT_112730fc4;
    _objc_loadWeakRetained();
    uVar17 = *(undefined8 *)(param_2 + _DAT_112730fb4);
    uVar22 = *(undefined8 *)(param_2 + lVar30);
    uVar18 = *(undefined8 *)(param_2 + _DAT_112730f74);
    uVar19 = *(undefined8 *)(param_2 + _DAT_11273105c);
    uVar23 = *(undefined8 *)(param_2 + _DAT_112731274);
    uVar20 = *(undefined8 *)(param_2 + _DAT_112731084);
    uVar24 = *(undefined8 *)(param_2 + _DAT_1127310b8);
    uVar21 = *(undefined8 *)(param_2 + _DAT_1127310c0);
    uVar25 = *(undefined8 *)(param_2 + _DAT_1127310c4);
    uVar12 = *(undefined8 *)(param_2 + _DAT_112731108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    FUN_105b63148(param_4,param_5,uVar13,param_7,uVar26,uVar15,puVar4,uVar16,lVar28,uVar17,uVar22,
                  uVar18,uVar19,uVar23,uVar20,uVar24,uVar21,uVar25,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cbc40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(lVar28);
  }
  else {
    func_0x00010c0cbc40(puVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar9);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112731178);
  lVar28 = (long)_DAT_112731440;
  dVar31 = *(double *)(param_2 + lVar28);
  _CACurrentMediaTime();
  uVar13 = 0x1e;
  func_0x000108534a80(0x1e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((param_1 - dVar31) * 1000.0),uVar5);
  _objc_release(uVar13);
  puVar14 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  func_0x00010bff0a00(*(undefined8 *)(param_2 + lVar28));
  uVar13 = *(undefined8 *)(param_2 + _DAT_11273128c);
  func_0x00010bf22a20(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_2 + _DAT_112731288));
  _objc_release(uVar13);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b9ce20; end: 105b9ce27;  */

void FUN_105b9ce20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b9ce28; end: 105b9ce6f;  */

void FUN_105b9ce28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b9ce70; end: 105b9ce77;  */

void FUN_105b9ce70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b9ce78; end: 105b9d79f; -[SCFriendsFeedViewController _contentSessionScopePresentStoriesWithStoryId:initialPublicStory:storiesSummaryInfo:fromBaseView:friendStoriesPlaybackDataModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9ce78(double param_1,long param_2,undefined **param_3,undefined8 param_4,long param_5,
                  undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  double dVar35;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar34 = param_5;
  func_0x00010c25b720();
  lVar31 = param_5;
  if (lVar34 == 0xd) {
    uVar14 = *(undefined8 *)(param_2 + _DAT_11273116c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR_PTR_1126c2a20;
    func_0x00010c24b800(PTR_PTR_1126c2a20);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bf1f320();
    _objc_release(puVar32);
    _objc_release(uVar14);
    if ((int)uVar5 == 0) goto LAB_105b9d120;
    func_0x000107d02b54();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR_PTR_1126b1118;
    _objc_alloc();
LAB_105b9cfc8:
    func_0x00010c043160();
    if (lVar31 != 0) {
      lVar34 = param_5;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar32;
      func_0x000108481f00(puVar32,lVar34);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x000108481fac(param_5,puVar1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(puVar1);
      _objc_release();
      FUN_105b6385c();
      puVar1 = PTR_PTR_1126b4d30;
      _objc_alloc();
      func_0x00010c04bca0();
      puVar3 = PTR_PTR_1126b4d40;
      _objc_alloc();
      lVar4 = param_2;
      func_0x00010be6ddc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + _DAT_1127312b8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010bff7200();
      _objc_release(uVar5);
      _objc_release(lVar4);
      if (lVar2 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar33 = (long)_DAT_11273116c;
      lVar18 = (long)_DAT_112731004;
      puVar7 = puVar6;
      func_0x000107d00a08();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      func_0x00010bf22200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      FUN_105b62e90();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x00010c066720(puVar11);
      lVar12 = lVar9;
      func_0x00010bf529e0();
      lVar4 = 0;
      if (lVar12 != 0) {
        lVar4 = lVar12 + -1;
      }
      *(long *)(param_2 + _DAT_112731460) = lVar4;
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bffc4a0();
      lVar4 = lVar2;
      func_0x00010bf454e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar4;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar13);
      _objc_release(lVar12);
      _objc_release(lVar4);
      uVar5 = param_8;
      func_0x000100504554(param_8,&PTR___NSConcreteGlobalBlock_1108d9490);
      func_0x00010befa160(puVar13);
      _objc_release(uVar5);
      param_3 = &PTR___NSConcreteGlobalBlock_1108d94b0;
      puVar10 = puVar7;
      func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1108d94b0);
      func_0x00010befa160(puVar13);
      _objc_release(puVar10);
      puVar10 = puVar13;
      func_0x00010bf51e00(puVar13);
      func_0x00010be488e0(param_2);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b4d38;
      uVar14 = *(undefined8 *)(param_2 + lVar33);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar14;
      func_0x00010bfba1c0();
      if ((int)uVar5 == 0) {
        uVar30 = *(undefined8 *)(param_2 + _DAT_112731428);
        uVar19 = *(undefined8 *)(param_2 + _DAT_112730fc8);
        uVar20 = *(undefined8 *)(param_2 + _DAT_112730f80);
        lVar4 = param_2 + _DAT_112730fc4;
        _objc_loadWeakRetained();
        uVar21 = *(undefined8 *)(param_2 + _DAT_112730fb4);
        uVar22 = *(undefined8 *)(param_2 + lVar18);
        uVar26 = *(undefined8 *)(param_2 + _DAT_112730f74);
        uVar23 = *(undefined8 *)(param_2 + _DAT_11273105c);
        uVar27 = *(undefined8 *)(param_2 + _DAT_112731274);
        uVar24 = *(undefined8 *)(param_2 + _DAT_112731084);
        uVar28 = *(undefined8 *)(param_2 + _DAT_1127310b8);
        uVar25 = *(undefined8 *)(param_2 + _DAT_1127310c0);
        uVar29 = *(undefined8 *)(param_2 + _DAT_1127310c4);
        uVar15 = *(undefined8 *)(param_2 + _DAT_112731108);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_4;
        param_3 = param_6;
        FUN_105b63148(param_4,param_6,lVar34,param_8,uVar30,uVar19,puVar11,uVar20,lVar4,uVar21,
                      uVar22,uVar26,uVar23,uVar27,uVar24,uVar28,uVar25,uVar29,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cbc40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar15);
        _objc_release(lVar4);
      }
      else {
        func_0x00010c0cbc40(puVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar14);
      uVar14 = *(undefined8 *)(param_2 + _DAT_112731178);
      lVar34 = (long)_DAT_112731440;
      dVar35 = *(double *)(param_2 + lVar34);
      _CACurrentMediaTime();
      uVar5 = 0x1e;
      func_0x000108534a80(0x1e);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ab9c0((double)(long)((param_1 - dVar35) * 1000.0),uVar14);
      _objc_release(uVar5);
      puVar16 = PTR_PTR_1126b4d48;
      _objc_alloc(PTR_PTR_1126b4d48);
      func_0x00010bff0a00(*(undefined8 *)(param_2 + lVar34));
      uVar5 = *(undefined8 *)(param_2 + _DAT_11273128c);
      func_0x00010bf22a20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_2 + _DAT_112731288));
      _objc_release(uVar5);
      _objc_release(puVar16);
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(lVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar1);
      param_5 = lVar2;
      goto LAB_105b9d728;
    }
  }
  else {
    if (lVar34 == 3) {
      func_0x000107d018f0();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = PTR_PTR_1126b1118;
      _objc_alloc();
      goto LAB_105b9cfc8;
    }
LAB_105b9d120:
    puVar32 = (undefined *)0x0;
  }
  lVar31 = 0;
LAB_105b9d728:
  _objc_release(puVar32);
  _objc_release(lVar31);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b9d7a0; end: 105b9d7a7;  */

void FUN_105b9d7a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b9d7a8; end: 105b9d7ef;  */

void FUN_105b9d7a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b9d7f0; end: 105b9dac3; -[SCFriendsFeedViewController _launchUpNextV2PlaybackSessionScopeWithPlaybackDataProvider:friendStoryId:defaultFallbackStories:subscriptionStory:initialStoryIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9d7f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar7 = (long)_DAT_1127310cc;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar7));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = (long)_DAT_112731464;
  if (*(long *)(param_1 + lVar1) == 0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108d94d0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar2;
    _objc_release(uVar5);
  }
  lVar6 = (long)_DAT_112731468;
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  _objc_release(uVar5);
  lVar6 = param_1 + _DAT_1127310d0;
  _objc_loadWeakRetained(lVar6);
  lVar3 = lVar6;
  func_0x00010bf245c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,lVar3);
  if (param_6 == 0) {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126c2d60;
    func_0x00010c0ffcc0(PTR_PTR_1126c2d60,param_2,0,param_7,param_5,2,2,0,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
  }
  else {
    lVar6 = param_6;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126c2d60;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ffcc0(puVar2,param_2,puVar4,param_7,param_5,2,2,0,lVar7,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b9dac4; end: 105b9dadf;  */

void FUN_105b9dac4(void)

{
  _objc_opt_new(PTR_PTR_1126ae568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b9dae0; end: 105b9dbe7; -[SCFriendsFeedViewController buildFinalMixedPlaybackDataModelsWithInitialStory:playableDataModelForPublicStory:friendStoriesPlaybackDataModels:defaultFallbackStories:defaultFallbackStoriesDataModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9dae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127310a8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  func_0x00010799ad20(0,param_6,0,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0d3c80(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_4);
  func_0x00010befa160(puVar2);
  _objc_release(param_5);
  func_0x00010befa160(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b9dbe8; end: 105b9dd0f; -[SCFriendsFeedViewController groupProfileDidDimiss:withRequestedFriendshipProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9dbe8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1;
    func_0x00010be6ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112730fac),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9dd10; end: 105b9de37; -[SCFriendsFeedViewController groupProfileDidDismiss:withRequestedChat:deeplinkType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9dd10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731018;
  lVar4 = *(long *)(param_1 + lVar5);
  _objc_retain(param_4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar4 = param_1;
  func_0x00010be6ddc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar4,1);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273101c);
  func_0x00010bf22b00(uVar3,param_2,param_4,puVar2,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b9de38; end: 105b9de8f; -[SCFriendsFeedViewController groupProfileWillDimiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9de38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730fa8;
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



/* Entry: 105b9de90; end: 105b9de93; -[SCFriendsFeedViewController friendProfileWillAppear] */

void FUN_105b9de90(void)

{
  return;
}



/* Entry: 105b9de94; end: 105b9def7; -[SCFriendsFeedViewController friendProfileDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9de94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_112730fac;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c072560(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9def8; end: 105b9df4f; -[SCFriendsFeedViewController chatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9def8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731018;
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



/* Entry: 105b9df50; end: 105b9e05f; -[SCFriendsFeedViewController _presentGroupProfileWithGroupId:flashbackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9df50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b4b68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010be6ddc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f2220(param_1);
  func_0x00010c0029c0(puVar1,param_2,lVar2,param_3,lVar3,param_1);
  _objc_release(param_3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1b9580(puVar1,param_2,1);
    func_0x00010c19dc20(puVar1,param_2,param_4);
  }
  lVar3 = (long)_DAT_112730fa8;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b9e060; end: 105b9e213; -[SCFriendsFeedViewController _presentFriendProfileWithUserId:actionmojiId:friendshipFlashbackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e060(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0f2220();
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1;
    func_0x00010be6ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    puVar4 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    uStack_98 = 0;
    uStack_88 = 0x2c;
    uStack_90 = 0xffffffffcf5d0adf;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    lStack_a0 = lVar1;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_4);
    uStack_58 = 0;
    uStack_60 = param_4;
    if (puVar4 == (undefined *)0x0) {
      _objc_release(param_5);
      _objc_release(param_4);
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00(puVar4,param_2,&lStack_a0,puVar2,param_3,param_1);
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112730fac),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9e214; end: 105b9e2ff; -[SCFriendsFeedViewController _presentActionSheetWithUnifiedProfileActionData:pageViewName:saveableSentSnapMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + _DAT_11273143c) = 0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b9e300;
  puStack_70 = &UNK_1108d94f0;
  lStack_68 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_5);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105b9e318;
  puStack_a8 = &UNK_1108d9520;
  lStack_a0 = param_1;
  uStack_98 = param_5;
  uStack_90 = param_4;
  uStack_60 = param_5;
  _objc_retain(param_5);
  func_0x00010c0be180(param_3,param_2,&puStack_88,&puStack_c0);
  _objc_release(uStack_98);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b9e300; end: 105b9e337;  */

void FUN_105b9e300(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentGroupActionSheet_sourceP_11257c828,
             param_2,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105b9e338; end: 105b9e48f; -[SCFriendsFeedViewController _presentGroupActionSheet:sourcePageType:hideRecursiveOptions:saveableSentSnapMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112730f08);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06ecc0();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b2858;
  _objc_alloc(PTR_PTR_1126b2858);
  func_0x00010c0584e0();
  func_0x00010c1f5ae0();
  _objc_release(param_6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112731024),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9e490; end: 105b9e5ab; -[SCFriendsFeedViewController _presentFriendActionSheet:sourcePageType:hideRecursiveOptions:nonFriendAddSourceType:saveableSentSnapMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112731020;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(in_x6);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b2860;
  _objc_alloc(PTR_PTR_1126b2860);
  func_0x00010c058a60();
  _objc_release(param_3);
  func_0x00010c1f5ae0(puVar2,param_2,in_x6);
  _objc_release(in_x6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b9e5ac; end: 105b9e67b; -[SCFriendsFeedViewController operaPresenterWillBeginPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273137c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  func_0x00010bfa3ae0(*(undefined8 *)(param_1 + _DAT_112731220));
  func_0x00010c285f20(*(undefined8 *)(param_1 + _DAT_112731204));
  if (*(long *)(param_1 + _DAT_1127313f8) != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105b9e67c;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  func_0x00010bed8a00(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9e67c; end: 105b9e683;  */

void FUN_105b9e67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__markPlayedAsReadIfNecessary_112574f68);
  return;
}



/* Entry: 105b9e684; end: 105b9e69f; -[SCFriendsFeedViewController _markPlayedAsReadIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e684(long param_1)

{
  if (*(long *)(param_1 + _DAT_112731360) == 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be5d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markPlayedAsRead_112574f60);
  return;
}



/* Entry: 105b9e6a0; end: 105b9e77b; -[SCFriendsFeedViewController _markPlayedAsRead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e6a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bcc0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f9c);
  *(undefined **)(param_1 + _DAT_112730f9c) = puVar2;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731074);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c097260();
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731080);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2888c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105b9e77c; end: 105b9e807; -[SCFriendsFeedViewController operaPresenterDidFinishPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_1127312b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    uVar3 = param_3;
    func_0x00010c27a6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b4e0();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9e808; end: 105b9e8e7; -[SCFriendsFeedViewController _addToPlayedStoryIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e808(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112730f9c),param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730f98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9c0();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731074);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c097260();
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112731080);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2888c0();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9e8e8; end: 105b9e94b; -[SCFriendsFeedViewController _friendStoriesPlaylistPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e8e8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c2d68;
  uVar4 = *(ulong *)(param_1 + _DAT_1127313f8);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b9e94c; end: 105b9ed77; -[SCFriendsFeedViewController operaPresenterWillBeginDismissing:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9e94c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + (long)_DAT_1127313f8) == 0) goto LAB_105b9ed4c;
  uVar1 = *(ulong *)(param_2 + (long)_DAT_11273137c);
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  puVar2 = PTR_PTR_1126bdd30;
  uVar3 = uVar1;
  if (uVar4 == 0) {
    _objc_retain(uVar1);
    _objc_opt_class(puVar2);
    uVar11 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar11 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126bdd28;
    if (uVar4 != 0) goto LAB_105b9eac4;
    _objc_retain(uVar1);
    _objc_opt_class(puVar2);
    uVar11 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar11 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    if (uVar4 != 0) goto LAB_105b9eac4;
    uVar4 = param_2;
    func_0x00010bdf75c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010be19520();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bfb8fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c1128e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar11);
    _objc_release(uVar4);
    if (uVar3 != 0) goto LAB_105b9eac4;
  }
  else {
LAB_105b9eac4:
    uVar4 = uVar3;
    FUN_105b62f88();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_2 + (long)_DAT_112731428) == 0) {
      func_0x00010c13d9a0(param_2);
      uVar11 = uVar4;
      func_0x00010c08fa60();
      if (uVar11 == 0) {
        lVar6 = -1;
      }
      else {
        lVar6 = *(long *)(param_2 + (long)_DAT_112731204);
        func_0x00010bfecb00();
      }
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 < 0) {
LAB_105b9ec04:
        func_0x00010c283ba0(param_4);
        uVar11 = param_2;
        func_0x00010c29bf00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetMaxY();
        uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
        uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
        uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
        uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x00010bc8525c(uVar12,uVar13,uVar14,uVar16,param_1);
        uVar8 = uVar12;
        uVar7 = uVar13;
        uVar15 = uVar14;
        uVar17 = uVar16;
        _objc_release(uVar11);
        func_0x00010c267f00();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_2;
        func_0x00010c29fc60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(param_2);
        puVar9 = PTR_PTR_1126c2c40;
        _objc_opt_class(PTR_PTR_1126c2c40);
        uVar10 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar9);
        uVar11 = uVar5;
        if ((uVar10 & 1) == 0) {
          uVar11 = 0;
        }
        _objc_retain(uVar11);
        _objc_release(uVar5);
        if (uVar11 != 0) {
          func_0x00010bf83280(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0();
          func_0x00010bc8525c();
          _objc_release(uVar5);
          uVar13 = uVar7;
          uVar12 = uVar8;
          uVar14 = uVar15;
          uVar16 = uVar17;
        }
        func_0x00010c283c00(uVar12,uVar13,uVar14,uVar16,param_4);
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + (long)_DAT_11273134c);
        func_0x00010bfed1c0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf4b900();
        _objc_release(uVar7);
        if ((int)uVar8 == 0) goto LAB_105b9ec04;
        func_0x00010c267f00();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_2;
        func_0x00010bf33b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        puVar9 = PTR_PTR_1126c2c40;
        _objc_opt_class(PTR_PTR_1126c2c40);
        uVar10 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar9);
        uVar5 = uVar11;
        if ((uVar10 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar11);
        if (uVar5 == 0) {
          uVar11 = 0;
        }
        else {
          uVar5 = uVar11;
          func_0x00010bf83280(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c283ba0(param_4);
          _objc_release(uVar5);
        }
      }
      _objc_release(uVar11);
      _objc_release(puVar2);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_105b9ed4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b9ed78; end: 105b9ed7b; -[SCFriendsFeedViewController operaPresenterDidCancelDismissing:] */

void FUN_105b9ed78(void)

{
  return;
}



/* Entry: 105b9ed7c; end: 105b9ed7f; -[SCFriendsFeedViewController operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_105b9ed7c(void)

{
  return;
}



/* Entry: 105b9ed80; end: 105b9ed83; -[SCFriendsFeedViewController operaPresenterDidFailToPresent:] */

void FUN_105b9ed80(void)

{
  return;
}



/* Entry: 105b9ed84; end: 105b9edd3; -[SCFriendsFeedViewController operaPresenterDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9ed84(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_1127313f8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731004);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105b9edd4; end: 105b9f04b; -[SCFriendsFeedViewController operaPresenterDidTearDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9edd4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar12 = (long)_DAT_1127313f8;
  if (*(long *)(param_1 + lVar12) != 0) {
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar5);
  }
  lVar10 = (long)_DAT_112730fc0;
  lVar5 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c280da0();
  _objc_release(lVar5);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar5 = lVar10;
  func_0x00010c0741e0();
  _objc_release(lVar10);
  if ((int)lVar5 != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112730fd8);
    func_0x00010b09ce10();
    if ((uVar1 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + _DAT_112730ed8);
      func_0x00010c0f2220(param_1);
      func_0x00010c24fc40(uVar9);
    }
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010bfa3a60(*(undefined8 *)(param_1 + _DAT_112731220));
  func_0x00010c285ee0(*(undefined8 *)(param_1 + _DAT_112731204));
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273137c);
  *(undefined8 *)(param_1 + _DAT_11273137c) = 0;
  _objc_release(uVar9);
  lVar10 = (long)_DAT_11273108c;
  lVar5 = *(long *)(param_1 + lVar10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar10 = (long)_DAT_1127310cc;
  lVar5 = *(long *)(param_1 + lVar10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = 0;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273145c);
  *(undefined8 *)(param_1 + _DAT_11273145c) = 0;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112731468);
  *(undefined8 *)(param_1 + _DAT_112731468) = 0;
  _objc_release(uVar9);
  *(undefined8 *)(param_1 + _DAT_112731460) = 0;
  uVar9 = 1;
  func_0x00010bed8a00(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  _objc_retain(param_4);
  if ((*(long *)(param_3 + _DAT_1127313f8) == 0) ||
     (lVar8 = param_3, func_0x00010be42ae0(), puVar2 = PTR_PTR_1126c2118, (int)lVar8 == 0))
  goto LAB_105b9f268;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar11 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126c2118;
  puVar2 = PTR_PTR_1126b4d28;
  uVar1 = param_4;
  if ((param_4 == 0) || ((uVar11 & 1) == 0)) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar11 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    _objc_release(param_4);
    puVar3 = PTR_PTR_1126bdd30;
    puVar2 = PTR_PTR_1126b4d28;
    if ((param_4 == 0) || ((uVar11 & 1) == 0)) {
      _objc_retain(param_4);
      _objc_opt_class(puVar3);
      uVar11 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar3);
      _objc_release(param_4);
      puVar3 = PTR_PTR_1126bdd30;
      puVar2 = PTR_PTR_1126bdd28;
      if ((param_4 == 0) || ((uVar11 & 1) == 0)) {
        _objc_retain(param_4);
        _objc_opt_class(puVar2);
        uVar7 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar2);
        _objc_release(param_4);
        puVar2 = PTR_PTR_1126bdd28;
        uVar1 = 0;
        uVar11 = 0;
        if ((param_4 != 0) && ((uVar7 & 1) != 0)) {
          _objc_retain(param_4);
          _objc_opt_class(puVar2);
          uVar11 = param_4;
          _objc_opt_isKindOfClass(param_4,puVar2);
          uVar1 = param_4;
          if ((uVar11 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(param_4);
          uVar11 = uVar1;
          func_0x00010c242500();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_retain(param_4);
        _objc_opt_class(puVar3);
        uVar11 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar3);
        if ((uVar11 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(param_4);
        uVar11 = uVar1;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_105b9f124;
    }
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar11 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar11 = 0;
LAB_105b9f1a8:
    uVar7 = uVar1;
    FUN_105b62f88(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8b80(param_3);
    _objc_release(uVar7);
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar11 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar11 = uVar1;
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
LAB_105b9f124:
    uVar7 = uVar11;
    func_0x00010bf529e0();
    if (uVar7 != 0) goto LAB_105b9f1a8;
  }
  lVar8 = *(long *)(param_3 + _DAT_1127310cc);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    puVar2 = PTR_PTR_1126c2d60;
    func_0x00010c0f27c0(PTR_PTR_1126c2d60);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + _DAT_112731464);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(uVar11);
LAB_105b9f268:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 105b9f04c; end: 105b9f39b; -[SCFriendsFeedViewController operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9f04c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + _DAT_1127313f8) == 0) ||
     (lVar2 = param_1, func_0x00010be42ae0(), puVar1 = PTR_PTR_1126c2118, (int)lVar2 == 0))
  goto LAB_105b9f268;
  _objc_retain(param_4);
  _objc_opt_class(puVar1);
  uVar7 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126c2118;
  puVar1 = PTR_PTR_1126b4d28;
  uVar6 = param_4;
  if ((param_4 == 0) || ((uVar7 & 1) == 0)) {
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar7 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    _objc_release(param_4);
    puVar4 = PTR_PTR_1126bdd30;
    puVar1 = PTR_PTR_1126b4d28;
    if ((param_4 == 0) || ((uVar7 & 1) == 0)) {
      _objc_retain(param_4);
      _objc_opt_class(puVar4);
      uVar7 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar4);
      _objc_release(param_4);
      puVar4 = PTR_PTR_1126bdd30;
      puVar1 = PTR_PTR_1126bdd28;
      if ((param_4 == 0) || ((uVar7 & 1) == 0)) {
        _objc_retain(param_4);
        _objc_opt_class(puVar1);
        uVar5 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar1);
        _objc_release(param_4);
        puVar1 = PTR_PTR_1126bdd28;
        uVar6 = 0;
        uVar7 = 0;
        if ((param_4 != 0) && ((uVar5 & 1) != 0)) {
          _objc_retain(param_4);
          _objc_opt_class(puVar1);
          uVar7 = param_4;
          _objc_opt_isKindOfClass(param_4,puVar1);
          uVar6 = param_4;
          if ((uVar7 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(param_4);
          uVar7 = uVar6;
          func_0x00010c242500();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_retain(param_4);
        _objc_opt_class(puVar4);
        uVar7 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar4);
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(param_4);
        uVar7 = uVar6;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_105b9f124;
    }
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar7 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_4);
    uVar7 = 0;
LAB_105b9f1a8:
    uVar5 = uVar6;
    FUN_105b62f88(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8b80(param_1);
    _objc_release(uVar5);
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar4);
    uVar7 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar4);
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_4);
    uVar7 = uVar6;
    func_0x0001085367d4();
    _objc_retainAutoreleasedReturnValue();
LAB_105b9f124:
    uVar5 = uVar7;
    func_0x00010bf529e0();
    if (uVar5 != 0) goto LAB_105b9f1a8;
  }
  lVar2 = *(long *)(param_1 + _DAT_1127310cc);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c2d60;
    func_0x00010c0f27c0(PTR_PTR_1126c2d60);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731464);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(uVar6);
  _objc_release(uVar7);
LAB_105b9f268:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b9f39c; end: 105b9f39f; -[SCFriendsFeedViewController operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_105b9f39c(void)

{
  return;
}



/* Entry: 105b9f3a0; end: 105b9f407; -[SCFriendsFeedViewController _currentlyDisplayedDocFriendStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9f3a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11273137c);
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b9f408; end: 105b9f46f; -[SCFriendsFeedViewController _currentlyDisplayedDocAdSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9f408(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11273137c);
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8e08;
  _objc_opt_class(PTR_PTR_1126b8e08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b9f470; end: 105b9f5cf; -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:initialStoryId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9f470(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c11f8c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9f5d0; end: 105b9f6db;  */

void FUN_105b9f5d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105b9f6dc;
  puStack_68 = &UNK_110866a60;
  _objc_copyWeak(auStack_40,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined1 *)(param_1 + 0x40);
  uStack_60 = uVar1;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105b9f6dc; end: 105b9f717;  */

void FUN_105b9f6dc(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9f718; end: 105b9f8cf; -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:rankedStoryIds:initialStoryId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9f718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112731360);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  if (lVar3 == 0xc) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731204);
    func_0x00010c29dba0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127312a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112731204);
      func_0x00010c29dba0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112730eec);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bfba060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010658cdb0(param_5,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be824c0(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b9f8d0; end: 105b9f9a7;  */

void FUN_105b9f8d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107cf92c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b9f9a8; end: 105b9fb7f; -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:orderedStoryIds:initialStoryId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9f9a8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108d9600);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730f68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_70 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c244e80(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9fb80; end: 105b9fb87;  */

void FUN_105b9fb80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105b9fb88; end: 105b9fbf7;  */

void FUN_105b9fb88(long param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108d9620,
                      &PTR___NSConcreteGlobalBlock_1108d9640);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1e2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b9fbf8; end: 105b9fbff;  */

void FUN_105b9fbf8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b9fc00; end: 105b9fc27;  */

void FUN_105b9fc00(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b9fc28; end: 105b9fe43; -[SCFriendsFeedViewController _getCreatorSubscriptionsAndProcessStoriesWithSummaryData:includePlayedStories:orderedStoryIds:initialStoryId:userIdToSnapchatter:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9fc28(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa0b80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be824e0(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731128);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    uStack_70 = param_4;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bfc4340(uVar2);
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105b9fe44; end: 105b9ff7f;  */

void FUN_105b9fe44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105b9ff80;
  puStack_78 = &UNK_1108a05a0;
  _objc_copyWeak(auStack_40,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined1 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105b9ff80; end: 105b9ffcb;  */

void FUN_105b9ff80(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010be824e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b9ffcc; end: 105ba046f; -[SCFriendsFeedViewController _processStoriesSummariesWithSummaryData:includePlayedStories:orderedStoryIds:initialStoryId:userIdToSnapchatter:creatorSubscriptions:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b9ffcc(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_1a0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_5;
  lVar12 = param_3;
  func_0x00010658c804();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273116c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c11f8;
  func_0x00010c23e200(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf1f320();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_retain(lVar2);
  lVar15 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar15 == 0) {
      _objc_release(lVar2);
      if (param_9 != 0) {
        uVar9 = *(undefined8 *)(param_1 + _DAT_1127310bc);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar9;
        func_0x00010c0e0b20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar16;
        func_0x00010c268560();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
        func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c0e0e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_9);
        _objc_retain(puVar3);
        uVar11 = uVar10;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(uVar16);
        _objc_release(uVar9);
        _objc_release(puVar3);
        _objc_release(param_9);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(lVar12);
      lVar15 = lVar12;
      func_0x00010c067ec0();
      if ((int)lVar15 < 1) {
        uVar16 = *(undefined8 *)(param_3 + 0x20);
        lVar15 = *(long *)(param_3 + 0x28);
        func_0x00010bf51e00(uVar16);
        (**(code **)(lVar15 + 0x10))(lVar15,uVar16);
      }
      else {
        uVar16 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010bf529e0();
        func_0x00010c067ec0();
        func_0x00010c25e980(uVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = *(long *)(param_3 + 0x28);
        uVar5 = uVar16;
        func_0x00010bf51e00();
        (**(code **)(lVar15 + 0x10))(lVar15,uVar5);
        _objc_release(uVar5);
      }
      _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar18 = *(ulong *)(lVar17 * 8);
      uVar5 = *(undefined8 *)(param_1 + _DAT_112730fc8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar18;
      lVar12 = param_6;
      func_0x00010658cbb0(uVar18,param_6,uVar5,puVar4,param_7,uVar16,param_8);
      _objc_release(uVar5);
      if ((int)uVar7 == 0) goto LAB_105ba01f0;
      uVar7 = uVar18;
      func_0x00010bfddf20();
      if ((uVar7 & 1) == 0) {
        if (param_4 != 0) {
          iVar14 = (int)*(undefined8 *)(param_1 + _DAT_112730f9c);
          uStack_1a0 = uVar18;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          if (iVar14 != 0) {
            _objc_release(uStack_1a0);
            goto LAB_105ba01c0;
          }
        }
        uVar7 = uVar18;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if (param_4 == 0) {
          if ((int)uVar8 != 0) goto LAB_105ba01c0;
        }
        else {
          _objc_release(uStack_1a0);
          if ((uVar8 & 1) != 0) goto LAB_105ba01c0;
        }
      }
      else {
LAB_105ba01c0:
        func_0x000107a8819c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar18);
      }
LAB_105ba01f0:
      lVar17 = lVar17 + 1;
    } while (lVar15 != lVar17);
    lVar15 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105ba0470; end: 105ba053b;  */

void FUN_105ba0470(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c067ec0();
  if ((int)uVar3 < 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf529e0();
    func_0x00010c067ec0();
    func_0x00010c25e980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = uVar3;
    func_0x00010bf51e00();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ba053c; end: 105ba05bb; -[SCFriendsFeedViewController presentingVC] */

void FUN_105ba053c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010be6ff00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      param_1 = lVar2;
    }
    _objc_retain(param_1);
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ba05bc; end: 105ba05bf; -[SCFriendsFeedViewController _operaPresentingViewController] */

void FUN_105ba05bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentingVC_112621958);
  return;
}



/* Entry: 105ba05c0; end: 105ba0623; -[SCFriendsFeedViewController _parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba05c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112730fb8;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010c0f3ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ba0624; end: 105ba0627; -[SCFriendsFeedViewController _pageNameLoggingParentViewController] */

void FUN_105ba0624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__parentViewController_112579960);
  return;
}



/* Entry: 105ba0628; end: 105ba07b3; -[SCFriendsFeedViewController tableHeaderDidChangeWithOffsetToRetain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba0628(double param_1,double param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_1127312dc);
  func_0x00010bfe01e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211680();
  _objc_release(lVar3);
  _objc_release(uVar2);
  dVar5 = 2.2250738585072014e-308;
  if (2.2250738585072014e-308 < param_1) {
    lVar3 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar3);
    func_0x00010c08ac40(param_3);
    func_0x00010c1b9100(param_1 + dVar5,param_3);
    lVar3 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    lVar4 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(0,param_1 + param_2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  if (*(long *)(param_3 + _DAT_112731424) != 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + _DAT_112731320);
    func_0x00010bf4b900();
    if (iVar1 != 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed8a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__updateFriendsFeedVisibleCellsWi_112593c28,
             *(undefined1 *)(param_3 + _DAT_1127313c4));
  return;
}



/* Entry: 105ba07b4; end: 105ba080b;  */

void FUN_105ba07b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18e80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba080c; end: 105ba0813; -[SCFriendsFeedViewController showMyContactsVCForView:] */

void FUN_105ba080c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showMyContactsVCWithSecureAccou_11258c168,0)
  ;
  return;
}



/* Entry: 105ba0814; end: 105ba084b; -[SCFriendsFeedViewController openOSContactSettingForView:] */

void FUN_105ba0814(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ba084c; end: 105ba0a07; -[SCFriendsFeedViewController _showMyContactsVCWithSecureAccountFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba084c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105ba0a08;
  puStack_78 = &UNK_110849680;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126ae600;
  _objc_alloc(PTR_PTR_1126ae600);
  func_0x00010c01fb20();
  lVar3 = param_1 + _DAT_112730ee4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf23c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112730ee0));
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105ba0a08; end: 105ba0aa3;  */

void FUN_105ba0a08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba0aa4; end: 105ba0af7; -[SCFriendsFeedViewController tableFooterViewDidChange:] */

void FUN_105ba0aa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdf6a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba0af8; end: 105ba0bbf; -[SCFriendsFeedViewController shouldShowContactsCTAFooterForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105ba0af8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_112730f68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d42e0();
  _objc_release(uVar2);
  if ((((uVar3 < 0x16) && (*(long *)(param_1 + _DAT_11273144c) != param_3)) &&
      (*(long *)(param_1 + _DAT_1127313b4) == 0)) &&
     (*(ulong *)(param_1 + _DAT_112731360) < 0xf || *(ulong *)(param_1 + _DAT_112731360) == 0x12)) {
    bVar1 = *(long *)(param_1 + _DAT_112731424) == 0;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105ba0bc0; end: 105ba0f6f; -[SCFriendsFeedViewController _initFooterGradientIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba0bc0(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_4 + _DAT_112731180) == '\x01') {
    func_0x000100594f4c();
    dVar13 = param_1 + -12.0;
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar13 = dVar13 + param_3;
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11273146c;
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    *(undefined **)(param_4 + lVar10) = puVar1;
    _objc_release(uVar8);
    lVar7 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    func_0x00010c19f0e0(0,0,param_1,dVar13,*(undefined8 *)(param_4 + lVar10));
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a0 = puVar2;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf414e0(0x3fde147ae147ae14);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_98 = puVar4;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)(param_4 + lVar10),param_5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010c1bff00(*(undefined8 *)(param_4 + lVar10),param_5,
                        &PTR__OBJC_CLASS___NSConstantArray_11117f318);
    func_0x00010c209760(0x3fe0000000000000,0,*(undefined8 *)(param_4 + lVar10));
    dVar11 = 0.5;
    func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,*(undefined8 *)(param_4 + lVar10));
    lVar7 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMaxY();
    dVar14 = dVar11 - dVar13;
    lVar10 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(lVar10);
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar12 = 0;
    func_0x00010c013de0(0,dVar14,dVar11,dVar13);
    lVar10 = (long)_DAT_112731470;
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    *(undefined **)(param_4 + lVar10) = puVar1;
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_4 + lVar10),param_5,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112731474;
    uVar8 = *(undefined8 *)(param_4 + lVar9);
    *(undefined **)(param_4 + lVar9) = puVar1;
    _objc_release(uVar8);
    lVar7 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    func_0x00010c19f0e0(0,0,uVar12,0x3fe54fdf40000000,*(undefined8 *)(param_4 + lVar9));
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0x5c);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)(param_4 + lVar9),param_5,puVar2);
    _objc_release(puVar1);
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar8);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_112730ee0;
  lVar7 = *(long *)(param_4 + lVar10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_4 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba0f70; end: 105ba0fc7; -[SCFriendsFeedViewController findFriendsWorkflowCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba0f70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112730ee0;
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



/* Entry: 105ba0fc8; end: 105ba129f; -[SCFriendsFeedViewController _createFriendsFeedShouldShowLoadingViewObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba0fc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  lVar2 = *(long *)(param_1 + _DAT_112731008);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09d440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x00010bf870a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
  }
  lVar2 = *(long *)(param_1 + _DAT_112730ef0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd9380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010bf870a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
  lVar5 = *(long *)(param_1 + _DAT_112731204);
  func_0x00010bfddfa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105ba1348;
  puStack_78 = &UNK_1108d9730;
  _objc_copyWeak(auStack_70,auStack_68);
  lVar2 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x00010bf870a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar5);
  }
  puVar6 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf41860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105ba12a0; end: 105ba1347;  */

void FUN_105ba12a0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba478;
  _objc_opt_class(PTR_PTR_1126ba478);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c09d440();
  if (uVar3 != 1) {
    func_0x00010c09d440(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ba1348; end: 105ba1433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba1348(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112731388) == '\x01') {
      _objc_retain(param_2);
      _objc_opt_class(puVar2);
      uVar3 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar2);
      uVar1 = param_2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_2);
      func_0x00010bf1f3c0(uVar1);
      _objc_release(uVar1);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ba1434; end: 105ba15e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba1434(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong unaff_x22;
  ulong uVar8;
  ulong unaff_x23;
  undefined **unaff_x24;
  long lVar9;
  ulong unaff_x25;
  long unaff_x26;
  long lVar10;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  ulong uStack_178;
  undefined **ppuStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010bf52a60();
    unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    if (lVar1 == 0) {
      unaff_x25 = 0;
    }
    else {
      unaff_x25 = 0;
      unaff_x26 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != unaff_x26) {
            _objc_enumerationMutation(param_2);
          }
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
          _objc_retain(uVar8);
          _objc_opt_class(puVar2);
          uVar3 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar2);
          unaff_x23 = uVar8;
          if ((uVar3 & 1) == 0) {
            unaff_x23 = 0;
          }
          _objc_retain(unaff_x23);
          _objc_release(uVar8);
          unaff_x22 = unaff_x23;
          func_0x00010bf1f3c0();
          _objc_release(unaff_x23);
          unaff_x25 = (ulong)((uint)unaff_x25 | (uint)unaff_x22);
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = param_2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105ba15e8;
    lStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    ppuStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    puStack_158 = puVar2;
    lStack_150 = param_1;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_188,lVar1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bffc4a0();
    lVar5 = *(long *)(lVar1 + _DAT_112731454);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c09d440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar10 = lVar6;
      func_0x00010bf870a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(lVar10);
    }
    lVar9 = (long)_DAT_112731204;
    lVar5 = *(long *)(lVar1 + lVar9);
    func_0x00010bf42f80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010bfd9380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar10 != 0) {
      lVar5 = lVar10;
      func_0x00010bf870a0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(lVar5);
    }
    lVar5 = *(long *)(lVar1 + lVar9);
    func_0x00010bfddfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar1 != 0) {
      lVar5 = lVar1;
      func_0x00010bf870a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(lVar5);
    }
    puVar7 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_190,auStack_188);
    func_0x00010bf41860(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_190);
    _objc_release(lVar1);
    _objc_release(lVar10);
    _objc_release(lVar6);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_188);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ba15e8; end: 105ba1867; -[SCFriendsFeedViewController _createCommunityFeedShouldShowLoadingViewObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba15e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  lVar2 = *(long *)(param_1 + _DAT_112731454);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09d440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x00010bf870a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
  }
  lVar7 = (long)_DAT_112731204;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010bf42f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd9380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010bf870a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
  lVar7 = *(long *)(param_1 + lVar7);
  func_0x00010bfddfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar2 != 0) {
    lVar7 = lVar2;
    func_0x00010bf870a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar7);
  }
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf41860(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105ba1868; end: 105ba198b;  */

void FUN_105ba1868(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba478;
  _objc_opt_class(PTR_PTR_1126ba478);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c09d440(uVar1);
  _objc_release(uVar1);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ba198c; end: 105ba1b3f;  */

void FUN_105ba198c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_2);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar7 = *(ulong *)(lVar8 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar4);
        uVar5 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar4);
        uVar1 = uVar7;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar7);
        func_0x00010bf1f3c0(uVar1);
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be4e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105ba1b40; end: 105ba1b47; -[SCFriendsFeedViewController tableFooterView:loadMoreConversationsIfPossibleForceOnFailed:] */

void FUN_105ba1b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__loadMoreConversationsIfPossible_1125711a8,param_4);
  return;
}



/* Entry: 105ba1b48; end: 105ba1beb; -[SCFriendsFeedViewController _loadMoreConversationsIfPossibleForceOnFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba1b48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112731360);
  lVar2 = (long)_DAT_112731204;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfddf80(uVar1,param_2,lVar3 == 0xc);
  if ((int)uVar1 != 0) {
    if (lVar3 == 0xc) {
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf42f80(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + _DAT_112730ef0);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c09bba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ba1bec; end: 105ba1f17; -[SCFriendsFeedViewController _updateFriendsFeedForVisibleIndexPath:forceOnFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba1bec(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  
  _objc_retain(param_4);
  lVar11 = (long)_DAT_112731360;
  lVar9 = *(long *)(param_2 + lVar11);
  lVar12 = (long)_DAT_112731204;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar12);
  func_0x00010bfddf80();
  if (iVar1 != 0) {
    lVar10 = param_4;
    func_0x00010c142240();
    uVar2 = *(ulong *)(param_2 + lVar12);
    func_0x00010c29dba0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar10 + 5;
    if ((lVar9 == 0xc) && (uVar3 = uVar2, func_0x00010bf529e0(), (long)uVar3 <= lVar10)) {
      func_0x00010be4e020(param_2);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2a28;
      _objc_opt_class(PTR_PTR_1126c2a28);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      _objc_release(uVar3);
      if (((uVar5 & 1) == 0) || (uVar3 == 0)) {
        uVar3 = uVar2;
        func_0x00010bf529e0();
        if ((long)uVar3 <= lVar10) {
          func_0x00010bf9bdc0(*(undefined8 *)(param_2 + lVar12));
        }
        if (*(long *)(param_2 + lVar11) == 0) {
          uVar3 = uVar2;
          func_0x00010bf529e0();
          if ((long)(uVar3 - 1) <= lVar10) {
            lVar10 = uVar3 - 1;
          }
          lVar11 = *(long *)(param_2 + _DAT_112730ef0);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar11;
          func_0x00010c11d400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          lVar11 = lVar9;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          do {
            lVar11 = param_4;
            func_0x00010c142240();
            if (lVar10 < lVar11) break;
            uVar5 = uVar2;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126c29a8;
            _objc_retain();
            _objc_opt_class(puVar4);
            uVar6 = uVar5;
            _objc_opt_isKindOfClass(uVar5,puVar4);
            uVar3 = uVar5;
            if ((uVar6 & 1) == 0) {
              uVar3 = 0;
            }
            _objc_retain(uVar3);
            _objc_release(uVar5);
            if (uVar3 == 0) {
LAB_105ba1ed4:
              _objc_release(uVar5);
              break;
            }
            uVar3 = uVar5;
            func_0x00010bfa3920();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010c0891c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            if (uVar6 == 0) {
              lVar11 = 0;
            }
            else {
              func_0x00010c26f320(uVar6);
              param_1 = param_1 * 1000.0;
              lVar11 = (long)param_1;
            }
            lVar7 = lVar9;
            func_0x00010c0f2900();
            if (lVar7 < lVar11) {
LAB_105ba1ec4:
              _objc_release(uVar6);
              _objc_release(uVar5);
              goto LAB_105ba1ed4;
            }
            lVar7 = lVar9;
            func_0x00010c0f2900();
            if (lVar11 < lVar7) {
              func_0x00010be4e020(param_2);
              goto LAB_105ba1ec4;
            }
            uVar3 = uVar5;
            func_0x000105bb5a48();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar12;
            func_0x00010c08fa60();
            if ((lVar11 == 0) || (uVar8 = uVar3, func_0x00010c0720c0(), (int)uVar8 != 0)) {
              func_0x00010be4e020(param_2);
              bVar13 = false;
            }
            else {
              lVar10 = lVar10 + -1;
              bVar13 = true;
            }
            _objc_release(uVar3);
            _objc_release(uVar6);
            _objc_release(uVar5);
            _objc_release(uVar5);
          } while (bVar13);
          _objc_release(lVar12);
          _objc_release(lVar9);
        }
      }
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ba1f18; end: 105ba1fab; -[SCFriendsFeedViewController feedCellPanningState:didEndPanningWithIdentifier:] */

void FUN_105ba1f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfa3820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c070ec0(param_3);
  _objc_release(param_3);
  func_0x00010bf94fe0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba1fac; end: 105ba2027; -[SCFriendsFeedViewController pannableCellViewVisiblityDidChange:tracking:] */

void FUN_105ba1fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((param_4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c292ae0();
    bVar1 = puVar3 != (undefined *)0x1;
    _objc_release(puVar2);
  }
  else {
    bVar1 = false;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__pannableCellViewVisiblityDidCha_112579940,param_4,bVar1);
  return;
}



/* Entry: 105ba2028; end: 105ba2033; -[SCFriendsFeedViewController pannableCellViewVisiblityDidChange:tracking:exitMode:] */

void FUN_105ba2028(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__pannableCellViewVisiblityDidCha_112579940,param_3,param_4 == 1);
  return;
}



/* Entry: 105ba2034; end: 105ba21fb; -[SCFriendsFeedViewController _pannableCellViewVisiblityDidChange:tracking:shouldInvert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba2034(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar1 = param_2;
  func_0x00010c14c8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(lVar5);
  _objc_release(lVar1);
  dVar6 = param_1 * -2.0 + 1.0;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  func_0x00010c1677c0(dVar6,*(undefined8 *)(param_2 + _DAT_1127313d4));
  lVar5 = (long)_DAT_1127311c0;
  lVar1 = *(long *)(param_2 + lVar5);
  if ((param_1 == 1.0) && ((param_4 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf95010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_endPanningCell_1125c2da8);
    return;
  }
  func_0x00010c0f3780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    dVar6 = param_1;
    func_0x00010c0f37a0(param_1,*(undefined8 *)(param_2 + lVar5));
    uVar2 = *(undefined8 *)(param_2 + lVar5);
    func_0x00010c0f3780(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bfa3820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = lVar3;
    func_0x00010010fab4(lVar3,PTR_DAT_1126a5090);
    lVar1 = lVar3;
    if ((int)lVar4 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 != 0) {
      lVar4 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      _objc_release(lVar4);
      func_0x00010c070ec0(*(undefined8 *)(param_2 + lVar5));
      func_0x00010c0f36e0((1.0 - param_1) * dVar6,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}


