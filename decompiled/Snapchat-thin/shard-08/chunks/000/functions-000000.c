/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ba3778; end: 105ba37c7;  */

void FUN_105ba3778(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0x67) && (param_3 != 0x67)) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba37c8; end: 105ba37d3;  */

void FUN_105ba37c8(void)

{
  return;
}



/* Entry: 105ba37d4; end: 105ba3817; -[SCFriendsFeedViewController _updatePreviousPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba37d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731408);
  *(undefined **)(param_1 + _DAT_112731408) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ba3818; end: 105ba385b; -[SCFriendsFeedViewController _handlePreviousAttributedPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3818(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730ef8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba385c; end: 105ba391b; -[SCFriendsFeedViewController _setupSponsoredSnapObservation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba385c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112730f4c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112731220;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfb9fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf185e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfb9d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf185c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba391c; end: 105ba39a7; -[SCFriendsFeedViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba391c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_112731368) == '\x01') {
    func_0x00010c258040(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112730f2c);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bfba680(PTR_PTR_1126aedf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010befddc0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ba39a8; end: 105ba39c7; -[SCFriendsFeedViewController defaultSubProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_105ba39a8(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e20638;
  if (*(long *)(param_1 + _DAT_112731360) != 0x10) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 105ba39c8; end: 105ba3b47; -[SCFriendsFeedViewController jiraMetaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba39c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  lVar5 = (long)_DAT_112731204;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010bf51e00(lVar2);
    uVar4 = 0;
    FUN_105bb38b4(0,lVar3,*(undefined8 *)(param_1 + _DAT_112730f44),
                  *(undefined8 *)(param_1 + _DAT_1127312cc),
                  *(undefined8 *)(param_1 + _DAT_1127312d0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(puVar1);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = lVar5;
    func_0x00010bf51e00(lVar5);
    uVar4 = 1;
    FUN_105bb38b4(1,lVar3,*(undefined8 *)(param_1 + _DAT_112730f44),
                  *(undefined8 *)(param_1 + _DAT_1127312cc),
                  *(undefined8 *)(param_1 + _DAT_1127312d0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(puVar1);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  if (*(long *)(param_1 + _DAT_112731360) == 0x10) {
    func_0x00010bf070e0(puVar1);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ba3b48; end: 105ba3bcf; -[SCFriendsFeedViewController _bottomOffsetAdjustment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105ba3b48(double param_1,undefined8 param_2,double param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_4 + _DAT_1127310f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27e360();
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)(param_4 + _DAT_112731180);
    _objc_release(uVar2);
    param_1 = 0.0;
    if ((bVar1 & 1) == 0) {
      return 0.0;
    }
  }
  else {
    _objc_release(uVar2);
  }
  func_0x000100594f4c();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return param_1 + param_3;
}



/* Entry: 105ba3bd0; end: 105ba3bd3; -[SCFriendsFeedViewController replayScopeWillDisplayAlertView:] */

void FUN_105ba3bd0(void)

{
  return;
}



/* Entry: 105ba3bd4; end: 105ba3c2b; -[SCFriendsFeedViewController replayScopeDidCompleteWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3bd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731060;
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



/* Entry: 105ba3c2c; end: 105ba3c3f; -[SCFriendsFeedViewController replayScope:didReplaySnapsInConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127311d8),
             PTR_s_addReplayingSnapConversationIdTo_11259c570,param_4);
  return;
}



/* Entry: 105ba3c40; end: 105ba3cab; -[SCFriendsFeedViewController _newOpenFriendActionMenuHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105ba3c40(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2d80;
  _objc_alloc(PTR_PTR_1126c2d80);
  func_0x00010c015440();
  func_0x00010c1e1580();
  return puVar1;
}



/* Entry: 105ba3cac; end: 105ba3ce3; -[SCFriendsFeedViewController _newOpenMiniProfileActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3cac(void)

{
  _objc_alloc(PTR_PTR_1126c2d88);
                    /* WARNING: Could not recover jumptable at 0x00010c015990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105ba3ce4; end: 105ba3d23; -[SCFriendsFeedViewController _newOpenChatActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3ce4(void)

{
  _objc_alloc(PTR_PTR_1126c2d90);
                    /* WARNING: Could not recover jumptable at 0x00010bffde30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105ba3d24; end: 105ba3d77; -[SCFriendsFeedViewController _newOpenCameraActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3d24(void)

{
  _objc_alloc(PTR_PTR_1126c2d98);
                    /* WARNING: Could not recover jumptable at 0x00010c0394f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105ba3d78; end: 105ba3e0b; -[SCFriendsFeedViewController _endAddFriendsSectionLogging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3d78(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_1127313a4) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127311e4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aefe0();
  }
  else {
    if (*(char *)(param_1 + _DAT_1127313a8) != '\x01') {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127311e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aef60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba3e0c; end: 105ba3eaf; -[SCFriendsFeedViewController _updateAddFriendsSectionsViewAppeared:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3e0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311e4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2223a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311e8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2223a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311ec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2223a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba3eb0; end: 105ba3eeb; -[SCFriendsFeedViewController _startChatMediaPrefetcherIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3eb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730ee8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba3eec; end: 105ba409b; -[SCFriendsFeedViewController _exposeCommunitiesSectionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba3eec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010be1de40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    _objc_initWeak(auStack_68,param_1);
    puVar4 = PTR_PTR_1126af4a8;
    _objc_alloc(PTR_PTR_1126af4a8);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105ba409c;
    puStack_78 = &UNK_110849710;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0311a0(puVar4);
    puVar5 = PTR_PTR_1126c2da0;
    _objc_alloc(PTR_PTR_1126c2da0);
    func_0x00010c0002a0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127311a8));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105ba409c; end: 105ba4157;  */

