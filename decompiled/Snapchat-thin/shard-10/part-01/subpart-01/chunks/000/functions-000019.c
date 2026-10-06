/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10798ac58; end: 10798ae03; -[SCDiscoverFeedActionSheetActionHandler _announcePlayStoryEventFromSourceView:storyDedupeFp:] */

void FUN_10798ac58(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = 0;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ea8b98;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ea8c18;
  puVar9 = *(undefined **)(param_1 + 0x18);
  puVar3 = puVar9;
  puStack_80 = puVar2;
  if (puVar9 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea8c58;
  puVar4 = param_3;
  puStack_78 = puVar3;
  if (param_3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar8,param_2,&PTR____CFConstantStringClassReference_110ea8af8,lVar1,puVar5);
  _objc_release(puVar5);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12e1c0(*(undefined8 *)(param_3 + 0x90));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bea5ca0(param_3);
  if ((uVar7 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x68);
    func_0x00010bf85d80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x68);
    func_0x00010c259740(uVar6);
    func_0x00010be7bc80(param_3,param_2,uVar8,uVar6);
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(param_3 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10798b870; end: 10798b9e3;  */

void FUN_10798b870(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c24c720(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((param_3 == 0) || ((int)uVar4 == 0)) {
    puVar2 = PTR_PTR_1126c9030;
    _objc_alloc(PTR_PTR_1126c9030);
    func_0x00010c047d00();
    puVar3 = PTR_PTR_1126b2e98;
    func_0x00010c24c3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126d5980;
    _objc_alloc(PTR_PTR_1126d5980);
    func_0x00010c047a40();
    puVar3 = PTR_PTR_1126b2e98;
    func_0x00010c24c760();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1133bb390;
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(PTR_PTR_1133bb390);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10798bf44; end: 10798c0f7; -[SCDiscoverFeedActionSheetActionHandler _exposeAdInfoScopeForActionDataModel:] */

void FUN_10798bf44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 0xa8);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar6 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c038f40(puVar1,param_2,lVar6,1);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = param_3;
  func_0x00010bf20f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bef4240(param_3);
  _objc_release(param_3);
  func_0x00010bf22a60(uVar7,param_2,uVar3,uVar4,uVar5,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa8),param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10798c6a4; end: 10798c6a7; -[SCDiscoverFeedActionSheetActionHandler didFinishDismissingShowProfile] */

void FUN_10798c6a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea5cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNeedsCustomStatusBarStyleCon_1125870d0);
  return;
}



/* Entry: 10798cbcc; end: 10798cbfb; -[SCDiscoverFeedActionSheetActionHandler adInfoScopeDidComplete:] */

void FUN_10798cbcc(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa8));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bea5cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNeedsCustomStatusBarStyleCon_1125870d0);
  return;
}



/* Entry: 10798d064; end: 10798d097;  */

void FUN_10798d064(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798d794; end: 10798d79f; -[SCDiscoverFeedActionSheetActionHandler setActionMenuPresenter:] */

void FUN_10798d794(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c8,param_3);
  return;
}



/* Entry: 10798dd44; end: 10798df53;  */

void FUN_10798dd44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(char *)(param_1 + 0x58) == '\x01') && (lVar2 = param_5, func_0x00010c08fa60(), lVar2 != 0))
  {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar1 = *(undefined1 *)(param_1 + 0x59);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0x59);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010798de50(uVar3,param_5,uVar1,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_2;
    func_0x00010798df54(param_2,param_3,*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40),param_4,*(undefined1 *)(param_1 + 0x5a),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10798e784; end: 10798e897;  */

void FUN_10798e784(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_10798dd2c;
  puStack_40 = &UNK_10798dd3c;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0bd820(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10798edf0; end: 10798ee7f;  */

void FUN_10798edf0(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c0b4ca0();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c259740();
  if (param_2 == lVar1) {
    *param_4 = 1;
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined **)(lVar1 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10798f604; end: 10798f803; -[SCDiscoverFeedCustomStoryActionHandler didRemoveCustomStoryWithPublicationId:] */

void FUN_10798f604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980(param_3);
  _objc_release(param_3);
  lVar1 = lVar6;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 8;
    func_0x000107cb4cfc(8,lVar1,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e600(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x000107bfa524(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x000108f54160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2864e0(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(lVar1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10798f914; end: 10798f9d3; -[SCDiscoverFeedExpandStoriesActionHandler initWithCollapseManager:discoverFeedEventsController:] */

undefined1 *
FUN_10798f914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8ff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107990130; end: 1079901af;  */

void FUN_107990130(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c079480(uVar2);
  func_0x00010bdd8e40(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1079907d4; end: 10799096f; -[SCDiscoverFeedOpenFriendProfileActionHandler _presentPublicProfileForUserId:dataModel:] */

void FUN_1079907d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar4 = auStack_58;
  _objc_copyWeak(auStack_60);
  _objc_retain(param_4);
  puVar5 = puVar2;
  func_0x00010c09d7c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if ((puVar5 == (undefined *)0x0) &&
     (puVar3 = puVar4, func_0x00010bf529e0(), puVar3 != (undefined1 *)0x0)) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    puVar3 = puVar4;
    func_0x00010c0dfd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7dba0(param_3);
    _objc_release(puVar3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10799106c; end: 107991123; -[SCDiscoverFeedOpenFriendProfileActionHandler friendProfileDidDismiss:withRequestedCallInChat:media:] */

undefined8
FUN_10799106c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24e0a0(uVar1,param_2,param_4,param_5,0,param_1);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 107991570; end: 10799169f;  */

void FUN_107991570(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010bf6b020(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5ed80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11f7a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00080(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0b3ae0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c084b00(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf9b960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7d6e0(lVar3,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar1,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10799177c; end: 107991783; -[SCDiscoverFeedSectionHeaderActionHandler addListener:] */

void FUN_10799177c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079925ac; end: 1079925af; -[SCDiscoverFeedSectionHeaderActionHandler pausePlayback] */

void FUN_1079925ac(void)

{
  return;
}



/* Entry: 107992704; end: 107992707; -[SCDiscoverFeedSectionHeaderActionHandler didPressBackButtonOnExpandedStoryFeedViewController:] */

void FUN_107992704(void)

{
  return;
}



/* Entry: 107992e30; end: 107992e33;  */

void FUN_107992e30(void)

{
  return;
}


