/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105af9424; end: 105af959f; -[SCDiscoverFeedViewController _announceFeedPageViewEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9424(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar4 = (long)_DAT_11272f89c;
  if (*(char *)(param_1 + lVar4) == '\x01') {
    lVar3 = param_1;
    func_0x00010c11d8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11272f8cc);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11272f8c0);
    lVar3 = (long)_DAT_11272f830;
    uVar7 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + _DAT_11272f8cc) = 0;
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_78,auStack_58);
    _objc_retain(lVar2);
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    uStack_60 = uVar7;
    func_0x00010bfcac20(param_1);
    *(undefined1 *)(param_1 + lVar4) = 0;
    *(undefined8 *)(param_1 + lVar3) = 0;
    *(undefined1 *)(param_1 + _DAT_11272f8c8) = 1;
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11272f890));
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 105af95a0; end: 105af9697;  */

void FUN_105af95a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bed3140(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105af9698; end: 105af987b; -[SCDiscoverFeedViewController _updateAndRetrieveFeedPageViewSupplementaryDictAndAnnounce:visibleStoriesWithThumbnailBySection:uniqueMyStoriesVisible:uniqueMyStoriesVisibleWithThumbnailVisible:visibleSpinnersCounts:visibleSpinnersOnLeaveBySection:sectionConfigurations:entryType:pageOpenTimestampMs:firstTopBarInteractionTsMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9698(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010c28b780(0,param_3);
  lVar1 = param_3;
  func_0x00010bfc5700();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_3);
  uVar2 = *(undefined8 *)(param_3 + _DAT_11272f78c);
  _objc_copyWeak(auStack_98,auStack_78);
  _objc_retain(lVar1);
  uStack_90 = param_12;
  uStack_88 = param_1;
  uStack_80 = param_2;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105af987c; end: 105af991b;  */

void FUN_105af987c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xffffffffffffffff;
  func_0x000107cb630c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      0xffffffffffffffff,0x13,0,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc00(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105af991c; end: 105af9a4f; -[SCDiscoverFeedViewController _announceEventOnPerformerWithEventName:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af991c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    puVar1 = param_4;
    func_0x00010c0d3c80();
  }
  lVar2 = param_1;
  func_0x00010bf5f840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0 && lVar2 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e5f1f8);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f788);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf7dbc0(uVar4,param_2,param_3,param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105af9a50; end: 105af9bcf; -[SCDiscoverFeedViewController _feedPageEntryTypeFromAction:sourcePage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105af9a50(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + _DAT_11272f8cc);
  if (*(long *)(param_1 + _DAT_11272f8cc) == 0) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,0x93);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126afdd8;
      func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,0x67);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0720c0(param_4,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126afdd8;
        func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,0x1f);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010c0720c0(param_4,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          puVar1 = PTR_PTR_1126afdd8;
          func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,0x13c);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          func_0x00010c0720c0(param_4,param_2,puVar1);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            lVar3 = 0;
            goto LAB_105af9b0c;
          }
          lVar4 = 0x16;
          if (param_3 != 3) {
            lVar4 = 0;
          }
          lVar3 = 0x1b;
        }
        else {
          lVar4 = 0x14;
          if (param_3 != 2) {
            lVar4 = 0;
          }
          lVar3 = 0x19;
        }
        if (param_3 != 5) {
          lVar3 = lVar4;
        }
        goto LAB_105af9b0c;
      }
      lVar3 = 0x18;
    }
    else {
      lVar3 = 0x17;
    }
    if (param_3 != 5) {
      lVar3 = 0;
    }
  }