void FUN_105ba409c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ba4158;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ba4158; end: 105ba418b;  */

void FUN_105ba4158(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd02e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba418c; end: 105ba4247;  */

void FUN_105ba418c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ba4248;
  puStack_48 = &UNK_110848708;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ba4248; end: 105ba427b;  */

void FUN_105ba4248(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba427c; end: 105ba4327; -[SCFriendsFeedViewController _attachCommunitiesSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba427c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar5 = (long)_DAT_1127313b4, *(long *)(param_1 + lVar5) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar4);
    func_0x00010be35320(param_1);
    lVar5 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar5);
    func_0x00010bed7680(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ba4328; end: 105ba4353; -[SCFriendsFeedViewController _hideAllFriendingSections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba4328(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127313a4) = 0;
  *(undefined1 *)(param_1 + _DAT_1127313a8) = 0;
  *(undefined1 *)(param_1 + _DAT_1127313ac) = 0;
  *(undefined1 *)(param_1 + _DAT_1127313b0) = 0;
  return;
}



/* Entry: 105ba4354; end: 105ba43df; -[SCFriendsFeedViewController _reloadCommunitiesSectionViewWithUpdatedHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba4354(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  func_0x00010c19f0e0(0,0,param_3,param_1,*(undefined8 *)(param_4 + _DAT_1127313b4));
  func_0x00010c267f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ba43e0; end: 105ba4493; -[SCFriendsFeedViewController _detachCommunitiesSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba43e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313b4);
  *(undefined8 *)(param_1 + _DAT_1127313b4) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_1127311a8;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar2);
  func_0x00010bed7680(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ba4494; end: 105ba47a7; -[SCFriendsFeedViewController _exposeFullViewShortcut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba4494(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0311a0(puVar1);
  func_0x00010bddf780(param_1);
  if (param_3 < 0x11) {
    if (param_3 == 0xf) {
      puVar4 = *(undefined **)(param_1 + _DAT_1127310ec);
      func_0x00010bf24700(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127310e8));
    }
    else {
      if (param_3 != 0x10) goto LAB_105ba4740;
      puVar4 = PTR_PTR_1126c2da8;
      _objc_alloc(PTR_PTR_1126c2da8);
      func_0x00010c061660();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127310fc));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112731324));
    }
  }
  else if (param_3 == 0x11) {
    lVar5 = (long)_DAT_11273136c;
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar4 = PTR_PTR_1126ae820;
      _objc_alloc();
      func_0x00010c060400();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar4;
      _objc_release(uVar3);
    }
    puVar4 = PTR_PTR_1126c2db0;
    _objc_alloc(PTR_PTR_1126c2db0);
    func_0x00010c0586a0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273112c);
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11273147c;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar2);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112731324));
  }
  else {
    if (param_3 != 0x13) goto LAB_105ba4740;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730f18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0743e0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_105ba4740;
    puVar4 = PTR_PTR_1126c2db8;
    _objc_alloc(PTR_PTR_1126c2db8);
    func_0x00010c058700();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112731130);
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112731480;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar2);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112731324));
  }
  _objc_release(puVar4);
LAB_105ba4740:
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ba47a8; end: 105ba47ef;  */

void FUN_105ba47a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd03e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba47f0; end: 105ba47f3;  */

void FUN_105ba47f0(void)

{
  return;
}



/* Entry: 105ba47f4; end: 105ba4b9f; -[SCFriendsFeedViewController _attachFullViewSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba47f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  if ((param_6 != 0) && (lVar19 = (long)_DAT_112731424, *(long *)(param_4 + lVar19) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc();
    func_0x00010c04ec80();
    uVar17 = *(undefined8 *)(param_4 + lVar19);
    *(undefined **)(param_4 + lVar19) = puVar1;
    _objc_release(uVar17);
    func_0x00010c219b60(param_6,param_5,0);
    uVar17 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010bf4dce0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar17);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = param_6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar18;
    func_0x00010bf493a0(lVar18,param_5,uVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_6;
    lStack_98 = lVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf493a0(lVar4,param_5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_6;
    lStack_90 = lVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010bf493a0(lVar8,param_5,uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_6;
    lStack_88 = lVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010bf4dce0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010bf493a0(lVar12,param_5,uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = lVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&lStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_5,puVar16);
    _objc_release(puVar16);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar17);
    _objc_release(uVar2);
    _objc_release(lVar18);
    lVar18 = param_4;
    func_0x00010c267f00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(lVar18);
    func_0x00010be35020(param_4);
    func_0x00010c19f0e0(0,0,param_3,param_1,*(undefined8 *)(param_4 + lVar19));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_4 + lVar19),param_5,puVar1);
    _objc_release(puVar1);
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(param_4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(param_6 + _DAT_112731424);
  *(undefined8 *)(param_6 + _DAT_112731424) = 0;
  _objc_release(uVar17);
  func_0x00010c1a7f60(*(undefined8 *)(param_6 + _DAT_112731324),param_5,0);
  lVar18 = (long)_DAT_1127310e8;
  lVar19 = *(long *)(param_6 + lVar18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar19 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_6 + lVar18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar19 = param_6;
    func_0x00010c267f00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar19);
  }
  lVar18 = (long)_DAT_1127310fc;
  lVar19 = *(long *)(param_6 + lVar18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar19 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_6 + lVar18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_6 + _DAT_112731310);
    *(undefined8 *)(param_6 + _DAT_112731310) = 0;
    _objc_release(uVar17);
    lVar19 = param_6;
    func_0x00010c267f00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar19);
  }
  if (*(long *)(param_6 + _DAT_11273147c) != 0) {
    *(undefined8 *)(param_6 + _DAT_11273147c) = 0;
    _objc_release();
    lVar19 = param_6;
    func_0x00010c267f00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar19);
  }
  if (*(long *)(param_6 + _DAT_112731480) != 0) {
    *(undefined8 *)(param_6 + _DAT_112731480) = 0;
    _objc_release();
    func_0x00010c267f00(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_6);
    return;
  }
  return;
}



/* Entry: 105ba4ba0; end: 105ba4d1f; -[SCFriendsFeedViewController _cleanupFullViewSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba4ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731424);
  *(undefined8 *)(param_1 + _DAT_112731424) = 0;
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112731324),param_2,0);
  lVar3 = (long)_DAT_1127310e8;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar2);
  }
  lVar3 = (long)_DAT_1127310fc;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731310);
    *(undefined8 *)(param_1 + _DAT_112731310) = 0;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + _DAT_11273147c) != 0) {
    *(undefined8 *)(param_1 + _DAT_11273147c) = 0;
    _objc_release();
    lVar2 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + _DAT_112731480) != 0) {
    *(undefined8 *)(param_1 + _DAT_112731480) = 0;
    _objc_release();
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ba4d20; end: 105ba4e0b; -[SCFriendsFeedViewController _heightForFullViewSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105ba4d20(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = param_5;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar3 = param_4;
  _objc_release(lVar2);
  if (param_4 <= 0.0) {
    lVar2 = *(long *)(param_5 + _DAT_112731234);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1064ea350();
    dVar3 = 0.0;
  }
  else {
    lVar2 = param_5;
    func_0x00010c267f00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar1 = *(undefined8 *)(param_5 + _DAT_1127312dc);
    func_0x00010bfe01e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar3 = dVar3 - param_1;
    func_0x00010bdd5580(param_5);
    dVar3 = dVar3 - param_1;
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  return dVar3;
}



/* Entry: 105ba4e0c; end: 105ba4e0f; -[SCFriendsFeedViewController didDismissForChatWithIdentifier:] */

void FUN_105ba4e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be62250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__navigateToChatWithIdentifier__112576230);
  return;
}



