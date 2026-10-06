/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10798a594; end: 10798a6a7; -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentShowProfile:sourceView:] */

void FUN_10798a594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10798ac20; end: 10798ac57;  */

void FUN_10798ac20(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798b768; end: 10798b86f;  */

void FUN_10798b768(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_2;
  func_0x00010c08fa60();
  if ((lVar5 != 0) && (lVar5 = param_3, func_0x00010c08fa60(), lVar5 != 0)) {
    lVar5 = param_3;
    func_0x000108f51d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar2 = PTR_PTR_1126cc120;
    _objc_alloc(PTR_PTR_1126cc120);
    func_0x00010c03aea0();
    puVar3 = PTR_PTR_1126b2e98;
    func_0x00010c14bd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10798bf08; end: 10798bf43;  */

void FUN_10798bf08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be0ca80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798c6a0; end: 10798c6a3; -[SCDiscoverFeedActionSheetActionHandler didFinishDismissingPublisherProfile] */

void FUN_10798c6a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNeedsCustomStatusBarStyleCon_1125870d0);
  return;
}



/* Entry: 10798cbc8; end: 10798cbcb; -[SCDiscoverFeedActionSheetActionHandler reportAdScopeDidSubmitWithReasonId:comment:] */

void FUN_10798cbc8(void)

{
  return;
}



/* Entry: 10798cf78; end: 10798d063; -[SCDiscoverFeedActionSheetActionHandler _handleBlockActionDataModel:] */

void FUN_10798cf78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10798d77c; end: 10798d793; -[SCDiscoverFeedActionSheetActionHandler actionMenuPresenter] */

void FUN_10798d77c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10798dd2c; end: 10798dd43;  */

void FUN_10798dd2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10798e700; end: 10798e783;  */

void FUN_10798e700(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bfecde0();
    if (lVar1 != 0x7fffffffffffffff) {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined **)(lVar1 + 0x28) = puVar2;
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10798ed1c; end: 10798edef;  */

void FUN_10798ed1c(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c156060();
    lVar2 = param_2;
    func_0x00010c084680();
    if (((param_4 != 0) && (lVar2 != 0x7fffffffffffffff)) ||
       ((puVar3 = (undefined *)0x0, lVar1 != 0x7fffffffffffffff && (lVar2 != 0x7fffffffffffffff))))
    {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10798f548; end: 10798f603;  */

void FUN_10798f548(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    lVar2 = lVar1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c271ca0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23680(uVar4,param_2,lVar2,uVar3,lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x38),param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10798f90c; end: 10798f913; -[SCDiscoverFeedExpandStoriesActionHandler removeListener:] */

void FUN_10798f90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10798fd9c; end: 10799012f; -[SCDiscoverFeedFriendStoryOptInStatusHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10798fd9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_10798ff74:
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) goto LAB_1079900cc;
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c08fa60();
    if (lVar1 == 0) goto LAB_1079900cc;
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar8 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar5);
    iVar9 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c0720c0();
    if (iVar9 != 0) {
      _objc_initWeak(auStack_58,param_1);
      if (*(long *)(param_1 + 8) != 0) {
        uVar6 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar7 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar2);
        uVar5 = uVar6;
        if ((uVar7 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar6);
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        puStack_a8 = &UNK_107990170;
        puStack_a0 = &UNK_110841fb0;
        _objc_copyWeak(auStack_90,auStack_58);
        _objc_retain(uVar5);
        uStack_98 = uVar5;
        func_0x0001000d76cc("APPSTORE",&puStack_b8);
        _objc_release(uStack_98);
        _objc_destroyWeak(auStack_90);
        _objc_release(uVar5);
      }
      goto LAB_1079900bc;
    }
  }
  else {
    puVar2 = PTR_PTR_1126b4030;
    func_0x00010bf5b2c0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      puVar4 = PTR_PTR_1126b4030;
      func_0x00010bf5b2e0(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      _objc_release(puVar2);
      if ((int)uVar3 == 0) goto LAB_10798ff74;
    }
    else {
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126b4038;
    func_0x00010bf5b6e0(PTR_PTR_1126b4038);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b4040;
    _objc_opt_class(PTR_PTR_1126b4040);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar8 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar5);
    iVar9 = (int)*(undefined8 *)(param_1 + 0x10);
    uVar5 = uVar8;
    func_0x00010bfe5ec0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if (iVar9 != 0) {
      _objc_initWeak(auStack_58,param_1);
      if (*(long *)(param_1 + 8) != 0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        puStack_78 = &UNK_107990130;
        puStack_70 = &UNK_110841fb0;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar8);
        uStack_68 = uVar8;
        func_0x0001000d76cc("APPSTORE",&puStack_88);
        _objc_release(uStack_68);
        _objc_destroyWeak(auStack_60);
      }
LAB_1079900bc:
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(uVar8);
LAB_1079900cc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107990768; end: 1079907d3;  */

void FUN_107990768(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010be7de20(param_1);
  }
  else {
    func_0x00010be7dba0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107991024; end: 10799106b; -[SCDiscoverFeedOpenFriendProfileActionHandler friendActionSheetDidDismiss:] */

void FUN_107991024(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1079912e8; end: 10799156f; -[SCDiscoverFeedPostStoryActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1079912e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar6 == 0) goto LAB_107991514;
  uVar6 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d58a0;
  _objc_opt_class(PTR_PTR_1126d58a0);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar6 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    _objc_release(uVar6);
LAB_107991508:
    uVar6 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010c0723e0();
    _objc_release(uVar6);
    if ((uVar3 & 1) != 0) goto LAB_107991508;
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    _objc_retainBlock();
    lVar7 = *(long *)(param_1 + 0x10);
    uVar6 = (ulong)(lVar7 != 0);
    if (lVar7 != 0) {
      lVar4 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar4);
      uVar3 = uVar1;
      func_0x00010c2923e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010beee760(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf236c0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(lVar4);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(lVar7);
    }
    _objc_release();
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
LAB_107991514:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 107991770; end: 10799177b; +[SCDiscoverFeedSectionHeaderActionHandler announcerIdentifier] */

undefined ** FUN_107991770(void)

{
  return &PTR____CFConstantStringClassReference_110ea7798;
}



/* Entry: 1079925a4; end: 1079925ab; -[SCDiscoverFeedSectionHeaderActionHandler timeBeforeReturningToCamera] */

undefined8 FUN_1079925a4(void)

{
  return 0;
}



/* Entry: 1079926a8; end: 107992703; -[SCDiscoverFeedSectionHeaderActionHandler didDismissExpandedStoryFeedViewController:] */

void FUN_1079926a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f414b8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107992dd0; end: 107992e2f;  */

void FUN_107992dd0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa4340(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bec60c0(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