LAB_105af9b0c:
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 105af9bd0; end: 105af9d5f; -[SCDiscoverFeedViewController _subscribeToHeaderButtonEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9bd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + _DAT_11272f6e4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfdf340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfdf1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0e0ec0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105af9d60; end: 105af9ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9d60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11272f830;
    dVar3 = *(double *)(param_1 + lVar2);
    if (dVar3 == 0.0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(double *)(param_1 + lVar2) = dVar3 * 1000.0;
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af9ddc; end: 105af9f5b; -[SCDiscoverFeedViewController _subscribeToCreatorSubscriptionsChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9ddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar7 = (long)_DAT_11272f884;
  if (*(long *)(param_1 + lVar7) != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105af9f5c; end: 105af9fa3;  */

void FUN_105af9f5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105af9fa4; end: 105af9fd3; -[SCDiscoverFeedViewController _handleCreatorSubscriptionsUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9fa4(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11272f8a4) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be147b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fetchStoriesForFeedType_querySo_112562b88,2,
               &PTR____CFConstantStringClassReference_110ee1238);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11272f8a4) = 1;
  return;
}



/* Entry: 105af9fd4; end: 105afa16f; -[SCDiscoverFeedViewController didAutoScrollToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105af9fd4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f70c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a960();
  _objc_release(uVar1);
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2878;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daf5b8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f41858;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_60,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f78c);
  _objc_copyWeak(auStack_68,auStack_60);
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  puVar3 = puVar3 + 0x28;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105afa170; end: 105afa1af;  */

void FUN_105afa170(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105afa1b0; end: 105afa1bf; -[SCDiscoverFeedViewController updateFeedPageEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afa1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11272f8cc) = param_3;
  return;
}



/* Entry: 105afa1c0; end: 105afa20f; -[SCDiscoverFeedViewController discoverFeedSectionCreatorDidSelectTrendingTopic:] */

void FUN_105afa1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c27baa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105afa210; end: 105afa2eb; -[SCDiscoverFeedViewController discoverFeedSectionCreatorNeedsLayoutUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afa210(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f8b0);
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105afa2ac;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar2;
  _objc_retain();
  func_0x00010bf03420(0x3fd0000000000000,puVar1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(uVar2);
  return;
}



/* Entry: 105afa2ec; end: 105afa45f; -[SCDiscoverFeedViewController autoPlayCoordinator:selectCellsToPlayIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afa2ec(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_4;
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11272f734;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070b80();
  _objc_release(uVar1);
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c2328;
    func_0x00010bf714c0(PTR_PTR_1126c2328);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f320(uVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar3);
    puVar4 = param_1;
    if ((int)uVar2 == 0) {
      func_0x00010bf11a80(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf11ae0();
      _objc_retainAutoreleasedReturnValue();
    }
    param_3 = puVar4;
    uVar3 = param_4;
    func_0x00010bf662e0(param_1,param_2,puVar4,param_4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar3 = 1;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      param_3 = (undefined1 *)ppuVar5;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105afa460; end: 105afa49b; -[SCDiscoverFeedViewController debugMarkAutoPlayCellAtIndexPath:in:] */

void FUN_105afa460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105afa49c; end: 105afa76f; -[SCDiscoverFeedViewController autoPlaySelectCellsToPlayIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afa49c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined8 *puStack_340;
  double dStack_330;
  double dStack_328;
  undefined8 auStack_290 [16];
  long lStack_210;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar6 = param_7;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_7);
  dVar39 = param_4;
  func_0x00010bf4cdc0(param_7);
  uVar7 = *(undefined8 *)(param_5 + _DAT_11272f734);
  dVar31 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c2328;
  func_0x00010bf71440();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010bf1f320();
  _objc_release(puVar8);
  _objc_release(uVar7);
  dVar26 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar6);
  puVar20 = &uStack_150;
  puVar9 = puVar6;
  func_0x00010bf52a60();
  if (puVar9 == (undefined8 *)0x0) {
    puStack_158 = (undefined8 *)0x0;
  }
  else {
    puStack_158 = (undefined8 *)0x0;
    dVar26 = param_4 * 0.5;
    param_2 = param_2 + dVar26;
    lVar24 = *plStack_140;
    dVar42 = 1.79769313486232e+308;
    do {
      puVar8 = PTR_s_autoPlayViewObstructed_1125a2058;
      puVar20 = (undefined8 *)0x0;
      do {
        if (*plStack_140 != lVar24) {
          _objc_enumerationMutation(puVar6);
        }
        puVar23 = *(undefined8 **)(lStack_148 + (long)puVar20 * 8);
        puVar10 = PTR_PTR_1126c2370;
        _objc_opt_class(PTR_PTR_1126c2370);
        puVar11 = puVar23;
        _objc_opt_isKindOfClass(puVar23,puVar10);
        puVar10 = PTR_DAT_1126a5050;
        if (((ulong)puVar11 & 1) != 0) {
          dVar27 = dVar31;
          if ((int)uVar12 == 0) {
LAB_105afa658:
            func_0x00010bf345e0(puVar23);
            func_0x00010bf512a0(param_7);
            dVar45 = ABS(dVar27 - param_2);
            puVar11 = param_7;
            dVar31 = dVar27;
            func_0x00010bfecfa0();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar11;
            func_0x00010c0840e0();
            if (dVar45 <= dVar42) {
              bVar4 = ((ulong)puVar23 & 1) == 0;
              dVar42 = dVar45;
              if ((bVar4 && param_2 <= dVar27) || (!bVar4 && param_2 > dVar27)) {
                _objc_retain(puVar11);
                _objc_release(puStack_158);
                puStack_158 = puVar11;
              }
            }
          }
          else {
            _objc_retain(puVar23);
            puVar21 = puVar23;
            func_0x00010010fab4(puVar23,puVar10);
            puVar11 = puVar23;
            if ((int)puVar21 == 0) {
              puVar11 = (undefined8 *)0x0;
            }
            _objc_retain(puVar11);
            _objc_release(puVar23);
            puVar21 = puVar11;
            _objc_opt_respondsToSelector(puVar11,puVar8);
            dVar27 = dVar31;
            if ((((ulong)puVar21 & 1) == 0) ||
               (puVar21 = puVar11, func_0x00010bf11ac0(), dVar27 = dVar31, ((ulong)puVar21 & 1) == 0
               )) {
              _objc_release(puVar11);
              goto LAB_105afa658;
            }
          }
          _objc_release(puVar11);
        }
        puVar20 = (undefined8 *)((long)puVar20 + 1);
      } while (puVar9 != puVar20);
      puVar20 = &uStack_150;
      puVar9 = puVar6;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined8 *)0x0);
  }
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar20);
    puVar9 = puVar20;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(puVar20);
    dVar42 = dVar26;
    dVar32 = dVar31;
    dVar36 = param_3;
    dVar40 = dVar39;
    _CGRectGetMidY();
    dVar27 = dVar42;
    func_0x00010bf4cdc0(puVar20);
    func_0x00010bf4c7c0(puVar20);
    lVar22 = (long)_DAT_11272f734;
    uVar12 = *(undefined8 *)((long)param_7 + lVar22);
    dVar45 = dVar27;
    func_0x00010c269d40(uVar12);
    fVar25 = SUB84(dVar45,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2328;
    func_0x00010bf71500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c20(uVar12);
    _objc_release(puVar8);
    _objc_release(uVar12);
    uVar7 = *(undefined8 *)((long)param_7 + lVar22);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c2328;
    func_0x00010bf71440();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf1f320();
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_retain(puVar9);
    puVar6 = auStack_290;
    puVar23 = (undefined8 *)0x10;
    puVar11 = puVar9;
    func_0x00010bf52a60();
    lVar24 = lRam0000000000000000;
    if (puVar11 == (undefined8 *)0x0) {
      puStack_340 = (undefined8 *)0x0;
    }
    else {
      puStack_340 = (undefined8 *)0x0;
      dVar33 = (double)fVar25;
      dVar45 = 0.0;
      dStack_328 = 0.0;
      dStack_330 = 1.79769313486232e+308;
      dVar44 = dVar33;
      do {
        puVar10 = PTR_s_autoPlayViewObstructed_1125a2058;
        puVar8 = PTR_s_autoPlayDesiredSize_1125a2020;
        puVar21 = (undefined8 *)0x0;
        do {
          dVar28 = dVar45;
          dVar34 = dVar44;
          if (lRam0000000000000000 != lVar24) {
            _objc_enumerationMutation(puVar9);
            dVar28 = dVar45;
            dVar34 = dVar44;
          }
          uVar18 = *(ulong *)((long)puVar21 * 8);
          puStack_158 = puVar20;
          func_0x00010bfecfa0();
          _objc_retainAutoreleasedReturnValue();
          dVar45 = dVar28;
          dVar44 = dVar34;
          if (puStack_158 != (undefined8 *)0x0) {
            func_0x00010bfb68e0(uVar18);
            puVar16 = PTR_DAT_1126a5050;
            dVar45 = dVar28;
            dVar44 = dVar34;
            dVar46 = dVar36;
            dVar29 = dVar40;
            _objc_retain(uVar18);
            uVar13 = uVar18;
            func_0x00010010fab4(uVar18,puVar16);
            uVar3 = uVar18;
            if ((int)uVar13 == 0) {
              uVar3 = 0;
            }
            _objc_retain(uVar3);
            _objc_release(uVar18);
            uVar18 = uVar3;
            _objc_opt_respondsToSelector(uVar3,puVar8);
            dVar38 = dVar36;
            dVar43 = dVar40;
            if ((uVar18 & 1) != 0) {
              uVar18 = uVar3;
              func_0x00010bf119e0();
              dVar38 = dVar45;
              dVar43 = dVar44;
            }
            if ((((int)uVar12 == 0) ||
                (uVar18 = uVar3, _objc_opt_respondsToSelector(uVar3,puVar10), (uVar18 & 1) == 0)) ||
               (uVar18 = uVar3, func_0x00010bf11ac0(), dVar36 = dVar46, dVar40 = dVar29,
               (uVar18 & 1) == 0)) {
              dVar46 = dVar26;
              dVar35 = dVar31;
              dVar37 = param_3;
              dVar41 = dVar39;
              _CGRectIntersection();
              dVar29 = dVar28;
              _CGRectGetWidth(dVar28,dVar34,dVar38,dVar43);
              dVar30 = dVar28;
              dVar44 = dVar34;
              dVar36 = dVar38;
              dVar40 = dVar43;
              _CGRectGetHeight();
              dVar45 = dVar30;
              if ((0.0 < dVar29 * dVar30) &&
                 (dVar45 = dVar46, dVar44 = dVar35, dVar36 = dVar37, dVar40 = dVar41,
                 _CGRectIsNull(), (uVar18 & 1) == 0)) {
                dVar45 = dVar46;
                _CGRectGetWidth(dVar46,dVar35,dVar37,dVar41);
                _CGRectGetHeight();
                dVar46 = (dVar45 * dVar46) / (dVar29 * dVar30);
                dVar45 = dVar33;
                dVar44 = dVar35;
                dVar36 = dVar37;
                dVar40 = dVar41;
                if (dVar33 <= dVar46) {
                  lVar19 = (long)_DAT_11272f8c4;
                  puVar14 = param_7;
                  puVar6 = puStack_158;
                  puVar23 = puVar20;
                  func_0x00010bf11980();
                  _objc_retainAutoreleasedReturnValue();
                  dVar36 = dVar37;
                  dVar40 = dVar41;
                  if (puVar14 != (undefined8 *)0x0) {
                    iVar5 = (int)*(undefined8 *)((long)param_7 + lVar19);
                    func_0x00010bf52920();
                    dVar36 = dVar37;
                    dVar40 = dVar41;
                    if (iVar5 != 0) {
                      uVar15 = *(undefined8 *)((long)param_7 + lVar22);
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      puVar16 = PTR_PTR_1126c2328;
                      func_0x00010bf714e0(PTR_PTR_1126c2328);
                      _objc_retainAutoreleasedReturnValue();
                      uVar7 = uVar15;
                      func_0x00010bf1f320();
                      if (((int)uVar7 == 0) || (-dVar27 < dVar32)) {
                        _objc_release(puVar16);
                        _objc_release(uVar15);
                      }
                      else {
                        puVar17 = puStack_158;
                        func_0x00010c0840e0();
                        _objc_release(puVar16);
                        _objc_release(uVar15);
                        if (puVar17 == (undefined8 *)0x0) {
                          _objc_release(puVar14);
                          _objc_release(uVar3);
                          _objc_release(puVar9);
                          goto LAB_105afaca4;
                        }
                      }
                      _CGRectGetMidY(dVar28,dVar34,dVar38,dVar43);
                      dVar44 = ABS(dVar28 - dVar42);
                      puVar6 = puStack_158;
                      func_0x00010c0840e0();
                      dVar45 = 0.01;
                      dVar35 = dStack_328 + 0.01;
                      if (dVar46 <= dVar35) {
                        dVar35 = ABS(dVar44 - dStack_330);
                        dVar38 = ABS(dVar46 - dStack_328);
                        dVar45 = 1.0;
                        uVar1 = 0;
                        if (dVar35 <= 1.0) {
                          uVar1 = (uint)(dVar38 <= 0.01);
                        }
                        uVar2 = 0;
                        if (dVar44 < dStack_330) {
                          uVar2 = (uint)(dVar38 <= 0.01) & (dVar35 <= 1.0 ^ 0xffffffff);
                        }
                        if ((uVar2 == 0) &&
                           (dVar36 = dVar38, dVar40 = dStack_328,
                           (uVar1 & ((uint)(dVar42 <= dVar28) ^ (uint)puVar6)) == 0))
                        goto LAB_105afac40;
                      }
                      _objc_retain(puStack_158);
                      _objc_release(puStack_340);
                      dVar36 = dVar38;
                      dVar40 = dStack_328;
                      dStack_330 = dVar44;
                      dStack_328 = dVar46;
                      puStack_340 = puStack_158;
                    }
                  }
LAB_105afac40:
                  _objc_release(puVar14);
                  dVar44 = dVar35;
                }
              }
            }
            _objc_release(uVar3);
            _objc_release(puStack_158);
          }
          puVar21 = (undefined8 *)((long)puVar21 + 1);
        } while (puVar11 != puVar21);
        puVar6 = auStack_290;
        puVar23 = (undefined8 *)0x10;
        puVar11 = puVar9;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined8 *)0x0);
    }
    _objc_release(puVar9);
    _objc_retain(puStack_340);
    puStack_158 = puStack_340;