/* Entry: 105ba4e10; end: 105ba4ed7; -[SCFriendsFeedViewController onLayoutChangedWithUpdatedHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba4e10(undefined8 param_1,long param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_2 + _DAT_1127313b4) != 0) {
    _objc_initWeak(auStack_38,param_2);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105ba4ed8;
    puStack_50 = &UNK_110846540;
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105ba4ed8; end: 105ba4f0b;  */

void FUN_105ba4ed8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8a7a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ba4f0c; end: 105ba4f93; -[SCFriendsFeedViewController captureWorkflowDidDismissWithDidSendSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba4f0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127313a0) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273100c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127310dc);
  puVar2 = PTR_PTR_1126c2c48;
  func_0x00010c243240(PTR_PTR_1126c2c48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ba4f94; end: 105ba504b; -[SCFriendsFeedViewController dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_105ba4f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126c2d58;
  _objc_retain(param_3);
  func_0x00010bf63740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105ba504c;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 105ba504c; end: 105ba5053;  */

void FUN_105ba504c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be63490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__newStoriesDidComeIn_1125766c0);
  return;
}



/* Entry: 105ba5054; end: 105ba5067; -[SCFriendsFeedViewController exit:] */

void FUN_105ba5054(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ba5060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 105ba5068; end: 105ba524f; -[SCFriendsFeedViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5068(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = param_1;
  func_0x00010bec4380();
  lVar1 = *(long *)(param_1 + _DAT_112731288);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = *(long *)(param_1 + _DAT_11273108c);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126aecb0;
  if ((lVar2 == 0 && lVar1 == 0) && (int)lVar3 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112730f2c);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar2 = (long)_DAT_1127311b0;
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126aecb0;
      if (lVar3 != 0) {
        lVar1 = *(long *)(param_1 + lVar2);
        func_0x00010c269d40(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c067fc0();
        func_0x00010bf9b4c0((double)lVar3,puVar5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105ba51c0;
      }
    }
    lVar3 = *(long *)(param_1 + _DAT_112730f28);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = *(ulong *)(param_1 + _DAT_112730fd8);
    if (lVar3 == 0) {
      func_0x000108f54a5c();
    }
    else {
      func_0x000108f54a70();
    }
    puVar5 = PTR_PTR_1126aecb0;
    if ((int)uVar4 < 1) {
      func_0x00010bf9b820(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf9b4c0((double)(uVar4 & 0xffffffff));
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112730fd8);
    lVar1 = *(long *)(param_1 + _DAT_11273116c);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f54a48(uVar6,lVar1);
    func_0x00010bf9b4c0((double)(int)uVar6,puVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_105ba51c0:
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ba5250; end: 105ba526f; -[SCFriendsFeedViewController canHandleNotification:] */

bool FUN_105ba5250(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c26a060(param_3);
  return param_3 == 2;
}



/* Entry: 105ba5270; end: 105ba52db; -[SCFriendsFeedViewController handleQuickAction:] */

void FUN_105ba5270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c11c350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pushStartChatView_112624af0);
    return;
  }
  return;
}



/* Entry: 105ba52dc; end: 105ba5587; -[SCFriendsFeedViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba52dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126ec180;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_traitCollectionDidChange__11267bf88,param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112731384;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf31a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e600();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf31de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + _DAT_112731174);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bfcd180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  if (lVar5 != 0) {
    func_0x00010bede360(param_1);
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  lVar7 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar7 == 0)) {
    _objc_release(lVar7);
  }
  else {
    lVar4 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfd64c0();
    _objc_release(lVar4);
    _objc_release(lVar7);
    if ((int)lVar5 != 0) {
      func_0x00010c125720(*(undefined8 *)(param_1 + _DAT_112731204));
    }
  }
  lVar7 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar7 == 0)) {
    _objc_release(lVar7);
  }
  else {
    lVar4 = param_1;
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1069c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c1069c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    _UIContentSizeCategoryCompareToCategory(lVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar7);
    if (lVar6 != 0) {
      func_0x00010c125720(*(undefined8 *)(param_1 + _DAT_112731204));
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ba5588; end: 105ba558f; -[SCFriendsFeedViewController customStatusBarStyleForViewController] */

undefined8 FUN_105ba5588(void)

{
  return 3;
}



/* Entry: 105ba5590; end: 105ba559f; -[SCFriendsFeedViewController didTapOnFeedChatOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731248),PTR_s_presentFeedChatOptions_112620a98);
  return;
}



/* Entry: 105ba55a0; end: 105ba55f7; -[SCFriendsFeedViewController cancelMenuActionSheetDidDimiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba55a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731244;
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



/* Entry: 105ba55f8; end: 105ba56bf; -[SCFriendsFeedViewController groupActionSheetOpenProfileForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba55f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112730fa8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b4b68;
      _objc_alloc(PTR_PTR_1126b4b68);
      lVar1 = param_1;
      func_0x00010be6ddc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0f2220(param_1);
      func_0x00010c0029c0(puVar2,param_2,lVar1,param_3,lVar3,param_1);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ba56c0; end: 105ba5793; -[SCFriendsFeedViewController groupActionSheetShowCameraForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba56c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730f08);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfcef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb83c0(param_1,param_2,0,0,param_3,uVar2,9,0xd,0,0,0,1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba5794; end: 105ba581f; -[SCFriendsFeedViewController groupActionSheetDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5794(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731244;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = (long)_DAT_112731024;
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



/* Entry: 105ba5820; end: 105ba5867; -[SCFriendsFeedViewController friendActionSheetOpenProfile:] */

void FUN_105ba5820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b820(param_1,param_2,param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ba5868; end: 105ba599b; -[SCFriendsFeedViewController friendActionSheetShowCameraForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105ba599c; end: 105ba5a93;  */

void FUN_105ba599c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x000100bf0d4c(param_2,0);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010beb83c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ba5a94; end: 105ba5b1f; -[SCFriendsFeedViewController friendActionSheetDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5a94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731244;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = (long)_DAT_112731020;
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



/* Entry: 105ba5b20; end: 105ba5cd3; -[SCFriendsFeedViewController friendActionSheetOpenMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b5c58;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb92a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b5c50;
  _objc_alloc(PTR_PTR_1126b5c50);
  func_0x00010c031b80();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127310f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c27e360();
  _objc_release(uVar3);
  if ((int)uVar6 == 0) {
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112731138);
    func_0x00010bf22f00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_1127310e0));
    _objc_release(uVar6);
  }
  else {
    puVar5 = puVar1;
    func_0x00010687540c(puVar1,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + _DAT_1127310e4);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c020();
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ba5cd4; end: 105ba5d1b; -[SCFriendsFeedViewController friendActionSheetOpenProfile:withRequestedSnapchatter:] */

void FUN_105ba5cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b820(param_1,param_2,param_4,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ba5d1c; end: 105ba5dd7; -[SCFriendsFeedViewController mapScopeDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_1127310f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27e360();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c27ece0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
  }
  lVar5 = (long)_DAT_1127310e0;
  lVar4 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ba5dd8; end: 105ba5de7; -[SCFriendsFeedViewController animationHandlerWantsToResetLastFinishedViewingSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731204),PTR_s_resetLastFinishedViewingSnap_11262bd98)
  ;
  return;
}



/* Entry: 105ba5de8; end: 105ba5dfb; -[SCFriendsFeedViewController animationHandlerWantsToResetLastSentSnap:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731204),
             PTR_s_resetLastSentSnapWithConversatio_11262bdb0,param_4);
  return;
}



/* Entry: 105ba5dfc; end: 105ba5e1b; -[SCFriendsFeedViewController _clearFriendsFeedStoriesBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1049b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273117c),
             PTR_s_postNotificationName_object_user_11261ec88,
             &PTR____CFConstantStringClassReference_110e201b8,0,0);
  return;
}



/* Entry: 105ba5e1c; end: 105ba5f3b; -[SCFriendsFeedViewController _publisherFirstRenderEventsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5e1c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ba5f3c;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock();
  lVar6 = (long)_DAT_1127313fc;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined ***)(param_1 + lVar6) = ppuVar1;
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(param_1 + lVar6) + 0x10))();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar5);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ba5f3c; end: 105ba5f67;  */

void FUN_105ba5f3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ba5f68; end: 105ba60fb; -[SCFriendsFeedViewController _onFirstRender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba5f68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c29d020();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112731284);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_1;
    func_0x00010be349e0(param_1);
    func_0x00010c0df6e0(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  func_0x00010bdd8de0(param_1);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c0b8620(lVar4,param_2,&PTR___NSConcreteGlobalBlock_1108d9b40,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731220);
  lVar6 = param_1;
  func_0x00010be1f500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3ac0(uVar2,param_2,lVar1,lVar6,lVar5);
  _objc_release(lVar6);
  func_0x00010bed8a00(param_1,param_2,1);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ba60fc; end: 105ba6177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba60fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731204);
  func_0x00010bf33f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00(uVar2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ba6178; end: 105ba61d7; -[SCFriendsFeedViewController _getFriendsFeedSessionImpressionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba6178(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112731400;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105ba61d8; end: 105ba6227; -[SCFriendsFeedViewController _isFullyVisibleInViewForTableCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105ba61d8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  func_0x00010bfb68e0(param_4);
  _CGRectGetMaxY();
  dVar1 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11273134c));
  _CGRectGetMaxY();
  return param_1 <= dVar1;
}



/* Entry: 105ba6228; end: 105ba652b; -[SCFriendsFeedViewController _hasUnviewedStoriesInVisibleCells] */

undefined8 FUN_105ba6228(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105ba652c;
  puStack_100 = &UNK_1108d9870;
  ppuVar8 = &puStack_118;
  lVar3 = lVar2;
  lStack_f8 = param_1;
  func_0x0001006372a4();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(ulong *)(lVar9 * 8);
        uVar5 = uVar11;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000107cfa560();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          uVar5 = uVar11;
          func_0x00010bfa3920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf131e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          func_0x00010bfa3920();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010bf131e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar11);
          ppuVar8 = (undefined **)PTR_PTR_1126c2dc0;
          _objc_opt_class(PTR_PTR_1126c2dc0);
          uVar11 = uVar6;
          _objc_opt_isKindOfClass(uVar6,ppuVar8);
          uVar5 = uVar6;
          if ((uVar11 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar6);
          uVar6 = uVar7;
          func_0x00010c08fa60();
          if ((uVar6 != 0) && (uVar6 = uVar7, func_0x00010c0720c0(), (int)uVar6 != 0)) {
            uVar6 = uVar5;
            func_0x00010bf602e0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar6;
            func_0x000107cfbbc4();
            _objc_release(uVar6);
            if ((int)uVar11 != 0) {
              _objc_release(uVar5);
              _objc_release(uVar7);
              uVar10 = 1;
              goto LAB_105ba64d4;
            }
          }
          _objc_release(uVar5);
          _objc_release(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    uVar10 = 0;
  }
LAB_105ba64d4:
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)(lVar3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010be40b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar10,PTR_s__isFullyVisibleInViewForTableCel_11256dc78,ppuVar8);
    return uVar10;
  }
  return uVar10;
}



/* Entry: 105ba652c; end: 105ba6537;  */

void FUN_105ba652c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be40b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__isFullyVisibleInViewForTableCel_11256dc78,
             param_2);
  return;
}



/* Entry: 105ba6538; end: 105ba659b; -[SCFriendsFeedViewController _enableTwilioInvites] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba6538(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = (long)_DAT_112730fd8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000108c7c620(uVar2,*(undefined8 *)(param_1 + _DAT_112730fcc));
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x000108c7c834(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 105ba659c; end: 105ba669f; -[SCFriendsFeedViewController _isPlayableType:] */

uint FUN_105ba659c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bdd30;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126bdd28;
    if (uVar3 == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      _objc_release(param_3);
      uVar4 = 0;
      uVar5 = (uint)(param_3 != 0) & (uint)uVar3;
    }
    else {
      uVar5 = 1;
      uVar4 = param_3;
    }
    _objc_release(uVar4);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105ba66a0; end: 105ba6707; -[SCFriendsFeedViewController _storiesCarouselInChatEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba66a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + _DAT_11273116c);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c258380();
  func_0x00010c0df760(puVar3,param_2,lVar2 != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ba6708; end: 105ba68ab; -[SCFriendsFeedViewController _storyImpressionWithViewModels:cellDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba6708(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
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
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar4 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(lStack_128 + lVar4 * 8);
        lVar1 = lVar5;
        func_0x000105bb5c04();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x000107cfbdb4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar1 = lVar2;
        func_0x00010c08fa60();
        if (lVar1 != 0) {
          uVar6 = *(undefined8 *)(param_1 + _DAT_112731204);
          lVar1 = lVar5;
          func_0x00010bf33f20(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecb00(uVar6,param_2,lVar1);
          _objc_release(lVar1);
          if (param_4 == 0) {
            func_0x00010bf33a80(*(undefined8 *)(param_1 + _DAT_112731220),param_2,lVar5,uVar6);
          }
          else {
            func_0x00010bf33a40();
          }
        }
        _objc_release(lVar2);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0eaf20();
  lVar7 = (long)_DAT_112731288;
  lVar3 = *(long *)(param_3 + lVar7);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_3 + lVar7));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba68ac; end: 105ba6907; -[SCFriendsFeedViewController playbackPresenterDidTearDown:playbackScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba68ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0eaf20();
  lVar2 = (long)_DAT_112731288;
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



/* Entry: 105ba6908; end: 105ba690b; -[SCFriendsFeedViewController playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_105ba6908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 105ba690c; end: 105ba690f; -[SCFriendsFeedViewController playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_105ba690c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginPresentin_112618620);
  return;
}



/* Entry: 105ba6910; end: 105ba6913; -[SCFriendsFeedViewController playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_105ba6910(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginDismissin_112618618);
  return;
}



/* Entry: 105ba6914; end: 105ba6917; -[SCFriendsFeedViewController playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_105ba6914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ead70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenter_didBeginPlayingPl_112618570);
  return;
}



/* Entry: 105ba6918; end: 105ba6963; -[SCFriendsFeedViewController playbackPresenterStoriesPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba6918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108d98a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313f8);
  *(undefined8 *)(param_1 + _DAT_1127313f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba6964; end: 105ba69bf;  */

uint FUN_105ba6964(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2d68;
  _objc_opt_class(PTR_PTR_1126c2d68);
  lVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)(param_2 != 0) & (uint)lVar2;
}



/* Entry: 105ba69c0; end: 105ba69c3; -[SCFriendsFeedViewController didTapHeaderItemTitle:] */

void FUN_105ba69c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didTapOnFeedChatOptions_1125bcd68);
  return;
}



/* Entry: 105ba69c4; end: 105ba69c7; -[SCFriendsFeedViewController streakRestorePurchaseDismissedWithDidRestore:] */

void FUN_105ba69c4(void)

{
  return;
}



/* Entry: 105ba69c8; end: 105ba6cab; -[SCFriendsFeedViewController _currentFeedTableFooterView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba69c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(long *)(param_1 + _DAT_112731360) == 0xc) &&
     (lVar5 = param_1, func_0x00010be1fc80(), (int)lVar5 != 0)) {
    lVar6 = (long)_DAT_11273144c;
    lVar5 = *(long *)(param_1 + lVar6);
    if (lVar5 == 0) {
      _objc_initWeak(auStack_68,param_1);
      puVar1 = PTR_PTR_1126ae720;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105ba6cac;
      puStack_78 = &UNK_1108d98c0;
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112731454);
      *(undefined **)(param_1 + _DAT_112731454) = puVar1;
      _objc_release(uVar4);
      lVar5 = param_1;
      func_0x00010bdec2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010c0e0e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_98,auStack_68);
      lVar3 = lVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + _DAT_112731450);
      *(long *)(param_1 + _DAT_112731450) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c2bb0;
      _objc_alloc();
      func_0x00010c05da40();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar1;
      _objc_release(uVar4);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
      _objc_destroyWeak(auStack_98);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      lVar5 = *(long *)(param_1 + lVar6);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + _DAT_1127312e0);
  }
  _objc_retain(lVar5);
  lVar6 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0f0b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar2 != lVar5) {
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7e20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105ba6cac; end: 105ba6dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba6cac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731204);
    func_0x00010bf42f80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c09d480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ba6dcc; end: 105ba6e23; -[SCFriendsFeedViewController _currentShouldShowLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105ba6dcc(ulong param_1)

{
  ulong uVar1;
  int *piVar2;
  
  if ((*(long *)(param_1 + (long)_DAT_112731360) == 0xc) &&
     (uVar1 = param_1, func_0x00010be1fc80(), (uVar1 & 1) != 0)) {
    piVar2 = (int *)&DAT_112731488;
  }
  else {
    piVar2 = (int *)&DAT_112731478;
  }
  return *(undefined1 *)(param_1 + (long)*piVar2);
}



/* Entry: 105ba6e24; end: 105ba6f6f; -[SCFriendsFeedViewController currentVisibleFriendCells] */

void FUN_105ba6e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c0b8620(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108d9b40,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ba6f70; end: 105ba6fcf; -[SCFriendsFeedViewController friendsFeedPullToRefreshObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba6f70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731194);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108d9930);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ba6fd0; end: 105ba70e3;  */

void FUN_105ba6fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bf6e0(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ba70e4; end: 105ba711f;  */

void FUN_105ba70e4(void)

{
  return;
}



/* Entry: 105ba7120; end: 105ba7137; -[SCFriendsFeedViewController friendsFeedVisibleCellsIndicesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273121c),PTR_s_compactMap__1125ae648,
             &PTR___NSConcreteGlobalBlock_1108d9a90);
  return;
}



/* Entry: 105ba7138; end: 105ba7277;  */

undefined * FUN_105ba7138(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  func_0x00010bf344c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfec9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfec9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar7 = (undefined *)0x0;
    if ((lVar3 != 0) && (lVar4 != 0)) {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010c0f7de0(lVar5);
  return (undefined *)(ulong)(0.0 < param_1);
}



/* Entry: 105ba7278; end: 105ba7297;  */

bool FUN_105ba7278(double param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0f7de0(param_3);
  return 0.0 < param_1;
}



/* Entry: 105ba7298; end: 105ba73b7; -[SCFriendsFeedViewController _updateFriendsFeedVisibleCellsWithIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7298(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112731204);
  _objc_retain(uVar5);
  lVar2 = lVar1;
  func_0x00010c29fc60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105ba73b8;
  puStack_68 = &UNK_1108d9af0;
  uStack_60 = uVar5;
  lStack_58 = lVar1;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(lVar1);
  _objc_retain(uVar5);
  lVar3 = lVar2;
  func_0x00010bd86420(lVar2,&puStack_80);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c2c90;
  _objc_alloc(PTR_PTR_1126c2c90);
  func_0x00010bffd360();
  func_0x00010be07c00(param_1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ba73b8; end: 105ba74e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba73b8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105ba74e8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    lVar2 = lVar1;
    func_0x00010bf33f20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecb00(uVar5);
    func_0x00010c0df780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x38) == '\x01') {
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bfecfa0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000105b901b8();
      _objc_release(uVar5);
      uVar5 = param_1;
    }
    puVar4 = PTR_PTR_1126c2c88;
    _objc_alloc(PTR_PTR_1126c2c88);
    func_0x00010c061e20(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ba74e8; end: 105ba758b;  */

void FUN_105ba74e8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126c2c40;
  _objc_retain();
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126c29a8;
  _objc_retain(uVar3);
  _objc_opt_class(puVar1);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ba758c; end: 105ba759b; -[SCFriendsFeedViewController _emitFriendsFeedCellVisibilityEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba758c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273121c),PTR_s_next__112614028);
  return;
}



/* Entry: 105ba759c; end: 105ba7657; -[SCFriendsFeedViewController _handleHasCustomAppTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba759c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_112731180) == '\x01') {
    func_0x00010bf13c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    *(bool *)(param_1 + _DAT_11273148c) = param_3 != 0;
    uVar2 = 0x29;
    if (param_3 == 0) {
      uVar2 = 0xd6;
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730fbc);
    func_0x00010c0841c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105ba7658; end: 105ba76d7; -[SCFriendsFeedViewController _updateBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba7658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731484);
  *(undefined8 *)(param_1 + _DAT_112731484) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731384);
  func_0x00010bf31de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ba76d8; end: 105ba774f; -[SCFriendsFeedViewController _updatePullToRefreshView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ba76d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + _DAT_11273134c) != 0) &&
     (lVar2 = param_1, func_0x00010c0834c0(), (int)lVar2 != 0)) {
    lVar2 = (long)_DAT_112731350;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731354);
    *(undefined8 *)(param_1 + _DAT_112731354) = 0;
    _objc_release(uVar1);
    func_0x00010be84800(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ba7750; end: 105ba78a3; -[SCFriendsFeedViewController _snapshotView:] */

void FUN_105ba7750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010bf20c00();
  _CGRectIsEmpty();
  if ((uVar1 & 1) == 0) {
    func_0x00010c08cdc0(param_7);
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010bf20c00(param_7);
    func_0x00010c0469e0(param_3,param_4,puVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105ba783c;
    puStack_40 = &UNK_11086bc40;
    _objc_retain(param_7);
    puVar3 = puVar2;
    uStack_38 = param_7;
    func_0x00010bfe91c0(puVar2,param_6,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(puVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