LAB_105afaca4:
    _objc_release(puStack_340);
    _objc_release(puVar9);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_210) {
      ___stack_chk_fail();
      _objc_retain(puVar6);
      _objc_retain(puVar23);
      uVar7 = *(undefined8 *)((long)puVar20 + (long)_DAT_11272f734);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c070b80();
      _objc_release(uVar7);
      if ((int)uVar12 == 0) {
        puStack_158 = (undefined8 *)0x0;
      }
      else {
        puVar20 = puVar23;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar20 == (undefined8 *)0x0) {
          puStack_158 = (undefined8 *)0x0;
        }
        else {
          puVar11 = puVar20;
          func_0x00010010fab4(puVar20,PTR_DAT_1126a4fe8);
          puVar9 = puVar20;
          if ((int)puVar11 == 0) {
            puVar9 = (undefined8 *)0x0;
          }
          _objc_retain(puVar9);
          puStack_158 = (undefined8 *)0x0;
          if ((int)puVar11 != 0) {
            puVar21 = puVar20;
            func_0x00010c29d560();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126c22b8;
            _objc_opt_class(PTR_PTR_1126c22b8);
            puVar14 = puVar21;
            _objc_opt_isKindOfClass(puVar21,puVar8);
            puVar11 = puVar21;
            if (((ulong)puVar14 & 1) == 0) {
              puVar11 = (undefined8 *)0x0;
            }
            _objc_retain(puVar11);
            _objc_release(puVar21);
            puVar21 = puVar11;
            func_0x00010c112fe0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
            if (puVar21 == (undefined8 *)0x0) {
              puStack_158 = (undefined8 *)0x0;
            }
            else {
              puVar11 = puVar21;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puStack_158 = (undefined8 *)0x0;
              if (puVar11 != (undefined8 *)0x0) {
                puVar14 = puVar21;
                func_0x00010beee2e0();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                puVar17 = puVar14;
                _objc_opt_isKindOfClass(puVar14,puVar8);
                puVar11 = puVar14;
                if (((ulong)puVar17 & 1) == 0) {
                  puVar11 = (undefined8 *)0x0;
                }
                _objc_retain(puVar11);
                _objc_release(puVar14);
                if (puVar11 == (undefined8 *)0x0) {
                  puStack_158 = (undefined8 *)0x0;
                }
                else {
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = PTR_PTR_1126c2098;
                  _objc_opt_class(PTR_PTR_1126c2098);
                  puVar17 = puVar14;
                  _objc_opt_isKindOfClass(puVar14,puVar8);
                  puStack_158 = puVar14;
                  if (((ulong)puVar17 & 1) == 0) {
                    puStack_158 = (undefined8 *)0x0;
                  }
                  _objc_retain(puStack_158);
                  _objc_release(puVar14);
                }
                _objc_release(puVar11);
              }
            }
            _objc_release(puVar21);
          }
          _objc_release(puVar9);
        }
        _objc_release(puVar20);
      }
      _objc_release(puVar23);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_158);
  return;
}



/* Entry: 105afa770; end: 105afad2f; -[SCDiscoverFeedViewController autoPlayWithFooterTreatmentSelectCellsToPlayIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afa770(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 *puStack_1e0;
  double dStack_1d0;
  double dStack_1c8;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar7 = param_7;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_7);
  dVar27 = param_1;
  dVar33 = param_2;
  dVar37 = param_3;
  dVar40 = param_4;
  _CGRectGetMidY();
  dVar28 = dVar27;
  func_0x00010bf4cdc0(param_7);
  func_0x00010bf4c7c0(param_7);
  lVar24 = (long)_DAT_11272f734;
  uVar8 = *(undefined8 *)(param_5 + lVar24);
  dVar29 = dVar28;
  func_0x00010c269d40(uVar8);
  fVar26 = SUB84(dVar29,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c2328;
  func_0x00010bf71500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c20(uVar8);
  _objc_release(puVar9);
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_5 + lVar24);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c2328;
  func_0x00010bf71440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bf1f320();
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_retain(puVar7);
  puVar17 = auStack_130;
  puVar20 = (undefined1 *)0x10;
  puVar11 = puVar7;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (puVar11 == (undefined1 *)0x0) {
    puStack_1e0 = (undefined1 *)0x0;
  }
  else {
    puStack_1e0 = (undefined1 *)0x0;
    dVar34 = (double)fVar26;
    dVar29 = 0.0;
    dStack_1c8 = 0.0;
    dStack_1d0 = 1.79769313486232e+308;
    dVar43 = dVar34;
    do {
      puVar5 = PTR_s_autoPlayViewObstructed_1125a2058;
      puVar9 = PTR_s_autoPlayDesiredSize_1125a2020;
      puVar23 = (undefined1 *)0x0;
      do {
        dVar30 = dVar29;
        dVar35 = dVar43;
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar7);
          dVar30 = dVar29;
          dVar35 = dVar43;
        }
        uVar21 = *(ulong *)((long)puVar23 * 8);
        puVar25 = param_7;
        func_0x00010bfecfa0();
        _objc_retainAutoreleasedReturnValue();
        dVar29 = dVar30;
        dVar43 = dVar35;
        if (puVar25 != (undefined1 *)0x0) {
          func_0x00010bfb68e0(uVar21);
          puVar15 = PTR_DAT_1126a5050;
          dVar29 = dVar30;
          dVar43 = dVar35;
          dVar44 = dVar37;
          dVar31 = dVar40;
          _objc_retain(uVar21);
          uVar12 = uVar21;
          func_0x00010010fab4(uVar21,puVar15);
          uVar3 = uVar21;
          if ((int)uVar12 == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar21);
          uVar21 = uVar3;
          _objc_opt_respondsToSelector(uVar3,puVar9);
          dVar39 = dVar37;
          dVar42 = dVar40;
          if ((uVar21 & 1) != 0) {
            uVar21 = uVar3;
            func_0x00010bf119e0();
            dVar39 = dVar29;
            dVar42 = dVar43;
          }
          if ((((int)uVar8 == 0) ||
              (uVar21 = uVar3, _objc_opt_respondsToSelector(uVar3,puVar5), (uVar21 & 1) == 0)) ||
             (uVar21 = uVar3, func_0x00010bf11ac0(), dVar37 = dVar44, dVar40 = dVar31,
             (uVar21 & 1) == 0)) {
            dVar44 = param_1;
            dVar36 = param_2;
            dVar38 = param_3;
            dVar41 = param_4;
            _CGRectIntersection();
            dVar31 = dVar30;
            _CGRectGetWidth(dVar30,dVar35,dVar39,dVar42);
            dVar32 = dVar30;
            dVar43 = dVar35;
            dVar37 = dVar39;
            dVar40 = dVar42;
            _CGRectGetHeight();
            dVar29 = dVar32;
            if ((0.0 < dVar31 * dVar32) &&
               (dVar29 = dVar44, dVar43 = dVar36, dVar37 = dVar38, dVar40 = dVar41, _CGRectIsNull(),
               (uVar21 & 1) == 0)) {
              dVar29 = dVar44;
              _CGRectGetWidth(dVar44,dVar36,dVar38,dVar41);
              _CGRectGetHeight();
              dVar44 = (dVar29 * dVar44) / (dVar31 * dVar32);
              dVar29 = dVar34;
              dVar43 = dVar36;
              dVar37 = dVar38;
              dVar40 = dVar41;
              if (dVar34 <= dVar44) {
                lVar22 = (long)_DAT_11272f8c4;
                lVar13 = param_5;
                puVar17 = puVar25;
                puVar20 = param_7;
                func_0x00010bf11980();
                _objc_retainAutoreleasedReturnValue();
                dVar37 = dVar38;
                dVar40 = dVar41;
                if (lVar13 != 0) {
                  iVar6 = (int)*(undefined8 *)(param_5 + lVar22);
                  func_0x00010bf52920();
                  dVar37 = dVar38;
                  dVar40 = dVar41;
                  if (iVar6 != 0) {
                    uVar14 = *(undefined8 *)(param_5 + lVar24);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    puVar15 = PTR_PTR_1126c2328;
                    func_0x00010bf714e0(PTR_PTR_1126c2328);
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar14;
                    func_0x00010bf1f320();
                    if (((int)uVar10 == 0) || (-dVar28 < dVar33)) {
                      _objc_release(puVar15);
                      _objc_release(uVar14);
                    }
                    else {
                      puVar16 = puVar25;
                      func_0x00010c0840e0();
                      _objc_release(puVar15);
                      _objc_release(uVar14);
                      if (puVar16 == (undefined1 *)0x0) {
                        _objc_release(lVar13);
                        _objc_release(uVar3);
                        _objc_release(puVar7);
                        goto LAB_105afaca4;
                      }
                    }
                    _CGRectGetMidY(dVar30,dVar35,dVar39,dVar42);
                    dVar43 = ABS(dVar30 - dVar27);
                    puVar17 = puVar25;
                    func_0x00010c0840e0();
                    dVar29 = 0.01;
                    dVar36 = dStack_1c8 + 0.01;
                    if (dVar44 <= dVar36) {
                      dVar36 = ABS(dVar43 - dStack_1d0);
                      dVar39 = ABS(dVar44 - dStack_1c8);
                      dVar29 = 1.0;
                      uVar1 = 0;
                      if (dVar36 <= 1.0) {
                        uVar1 = (uint)(dVar39 <= 0.01);
                      }
                      uVar2 = 0;
                      if (dVar43 < dStack_1d0) {
                        uVar2 = (uint)(dVar39 <= 0.01) & (dVar36 <= 1.0 ^ 0xffffffff);
                      }
                      if ((uVar2 == 0) &&
                         (dVar37 = dVar39, dVar40 = dStack_1c8,
                         (uVar1 & ((uint)(dVar27 <= dVar30) ^ (uint)puVar17)) == 0))
                      goto LAB_105afac40;
                    }
                    _objc_retain(puVar25);
                    _objc_release(puStack_1e0);
                    dVar37 = dVar39;
                    dVar40 = dStack_1c8;
                    dStack_1d0 = dVar43;
                    dStack_1c8 = dVar44;
                    puStack_1e0 = puVar25;
                  }
                }
LAB_105afac40:
                _objc_release(lVar13);
                dVar43 = dVar36;
              }
            }
          }
          _objc_release(uVar3);
          _objc_release(puVar25);
        }
        puVar23 = puVar23 + 1;
      } while (puVar11 != puVar23);
      puVar17 = auStack_130;
      puVar20 = (undefined1 *)0x10;
      puVar11 = puVar7;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined1 *)0x0);
  }
  _objc_release(puVar7);
  _objc_retain(puStack_1e0);
  puVar25 = puStack_1e0;
LAB_105afaca4:
  _objc_release(puStack_1e0);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    _objc_retain(puVar17);
    _objc_retain(puVar20);
    uVar10 = *(undefined8 *)(param_7 + _DAT_11272f734);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c070b80();
    _objc_release(uVar10);
    if ((int)uVar8 == 0) {
      puVar25 = (undefined1 *)0x0;
    }
    else {
      puVar7 = puVar20;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined1 *)0x0) {
        puVar25 = (undefined1 *)0x0;
      }
      else {
        puVar23 = puVar7;
        func_0x00010010fab4(puVar7,PTR_DAT_1126a4fe8);
        puVar11 = puVar7;
        if ((int)puVar23 == 0) {
          puVar11 = (undefined1 *)0x0;
        }
        _objc_retain(puVar11);
        puVar25 = (undefined1 *)0x0;
        if ((int)puVar23 != 0) {
          puVar25 = puVar7;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126c22b8;
          _objc_opt_class(PTR_PTR_1126c22b8);
          puVar16 = puVar25;
          _objc_opt_isKindOfClass(puVar25,puVar9);
          puVar23 = puVar25;
          if (((ulong)puVar16 & 1) == 0) {
            puVar23 = (undefined1 *)0x0;
          }
          _objc_retain(puVar23);
          _objc_release(puVar25);
          puVar16 = puVar23;
          func_0x00010c112fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar23);
          if (puVar16 == (undefined1 *)0x0) {
            puVar25 = (undefined1 *)0x0;
          }
          else {
            puVar23 = puVar16;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar25 = (undefined1 *)0x0;
            if (puVar23 != (undefined1 *)0x0) {
              puVar18 = puVar16;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              puVar25 = puVar18;
              _objc_opt_isKindOfClass(puVar18,puVar9);
              puVar23 = puVar18;
              if (((ulong)puVar25 & 1) == 0) {
                puVar23 = (undefined1 *)0x0;
              }
              _objc_retain(puVar23);
              _objc_release(puVar18);
              if (puVar23 == (undefined1 *)0x0) {
                puVar25 = (undefined1 *)0x0;
              }
              else {
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR_PTR_1126c2098;
                _objc_opt_class(PTR_PTR_1126c2098);
                puVar19 = puVar18;
                _objc_opt_isKindOfClass(puVar18,puVar9);
                puVar25 = puVar18;
                if (((ulong)puVar19 & 1) == 0) {
                  puVar25 = (undefined1 *)0x0;
                }
                _objc_retain(puVar25);
                _objc_release(puVar18);
              }
              _objc_release(puVar23);
            }
          }
          _objc_release(puVar16);
        }
        _objc_release(puVar11);
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar20);
    _objc_release(puVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 105afad30; end: 105afaf5f; -[SCDiscoverFeedViewController autoPlayCoordinator:storyAt:in:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afad30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f734);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c070b80();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar4 = param_5;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar5 = uVar4;
      func_0x00010010fab4(uVar4,PTR_DAT_1126a4fe8);
      uVar1 = uVar4;
      if ((int)uVar5 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      uVar10 = 0;
      if ((int)uVar5 != 0) {
        uVar5 = uVar4;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c22b8;
        _objc_opt_class(PTR_PTR_1126c22b8);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar10 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar5);
        uVar5 = uVar10;
        func_0x00010c112fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        if (uVar5 == 0) {
          uVar10 = 0;
        }
        else {
          uVar7 = uVar5;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar8 = uVar5;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            uVar10 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar6);
            uVar7 = uVar8;
            if ((uVar10 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar8);
            if (uVar7 == 0) {
              uVar10 = 0;
            }
            else {
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126c2098;
              _objc_opt_class(PTR_PTR_1126c2098);
              uVar9 = uVar8;
              _objc_opt_isKindOfClass(uVar8,puVar6);
              uVar10 = uVar8;
              if ((uVar9 & 1) == 0) {
                uVar10 = 0;
              }
              _objc_retain(uVar10);
              _objc_release(uVar8);
            }
            _objc_release(uVar7);
          }
        }
        _objc_release(uVar5);
      }
      _objc_release(uVar1);
    }
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 105afaf60; end: 105afaf8f; -[SCDiscoverFeedViewController autoPlayCoordinatorMediaPrefetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afaf60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f790);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105afaf90; end: 105afaf9f; -[SCDiscoverFeedViewController cardContainerContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afaf90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f8f4);
}



/* Entry: 105afafa0; end: 105afafdf; -[SCDiscoverFeedViewController setCardContainerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afafa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f8f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afafe0; end: 105afafff; -[SCDiscoverFeedViewController scrollingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afafe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f904);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb000; end: 105afb013; -[SCDiscoverFeedViewController setScrollingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb000(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f904,param_3);
  return;
}



/* Entry: 105afb014; end: 105afb033; -[SCDiscoverFeedViewController storiesContentViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb014(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f934);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb034; end: 105afb047; -[SCDiscoverFeedViewController setStoriesContentViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb034(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f934,param_3);
  return;
}



/* Entry: 105afb048; end: 105afb057; -[SCDiscoverFeedViewController actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb048(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f714);
}



/* Entry: 105afb058; end: 105afb097; -[SCDiscoverFeedViewController setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f714;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb098; end: 105afb0b7; -[SCDiscoverFeedViewController actionHandlerCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb098(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f794);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb0b8; end: 105afb0cb; -[SCDiscoverFeedViewController setActionHandlerCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f794,param_3);
  return;
}



/* Entry: 105afb0cc; end: 105afb0db; -[SCDiscoverFeedViewController impalaProfilePresentHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb0cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f798);
}



/* Entry: 105afb0dc; end: 105afb11b; -[SCDiscoverFeedViewController setImpalaProfilePresentHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f798;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb11c; end: 105afb13b; -[SCDiscoverFeedViewController applicationLifecycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb11c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb13c; end: 105afb14f; -[SCDiscoverFeedViewController setApplicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb13c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f840,param_3);
  return;
}



/* Entry: 105afb150; end: 105afb15f; -[SCDiscoverFeedViewController paginationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f8f0);
}



/* Entry: 105afb160; end: 105afb19f; -[SCDiscoverFeedViewController setPaginationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f8f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb1a0; end: 105afb1af; -[SCDiscoverFeedViewController networkConnectivityMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb1a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f800);
}



/* Entry: 105afb1b0; end: 105afb1ef; -[SCDiscoverFeedViewController setNetworkConnectivityMonitor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f800;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb1f0; end: 105afb1ff; -[SCDiscoverFeedViewController locationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb1f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f738);
}



/* Entry: 105afb200; end: 105afb23f; -[SCDiscoverFeedViewController setLocationProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f738;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb240; end: 105afb24f; -[SCDiscoverFeedViewController discoverFeedPageEntryActionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6c8);
}



/* Entry: 105afb250; end: 105afb25f; -[SCDiscoverFeedViewController setDiscoverFeedPageEntryActionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb250(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11272f6c8) = param_3;
  return;
}



/* Entry: 105afb260; end: 105afb27f; -[SCDiscoverFeedViewController navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb260(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f6e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb280; end: 105afb293; -[SCDiscoverFeedViewController setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb280(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f6e0,param_3);
  return;
}



/* Entry: 105afb294; end: 105afb2b3; -[SCDiscoverFeedViewController headerButtonServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb294(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f6e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb2b4; end: 105afb2c7; -[SCDiscoverFeedViewController setHeaderButtonServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f6e4,param_3);
  return;
}



/* Entry: 105afb2c8; end: 105afb2e7; -[SCDiscoverFeedViewController parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb2c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f8d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb2e8; end: 105afb307; -[SCDiscoverFeedViewController customStatusBarStyleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb2e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f8e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb308; end: 105afb31b; -[SCDiscoverFeedViewController setCustomStatusBarStyleContextController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb308(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f8e4,param_3);
  return;
}



/* Entry: 105afb31c; end: 105afb33b; -[SCDiscoverFeedViewController trendingTopicDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb31c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105afb33c; end: 105afb34f; -[SCDiscoverFeedViewController setTrendingTopicDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb33c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f938,param_3);
  return;
}



/* Entry: 105afb350; end: 105afb35f; -[SCDiscoverFeedViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb350(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6d8);
}



/* Entry: 105afb360; end: 105afb39f; -[SCDiscoverFeedViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb3a0; end: 105afb3af; -[SCDiscoverFeedViewController userPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb3a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f7dc);
}



/* Entry: 105afb3b0; end: 105afb3ef; -[SCDiscoverFeedViewController setUserPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f7dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb3f0; end: 105afb3ff; -[SCDiscoverFeedViewController networkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb3f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6d4);
}



/* Entry: 105afb400; end: 105afb43f; -[SCDiscoverFeedViewController setNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb440; end: 105afb44f; -[SCDiscoverFeedViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb440(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f788);
}



/* Entry: 105afb450; end: 105afb48f; -[SCDiscoverFeedViewController setEventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f788;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb490; end: 105afb49f; -[SCDiscoverFeedViewController queryResultController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb490(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f8ec);
}



/* Entry: 105afb4a0; end: 105afb4df; -[SCDiscoverFeedViewController setQueryResultController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f8ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb4e0; end: 105afb4ef; -[SCDiscoverFeedViewController snapTokenProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb4e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f74c);
}



/* Entry: 105afb4f0; end: 105afb52f; -[SCDiscoverFeedViewController setSnapTokenProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f74c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb530; end: 105afb53f; -[SCDiscoverFeedViewController imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f724);
}



/* Entry: 105afb540; end: 105afb57f; -[SCDiscoverFeedViewController setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f724;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb580; end: 105afb58f; -[SCDiscoverFeedViewController storiesMediaCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6f4);
}



/* Entry: 105afb590; end: 105afb5cf; -[SCDiscoverFeedViewController setStoriesMediaCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb5d0; end: 105afb5df; -[SCDiscoverFeedViewController friendStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb5d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f700);
}



/* Entry: 105afb5e0; end: 105afb61f; -[SCDiscoverFeedViewController setFriendStoriesDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f700;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb620; end: 105afb62f; -[SCDiscoverFeedViewController myStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6f0);
}



/* Entry: 105afb630; end: 105afb66f; -[SCDiscoverFeedViewController setMyStoriesDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb670; end: 105afb67f; -[SCDiscoverFeedViewController sectionExtensionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f710);
}



/* Entry: 105afb680; end: 105afb6bf; -[SCDiscoverFeedViewController setSectionExtensionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f710;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb6c0; end: 105afb6cf; -[SCDiscoverFeedViewController friendStoriesReplayManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb6c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f70c);
}



/* Entry: 105afb6d0; end: 105afb70f; -[SCDiscoverFeedViewController setFriendStoriesReplayManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f70c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb710; end: 105afb71f; -[SCDiscoverFeedViewController collapseManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f73c);
}



/* Entry: 105afb720; end: 105afb75f; -[SCDiscoverFeedViewController setCollapseManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f73c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb760; end: 105afb76f; -[SCDiscoverFeedViewController loggingEventsController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f760);
}



/* Entry: 105afb770; end: 105afb7af; -[SCDiscoverFeedViewController setLoggingEventsController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f760;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb7b0; end: 105afb7bf; -[SCDiscoverFeedViewController discoverFeedDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb7b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f768);
}



/* Entry: 105afb7c0; end: 105afb7ff; -[SCDiscoverFeedViewController setDiscoverFeedDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f768;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb800; end: 105afb80f; -[SCDiscoverFeedViewController discoverFeedDataMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f76c);
}



/* Entry: 105afb810; end: 105afb84f; -[SCDiscoverFeedViewController setDiscoverFeedDataMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f76c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb850; end: 105afb85f; -[SCDiscoverFeedViewController readReceiptCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb850(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6f8);
}



/* Entry: 105afb860; end: 105afb89f; -[SCDiscoverFeedViewController setReadReceiptCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb8a0; end: 105afb8af; -[SCDiscoverFeedViewController cachedViewStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb8a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6fc);
}



/* Entry: 105afb8b0; end: 105afb8ef; -[SCDiscoverFeedViewController setCachedViewStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb8f0; end: 105afb8ff; -[SCDiscoverFeedViewController storiesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb8f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f6e8);
}



/* Entry: 105afb900; end: 105afb93f; -[SCDiscoverFeedViewController setStoriesDataCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f6e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb940; end: 105afb94f; -[SCDiscoverFeedViewController discoverFeedPrefetchHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb940(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f71c);
}



/* Entry: 105afb950; end: 105afb98f; -[SCDiscoverFeedViewController setDiscoverFeedPrefetchHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f71c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb990; end: 105afb99f; -[SCDiscoverFeedViewController optInProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f744);
}



/* Entry: 105afb9a0; end: 105afb9df; -[SCDiscoverFeedViewController setOptInProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f744;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afb9e0; end: 105afb9ef; -[SCDiscoverFeedViewController currentPageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afb9e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f750);
}



/* Entry: 105afb9f0; end: 105afba2f; -[SCDiscoverFeedViewController setCurrentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afb9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f750;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afba30; end: 105afba3f; -[SCDiscoverFeedViewController discoverFeedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afba30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f8b0);
}



/* Entry: 105afba40; end: 105afba7f; -[SCDiscoverFeedViewController setDiscoverFeedView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afba40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f8b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105afba80; end: 105afba8f; -[SCDiscoverFeedViewController grapheneMetricsEmitter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105afba80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f758);
}


